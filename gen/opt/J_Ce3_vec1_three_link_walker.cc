/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:09 GMT-04:00
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
  double t2735;
  double t3826;
  double t3787;
  double t4071;
  double t8116;
  double t8121;
  double t8122;
  double t8109;
  double t8114;
  double t8115;
  double t3788;
  double t8058;
  double t8059;
  double t8124;
  double t8125;
  double t8126;
  double t8063;
  double t8104;
  double t8133;
  double t8134;
  double t8135;
  double t8130;
  double t8131;
  double t8132;
  double t8075;
  double t8106;
  double t8107;
  double t8137;
  double t8138;
  double t8139;
  double t8060;
  double t8160;
  double t8161;
  double t8162;
  double t8163;
  double t8164;
  double t8123;
  double t8127;
  double t8128;
  double t8129;
  double t8145;
  double t8146;
  double t8147;
  double t8148;
  double t8149;
  double t8150;
  double t8108;
  double t8166;
  double t8167;
  double t8168;
  double t8169;
  double t8170;
  double t8136;
  double t8140;
  double t8141;
  double t8142;
  double t8151;
  double t8152;
  double t8153;
  double t8154;
  double t8155;
  double t8156;
  double t8198;
  double t8199;
  double t8200;
  double t8201;
  double t8202;
  double t8203;
  double t8204;
  double t8205;
  double t8206;
  double t8208;
  double t8209;
  double t8210;
  double t8211;
  double t8176;
  double t8177;
  double t8178;
  double t8179;
  double t8180;
  double t8181;
  double t8182;
  double t8190;
  double t8192;
  double t8193;
  double t8221;
  double t8216;
  double t8183;
  double t8184;
  double t8185;
  double t8186;
  double t8187;
  double t8188;
  double t8189;
  double t8191;
  double t8194;
  double t8195;
  double t8229;
  double t8217;
  t2735 = Cos(var1[2]);
  t3826 = Sin(var1[2]);
  t3787 = Cos(var1[3]);
  t4071 = Sin(var1[3]);
  t8116 = t2735*t3787;
  t8121 = -1.*t3826*t4071;
  t8122 = t8116 + t8121;
  t8109 = -1.*t3787*t3826;
  t8114 = -1.*t2735*t4071;
  t8115 = t8109 + t8114;
  t3788 = -1.*t2735*t3787;
  t8058 = t3826*t4071;
  t8059 = t3788 + t8058;
  t8124 = t3787*t3826;
  t8125 = t2735*t4071;
  t8126 = t8124 + t8125;
  t8063 = Cos(var1[4]);
  t8104 = Sin(var1[4]);
  t8133 = t2735*t8063;
  t8134 = -1.*t3826*t8104;
  t8135 = t8133 + t8134;
  t8130 = -1.*t8063*t3826;
  t8131 = -1.*t2735*t8104;
  t8132 = t8130 + t8131;
  t8075 = -1.*t2735*t8063;
  t8106 = t3826*t8104;
  t8107 = t8075 + t8106;
  t8137 = t8063*t3826;
  t8138 = t2735*t8104;
  t8139 = t8137 + t8138;
  t8060 = 1.25*var2[3]*t8059;
  t8160 = Power(t3787,2);
  t8161 = 0.5*t8160;
  t8162 = Power(t4071,2);
  t8163 = 0.5*t8162;
  t8164 = t8161 + t8163;
  t8123 = -15.*t8115*t8122;
  t8127 = -5.*t8126*t8122;
  t8128 = -15.*t8115*t8059;
  t8129 = -5.*t8126*t8059;
  t8145 = Power(t8115,2);
  t8146 = -10.*t8145;
  t8147 = -10.*t8115*t8126;
  t8148 = Power(t8122,2);
  t8149 = -10.*t8148;
  t8150 = -10.*t8122*t8059;
  t8108 = 1.25*var2[4]*t8107;
  t8166 = Power(t8063,2);
  t8167 = 0.5*t8166;
  t8168 = Power(t8104,2);
  t8169 = 0.5*t8168;
  t8170 = t8167 + t8169;
  t8136 = -15.*t8132*t8135;
  t8140 = -5.*t8139*t8135;
  t8141 = -15.*t8132*t8107;
  t8142 = -5.*t8139*t8107;
  t8151 = Power(t8132,2);
  t8152 = -10.*t8151;
  t8153 = -10.*t8132*t8139;
  t8154 = Power(t8135,2);
  t8155 = -10.*t8154;
  t8156 = -10.*t8135*t8107;
  t8198 = -5.*t8145;
  t8199 = -5.*t8115*t8126;
  t8200 = -5.*t8148;
  t8201 = -5.*t8122*t8059;
  t8202 = -5.*t8151;
  t8203 = -5.*t8132*t8139;
  t8204 = -5.*t8154;
  t8205 = -5.*t8135*t8107;
  t8206 = t8198 + t8199 + t8200 + t8201 + t8202 + t8203 + t8204 + t8205;
  t8208 = 2.5*t3826;
  t8209 = -5.*t8115*t8164;
  t8210 = -5.*t8132*t8170;
  t8211 = t8208 + t8209 + t8210;
  t8176 = 2.5*var2[2]*t8059*t8164;
  t8177 = t8123 + t8127 + t8128 + t8129;
  t8178 = -0.5*var2[1]*t8177;
  t8179 = t8146 + t8147 + t8149 + t8150;
  t8180 = -0.5*var2[0]*t8179;
  t8181 = t8060 + t8176 + t8178 + t8180;
  t8182 = var2[0]*t8181;
  t8190 = 1.25*var2[3]*t8115;
  t8192 = -10.*t8115*t8122;
  t8193 = -10.*t8126*t8122;
  t8221 = t8198 + t8199 + t8200 + t8201;
  t8216 = 1.25*var2[0]*t8115;
  t8183 = 2.5*var2[2]*t8107*t8170;
  t8184 = t8136 + t8140 + t8141 + t8142;
  t8185 = -0.5*var2[1]*t8184;
  t8186 = t8152 + t8153 + t8155 + t8156;
  t8187 = -0.5*var2[0]*t8186;
  t8188 = t8108 + t8183 + t8185 + t8187;
  t8189 = var2[0]*t8188;
  t8191 = 1.25*var2[4]*t8132;
  t8194 = -10.*t8132*t8135;
  t8195 = -10.*t8139*t8135;
  t8229 = t8202 + t8203 + t8204 + t8205;
  t8217 = 1.25*var2[0]*t8132;
  p_output1[0]=var2[0]*(t8060 + t8108 - 0.5*(t8146 + t8147 + t8149 + t8150 + t8152 + t8153 + t8155 + t8156)*var2[0] - 0.5*(t8123 + t8127 + t8128 + t8129 + t8136 + t8140 + t8141 + t8142)*var2[1] - 0.5*(2.5*t2735 - 5.*t8059*t8164 - 5.*t8107*t8170)*var2[2]);
  p_output1[1]=t8182;
  p_output1[2]=t8189;
  p_output1[3]=t8190 + t8191 - 1.*(t8192 + t8193 + t8194 + t8195)*var2[0] - 0.5*t8206*var2[1] - 0.5*t8211*var2[2];
  p_output1[4]=-0.5*t8206*var2[0];
  p_output1[5]=-0.5*t8211*var2[0];
  p_output1[6]=t8216;
  p_output1[7]=t8217;
  p_output1[8]=t8182;
  p_output1[9]=t8182;
  p_output1[10]=t8190 - 1.*(t8192 + t8193)*var2[0] - 0.5*t8221*var2[1] + 2.5*t8115*t8164*var2[2];
  p_output1[11]=-0.5*t8221*var2[0];
  p_output1[12]=2.5*t8115*t8164*var2[0];
  p_output1[13]=t8216;
  p_output1[14]=t8189;
  p_output1[15]=t8189;
  p_output1[16]=t8191 - 1.*(t8194 + t8195)*var2[0] - 0.5*t8229*var2[1] + 2.5*t8132*t8170*var2[2];
  p_output1[17]=-0.5*t8229*var2[0];
  p_output1[18]=2.5*t8132*t8170*var2[0];
  p_output1[19]=t8217;
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

#include "J_Ce3_vec1_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce3_vec1_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
