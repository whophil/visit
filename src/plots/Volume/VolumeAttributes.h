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

#ifndef VOLUMEATTRIBUTES_H
#define VOLUMEATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>

class TransferFunctionWidget;
#include <ColorControlPointList.h>
#include <GaussianControlPointList.h>

// ****************************************************************************
// Class: VolumeAttributes
//
// Purpose:
//    This class contains the plot attributes for the volume plot.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class VolumeAttributes : public AttributeSubject
{
public:
    enum Renderer
    {
        Splatting,
        Texture3D,
        RayCasting,
        RayCastingIntegration,
        SLIVR,
        RayCastingSLIVR,
        Tuvok
    };
    enum GradientType
    {
        CenteredDifferences,
        SobelOperator
    };
    enum Scaling
    {
        Linear,
        Log,
        Skew
    };
    enum LimitsMode
    {
        OriginalData,
        CurrentPlot
    };
    enum SamplingType
    {
        KernelBased,
        Rasterization,
        Trilinear
    };
    enum OpacityModes
    {
        FreeformMode,
        GaussianMode,
        ColorTableMode
    };
    enum LowGradientLightingReduction
    {
        Off,
        Lowest,
        Lower,
        Low,
        Medium,
        High,
        Higher,
        Highest
    };

    // These constructors are for objects of this class
    VolumeAttributes();
    VolumeAttributes(const VolumeAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    VolumeAttributes(private_tmfs_t tmfs);
    VolumeAttributes(const VolumeAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~VolumeAttributes();

    virtual VolumeAttributes& operator = (const VolumeAttributes &obj);
    virtual bool operator == (const VolumeAttributes &obj) const;
    virtual bool operator != (const VolumeAttributes &obj) const;
private:
    void Init();
    void Copy(const VolumeAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectColorControlPoints();
    void SelectOpacityControlPoints();
    void SelectOpacityVariable();
    void SelectCompactVariable();
    void SelectFreeformOpacity();
    void SelectTransferFunction2DWidgets();
    void SelectMaterialProperties();

    // Property setting methods
    void SetLegendFlag(bool legendFlag_);
    void SetLightingFlag(bool lightingFlag_);
    void SetColorControlPoints(const ColorControlPointList &colorControlPoints_);
    void SetOpacityAttenuation(float opacityAttenuation_);
    void SetOpacityMode(OpacityModes opacityMode_);
    void SetOpacityControlPoints(const GaussianControlPointList &opacityControlPoints_);
    void SetResampleFlag(bool resampleFlag_);
    void SetResampleTarget(int resampleTarget_);
    void SetOpacityVariable(const std::string &opacityVariable_);
    void SetCompactVariable(const std::string &compactVariable_);
    void SetFreeformOpacity(const unsigned char *freeformOpacity_);
    void SetUseColorVarMin(bool useColorVarMin_);
    void SetColorVarMin(float colorVarMin_);
    void SetUseColorVarMax(bool useColorVarMax_);
    void SetColorVarMax(float colorVarMax_);
    void SetUseOpacityVarMin(bool useOpacityVarMin_);
    void SetOpacityVarMin(float opacityVarMin_);
    void SetUseOpacityVarMax(bool useOpacityVarMax_);
    void SetOpacityVarMax(float opacityVarMax_);
    void SetSmoothData(bool smoothData_);
    void SetSamplesPerRay(int samplesPerRay_);
    void SetRendererType(Renderer rendererType_);
    void SetGradientType(GradientType gradientType_);
    void SetNum3DSlices(int num3DSlices_);
    void SetScaling(Scaling scaling_);
    void SetSkewFactor(double skewFactor_);
    void SetLimitsMode(LimitsMode limitsMode_);
    void SetSampling(SamplingType sampling_);
    void SetRendererSamples(float rendererSamples_);
    void SetTransferFunctionDim(int transferFunctionDim_);
    void SetLowGradientLightingReduction(LowGradientLightingReduction lowGradientLightingReduction_);
    void SetLowGradientLightingClampFlag(bool lowGradientLightingClampFlag_);
    void SetLowGradientLightingClampValue(double lowGradientLightingClampValue_);
    void SetMaterialProperties(const double *materialProperties_);

    // Property getting methods
    bool                           GetLegendFlag() const;
    bool                           GetLightingFlag() const;
    const ColorControlPointList    &GetColorControlPoints() const;
          ColorControlPointList    &GetColorControlPoints();
    float                          GetOpacityAttenuation() const;
    OpacityModes                   GetOpacityMode() const;
    const GaussianControlPointList &GetOpacityControlPoints() const;
          GaussianControlPointList &GetOpacityControlPoints();
    bool                           GetResampleFlag() const;
    int                            GetResampleTarget() const;
    const std::string              &GetOpacityVariable() const;
          std::string              &GetOpacityVariable();
    const std::string              &GetCompactVariable() const;
          std::string              &GetCompactVariable();
    const unsigned char            *GetFreeformOpacity() const;
          unsigned char            *GetFreeformOpacity();
    bool                           GetUseColorVarMin() const;
    float                          GetColorVarMin() const;
    bool                           GetUseColorVarMax() const;
    float                          GetColorVarMax() const;
    bool                           GetUseOpacityVarMin() const;
    float                          GetOpacityVarMin() const;
    bool                           GetUseOpacityVarMax() const;
    float                          GetOpacityVarMax() const;
    bool                           GetSmoothData() const;
    int                            GetSamplesPerRay() const;
    Renderer                       GetRendererType() const;
    GradientType                   GetGradientType() const;
    int                            GetNum3DSlices() const;
    Scaling                        GetScaling() const;
    double                         GetSkewFactor() const;
    LimitsMode                     GetLimitsMode() const;
    SamplingType                   GetSampling() const;
    float                          GetRendererSamples() const;
    const AttributeGroupVector     &GetTransferFunction2DWidgets() const;
          AttributeGroupVector     &GetTransferFunction2DWidgets();
    int                            GetTransferFunctionDim() const;
    LowGradientLightingReduction   GetLowGradientLightingReduction() const;
    bool                           GetLowGradientLightingClampFlag() const;
    double                         GetLowGradientLightingClampValue() const;
    const double                   *GetMaterialProperties() const;
          double                   *GetMaterialProperties();

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Attributegroup convenience methods
    void AddTransferFunction2DWidgets(const TransferFunctionWidget &);
    void ClearTransferFunction2DWidgets();
    void RemoveTransferFunction2DWidgets(int i);
    int  GetNumTransferFunction2DWidgets() const;
    TransferFunctionWidget &GetTransferFunction2DWidgets(int i);
    const TransferFunctionWidget &GetTransferFunction2DWidgets(int i) const;

    TransferFunctionWidget &operator [] (int i);
    const TransferFunctionWidget &operator [] (int i) const;

    // Enum conversion functions
    static std::string Renderer_ToString(Renderer);
    static bool Renderer_FromString(const std::string &, Renderer &);
protected:
    static std::string Renderer_ToString(int);
public:
    static std::string GradientType_ToString(GradientType);
    static bool GradientType_FromString(const std::string &, GradientType &);
protected:
    static std::string GradientType_ToString(int);
public:
    static std::string Scaling_ToString(Scaling);
    static bool Scaling_FromString(const std::string &, Scaling &);
protected:
    static std::string Scaling_ToString(int);
public:
    static std::string LimitsMode_ToString(LimitsMode);
    static bool LimitsMode_FromString(const std::string &, LimitsMode &);
protected:
    static std::string LimitsMode_ToString(int);
public:
    static std::string SamplingType_ToString(SamplingType);
    static bool SamplingType_FromString(const std::string &, SamplingType &);
protected:
    static std::string SamplingType_ToString(int);
public:
    static std::string OpacityModes_ToString(OpacityModes);
    static bool OpacityModes_FromString(const std::string &, OpacityModes &);
protected:
    static std::string OpacityModes_ToString(int);
public:
    static std::string LowGradientLightingReduction_ToString(LowGradientLightingReduction);
    static bool LowGradientLightingReduction_FromString(const std::string &, LowGradientLightingReduction &);
protected:
    static std::string LowGradientLightingReduction_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    bool ChangesRequireRecalculation(const VolumeAttributes &obj) const;
    void GetTransferFunction(unsigned char *rgba) const;
    void SetDefaultColorControlPoints();
    void GetGaussianOpacities(unsigned char *alphas) const;
    void GetOpacities(unsigned char *alphas);
    void SetSmoothing(ColorControlPointList::SmoothingMethod val);
    ColorControlPointList::SmoothingMethod GetSmoothing() const;
    void SetEqualSpacingFlag(bool val);
    bool GetEqualSpacingFlag() const;
    bool AnyNonTransferFunctionMembersAreDifferent(const VolumeAttributes &) const;

    // IDs that can be used to identify fields in case statements
    enum {
        ID_legendFlag = 0,
        ID_lightingFlag,
        ID_colorControlPoints,
        ID_opacityAttenuation,
        ID_opacityMode,
        ID_opacityControlPoints,
        ID_resampleFlag,
        ID_resampleTarget,
        ID_opacityVariable,
        ID_compactVariable,
        ID_freeformOpacity,
        ID_useColorVarMin,
        ID_colorVarMin,
        ID_useColorVarMax,
        ID_colorVarMax,
        ID_useOpacityVarMin,
        ID_opacityVarMin,
        ID_useOpacityVarMax,
        ID_opacityVarMax,
        ID_smoothData,
        ID_samplesPerRay,
        ID_rendererType,
        ID_gradientType,
        ID_num3DSlices,
        ID_scaling,
        ID_skewFactor,
        ID_limitsMode,
        ID_sampling,
        ID_rendererSamples,
        ID_transferFunction2DWidgets,
        ID_transferFunctionDim,
        ID_lowGradientLightingReduction,
        ID_lowGradientLightingClampFlag,
        ID_lowGradientLightingClampValue,
        ID_materialProperties,
        ID__LAST
    };

protected:
    AttributeGroup *CreateSubAttributeGroup(int index);
private:
    bool                     legendFlag;
    bool                     lightingFlag;
    ColorControlPointList    colorControlPoints;
    float                    opacityAttenuation;
    int                      opacityMode;
    GaussianControlPointList opacityControlPoints;
    bool                     resampleFlag;
    int                      resampleTarget;
    std::string              opacityVariable;
    std::string              compactVariable;
    unsigned char            freeformOpacity[256];
    bool                     useColorVarMin;
    float                    colorVarMin;
    bool                     useColorVarMax;
    float                    colorVarMax;
    bool                     useOpacityVarMin;
    float                    opacityVarMin;
    bool                     useOpacityVarMax;
    float                    opacityVarMax;
    bool                     smoothData;
    int                      samplesPerRay;
    int                      rendererType;
    int                      gradientType;
    int                      num3DSlices;
    int                      scaling;
    double                   skewFactor;
    int                      limitsMode;
    int                      sampling;
    float                    rendererSamples;
    AttributeGroupVector     transferFunction2DWidgets;
    int                      transferFunctionDim;
    int                      lowGradientLightingReduction;
    bool                     lowGradientLightingClampFlag;
    double                   lowGradientLightingClampValue;
    double                   materialProperties[4];

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define VOLUMEATTRIBUTES_TMFS "bbafiabissUbfbfbfbfbiiiiidiifa*iibdD"

#endif
