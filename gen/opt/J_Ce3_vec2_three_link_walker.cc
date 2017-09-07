/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:11 GMT-04:00
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
  double t2667;
  double t3108;
  double t901;
  double t3109;
  double t2668;
  double t3120;
  double t4128;
  double t6580;
  double t6581;
  double t6582;
  double t6571;
  double t6572;
  double t6573;
  double t6585;
  double t6586;
  double t6590;
  double t5545;
  double t6560;
  double t5546;
  double t6561;
  double t6569;
  double t6596;
  double t6598;
  double t6602;
  double t6593;
  double t6594;
  double t6595;
  double t6605;
  double t6606;
  double t6607;
  double t5542;
  double t8215;
  double t8218;
  double t8219;
  double t8220;
  double t8222;
  double t6583;
  double t6584;
  double t6591;
  double t6592;
  double t8157;
  double t8158;
  double t8159;
  double t8165;
  double t8171;
  double t8172;
  double t6570;
  double t8224;
  double t8225;
  double t8226;
  double t8227;
  double t8228;
  double t6603;
  double t6604;
  double t6608;
  double t6609;
  double t8173;
  double t8174;
  double t8175;
  double t8196;
  double t8197;
  double t8207;
  double t8249;
  double t8250;
  double t8251;
  double t8252;
  double t8253;
  double t8254;
  double t8255;
  double t8256;
  double t8257;
  double t8258;
  double t8259;
  double t8270;
  double t8271;
  double t8272;
  double t8273;
  double t8235;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8240;
  double t8241;
  double t8261;
  double t8263;
  double t8264;
  double t8279;
  double t8277;
  double t8242;
  double t8243;
  double t8244;
  double t8245;
  double t8246;
  double t8247;
  double t8248;
  double t8262;
  double t8265;
  double t8266;
  double t8287;
  double t8278;
  t2667 = Sin(var1[2]);
  t3108 = Cos(var1[2]);
  t901 = Cos(var1[3]);
  t3109 = Sin(var1[3]);
  t2668 = t901*t2667;
  t3120 = t3108*t3109;
  t4128 = t2668 + t3120;
  t6580 = t3108*t901;
  t6581 = -1.*t2667*t3109;
  t6582 = t6580 + t6581;
  t6571 = -1.*t901*t2667;
  t6572 = -1.*t3108*t3109;
  t6573 = t6571 + t6572;
  t6585 = -1.*t3108*t901;
  t6586 = t2667*t3109;
  t6590 = t6585 + t6586;
  t5545 = Cos(var1[4]);
  t6560 = Sin(var1[4]);
  t5546 = t5545*t2667;
  t6561 = t3108*t6560;
  t6569 = t5546 + t6561;
  t6596 = t3108*t5545;
  t6598 = -1.*t2667*t6560;
  t6602 = t6596 + t6598;
  t6593 = -1.*t5545*t2667;
  t6594 = -1.*t3108*t6560;
  t6595 = t6593 + t6594;
  t6605 = -1.*t3108*t5545;
  t6606 = t2667*t6560;
  t6607 = t6605 + t6606;
  t5542 = 1.25*var2[3]*t4128;
  t8215 = Power(t901,2);
  t8218 = 0.5*t8215;
  t8219 = Power(t3109,2);
  t8220 = 0.5*t8219;
  t8222 = t8218 + t8220;
  t6583 = -15.*t6573*t6582;
  t6584 = -5.*t4128*t6582;
  t6591 = -15.*t6573*t6590;
  t6592 = -5.*t4128*t6590;
  t8157 = Power(t6573,2);
  t8158 = -10.*t8157;
  t8159 = -10.*t6573*t4128;
  t8165 = -10.*t6582*t6590;
  t8171 = Power(t6590,2);
  t8172 = -10.*t8171;
  t6570 = 1.25*var2[4]*t6569;
  t8224 = Power(t5545,2);
  t8225 = 0.5*t8224;
  t8226 = Power(t6560,2);
  t8227 = 0.5*t8226;
  t8228 = t8225 + t8227;
  t6603 = -15.*t6595*t6602;
  t6604 = -5.*t6569*t6602;
  t6608 = -15.*t6595*t6607;
  t6609 = -5.*t6569*t6607;
  t8173 = Power(t6595,2);
  t8174 = -10.*t8173;
  t8175 = -10.*t6595*t6569;
  t8196 = -10.*t6602*t6607;
  t8197 = Power(t6607,2);
  t8207 = -10.*t8197;
  t8249 = -5.*t8157;
  t8250 = -5.*t6573*t4128;
  t8251 = Power(t6582,2);
  t8252 = -5.*t8251;
  t8253 = -5.*t6582*t6590;
  t8254 = -5.*t8173;
  t8255 = -5.*t6595*t6569;
  t8256 = Power(t6602,2);
  t8257 = -5.*t8256;
  t8258 = -5.*t6602*t6607;
  t8259 = t8249 + t8250 + t8252 + t8253 + t8254 + t8255 + t8257 + t8258;
  t8270 = 2.5*t3108;
  t8271 = -5.*t6590*t8222;
  t8272 = -5.*t6607*t8228;
  t8273 = t8270 + t8271 + t8272;
  t8235 = 2.5*var2[2]*t4128*t8222;
  t8236 = t6583 + t6584 + t6591 + t6592;
  t8237 = -0.5*var2[0]*t8236;
  t8238 = t8158 + t8159 + t8165 + t8172;
  t8239 = -0.5*var2[1]*t8238;
  t8240 = t5542 + t8235 + t8237 + t8239;
  t8241 = var2[1]*t8240;
  t8261 = 1.25*var2[3]*t6590;
  t8263 = -10.*t6573*t6582;
  t8264 = -10.*t6573*t6590;
  t8279 = t8249 + t8250 + t8252 + t8253;
  t8277 = 1.25*var2[1]*t6590;
  t8242 = 2.5*var2[2]*t6569*t8228;
  t8243 = t6603 + t6604 + t6608 + t6609;
  t8244 = -0.5*var2[0]*t8243;
  t8245 = t8174 + t8175 + t8196 + t8207;
  t8246 = -0.5*var2[1]*t8245;
  t8247 = t6570 + t8242 + t8244 + t8246;
  t8248 = var2[1]*t8247;
  t8262 = 1.25*var2[4]*t6607;
  t8265 = -10.*t6595*t6602;
  t8266 = -10.*t6595*t6607;
  t8287 = t8254 + t8255 + t8257 + t8258;
  t8278 = 1.25*var2[1]*t6607;
  p_output1[0]=var2[1]*(t5542 + t6570 - 0.5*(t6583 + t6584 + t6591 + t6592 + t6603 + t6604 + t6608 + t6609)*var2[0] - 0.5*(t8158 + t8159 + t8165 + t8172 + t8174 + t8175 + t8196 + t8207)*var2[1] - 0.5*(-2.5*t2667 - 5.*t4128*t8222 - 5.*t6569*t8228)*var2[2]);
  p_output1[1]=t8241;
  p_output1[2]=t8248;
  p_output1[3]=-0.5*t8259*var2[1];
  p_output1[4]=t8261 + t8262 - 0.5*t8259*var2[0] - 1.*(t8263 + t8264 + t8265 + t8266)*var2[1] - 0.5*t8273*var2[2];
  p_output1[5]=-0.5*t8273*var2[1];
  p_output1[6]=t8277;
  p_output1[7]=t8278;
  p_output1[8]=t8241;
  p_output1[9]=t8241;
  p_output1[10]=-0.5*t8279*var2[1];
  p_output1[11]=t8261 - 0.5*t8279*var2[0] - 1.*(t8263 + t8264)*var2[1] + 2.5*t6590*t8222*var2[2];
  p_output1[12]=2.5*t6590*t8222*var2[1];
  p_output1[13]=t8277;
  p_output1[14]=t8248;
  p_output1[15]=t8248;
  p_output1[16]=-0.5*t8287*var2[1];
  p_output1[17]=t8262 - 0.5*t8287*var2[0] - 1.*(t8265 + t8266)*var2[1] + 2.5*t6607*t8228*var2[2];
  p_output1[18]=2.5*t6607*t8228*var2[1];
  p_output1[19]=t8278;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec2_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce3_vec2_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
