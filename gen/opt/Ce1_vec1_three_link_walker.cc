/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:44 GMT-04:00
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
  double t7094;
  double t3089;
  double t7056;
  double t7099;
  double t7104;
  double t7107;
  double t7108;
  double t7130;
  double t7132;
  double t7139;
  double t7140;
  double t7141;
  double t7070;
  double t7100;
  double t7103;
  double t7123;
  double t7124;
  double t7125;
  double t7126;
  double t7127;
  double t7131;
  double t7133;
  double t7138;
  double t7142;
  double t7143;
  double t7144;
  double t7145;
  double t7146;
  double t7153;
  double t7154;
  double t7155;
  double t7156;
  double t7157;
  double t7158;
  double t7159;
  double t7160;
  double t7161;
  double t7164;
  double t7165;
  double t7166;
  double t7167;
  double t7168;
  double t7169;
  double t7170;
  double t7171;
  double t7172;
  double t7179;
  double t7180;
  double t7181;
  double t7182;
  double t7183;
  double t7185;
  double t7186;
  double t7187;
  double t7188;
  double t7189;
  t7094 = Cos(var1[2]);
  t3089 = Cos(var1[3]);
  t7056 = Sin(var1[2]);
  t7099 = Sin(var1[3]);
  t7104 = t7094*t3089;
  t7107 = -1.*t7056*t7099;
  t7108 = t7104 + t7107;
  t7130 = Cos(var1[4]);
  t7132 = Sin(var1[4]);
  t7139 = t7094*t7130;
  t7140 = -1.*t7056*t7132;
  t7141 = t7139 + t7140;
  t7070 = -1.*t3089*t7056;
  t7100 = -1.*t7094*t7099;
  t7103 = t7070 + t7100;
  t7123 = 10.*t7103*t7108;
  t7124 = t3089*t7056;
  t7125 = t7094*t7099;
  t7126 = t7124 + t7125;
  t7127 = 10.*t7126*t7108;
  t7131 = -1.*t7130*t7056;
  t7133 = -1.*t7094*t7132;
  t7138 = t7131 + t7133;
  t7142 = 10.*t7138*t7141;
  t7143 = t7130*t7056;
  t7144 = t7094*t7132;
  t7145 = t7143 + t7144;
  t7146 = 10.*t7145*t7141;
  t7153 = Power(t7103,2);
  t7154 = 5.*t7153;
  t7155 = 5.*t7103*t7126;
  t7156 = Power(t7108,2);
  t7157 = 5.*t7156;
  t7158 = -1.*t7094*t3089;
  t7159 = t7056*t7099;
  t7160 = t7158 + t7159;
  t7161 = 5.*t7108*t7160;
  t7164 = Power(t7138,2);
  t7165 = 5.*t7164;
  t7166 = 5.*t7138*t7145;
  t7167 = Power(t7141,2);
  t7168 = 5.*t7167;
  t7169 = -1.*t7094*t7130;
  t7170 = t7056*t7132;
  t7171 = t7169 + t7170;
  t7172 = 5.*t7141*t7171;
  t7179 = Power(t3089,2);
  t7180 = 0.5*t7179;
  t7181 = Power(t7099,2);
  t7182 = 0.5*t7181;
  t7183 = t7180 + t7182;
  t7185 = Power(t7130,2);
  t7186 = 0.5*t7185;
  t7187 = Power(t7132,2);
  t7188 = 0.5*t7187;
  t7189 = t7186 + t7188;
  p_output1[0]=var2[0]*(-0.5*(t7123 + t7127 + t7142 + t7146)*var2[2] - 0.5*(t7123 + t7127)*var2[3] - 0.5*(t7142 + t7146)*var2[4]);
  p_output1[1]=var2[0]*(-0.5*(t7154 + t7155 + t7157 + t7161 + t7165 + t7166 + t7168 + t7172)*var2[2] - 0.5*(t7154 + t7155 + t7157 + t7161)*var2[3] - 0.5*(t7165 + t7166 + t7168 + t7172)*var2[4]);
  p_output1[2]=var2[0]*(-0.5*(-2.5*t7056 + 5.*t7103*t7183 + 5.*t7138*t7189)*var2[2] - 2.5*t7103*t7183*var2[3] - 2.5*t7138*t7189*var2[4]);
  p_output1[3]=var2[0]*(-1.25*t7103*var2[2] - 1.25*t7103*var2[3]);
  p_output1[4]=var2[0]*(-1.25*t7138*var2[2] - 1.25*t7138*var2[4]);
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

#include "Ce1_vec1_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce1_vec1_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
