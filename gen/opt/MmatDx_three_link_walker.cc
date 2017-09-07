/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:43 GMT-04:00
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
  double t3728;
  double t7046;
  double t7018;
  double t7048;
  double t7028;
  double t7051;
  double t7053;
  double t7057;
  double t7061;
  double t7060;
  double t7064;
  double t7065;
  double t7079;
  double t7082;
  double t7083;
  double t7089;
  double t7090;
  double t7091;
  double t7071;
  double t7074;
  double t7075;
  double t7085;
  double t7086;
  double t7087;
  double t7078;
  double t7084;
  double t7088;
  double t7092;
  double t7093;
  double t7095;
  double t7096;
  double t7097;
  double t7098;
  double t7101;
  double t7102;
  double t7105;
  double t7106;
  double t7110;
  double t7111;
  double t7112;
  double t7113;
  double t7114;
  double t7116;
  double t7117;
  double t7118;
  double t7119;
  double t7120;
  double t7134;
  double t7135;
  double t7136;
  double t7137;
  double t7109;
  double t7115;
  double t7121;
  double t7122;
  t3728 = Cos(var1[2]);
  t7046 = Sin(var1[2]);
  t7018 = Cos(var1[3]);
  t7048 = Sin(var1[3]);
  t7028 = t3728*t7018;
  t7051 = -1.*t7046*t7048;
  t7053 = t7028 + t7051;
  t7057 = Cos(var1[4]);
  t7061 = Sin(var1[4]);
  t7060 = t3728*t7057;
  t7064 = -1.*t7046*t7061;
  t7065 = t7060 + t7064;
  t7079 = t7018*t7046;
  t7082 = t3728*t7048;
  t7083 = t7079 + t7082;
  t7089 = t7057*t7046;
  t7090 = t3728*t7061;
  t7091 = t7089 + t7090;
  t7071 = -1.*t7018*t7046;
  t7074 = -1.*t3728*t7048;
  t7075 = t7071 + t7074;
  t7085 = -1.*t7057*t7046;
  t7086 = -1.*t3728*t7061;
  t7087 = t7085 + t7086;
  t7078 = -5.*t7075*t7053;
  t7084 = -5.*t7083*t7053;
  t7088 = -5.*t7087*t7065;
  t7092 = -5.*t7091*t7065;
  t7093 = t7078 + t7084 + t7088 + t7092;
  t7095 = Power(t3728,2);
  t7096 = -25.*t7095;
  t7097 = Power(t7046,2);
  t7098 = -25.*t7097;
  t7101 = Power(t7053,2);
  t7102 = -5.*t7101;
  t7105 = Power(t7065,2);
  t7106 = -5.*t7105;
  t7110 = Power(t7018,2);
  t7111 = 0.5*t7110;
  t7112 = Power(t7048,2);
  t7113 = 0.5*t7112;
  t7114 = t7111 + t7113;
  t7116 = Power(t7057,2);
  t7117 = 0.5*t7116;
  t7118 = Power(t7061,2);
  t7119 = 0.5*t7118;
  t7120 = t7117 + t7119;
  t7134 = 2.5*t7046;
  t7135 = -5.*t7075*t7114;
  t7136 = -5.*t7087*t7120;
  t7137 = t7134 + t7135 + t7136;
  t7109 = -2.5*t3728;
  t7115 = -5.*t7053*t7114;
  t7121 = -5.*t7065*t7120;
  t7122 = t7109 + t7115 + t7121;
  p_output1[0]=(-5.*Power(t7083,2) - 5.*Power(t7091,2) + t7096 + t7098 + t7102 + t7106)*var2[0] + t7093*var2[1] + t7122*var2[2] - 2.5*t7053*var2[3] - 2.5*t7065*var2[4];
  p_output1[1]=t7093*var2[0] + (-5.*Power(t7075,2) - 5.*Power(t7087,2) + t7096 + t7098 + t7102 + t7106)*var2[1] + t7137*var2[2] - 2.5*t7075*var2[3] - 2.5*t7087*var2[4];
  p_output1[2]=t7122*var2[0] + t7137*var2[1] + (-1.025 - 5.*Power(t7114,2) - 5.*Power(t7120,2))*var2[2] - 2.5*t7114*var2[3] - 2.5*t7120*var2[4];
  p_output1[3]=-2.5*t7053*var2[0] - 2.5*t7075*var2[1] - 2.5*t7114*var2[2] - 1.25*var2[3];
  p_output1[4]=-2.5*t7065*var2[0] - 2.5*t7087*var2[1] - 2.5*t7120*var2[2] - 1.25*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "MmatDx_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void MmatDx_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
