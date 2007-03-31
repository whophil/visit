package llnl.visit.plots;

import llnl.visit.AttributeSubject;
import llnl.visit.CommunicationBuffer;
import llnl.visit.Plugin;

// ****************************************************************************
// Class: KerbelAttributes
//
// Purpose:
//    This class contains the attributes for a Kerbel plot.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   Fri Nov 21 10:28:29 PDT 2003
//
// Modifications:
//   
// ****************************************************************************

public class KerbelAttributes extends AttributeSubject implements Plugin
{
    public KerbelAttributes()
    {
        super(3);

        Center = new float[3];
        Center[0] = 0f;
        Center[1] = 0f;
        Center[2] = 0f;
        Radius = 1f;
        filename = new String("save.xml");
    }

    public KerbelAttributes(KerbelAttributes obj)
    {
        super(3);

        int i;

        Center = new float[3];
        Center[0] = obj.Center[0];
        Center[1] = obj.Center[1];
        Center[2] = obj.Center[2];

        Radius = obj.Radius;
        filename = new String(obj.filename);

        SelectAll();
    }

    public boolean equals(KerbelAttributes obj)
    {
        int i;

        // Compare the Center arrays.
        boolean Center_equal = true;
        for(i = 0; i < 3 && Center_equal; ++i)
            Center_equal = (Center[i] == obj.Center[i]);

        // Create the return value
        return (Center_equal &&
                (Radius == obj.Radius) &&
                (filename == obj.filename));
    }

    public String GetName() { return "Kerbel"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetCenter(float[] Center_)
    {
        Center[0] = Center_[0];
        Center[1] = Center_[1];
        Center[2] = Center_[2];
        Select(0);
    }

    public void SetCenter(float e0, float e1, float e2)
    {
        Center[0] = e0;
        Center[1] = e1;
        Center[2] = e2;
        Select(0);
    }

    public void SetRadius(float Radius_)
    {
        Radius = Radius_;
        Select(1);
    }

    public void SetFilename(String filename_)
    {
        filename = filename_;
        Select(2);
    }

    // Property getting methods
    public float[] GetCenter() { return Center; }
    public float   GetRadius() { return Radius; }
    public String  GetFilename() { return filename; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteFloatArray(Center);
        if(WriteSelect(1, buf))
            buf.WriteFloat(Radius);
        if(WriteSelect(2, buf))
            buf.WriteString(filename);
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetCenter(buf.ReadFloatArray());
                break;
            case 1:
                SetRadius(buf.ReadFloat());
                break;
            case 2:
                SetFilename(buf.ReadString());
                break;
            }
        }
    }


    // Attributes
    private float[] Center;
    private float   Radius;
    private String  filename;
}

