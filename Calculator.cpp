#include<iostream>
#include <cstdlib>
#include<math.h>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Arith
{
public:
float x1,y1;
float add();
float sub();
float mul();
float div();
};
float Arith::add()
{
    int n,i;
    cout<<"\tEnter the Total Number you want to Sum:";
    cin>>n;
    cout<<endl;
    float a[n],ans=0;
        for(i=1;i<=n;i++)
                {
                cout<<"\tEnter the "<<i<<"NO Number:";
                cin>>a[i];
                ans=ans+a[i];
                 }
return ans;
}
float Arith::sub()
{
int n,i,x21,an1;
    cout<<"\tEnter the Total Number you want to subtract:";
    cin>>n;
    cout<<endl;
    cout<<"\tEnter the 1NO number:";
    cin>>x21;
    float a[n],ans=0;
        for(i=1;i<=n-1;i++)
                {
                cout<<"\tEnter the "<<i+1<<"NO Number:";
                cin>>a[i];
                ans=ans+a[i];
                an1=x21-ans;
                 }
return an1;
}
float Arith::mul()
{
    int n,i;
    cout<<"\tEnter the  Total Number you want to Multifly:";
    cin>>n;
     cout<<endl;
    float a[n],ans=1;
           for(i=1;i<=n;i++)
                   {
            cout<<"\tEnter the "<<i<<"NO Number:";
                 cin>>a[i];
                 ans=ans*a[i];
                   }
return ans;
}
float Arith::div()
{
cout<<"\tEnter the 1st value"<<endl;
cin>>x1;
cout<<"\tEnter the 2nd value"<<endl;
cin>>y1;
return(x1/y1);
}
class Trigo
{
public:
float n,ans,ans1;
float Sin();
float Cos();
float Tan();
float Asin();
float Acos();
float Atan();
};
float Trigo::Sin()
{
    cout<<"\tEnter the Angle:";
    cin>>n;
    cout<<endl;
    ans=sin((n*PI)/180);
    cout<<"\tsin Ans= "<<ans<<endl;
}
float Trigo::Cos()
{
    cout<<"Enter the Angle:";
    cin>>n;
    cout<<endl;
    ans=cos((n*PI)/180);
    cout<<"\tcos ans= "<<ans<<endl;
}
float Trigo::Tan()
{
    cout<<"\tEnter the Angle:";
    cin>>n;
    cout<<endl;
    ans=tan((n*PI)/180);
    cout<<"\ttan ans= "<<ans<<endl;
}
float Trigo::Asin()
{
    cout<<"\tEnter the Angle:";
    cin>>n;
    cout<<endl;
    ans1=asin(n);
    ans=(ans1*180)/PI;
    cout<<"\tsin^-1= "<<ans<<endl;
}
float Trigo::Acos()
{
    cout<<"\tEnter the Angle:";
    cin>>n;
    cout<<endl;
    ans1=acos(n);
    ans=(ans1*180)/PI;
    cout<<"\tcos^-1= "<<ans<<endl;

}
float Trigo::Atan()
{
    cout<<"\tEnter the Angle:";
    cin>>n;
    cout<<endl;
    ans1=atan(n);
    ans=(ans1*180)/PI;
    cout<<"\ttan^-1= "<<ans<<endl;
}
class Iogarithmicfunction
{
public:
float n,ans,ans1;
float Log();
float Log10();
};
float Iogarithmicfunction::Log()
{
    cout<<"\tEnter the value:";
    cin>>n;
    cout<<endl;
    ans=log(n);
    cout<<"log Ans= "<<ans<<endl;
}
float Iogarithmicfunction::Log10()
{
    cout<<"\tEnter the value:";
    cin>>n;
    cout<<endl;
    ans=log10(n);
    cout<<"\tlog10 ans= "<<ans<<endl;
}
class Powerfunction
{
public:
float n,ans,x;
float Pow();
float Sqrt();
};
float Powerfunction::Pow()
{
    cout<<"\tEnter the value of x";
    cin>>x;
    cout<<endl;
    cout<<"\tEnter the value of number";
    cin>>n;
    cout<<endl;
    ans=pow(x,n);
    cout<<"\t x^n=: "<<ans<<endl;
}
float Powerfunction::Sqrt()
{
    cout<<"\tEnter the value:";
    cin>>n;
    cout<<endl;
    ans=sqrt(n);
    cout<<"\tsqrt n=: "<<ans<<endl;
}
class complex
 {
public:
int a,b;
  void read()
          {
         cout<<"\n\n\tEnter the REAL PART : ";
         cin>>a;
         cout<<"\n\n\tEnter the IMAGINARY PART : ";
         cin>>b;
          }
  complex operator +(complex c2)
          {
         complex c3;
         c3.a=a+c2.a;
         c3.b=b+c2.b;
return c3;
 }
  complex operator -(complex c2)
          {
         complex c3;
         c3.a=a-c2.a;
         c3.b=b-c2.b;
return c3;
 }
  complex operator *(complex c2)
          {
         complex c3;
         c3.a=(a*c2.a)-(b*c2.b);
         c3.b=(b*c2.a)+(a*c2.b);
return c3;
 }
  complex operator /(complex c2)
           {
          complex c3;
          c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
          c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
return c3;
 }
  void display()
           {
          cout<<a<<"+"<<b<<"i";
           }
 };
 class matrix
    {
public :
int a5[10][10],b5[10][10],c5[10][10],d5[10][10],e5[10][10],f5[10][10],x2,y2,i1,j1;

            void transpose();
            void sum2();
            void diff();
            void multifica1();
    };

void matrix::sum2()
    {
        cout<< "\tEnter the rows:   ";
        cin>> x2;
        cout<< "\tEnter the columns:   ";
        cin>> y2;
        cout<< "\tEnter elements of first matrix:\n\n";
        for (i1=1; i1<=x2; i1++)
          {
              for ( j1=1; j1<=y2; j1++)
               {
                 cin>> a5[i1][j1];
               }
          }
       cout<< "\tEnter elements of second matrix:\n\n";
       for (i1=1; i1<=x2; i1++)
          {
            for (j1=1; j1<=y2; j1++)
               {
                 cin>> c5[i1][j1];
               }
          }
        cout<< "\tSum of Matrices 1 and 2 is\n";
        for (i1=1; i1<=x2; i1++)
          {
            for ( j1=1; j1<=y2; j1++)
              {
                e5[i1][j1]=a5[i1][j1]+c5[i1][j1];
                cout<< e5[i1][j1] << " ";
              }
             cout<<endl;
           }

    }
void matrix::diff()

    {
        cout<< "\tEnter the rows   ";
        cin>> x2;
        cout<< "\tEnter the columns   ";
        cin>> y2;
        cout<< "\tEnter elements of first matrix:\n\n";
          for (i1=1; i1<=x2; i1++)
             {
                 for ( j1=1; j1<=y2; j1++)
                    {
                       cin>> a5[i1][j1];
                    }
             }
        cout<< "\tEnter elements of second matrix:\n\n";
          for (i1=1; i1<=x2; i1++)
             {
                for (j1=1; j1<=y2; j1++)
                     {
                       cin>> c5[i1][j1];
                     }
              }
         cout<< "\tDifference of Matrices 1 and 2 (1-2) is:\n";
           for (i1=1; i1<=x2; i1++)
              {
                 for ( j1=1; j1<=y2; j1++)
                    {
                      f5[i1][j1] = a5[i1][j1]-c5[i1][j1];
                      cout<< f5[i1][j1] << " ";
                    }
            cout<<endl;
              }
    }
void matrix::transpose()
    {
        cout<< "\tEnter the rows:   ";
        cin>> x2;
        cout<< "\tEnter the columns:   ";
        cin>> y2;
        cout<< "\tEnter elements of first matrix:\n\n";
        for (i1=1; i1<=x2; i1++)
           {
              for ( j1=1; j1<=y2; j1++)
               {
                 cin>> a5[i1][j1];
               }
           }
        cout<< "\tEnter elements of second matrix:\n\n";
        for (i1=1; i1<=x2; i1++)
           {
              for (j1=1; j1<=y2; j1++)
                {
                  cin>> c5[i1][j1];
                }
           }
        cout<< "\tTranspose of the matrix is:\n";
        for ( i1=1; i1<=x2; i1++)
           {
              for ( j1=1; j1<=y2; j1++)
                 {
                   b5[i1][j1] = a5[j1][i1];
                   cout<< b5[i1][j1] << " ";
                 }
          cout<<endl;
           }
        cout<< "\tTranspose of the second matrix is:\n";
        for ( i1=1; i1<=x2; i1++)
           {
               for ( j1=1; j1<=y2; j1++)
                 {
                   d5[i1][j1] = c5[j1][i1];
                   cout<< b5[i1][j1] << " ";
                 }
         cout<<endl;
           }
    }
void matrix::multifica1()
    {
        cout<< "\tEnter the rows:   ";
        cin>> x2;
        cout<< "\tEnter the columns:   ";
        cin>> y2;
        cout<< "\tEnter elements of first matrix:\n\n";
          for (i1=1; i1<=x2; i1++)
             {
                for ( j1=1; j1<=y2; j1++)
                  {
                    cin>> a5[i1][j1];
                  }
             }
        cout<< "\tEnter elements of second matrix:\n\n";
           for (i1=1; i1<=x2; i1++)
              {
                 for (j1=1; j1<=y2; j1++)
                    {
                      cin>> c5[i1][j1];
                    }
              }
        cout<< "\tMultification of Matrices 1 and 2 is:\n";
           for (i1=1; i1<=x2; i1++)
              {
                 for ( j1=1; j1<=y2; j1++)
                    {
                      e5[i1][j1]=a5[i1][j1]*c5[i1][j1];
                      cout<< e5[i1][j1] << " ";
                    }
            cout<<endl;
              }

    }
class s_digit
{

public:
 int sum,num;
  void input();
  void calculate();
  void display();
};
void s_digit::input()
{
   cout<<"\tEnter a natural no:";
   cin>>num;
}
void s_digit::calculate()
{
int no,d;
sum=0;
no=num;
    while(no>0)
      {
        d=no%10;
        sum=sum+d;
        no=no/10;
      }
}
void s_digit::display()
{
   cout<<"\tThe given no is: "<<num;
   cout<<"\n\tSum of the digits: "<<sum;
}
class factorial
{
public:
 int f, n;
  void fact();
  void display();
};

void factorial::fact()
{
f=1;
  cout<<"\n\tEnter a Number:";
  cin>>n;
  for(int i=1;i<=n;i++)
    f=f*i;
}

void factorial::display()
{
   cout<<"\n\tFactorial of "<<n<<" is: "<<f;
}

class Factorial{
public:
 int f1,f2,f3, n,r;
  void Factn();
  void Factr();
  void Factnr();
  void display();
  void display1();
};

void Factorial::Factn()
{
f1=1;
  cout<<"\n\tEnter the value of N:";
  cin>>n;
  for(int i=1;i<=n;i++)
    f1=f1*i;
}
void Factorial::Factr()
{
f2=1;
  cout<<"\n\tEnter the value of R:";
  cin>>r;
  for(int i=1;i<=r;i++)
    f2=f2*i;
}
void Factorial::Factnr()
{
f3=1;

  for(int i=1;i<=n-r;i++)
    f3=f3*i;
}
void Factorial::display()
{
long ncr;
ncr=f1/(f2*f3);
 cout<<"\n\tnCr of "<<" is: "<<ncr<<endl;


}
void Factorial::display1()
{
long npr;
npr=f1/f3;
 cout<<"\n\tnPr of "<<" is: "<<npr<<endl;

}
class Number
{

public:
float base,height,a2,b2,angle,radius,side,length,width;
    void getNumber(void)
      {
        cout << "\tEnter base: ";
        cin  >> base;
       }
    void get1Number(void)
      {
        cout << "\tEnter height: ";
        cin  >> height;
      }
    void get2Number(void)
      {
        cout << "\tEnter a2: ";
        cin  >> a2;
      }
    void get3Number(void)
      {
        cout << "\tEnter b2: ";
        cin  >> b2;
      }
    void get4Number(void)
      {
        cout << "\tEnter angle: ";
        cin  >> angle;
      }
    void get5Number(void)
      {
        cout << "\tEnter radius: ";
        cin  >> radius;
      }
    void get6Number(void)
      {
        cout << "\tEnter side: ";
        cin  >> side;
      }
    void get7Number(void)
      {
        cout << "\tEnter length: ";
        cin  >> length;
      }
    void get8Number(void)
      {
        cout << "\tEnter width: ";
        cin  >> width;
      }
    float returnNumber(void)
      {
        return base;
      }
    float return1Number(void)
      {
         return height;
      }
    float return2Number(void)
      {
         return a2;
      }
    float return3Number(void)
      {
         return b2;
      }
    float return4Number(void)
      {
         return angle;
      }
    float return5Number(void)
      {
          return radius;
      }
    float return6Number(void)
      {
          return side;
      }
     float return7Number(void)
      {
          return length;
      }
     float return8Number(void)
      {
          return width;
      }
};

class Triangle:public Number
	{
	    public:
	     float getTriangle(void)
	      {
	        float base,Tri,height;
	        base=returnNumber();
	        height=return1Number();
	        Tri=(base*height)/2;
	        return Tri;
	      }
	};
class Rectangle:public Number
	{
	    public:
	     float getRectangle(void)
	     {
	        float length,width,Rec;
	        length=return7Number();
	        width=return8Number();
	        Rec=length*width;
	        return Rec;
	     }
	};
class Trapezoid:public Number
	{
	    public:
	     float getTrapezoid(void)
          {
	        float b2,Tra,height,a2;
	        a2=return2Number();
	        b2=return3Number();
	        height=return1Number();
	        Tra=(height*(a2+b2))/2;
	        return Tra;
	      }
	};
	class Ellipse:public Number
	{
	    public:
	     float getEllipse(void)
	      {
	        float a2,Elli,b2;
	        a2=return2Number();
	        b2=return3Number();
	        Elli=a2*b2*PI;
	        return Elli;
	      }
	};
	class Square:public Number
	{
	    public:
	     float getSquare(void)
          {
	        float side,Squa;
	        side=return6Number();
	        Squa=side*side;
	        return Squa;
	      }
	};
	class Parallelogram:public Number
	{
	    public:
	     float getParallelogram(void)
	      {
	        float base,Paral,height;
	        base=returnNumber();
	        height=return1Number();
	        Paral=(base*height);
	        return Paral;
	      }
	};
	class Circle:public Number
	{
	    public:
	     float getCircle(void)
	     {
	        float radius,Cir;
	        radius=return5Number();
	        Cir=PI*radius*radius;
	        return Cir;
	     }
	};
	class Sector:public Number
	{
	    public:
	     float getSector(void)
	     {
	        float radius,Sec,angle;
	        radius=return5Number();
	        angle=return4Number();
	        Sec=(radius*radius*angle)/2;
	        return Sec;
	     }
	};
	class Cube:public Number
	{
	    public:
	     float getCube(void)
	     {
	        float radius,Cub;
	        radius=return5Number();
	        Cub=6*radius*radius;
	        return Cub;
	     }
	};
	class Sphere:public Number
	{
	    public:
	     float getSphere(void)
	     {
	        float radius,Sph;
	        radius=return5Number();
	        Sph=4*PI*radius*radius;
	        return Sph;
	     }
	};
	class Cone:public Number
	{
	    public:
	     float getCone(void)
	     {
	        float radius,Con,height;
	        radius=return5Number();
	        a2=return2Number();
	        Con=PI*radius*a2;
	        return Con;
	     }
	};
	class Torus:public Number
	{
	    public:
	     float getTorus(void)
	     {
	        float b2,Tor,a2;
	        b2=return3Number();
	        a2=return2Number();
	        Tor=PI*PI*(b2*b2-a2*a2);
	        return Tor;
	     }
	};
class Series
{
public:
float n1,sum1,i,term1,a2,r1,d1;
  float HPseries();
  float GPseries();
  float APseries();
};
float Series::HPseries()
{
  cout<<"1+1/2+1/3+....+1/n1"<<endl;
  cout<<"\tEnter the value of n1:";
  cin>>n1;
  cout<<endl;
  sum1=0;
    for(i=1;i<=n1;i++)
      {
        term1=1/i;
        sum1=sum1+term1;
      }
  cout<<"\tthe sum of Harmonic Progression(HP) series is: "<<sum1<<endl;
}
float Series::GPseries()
{
    cout<<"\tEnter the first number of the Geometric Progression (G.P) series:";
    cin>>a2;
    cout<<endl;
    cout<<"\tEnter the total numbers of the Geometric Progression (G.P) series:";
    cin>>n1;
    cout<<endl;
    cout<<"\tEnter the common ratio of the Geometric Progression (G.P) series:";
    cin>>r1;
    cout<<endl;
    sum1=(a2*(1-pow(r1,n1-1)))/(1-r1);
    term1=a2*(1-pow(r1,n1-1));
    cout<<"\tterm1 of Geometric Progression (G.P) series: "<<term1<<endl;
    cout<<"\tsum of Geometric Progression (G.P) series: "<<sum1<<endl;
}
float Series::APseries()
{
    cout<<"\tEnter the first term value of the arithmetic progression series(A.P):";
    cin>>a2;
    cout<<endl;
    cout<<"\tEnter the total numbers of the arithmetic progression series (A.P):";
    cin>>n1;
    cout<<endl;
    cout<<"\tEnter the common difference the arithmetic progression series(A.P):";
    cin>>d1;
    cout<<endl;
    sum1=(n1*(2*a2+(n1-1)*d1))/2;
    term1=a2+(n1-1)*d1;
    cout<<"\tsum of arithmetic progression series (A.P): "<<sum1<<endl;
     for(i=a2;i<=term1;i=i+d1)
        {
          if(i!=term1)
          cout<<" + "<<i;
          else
          cout<<" = "<<sum1<<endl;
        }
}
class Average
{
public:

float add1();

};
float Average::add1()
{
    int n6,i6;
    cout<<"\tEnter the Total Number you want to average:";
    cin>>n6;
    cout<<endl;
    float a6[n6],sum6=0,average;
    cout<<"\tEnter the "<<n6<<" values"<<endl;
for(i6=1;i6<=n6;i6++)
{
      cout<<"\tEnter the "<<i6<<"NO Value:";
    cin>>a6[i6];
 sum6=sum6+a6[i6];
 average=sum6/n6;
}
cout<<"\taverage="<<average<<endl;
return average;
}
class Percentage
{
public:

float per();

};
float Percentage::per()
{

    float percentage,n7,t;
    cout<<"\tEnter the  Number:";
    cin>>n7;
    cout<<endl;
    cout<<"\tEnter the total number:";
    cin>>t;
    cout<<endl;
    percentage=(n7/t)*100;


cout<<"\tpercentagee="<<percentage <<"%"<<endl;
return percentage;
}
class Prime
{
public:

float prime();

};
float Prime::prime()
{

   int n8, i9;
  bool isPrime = true;

  cout << "\tEnter a positive integer: ";
  cin >> n8;

  for(i9 = 2; i9 <= n8 / 2; i9++)
  {
      if(n8 % i9 == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "\tThis is a prime number";
  else
      cout << "\tThis is not a prime number";

  return 0;

}

class convertor
{
    public:
    int DtoB();
    int DtoO();
    int DtoHD();
    int BtoD();
    int BtoO();
    int BtoHD();
    int OtoD();
    int OtoB();
    int OtoHD();
    int HDtoD();
    int HDtoB();
    int HDtoO();
};
int convertor::DtoB()
{
    int rem,decimal,binary=0,base=1;
	cout<<"\n\tENTER A DECIMAL NUMBER: ";
	cin>>decimal;
	while(decimal>0)
	{
		rem=decimal%2;
		binary=binary+(rem*base);
		base=base*10;
		decimal=decimal/2;
	}
	cout<<"\n\tBINARY OF GIVEN NUMBER IS: "<<binary;

}
int convertor::DtoO()
{
    int rem,decimal,octal=0,base=1;
	cout<<"\n\tENTER A DECIMAL NUMBER: ";
	cin>>decimal;
	while(decimal>0)
	{
		rem=decimal%8;
		octal=octal+(rem*base);
		base=base*10;
		decimal=decimal/8;
	}
	cout<<"\n\tOctal OF GIVEN NUMBER IS: "<<octal;

}
int convertor::DtoHD()
{
    int rem,decimal,hexadecimal=0,base=1;
	cout<<"\n\tENTER A DECIMAL NUMBER: ";
	cin>>decimal;
	while(decimal>0)
	{
		rem=decimal%16;
		hexadecimal=hexadecimal+(rem*base);
		base=base*10;
		decimal=decimal/16;
	}
	cout<<"\n\tHexadecimal OF GIVEN NUMBER IS: "<<hexadecimal;

}
int convertor::BtoD()
{
   int rem,i15=0,decimal=0,binery;
	cout<<"\n\tENTER A binery NUMBER: ";
	cin>>binery;
	while(binery!=0)
	{
		rem=binery%10;
		decimal+=rem*pow(2,i15);
		binery=binery/10;
		i15++;
	}
	cout<<"\n\tdecimal OF GIVEN NUMBER IS: "<<decimal;


}
int convertor::BtoO()
{
    int rem,i15=0,octal=0,binery;
	cout<<"\n\tENTER A binery NUMBER: ";
	cin>>binery;
	while(binery!=0)
	{
		rem=binery%8;
		octal+=rem*pow(2,i15);
		binery=binery/8;
		i15++;
	}
	cout<<"\n\toctal OF GIVEN NUMBER IS: "<<octal;


}
int convertor::BtoHD()
{

 int rem,i15=0,hexadecimal=0,binery;
	cout<<"\n\tENTER A binery NUMBER: ";
	cin>>binery;
	while(binery!=0)
	{
		rem=binery%16;
		binery+=rem*pow(2,i15);
		binery=binery/16;
		i15++;
	}
	cout<<"\n\thexadecimal OF GIVEN NUMBER IS: "<<hexadecimal;


}
int convertor::OtoD()
{

	 int rem,i15=0,octal,decimal=0;
	cout<<"\n\tENTER A octal NUMBER: ";
	cin>>octal;
	while(octal!=0)
	{
		rem=octal%10;
		decimal+=rem*pow(8,i15);
		octal=octal/10;
		i15++;
	}
	cout<<"\n\tdecimal OF GIVEN NUMBER IS: "<<decimal;

}
int convertor::OtoB()
{
   int rem,i15=0,octal,binery=0;
	cout<<"\n\tENTER A octal NUMBER: ";
	cin>>octal;
	while(octal!=0)
	{
		rem=octal%2;
		binery+=rem*pow(8,i15);
		octal=octal/2;
		i15++;
	}
	cout<<"\n\tbinery OF GIVEN NUMBER IS: "<<binery;

}
int convertor::OtoHD()
{

int rem,i15=0,octal,hexadecimal=0;
	cout<<"\n\tENTER A octal NUMBER: ";
	cin>>octal;
	while(octal!=0)
	{
		rem=octal%16;
		hexadecimal+=rem*pow(8,i15);
		octal=octal/16;
		i15++;
	}
	cout<<"\n\thexadecimal OF GIVEN NUMBER IS: "<<hexadecimal;

}
int convertor::HDtoD()
{
    int rem,i15=0,decimal=0,hexadecimal;
	cout<<"\n\tENTER A hexadecimal NUMBER: ";
	cin>>hexadecimal;
	while(hexadecimal!=0)
	{
		rem=hexadecimal%10;
		decimal+=rem*pow(16,i15);
		hexadecimal=hexadecimal/10;
		i15++;
	}
	cout<<"\n\tdecimal OF GIVEN NUMBER IS: "<<decimal;

}
int convertor::HDtoO()
{
   int rem,i15=0,octal=0,hexadecimal;
	cout<<"\n\tENTER A hexadecimal NUMBER: ";
	cin>>hexadecimal;
	while(hexadecimal!=0)
	{
		rem=hexadecimal%8;
		octal+=rem*pow(16,i15);
		hexadecimal=hexadecimal/8;
		i15++;
	}
	cout<<"\n\toctal OF GIVEN NUMBER IS: "<<octal;

}
int convertor::HDtoB()
{
    int rem,i15=0,binery=0,hexadecimal;
	cout<<"\n\tENTER A hexadecimal NUMBER: ";
	cin>>hexadecimal;
	while(hexadecimal!=0)
	{
		rem=hexadecimal%2;
		binery+=rem*pow(16,i15);
		hexadecimal=hexadecimal/2;
		i15++;
	}
	cout<<"\n\tBinery OF GIVEN NUMBER IS: "<<binery;

}

int main()
{
            Arith obj;
            Trigo obj1;
            Triangle objS;
	        Rectangle objR;
	        Trapezoid ObjT;
	        Ellipse objE;
	        Square objSQ;
	        Parallelogram objP;
	        Circle objC;
	        Sector objSE;
	        Cube objCU;
	        Sphere objSP;
	        Cone objCON;
	        Torus objTO;
            Iogarithmicfunction obj2;
             Powerfunction obj3;
            matrix my;
           factorial ob;
           Factorial ob1;
           s_digit obj4;
            Average av;
           Percentage perc1;
           Prime pric1;
           Series obj6;
           convertor obj15;

int ch,ch1,ncr,npr;
char ch2;
float a,s,m,d,e,Tri,Tor,Con,Sph,Cub,Sec,Cir,Paral,Squa,Elli,Tra,Rec;;
complex c1,c2,c3;
int choice,cont;
int input;
while(1)
{

 cout<<"\n\t 1 : Arithmetic Operations \n";
 cout<<"\t 2 : Trigonometric Functions \n";
 cout<<"\t 3 : Logarithmic Functions \n";
 cout<<"\t 4 : Power Functions \n";
 cout<<"\t 5 : complex number\n";
 cout<<"\t 6 : matrix \n";
 cout<<"\t 7 : add digits\n";
 cout<<"\t 8 : n!\n";
 cout<<"\t 9 : ncr & npr\n";
 cout<<"\t 10 : area calculate\n";
 cout<<"\t 11 : summation different type of series\n";
 cout<<"\t 12 : average the numbers\n";
 cout<<"\t 13 : percentage the number\n";
 cout<<"\t 14 : check the prime number\n";
 cout<<"\t 15 : NUMBER SYSTERM CONVERTION\n";
 cout<<"\t 16 : Exit... \n\n";
cout<<"\tenter the choice:";
cin>>ch1;
switch(ch1)
{
case 1:
while(1)
    {
cout<<"\t1:Addition"<<endl;
cout<<"\t2:Subtraction"<<endl;
cout<<"\t3:Multiply"<<endl;
cout<<"\t4:Division"<<endl;
cout<<"\t5:Back"<<endl;
cout<<"\t6:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 a=obj.add();
cout<<"\tAddtion Result="<<a<<endl;
break;
case 2:
                 s=obj.sub();
cout<<"\tSubtract Result="<<s<<endl;
break;
case 3:
m=obj.mul();
cout<<"\tMultiply Result="<<m<<endl;
break;
case 4:
d=obj.div();
cout<<"\tDivision Result="<<d<<endl;
break;
case 5:
{
    main();
    break;
}
case 6:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }
    break;
    case 2:
    while(1)
    {
cout<<"\t1:sin"<<endl;
cout<<"\t2:cos"<<endl;
cout<<"\t3:tan"<<endl;
cout<<"\t4:sin^-1"<<endl;
cout<<"\t5:cos^-1"<<endl;
cout<<"\t6:tan^-1"<<endl;
cout<<"\t7:Back"<<endl;
cout<<"\t8:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 obj1.Sin();
break;
case 2:
                 obj1.Cos();
break;
case 3:
                 obj1.Tan();
break;
case 4:
                 obj1.Asin();
break;
case 5:
                 obj1.Acos();
break;
case 6:
                 obj1.Atan();
break;
case 7:
{
    main();
    break;
}
case 8:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }
break;
case 3:
while(1)
    {
cout<<"\t1:log"<<endl;
cout<<"\t2:log10"<<endl;
cout<<"\t3:Back"<<endl;
cout<<"\t4:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 obj2.Log();
break;
case 2:
                 obj2.Log10();
break;
case 3:
{
    main();
    break;
}
case 4:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }
break;
case 4:
while(1)
    {
cout<<"\t1:pow()"<<endl;
cout<<"\t2:sqrt()"<<endl;
cout<<"\t3:Back"<<endl;
cout<<"\t4:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 obj3.Pow();
break;
case 2:
                 obj3.Sqrt();
break;
case 3:
{
    main();
    break;
}
case 4:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
break;
    }

case 5:
while(1)
 {
cout<<"\n\n\tCOMPLEX NUMBERS";
cout<<"\n\n\t1.ADDITION";
cout<<"\n\n\t2.SUBTRACTION";
cout<<"\n\n\t3.MULTIPLICATION";
cout<<"\n\n\t4.DIVISION";
cout<<"\n\n\t5.Back";
cout<<"\n\n\t6.Exit";
cout<<"\n\n\tEnter your choice : ";
cin>>choice;
if(choice==1||choice==2||choice==3||choice==4)
 {
cout<<"\n\n\tEnter the First Complex Number:";
c1.read();
cout<<"\n\n\tEnter the Second Complex Number:";
c2.read();
 }
switch(choice)
 {
case 1     :
c3=c1+c2;
cout<<"\n\n\tSUM = ";
c3.display();
break;
case 2     :
c3=c1-c2;
cout<<"\n\n\tSubtract = ";
c3.display();
break;
case 3 :
c3=c1*c2;
cout<<"\n\n\tMultiplication = ";
c3.display();
break;
case 4     :
c3=c1/c2;
cout<<"\n\n\tDivision = ";
c3.display();
break;
case 5:
{
    cout<<"\n\n\tBack";
    main();
    break;
}
    case 6:
    exit(0);
    break;
default:
cout<<"\n\n\tUndefined Choice";
break;
 }
}
break;
case 6:
while(1)
         {
cout<<" \t\tMatrix:\n";
cout<<" \t1. Sum of 1st and 2nd matrix\n" ;
cout<<" \t2. Difference of 1st and 2nd matrix\n";
cout<<" \t3. Transpose of both 1st and 2nd matrix\n";
cout<<" \t4. multiflication of 1st and 2nd matrix\n";
cout<<" \t5. Back\n";
cout<<" \t6. Exit\n";
cout<<" \t   Enter your choice:";
cin>> input;
switch (input)
        {
case 1:
my.sum2();
break;

case 2:
my.diff();
break;

case 3:
my.transpose();
break;
case 4:
my.multifica1();
break;
case 5:
main();
break;
case 6:
exit(0);
break;

        }

        }
cout<< "\n";

return 0;
break;
case 7:
obj4.input();
obj4.calculate();
obj4.display();
return 0;
break;
case 8:
ob.fact();
ob.display();
getch();
break;
case 9:
while(1)
{
   cout<<"\n\t1.nCr";
  cout<<"\n\t2.nPr";
  cout<<"\n\t3.BACK";
  cout<<"\n\t4.EXIT";
  cout<<"\n\tEnter the choice: ";
  cin>>ch1;
  cout<<endl;
  switch(ch1)
  {
    case 1:
    ob1.Factn();
    ob1.Factr();
    ob1.Factnr();
    ob1.display();
    break;
    case 2:
    ob1.Factn();
    ob1.Factnr();
    ob1.display1();
   break;
   case 3:
main();
   break;
   case 4:
   exit(0);
   break;
   default:
   cout<<"\tInvalid choice\n";
  }

}
getch();
break;
case 10:
while(1)
    {
cout<<"\t1:triangle"<<endl;
cout<<"\t2:rectangle"<<endl;
cout<<"\t3:trapezoid"<<endl;
cout<<"\t4:ellipse"<<endl;
cout<<"\t5:square"<<endl;
cout<<"\t6:parallelogram"<<endl;
cout<<"\t7:circle"<<endl;
cout<<"\t8:sector"<<endl;
cout<<"\t9:cube"<<endl;
cout<<"\t10:sphere"<<endl;
cout<<"\t11:cone"<<endl;
cout<<"\t12:torus"<<endl;
cout<<"\t13:Back"<<endl;
cout<<"\t14:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
 case 1:
	           objS.getNumber();
	           objS.get1Number();
	        Tri =objS.getTriangle();
	        cout << "\n\tTriangle of area = "<< Tri  << endl;
	        break;
            case 2:
	           objR.get7Number();
	           objR.get8Number();
	        Rec =objR.getRectangle();
	        cout << "\n\tRectangle of area = "<< Rec  << endl;
	        break;
	        case 3:
	           ObjT.get1Number();
	           ObjT.get2Number();
	           ObjT.get3Number();
	        Tra =ObjT.getTrapezoid();
	        cout << "\n\tTrapezoid of area = "<< Tra  << endl;
	        break;
	        case 4:
	           objE.get2Number();
	           objE.get3Number();
	        Elli =objE.getEllipse();
	        cout << "\n\tEllipse of area = "<< Elli  << endl;
	        break;
	        case 5:
	           objSQ.get6Number();
	        Squa =objSQ.getSquare();
	        cout << "\n\tSquare of area = "<< Squa  << endl;
	        break;
	        case 6:
	           objP.getNumber();
	           objP.get1Number();
	        Paral =objP.getParallelogram();
	        cout << "\n\tParallelogram of area = "<< Paral  << endl;
	        break;
	        case 7:
	           objC.get5Number();

	        Cir =objC.getCircle();
	        cout << "\n\tCircle of area = "<< Cir  << endl;
	        break;
	        case 8:
	           objSE.get5Number();
	           objSE.get4Number();
	        Sec =objSE.getSector();
	        cout << "\n\tSector of area = "<< Sec  << endl;
	        break;
	        case 9:
	           objCU.get5Number();
	        Cub =objCU.getCube();
	        cout << "\n\tCube of area = "<< Cub  << endl;
	        break;
	        case 10:
	           objSP.get5Number();
	        Sph =objSP.getSphere();
	        cout << "\n\tSphere of area = "<< Sph  << endl;
	        break;
	        case 11:
	           objCON.get5Number();
	           objCON.get2Number();
	        Con =objCON.getCone();
	        cout << "\n\tCone of area = "<< Con  << endl;
	        break;

	        case 12:
	           objTO.get2Number();
	           objTO.get3Number();
	        Tor =objTO.getTorus();
	        cout << "\n\tTorus of area = "<< Tor  << endl;
	        break;
	        case 13:
            {
              main();
               break;
            }

case 14:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }
break;
case 11:
while(1)
    {
cout<<"\t1:Harmonic Progression(H.P)series"<<endl;
cout<<"\t2:Geometric Progression(G.P)series"<<endl;
cout<<"\t3:Arithmetic Progression(A.P)series"<<endl;
cout<<"\t4:Back"<<endl;
cout<<"\t5:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 obj6.HPseries();
break;
case 2:
                 obj6.GPseries();
break;
case 3:
                 obj6.APseries();
break;
case 4:
{
   main();
    break;
}

case 5:
{
    exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }

break;
case 12:
av.add1();
break;
case 13:
perc1.per();
break;
case 14:
pric1.prime();
break;
case 15:
while(1)
    {
cout<<"\n\t1:DECIMAL TO BINERY"<<endl;
cout<<"\t2:DECIMAL TO OCTAL"<<endl;
cout<<"\t3:DECIMAL TO HexaDecimal"<<endl;
cout<<"\t4:BINERY TO DECIMAL"<<endl;
cout<<"\t5:BINERY TO OCTAL"<<endl;
cout<<"\t6:BINERY TO HexaDecimal"<<endl;
cout<<"\t7:OCTAL TO DECIMAL"<<endl;
cout<<"\t8:OCTAL TO BINERY"<<endl;
cout<<"\t9:OCTAL TO HexaDecimal"<<endl;
cout<<"\t10:HexaDecimal TO DECIMAL"<<endl;
cout<<"\t11:HexaDecimal TO BINERY"<<endl;
cout<<"\t12:HexaDecimal TO OCTAL"<<endl;
cout<<"\t13:Back"<<endl;
cout<<"\t14:exit"<<endl;
cout<<"\tEnter your Choice:";
cin>>ch;
cout<<endl;
switch(ch)
    {
case 1:
                 obj15.DtoB();
break;
case 2:
                 obj15.DtoO();
break;
case 3:
                 obj15.DtoHD();
break;
case 4:
                 obj15.BtoD();
break;
case 5:
                 obj15.BtoO();
break;
case 6:
                 obj15.BtoHD();
break;
case 7:
                 obj15. OtoD();
break;
case 8:
                 obj15. OtoB();
break;
case 9:
                 obj15. OtoHD();
break;
case 10:
                 obj15. HDtoD();
break;
case 11:
                obj15. HDtoB();
break;
case 12:
                obj15. HDtoO();
break;
case 13:
{
   main();
    break;
}

case 14:
{
   exit(0);
    break;
}
default:
cout<<"\tInvalid choice"<<endl;

    }
    }
    break;
    case 16:
          {
    exit(0);
    break;
          }
}

}
}

