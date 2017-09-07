/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:06 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t811;
  double t7906;
  double t836;
  double t7907;
  double t7927;
  double t7928;
  double t7929;
  double t7924;
  double t7925;
  double t7926;
  double t859;
  double t7908;
  double t7909;
  double t7931;
  double t7932;
  double t7933;
  double t7918;
  double t7920;
  double t7940;
  double t7941;
  double t7942;
  double t7937;
  double t7938;
  double t7939;
  double t7919;
  double t7921;
  double t7922;
  double t7944;
  double t7945;
  double t7946;
  double t7917;
  double t7967;
  double t7968;
  double t7969;
  double t7970;
  double t7971;
  double t7930;
  double t7934;
  double t7935;
  double t7936;
  double t7952;
  double t7953;
  double t7954;
  double t7955;
  double t7956;
  double t7957;
  double t7923;
  double t7973;
  double t7974;
  double t7975;
  double t7976;
  double t7977;
  double t7943;
  double t7947;
  double t7948;
  double t7949;
  double t7958;
  double t7959;
  double t7960;
  double t7961;
  double t7962;
  double t7963;
  double t7997;
  double t7998;
  double t7999;
  double t8000;
  double t8001;
  double t8003;
  double t8004;
  double t8005;
  double t8006;
  double t8007;
  double t8008;
  double t8009;
  double t8010;
  double t8011;
  double t7950;
  double t8025;
  double t7984;
  double t8028;
  double t8029;
  double t8026;
  double t7991;
  double t8030;
  double t8031;
  double t8012;
  double t8053;
  double t8054;
  double t8055;
  double t7966;
  double t7972;
  double t7978;
  double t7979;
  double t8034;
  double t8035;
  double t8036;
  double t8037;
  double t8017;
  double t8018;
  double t8019;
  double t8020;
  double t7980;
  double t8079;
  double t8080;
  double t8081;
  double t8082;
  double t8023;
  double t8061;
  double t8086;
  double t8087;
  double t8088;
  double t8089;
  double t8024;
  double t8062;
  t811 = Cos(var1[2]);
  t7906 = Sin(var1[2]);
  t836 = Cos(var1[3]);
  t7907 = Sin(var1[3]);
  t7927 = t811*t836;
  t7928 = -1.*t7906*t7907;
  t7929 = t7927 + t7928;
  t7924 = -1.*t836*t7906;
  t7925 = -1.*t811*t7907;
  t7926 = t7924 + t7925;
  t859 = -1.*t811*t836;
  t7908 = t7906*t7907;
  t7909 = t859 + t7908;
  t7931 = t836*t7906;
  t7932 = t811*t7907;
  t7933 = t7931 + t7932;
  t7918 = Cos(var1[4]);
  t7920 = Sin(var1[4]);
  t7940 = t811*t7918;
  t7941 = -1.*t7906*t7920;
  t7942 = t7940 + t7941;
  t7937 = -1.*t7918*t7906;
  t7938 = -1.*t811*t7920;
  t7939 = t7937 + t7938;
  t7919 = -1.*t811*t7918;
  t7921 = t7906*t7920;
  t7922 = t7919 + t7921;
  t7944 = t7918*t7906;
  t7945 = t811*t7920;
  t7946 = t7944 + t7945;
  t7917 = -1.25*var2[3]*t7909;
  t7967 = Power(t836,2);
  t7968 = 0.5*t7967;
  t7969 = Power(t7907,2);
  t7970 = 0.5*t7969;
  t7971 = t7968 + t7970;
  t7930 = 15.*t7926*t7929;
  t7934 = 5.*t7933*t7929;
  t7935 = 15.*t7926*t7909;
  t7936 = 5.*t7933*t7909;
  t7952 = Power(t7926,2);
  t7953 = 10.*t7952;
  t7954 = 10.*t7926*t7933;
  t7955 = Power(t7929,2);
  t7956 = 10.*t7955;
  t7957 = 10.*t7929*t7909;
  t7923 = -1.25*var2[4]*t7922;
  t7973 = Power(t7918,2);
  t7974 = 0.5*t7973;
  t7975 = Power(t7920,2);
  t7976 = 0.5*t7975;
  t7977 = t7974 + t7976;
  t7943 = 15.*t7939*t7942;
  t7947 = 5.*t7946*t7942;
  t7948 = 15.*t7939*t7922;
  t7949 = 5.*t7946*t7922;
  t7958 = Power(t7939,2);
  t7959 = 10.*t7958;
  t7960 = 10.*t7939*t7946;
  t7961 = Power(t7942,2);
  t7962 = 10.*t7961;
  t7963 = 10.*t7942*t7922;
  t7997 = 10.*t7926*t7929;
  t7998 = 10.*t7933*t7929;
  t7999 = 10.*t7939*t7942;
  t8000 = 10.*t7946*t7942;
  t8001 = t7997 + t7998 + t7999 + t8000;
  t8003 = 5.*t7952;
  t8004 = 5.*t7926*t7933;
  t8005 = 5.*t7955;
  t8006 = 5.*t7929*t7909;
  t8007 = 5.*t7958;
  t8008 = 5.*t7939*t7946;
  t8009 = 5.*t7961;
  t8010 = 5.*t7942*t7922;
  t8011 = t8003 + t8004 + t8005 + t8006 + t8007 + t8008 + t8009 + t8010;
  t7950 = t7930 + t7934 + t7935 + t7936 + t7943 + t7947 + t7948 + t7949;
  t8025 = -1.25*var2[3]*t7933;
  t7984 = t7930 + t7934 + t7935 + t7936;
  t8028 = Power(t7909,2);
  t8029 = 10.*t8028;
  t8026 = -1.25*var2[4]*t7946;
  t7991 = t7943 + t7947 + t7948 + t7949;
  t8030 = Power(t7922,2);
  t8031 = 10.*t8030;
  t8012 = -0.5*var2[2]*t8011;
  t8053 = 10.*t7926*t7909;
  t8054 = 10.*t7939*t7922;
  t8055 = t7997 + t8053 + t7999 + t8054;
  t7966 = -2.5*t811;
  t7972 = 5.*t7909*t7971;
  t7978 = 5.*t7922*t7977;
  t7979 = t7966 + t7972 + t7978;
  t8034 = 2.5*t7906;
  t8035 = 5.*t7933*t7971;
  t8036 = 5.*t7946*t7977;
  t8037 = t8034 + t8035 + t8036;
  t8017 = -2.5*t7906;
  t8018 = 5.*t7926*t7971;
  t8019 = 5.*t7939*t7977;
  t8020 = t8017 + t8018 + t8019;
  t7980 = -0.5*var2[2]*t7979;
  t8079 = -1.25*var2[1]*t7933;
  t8080 = -1.25*var2[0]*t7909;
  t8081 = t8079 + t8080;
  t8082 = var2[2]*t8081;
  t8023 = -1.25*var2[2]*t7926;
  t8061 = -1.25*var2[2]*t7909;
  t8086 = -1.25*var2[1]*t7946;
  t8087 = -1.25*var2[0]*t7922;
  t8088 = t8086 + t8087;
  t8089 = var2[2]*t8088;
  t8024 = -1.25*var2[2]*t7939;
  t8062 = -1.25*var2[2]*t7922;
  p_output1[0]=(t7917 + t7923 + t7980 - 0.5*(t7953 + t7954 + t7956 + t7957 + t7959 + t7960 + t7962 + t7963)*var2[0] - 0.5*t7950*var2[1])*var2[2];
  p_output1[1]=var2[2]*(t7917 - 0.5*(t7953 + t7954 + t7956 + t7957)*var2[0] - 0.5*t7984*var2[1] - 2.5*t7909*t7971*var2[2]);
  p_output1[2]=var2[2]*(t7923 - 0.5*(t7959 + t7960 + t7962 + t7963)*var2[0] - 0.5*t7991*var2[1] - 2.5*t7922*t7977*var2[2]);
  p_output1[3]=-0.5*t8001*var2[2];
  p_output1[4]=t8012;
  p_output1[5]=-0.5*t8001*var2[0] - 0.5*t8011*var2[1] - 1.*t8020*var2[2] - 1.25*t7926*var2[3] - 1.25*t7939*var2[4];
  p_output1[6]=t8023;
  p_output1[7]=t8024;
  p_output1[8]=var2[2]*(t8025 + t8026 - 0.5*t7950*var2[0] - 0.5*(t7953 + t7954 + t7957 + t7959 + t7960 + t7963 + t8029 + t8031)*var2[1] - 0.5*t8037*var2[2]);
  p_output1[9]=var2[2]*(t8025 - 0.5*t7984*var2[0] - 0.5*(t7953 + t7954 + t7957 + t8029)*var2[1] - 2.5*t7933*t7971*var2[2]);
  p_output1[10]=var2[2]*(t8026 - 0.5*t7991*var2[0] - 0.5*(t7959 + t7960 + t7963 + t8031)*var2[1] - 2.5*t7946*t7977*var2[2]);
  p_output1[11]=t8012;
  p_output1[12]=-0.5*t8055*var2[2];
  p_output1[13]=t7917 + t7923 - 0.5*t8011*var2[0] - 0.5*t8055*var2[1] - 1.*t7979*var2[2];
  p_output1[14]=t8061;
  p_output1[15]=t8062;
  p_output1[16]=(-0.5*t7979*var2[0] - 0.5*t8037*var2[1])*var2[2];
  p_output1[17]=(-2.5*t7909*t7971*var2[0] - 2.5*t7933*t7971*var2[1])*var2[2];
  p_output1[18]=(-2.5*t7922*t7977*var2[0] - 2.5*t7946*t7977*var2[1])*var2[2];
  p_output1[19]=-0.5*t8020*var2[2];
  p_output1[20]=t7980;
  p_output1[21]=-0.5*t8020*var2[0] - 0.5*t7979*var2[1];
  p_output1[22]=t8082;
  p_output1[23]=t8082;
  p_output1[24]=t8023;
  p_output1[25]=t8061;
  p_output1[26]=-1.25*t7926*var2[0] - 1.25*t7909*var2[1];
  p_output1[27]=t8089;
  p_output1[28]=t8089;
  p_output1[29]=t8024;
  p_output1[30]=t8062;
  p_output1[31]=-1.25*t7939*var2[0] - 1.25*t7922*var2[1];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 32, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce2_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
