// ***************************************************************************
//
// Copyright (c) 2000 - 2016, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-442911
// All rights reserved.
//
// This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
// full copyright notice is contained in the file COPYRIGHT located at the root
// of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
//
// Redistribution  and  use  in  source  and  binary  forms,  with  or  without
// modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of  source code must  retain the above  copyright notice,
//    this list of conditions and the disclaimer below.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
// LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
// DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ***************************************************************************

package llnl.visit;


// ****************************************************************************
// Class: EngineProperties
//
// Purpose:
//    This class contains properties about running engines.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class EngineProperties extends AttributeSubject
{
    private static int EngineProperties_numAdditionalAtts = 5;

    public EngineProperties()
    {
        super(EngineProperties_numAdditionalAtts);

        numNodes = -1;
        numProcessors = 1;
        numProcessorsUsingGPUs = 0;
        dynamicLoadBalancing = false;
        loadBalancingScheme = new String("");
    }

    public EngineProperties(int nMoreFields)
    {
        super(EngineProperties_numAdditionalAtts + nMoreFields);

        numNodes = -1;
        numProcessors = 1;
        numProcessorsUsingGPUs = 0;
        dynamicLoadBalancing = false;
        loadBalancingScheme = new String("");
    }

    public EngineProperties(EngineProperties obj)
    {
        super(EngineProperties_numAdditionalAtts);

        numNodes = obj.numNodes;
        numProcessors = obj.numProcessors;
        numProcessorsUsingGPUs = obj.numProcessorsUsingGPUs;
        dynamicLoadBalancing = obj.dynamicLoadBalancing;
        loadBalancingScheme = new String(obj.loadBalancingScheme);

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return EngineProperties_numAdditionalAtts;
    }

    public boolean equals(EngineProperties obj)
    {
        // Create the return value
        return ((numNodes == obj.numNodes) &&
                (numProcessors == obj.numProcessors) &&
                (numProcessorsUsingGPUs == obj.numProcessorsUsingGPUs) &&
                (dynamicLoadBalancing == obj.dynamicLoadBalancing) &&
                (loadBalancingScheme.equals(obj.loadBalancingScheme)));
    }

    // Property setting methods
    public void SetNumNodes(int numNodes_)
    {
        numNodes = numNodes_;
        Select(0);
    }

    public void SetNumProcessors(int numProcessors_)
    {
        numProcessors = numProcessors_;
        Select(1);
    }

    public void SetNumProcessorsUsingGPUs(int numProcessorsUsingGPUs_)
    {
        numProcessorsUsingGPUs = numProcessorsUsingGPUs_;
        Select(2);
    }

    public void SetDynamicLoadBalancing(boolean dynamicLoadBalancing_)
    {
        dynamicLoadBalancing = dynamicLoadBalancing_;
        Select(3);
    }

    public void SetLoadBalancingScheme(String loadBalancingScheme_)
    {
        loadBalancingScheme = loadBalancingScheme_;
        Select(4);
    }

    // Property getting methods
    public int     GetNumNodes() { return numNodes; }
    public int     GetNumProcessors() { return numProcessors; }
    public int     GetNumProcessorsUsingGPUs() { return numProcessorsUsingGPUs; }
    public boolean GetDynamicLoadBalancing() { return dynamicLoadBalancing; }
    public String  GetLoadBalancingScheme() { return loadBalancingScheme; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteInt(numNodes);
        if(WriteSelect(1, buf))
            buf.WriteInt(numProcessors);
        if(WriteSelect(2, buf))
            buf.WriteInt(numProcessorsUsingGPUs);
        if(WriteSelect(3, buf))
            buf.WriteBool(dynamicLoadBalancing);
        if(WriteSelect(4, buf))
            buf.WriteString(loadBalancingScheme);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetNumNodes(buf.ReadInt());
            break;
        case 1:
            SetNumProcessors(buf.ReadInt());
            break;
        case 2:
            SetNumProcessorsUsingGPUs(buf.ReadInt());
            break;
        case 3:
            SetDynamicLoadBalancing(buf.ReadBool());
            break;
        case 4:
            SetLoadBalancingScheme(buf.ReadString());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + intToString("numNodes", numNodes, indent) + "\n";
        str = str + intToString("numProcessors", numProcessors, indent) + "\n";
        str = str + intToString("numProcessorsUsingGPUs", numProcessorsUsingGPUs, indent) + "\n";
        str = str + boolToString("dynamicLoadBalancing", dynamicLoadBalancing, indent) + "\n";
        str = str + stringToString("loadBalancingScheme", loadBalancingScheme, indent) + "\n";
        return str;
    }


    // Attributes
    private int     numNodes;
    private int     numProcessors;
    private int     numProcessorsUsingGPUs;
    private boolean dynamicLoadBalancing;
    private String  loadBalancingScheme;
}

