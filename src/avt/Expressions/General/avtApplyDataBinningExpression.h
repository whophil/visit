/*****************************************************************************
*
* Copyright (c) 2000 - 2016, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

// ************************************************************************* //
//                      avtApplyDataBinningExpression.h                      //
// ************************************************************************* //

#ifndef AVT_APPLY_DATA_BINNING_EXPRESSION_H
#define AVT_APPLY_DATA_BINNING_EXPRESSION_H


#include <avtSingleInputExpressionFilter.h>

class     vtkDataArray;

class     avtDataBinning;


typedef avtDataBinning *   (*GetDataBinningCallback)(void *, const char *);


// ****************************************************************************
//  Class: avtApplyDataBinningExpression
//
//  Purpose:
//      Will retrieve a data binning and make a new expression out of
//      it.
//          
//  Programmer: Hank Childs
//  Creation:   February 18, 2006
//
//  Modifications:
//
//    Hank Childs, Sat Aug 21 14:05:14 PDT 2010
//    Rename expressions (DDFs to DataBinnings).
//
// ****************************************************************************

class EXPRESSION_API avtApplyDataBinningExpression 
    : public avtSingleInputExpressionFilter
{
  public:
                              avtApplyDataBinningExpression();
    virtual                  ~avtApplyDataBinningExpression();

    virtual const char       *GetType(void) 
                                 { return "avtApplyDataBinningExpression"; };
    virtual const char       *GetDescription(void)
                                 { return "Applying derived data function."; };

    static void               RegisterGetDataBinningCallback(GetDataBinningCallback, void *);
    virtual void              ProcessArguments(ArgsExpr*, ExprPipelineState *);

    avtContract_p 
                              ModifyContract(avtContract_p);

  protected:
    avtDataBinning           *theDataBinning;
    std::string               dbName;

    static  GetDataBinningCallback    getDataBinningCallback;
    static  void                     *getDataBinningCallbackArgs;

    virtual vtkDataArray     *DeriveVariable(vtkDataSet *, int currentDomainsIndex);
    virtual int               GetVariableDimension(void) { return 1; };
};


#endif


