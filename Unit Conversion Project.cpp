#include<iostream>
#include<conio.h>
using namespace std;

class input
{
  public:
        float i;

};

  class length:public input
  {
   public:
       void mm_m();
       void m_mm();
       void cm_m();
       void m_cm();
       void cm_km();
       void km_cm();
       void m_mile();
       void mile_m();
       void km_mile();
       void mile_km();
       void feet_m();
       void m_feet();
       void inch_m();
       void m_inch();
      };

class temp:public input
 {
 public:
       void cel_f();
       void f_cel();
       void cel_k();
       void k_cel();
       void f_k();
       void k_f();

  };

  class weight:public input
    {
    public:
       void milligm_gm();
       void gm_milligm();
       void gm_kg();
       void kg_gm();
       void kg_mton();
       void mton_kg();
       void pound_kg();
       void kg_pound();
       void gm_pound();
       void pound_gm();

    };

   class area :public input
   {
   public:
       void mmSq_cmSq();
       void cmSq_mmSq();
       void cmSq_mSq ();
       void mSq_cmSq ();
       void mSq_kmSq ();
       void kmSq_mSq ();
       void feetSq_mSq();
       void mSq_feetSq();
       void yardSq_mSq();
       void mSq_yardSq();
       void mileSq_kmSq();
       void kmSq_mileSq();
    };

   class vol:public input
   {
   public:
       void mL_L();
       void L_mL();
       void mmQ_cmQ();
       void cmQ_mmQ();
       void cmQ_mQ ();
       void mQ_cmQ ();
       void inchQ_mQ();
       void mQ_inchQ();
       void feetQ_mQ();
       void mQ_feetQ();
       void mQ_gallon();
       void gallon_mQ();
       void L_gallon();
       void gallon_L();

   };
   
//For Length
     void length ::mm_m()						
         {
          cout<<"\n  Enter Millimeter= ";	cin>>i;
          cout<<"\n   Meter= "<<i*.001;
          }
     void length ::m_mm()
         {
         cout<<"\n  Enter Meter= ";	cin>>i;
         cout<<"\n   Millimeter= "<<i*1000;
         }
     void length ::cm_m()
         {
          cout<<"\n  Enter Centimeter= ";	cin>>i;
          cout<<"\n   Meter= "<<i*.01;
          }
     void length ::m_cm()
        {
         cout<<"\n  Enter Meter= ";	cin>>i;
         cout<<"\n   Centimeter= "<<i*100;
         }
     void length::m_mile()
         {
         cout<<"\n  Enter Meter= ";	cin>>i;
         cout<<"\n  Mile= "<<i*.00062;
         }
     void length::mile_m()
        {
        cout<<"\n  Enter Mile= ";	cin>>i;
        cout<<"\n  Meter= "<<i*1609.344;
        }
     void length :: cm_km()
        {
         cout<<"\n  Enter Centimeter= ";	cin>>i;
         cout<<"\n  km= "<<i*0.00001;
	    }
     void length :: km_cm()
        {   cout<<"\n  Enter km= ";	 cin>>i;
           cout<<"\n   cm= "<<i*100000;
        }
    void length::feet_m()
        {
        cout<<"\n  Enter feet= ";	cin>>i;
        cout<<"\n  meter= "<<i*.3048;
        }
    void length::m_feet()
        {
        cout<<"\n  Enter meter= ";	cin>>i;
        cout<<"\n  feet= "<<i*3.28084;
        }
    void length::inch_m()
        {
        cout<<"\n  Enter inch=";	cin>>i;
        cout<<"\n  meter="<<i*.0254;
        }
    void length::m_inch()
        {
        cout<<"\n  Enter meter=";	cin>>i;
        cout<<"\n  inch="<<i*39.37008;
        }
    void length ::km_mile()
        {
        cout<<"\n  Enter kilometer=";cin>>i;
        cout<<"\n  mile="<<i*.6213712 ;
        }
    void length ::mile_km( )
        {
        cout<<"\n  Enter mile="; 	cin>>i;
        cout<<"\n  kilometer="<<i*1.60934;
        }


//For Temperature
    void temp::cel_f()						
       {
       cout<<"\n   Celsius= ";	cin>>i;
        cout<<"\n  Fahrenheit= " <<(((9*i)/5)+32);
       }
    void temp::f_cel()
       {
       cout<<"\n   Fahrenheit= ";   cin>>i;
       cout<<"\n   Celsius= "<<(((i-32)/9)*5);
        }
    void temp::cel_k()
        {
        cout<<"\n   celsius= ";cin>>i;
        cout<<"\n   kelvin= "<<i+273;
        }
    void temp::k_cel()
        {
        cout<<"\n   kelvin= ";  cin>>i;
        cout<<"\n   celsius= "<<i-273;
        }


//For Weight
    void weight::milligm_gm()
        {
        cout<<"\n   milligramm= ";cin>>i;
        cout<<"\n   gramm= "<<i*.001;
        }
    void weight::gm_milligm()
        {
        cout<<"\n   gram= "; cin>>i;
        cout<<"\n   milligramm= "<<i*1000;
        }
    void weight::pound_kg()
       {
       cout<<"\n   pound= "; cin>>i;
       cout<<"\n   kilogramm= "<<i*.45359;
       }
     void weight::gm_kg()
        { cout<<"\n   Gramm= ";cin>>i;
          cout<<"\n   killogramm= "<<i*.001;
         }
     void weight::kg_gm()
       {    cout<<"\n   killogramm= ";cin>>i;
        cout<<"\n   Gramm= "<<i*1000;
        }
	 void weight::kg_pound()
      {
      cout<<"\n   kilogramm= ";cin>>i;
      cout<<"\n   pound= "<<2.20462*i;
      }
    void weight::gm_pound()
      {
      cout<<"\n   gramm= ";  cin>>i;
      cout<<"\n   pound= "<<i*.0022;
      }
    void weight::pound_gm()
      {
      cout<<"\n   pound= "; cin>>i;
      cout<<"\n   gramm= "<<i*453.59237;
      }
    void weight::kg_mton()
      {
      cout<<"\n   kilogramm= ";cin>>i;
      cout<<"\n   matric ton= "<<i*.001;
       }
    void weight::mton_kg()
      {
     cout<<"\n   metric ton= "; cin>>i;
     cout<<"\n   kilogramm= "<<i*1000;
      }

//For Area
    void area::mmSq_cmSq()
        {
        cout<<"\n   squqre mm= ";cin>>i;
        cout<<"\n   square cm= "<<i*.01;
        }
    void area::cmSq_mmSq()
        {
        cout<<"\n   square cm= ";cin>>i;
        cout<<"\n   square mm= "<<i*100;
        }
    void area::cmSq_mSq()
        {
        cout<<"\n   square cm= ";cin>>i;
        cout<<"\n   square m= "<<i*.0001;
        }
    void area::mSq_cmSq()
        {
        cout<<"\n   square m= "; cin>>i;
        cout<<"\n   square cm= "<<i*10000;
        }
    void area::mSq_kmSq()
        {
        cout<<"\n   square m= "; cin>>i;
        cout<<"\n   square km= "<<i*.000001;
        }
    void area::kmSq_mSq()
        {
        cout<<"\n   square km= ";cin>>i;
        cout<<"\n   square m= "<<i*1000000;
        }
    void area::feetSq_mSq()
      {
      cout<<"\n   square feet= ";cin>>i;
      cout<<"\n   square m= "<<i*.0929;
      }
    void area::mSq_feetSq()
      {
      cout<<"\n   square m= ";  cin>>i;
      cout<<"\n   square feet= "<<i*10.76391;
      }
    void area::yardSq_mSq()
      {
      cout<<"\n   square yard= ";cin>>i;
      cout<<"\n   square m= "<<i*.83613;
      }
     void area::mSq_yardSq()
       {
        cout<<"\n   square m= "; cin>>i;
        cout<<"\n   square yard= "<<i*1.19599;
       }
     void area::mileSq_kmSq()
        {
        cout<<"\n   square mile= ";cin>>i;
        cout<<"\n   square km= "<<i*2.5899;
        }
     void area::kmSq_mileSq()
        {
         cout<<"\n   square km= " ;cin>>i;
          cout<<"\n   square mile= "<<i*.3861;
        }

//For Volume
     void vol::mL_L()
         {
         cout<<"\n   milli litre= ";cin>>i;
         cout<<"\n   Litre= "<<i*.001;
         }
      void vol::L_mL()
         { cout<<"\n   Litre= "; cin>>i;
           cout<<"\n   milli Litre= "<<i*1000;
         }
     void vol::cmQ_mmQ()
         {
          cout<< "\n   Cubic cm= "; cin>>i;
          cout<<"\n    Cubic mm= "<<i*1000;
          }
     void vol::mmQ_cmQ()
         {
         cout<<"\n   Cubic mm= ";   cin>>i;
         cout<<"\n   Cubic Cm= "<<i*.001;
         }
     void vol::cmQ_mQ()
        {
        cout<<"\n   Cubic cm= ";  cin>>i;
        cout<<"\n   Cubic Meter= "<<i*.000001;
        }
     void vol::mQ_cmQ()
        {
        cout<<"\n   Cubic Meter= "; cin>>i;
        cout<<"\n   Cubic Cm= "<<i*1000000;
        }
     void vol::inchQ_mQ()
       {
       cout<<"\n   Cubic Inch= ";  cin>>i;
       cout<<"\n   Cubic Meter= "<<i*.00002;
       }
     void vol::mQ_inchQ()
       {
       cout<<"\n   Cubic Meter= "; cin>>i;
       cout<<"\n   Cubic Inch= "<<i*61023.74409;
       }
     void vol::feetQ_mQ()
      {
       cout<<"\n   Cubic Feet= "; cin>>i;
       cout<<"\n   Cubic Meter= "<<i*1222 ;

      }
     void vol::mQ_feetQ()
       {
       cout<<"\n   Cubic Meter= ";cin>>i;
       cout<<"\n   Cubic Feet= "<<i*123;
       }
     void vol::mQ_gallon()
       {
       cout<<"\n   Cubic Meter= ";cin>>i;
       cout<<"\n   Gallon= "<<i*264.17205;
       }
     void vol::gallon_mQ()
       {
       cout<<"\n   Gallon= "; cin>>i;
       cout<<"\n   Cubic Meter= "<<i*.00379;
       }
     void vol::L_gallon()
        {
        cout<<"\n   Litre= ";cin>>i;
        cout<<"\n   Gallon= "<<i*.21997;
        }
    void vol::gallon_L()
        {
        cout<<"\n   Gallon= "; cin>>i;
        cout<<"\n   Litre= "<<i*4.54609;
        }


int main()
{
	system("COLOR 1F");
    length b;
    weight c;
    vol d;
    area e;
    temp f;
    int x,y;
       
       
     while(1)
    {
        
        cout<<"\t\t WELCOME TO UNIT CONVERTION \n";
        cout<<"\n    Unit TYPE: "<<"\n    -------";
        cout<<"\n  1: Length\n" << "  2: Temparature\n"<<"  3: Weight\n"<<"  4: Area\n"<<"  5: Volume\n" <<"  6: Exit\n";
        cout<<"\n\nPlease Choose Your Convertion Type:" ;
        cin>>x;
        if(x==1)
             {           

                  cout<<"\n\n Choose Your Unit Convertion:\n";

                    cout<<"\n  1 : mm-m";
                    cout<<"\n  2 : m-mm";
                    cout<<"\n  3 : cm-m";
                    cout<<"\n  4 : m-cm";
                    cout<<"\n  5 : cm_km";
                    cout<<"\n  6 : km-cm";
                    cout<<"\n  7 : m-mile";
                    cout<<"\n  8 : mile-m";
                    cout<<"\n  9 : km-mile";
                   cout<<"\n 10 : mile-km";
                   cout<<"\n 11 : feet-m";
                   cout<<"\n 12 : m-feet";
                   cout<<"\n 13 : inch-m";
                   cout<<"\n 14 : m-inch";
                   cout<<"\n 15 : Back to The Main Menu";


               while(1)
               {
                cout<<"\n\n Please Enter Your Choice= ";
               cin>>y;

                if (y==1)
                    { b.mm_m(); }
                else if(y==2)
                    { b.m_mm(); }
                else if (y==3)
                    { b.cm_m(); }
                else if (y==4)
                    { b.m_cm(); }
                else if (y==5)
                    { b.cm_km(); }
                else if (y==6)
                    {  b.km_cm(); }
                else if (y==7)
                    {  b.m_mile(); }
                else if (y==8)
                    {   b.mile_m(); }
                else if (y==9)
                     {   b.km_mile(); }
                else if (y==10)
                    {  b.mile_km(); }
                else if (y==11)
                     {  b.feet_m(); }
                else if (y==12)
                     { b.m_feet(); }
                else if (y==13)
                      { b.inch_m();}
                else if(y==14)
                    { b.m_inch();}
                else if (y==15)
                    {break;}
              }
           }
           else if(x==2)
            {   
                  cout<<"\n\n Choose Your Unit Convertion:\n";

                  cout<<"\n  1: Celsius-Fahrenheit";
                  cout<<"\n  2: Fahrenheit-Celsius";
                  cout<<"\n  3: Celsius-Kelvin";
                  cout<<"\n  4: Kelvin-Celcius";
                  cout<<"\n  5: Back to The Main Menu";
          	while(1)
          	 {
          		cout<<"\n\n Please Enter Your Choice= ";
            	cin>>y;

                if(y==1)
                   { f.cel_f(); }
                else if(y==2)
                   {f.f_cel();}
                 else if (y==3)
                   {f.cel_k();}
                else if(y==4)
                 {f.k_cel();}
                else if(y==5)
                    {break;}
             }
            }
            else if(x==3)
            {                  
             cout<<"\n\nChoose Your Unit Convertion:\n";

             cout<<"\n  1: Milligm-Gramm";
             cout<<"\n  2: Gramm-milligm";
             cout<<"\n  3: Gramm-killogram";
             cout<<"\n  4: killoGramm-Gramm";
             cout<<"\n  5: pound-killogramm";
             cout<<"\n  6: killogramm-pound";
             cout<<"\n  7: Gramm-Pound";
             cout<<"\n  8: Pound-gramm";
             cout<<"\n  9: killogramm-Metric ton";
             cout<<"\n 10: Metric ton-Killogramm";
             cout<<"\n 11: Back to The Main Menu";

           while(1)
             {
              cout<<"\n\nPlease Enter Your Choice= ";
              cin>>y;

             if (y==1)
                {c.milligm_gm();}
             else if (y==2)
                {c.gm_milligm();}
             else if (y==3)
                {c.gm_kg();}
             else if (y==4)
                {c.kg_gm();}
             else if (y==5)
                {c.pound_kg();}
             else if (y==6)
                {c.kg_pound();}
             else if (y==7)
                {c.gm_pound();}
             else if (y==8)
                {c.pound_gm();}
             else if (y==9)
                {c.kg_mton();}
             else if (y==10)
                {c.mton_kg();}
             else if (y==11)
                {break;}
        }
        }
        else if(x==4)
                {             
                cout<<"\n\nChoose Your Unit Convertion:\n";

                cout<<"\n   1: Square mm-Square cm";
                cout<<"\n   2: square cm-Square mm";
                cout<<"\n   3: square cm-square m";
                cout<<"\n   4: Square m-Square cm";
                cout<<"\n   5: Square m-Square km";
                cout<<"\n   6: Square km-Square m";
                cout<<"\n   7: Square feet-Square m";
                cout<<"\n   8: Square m-Square feet";
                cout<<"\n   9: Square Yard-Square m";
                cout<<"\n  10: Square m-Square yard";
                cout<<"\n  11: Square mile-Square km";
                cout<<"\n  12: Square km-Square mile";
                cout<<"\n  13: Back to The Main Menu";

            while(1)
            {
            cout<<"\n\nPlease Enter Your Choice= ";
              cin>>y;

                if(y==1)
                  {e.mmSq_cmSq();}
                else if(y==2)
                {e.cmSq_mmSq();}
                else if(y==3)
                {e.cmSq_mSq();}
                else if(y==4)
                {e.mSq_cmSq();}
                else if(y==5)
                {e.mSq_kmSq();}
                else if(y==6)
                {e.kmSq_mSq();}
                else if(y==7)
                {e.feetSq_mSq();}
                else if(y==8)
                {e.mSq_feetSq();}
                else if(y==9)
                {e.yardSq_mSq();}
                else if(y==10)
                {e.mSq_yardSq();}
                else if(y==11)
                {e.mileSq_kmSq();}
                else if(y==12)
                {e.kmSq_mileSq();}
                else if(y==13)
                {break;}
            }
            }
        else if(x==5)
            {           
               cout<<"\n\nChoose Your Unit Convertion:\n";

               cout<<"\n   1 : ml-Litre";
               cout<<"\n   2 : Litre-ml";
               cout<<"\n   3 : Cubic mm-Cubic cm";
               cout<<"\n   4 : Cubic cm-Cubic mm";
               cout<<"\n   5 : Cubic cm-Cubic m";
               cout<<"\n   6 : Cubic m-Cubic cm";
               cout<<"\n   7 : Cubic Inch-Cubic m";
               cout<<"\n   8 : Cubic m-Cubic Inch";
               cout<<"\n   9 : Cubic feet-Cubic m";
               cout<<"\n  10 : Cubic m-Cubic feet";
               cout<<"\n  11 : Cubic m-Gallon (uk)";
               cout<<"\n  12 : Gallon-Cubic m";
               cout<<"\n  13 : Litre-Gallon";
               cout<<"\n  14 : Gallon-Litre";
               cout<<"\n  15 : Back to The Main Menu";


            while(1)
             { cout<<"\n\nPlease Enter Your Choice= ";
              cin>>y;

                if (y==1)
                  {d.mL_L();}
             else if (y==2)
                  {d.L_mL();}
             else if (y==3)
                  {d.mmQ_cmQ();}
             else if (y==4)
                  {d.cmQ_mmQ();}
             else if (y==5)
                  {d.cmQ_mQ();}
             else if (y==6)
                  {d.mQ_cmQ();}
             else if (y==7)
                  {d.inchQ_mQ();}
             else if (y==8)
                  {d.mQ_inchQ();}
             else if (y==9)
                  {d.feetQ_mQ();}
             else if (y==10)
                  {d.mQ_feetQ();}
             else if (y==11)
                  {d.mQ_gallon();}
             else if (y==12)
                  {d.gallon_mQ();}
             else if (y==13)
                {d.L_gallon();}
             else if(y==14)
                {d.gallon_L();}
             else if(y==15)
                {break;}
            }
         }

			else if(x==6)
		    { break;}

	}

}

