/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:58 GMT-04:00
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
  double t2391;
  double t848;
  double t1826;
  double t2606;
  double t3770;
  double t4463;
  double t4470;
  double t1827;
  double t2608;
  double t2609;
  double t4482;
  double t4483;
  double t4484;
  double t4491;
  double t4492;
  double t4493;
  double t7682;
  double t7684;
  double t7695;
  double t7696;
  double t7697;
  double t7683;
  double t7685;
  double t7694;
  double t7702;
  double t7706;
  double t7708;
  double t7710;
  double t7711;
  double t7712;
  double t4480;
  double t4485;
  double t4494;
  double t4495;
  double t7698;
  double t7709;
  double t7725;
  double t7726;
  double t4496;
  double t7681;
  double t7727;
  double t7728;
  double t7750;
  double t7751;
  double t7752;
  double t7765;
  double t7766;
  double t7767;
  double t7770;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7775;
  double t7778;
  double t7768;
  double t7776;
  double t7788;
  double t7793;
  double t7794;
  double t7795;
  double t7801;
  double t7805;
  double t7806;
  double t7807;
  double t7808;
  double t7809;
  double t7802;
  double t7803;
  double t7810;
  double t7811;
  double t7822;
  double t7823;
  double t7826;
  double t7827;
  double t7830;
  double t7824;
  double t7828;
  double t7836;
  double t7837;
  double t7838;
  double t7839;
  double t7840;
  double t7842;
  double t7843;
  double t7844;
  double t7845;
  double t7846;
  double t7841;
  double t7847;
  double t7863;
  double t7864;
  double t7865;
  double t7866;
  double t7872;
  double t7873;
  double t7874;
  double t7875;
  double t7879;
  double t7880;
  double t7881;
  double t7882;
  double t7883;
  double t7887;
  t2391 = Cos(var1[2]);
  t848 = Cos(var1[3]);
  t1826 = Sin(var1[2]);
  t2606 = Sin(var1[3]);
  t3770 = t2391*t848;
  t4463 = -1.*t1826*t2606;
  t4470 = t3770 + t4463;
  t1827 = -1.*t848*t1826;
  t2608 = -1.*t2391*t2606;
  t2609 = t1827 + t2608;
  t4482 = t848*t1826;
  t4483 = t2391*t2606;
  t4484 = t4482 + t4483;
  t4491 = -1.*t2391*t848;
  t4492 = t1826*t2606;
  t4493 = t4491 + t4492;
  t7682 = Cos(var1[4]);
  t7684 = Sin(var1[4]);
  t7695 = t2391*t7682;
  t7696 = -1.*t1826*t7684;
  t7697 = t7695 + t7696;
  t7683 = -1.*t7682*t1826;
  t7685 = -1.*t2391*t7684;
  t7694 = t7683 + t7685;
  t7702 = t7682*t1826;
  t7706 = t2391*t7684;
  t7708 = t7702 + t7706;
  t7710 = -1.*t2391*t7682;
  t7711 = t1826*t7684;
  t7712 = t7710 + t7711;
  t4480 = 15.*t2609*t4470;
  t4485 = 5.*t4484*t4470;
  t4494 = 15.*t2609*t4493;
  t4495 = 5.*t4484*t4493;
  t7698 = 15.*t7694*t7697;
  t7709 = 5.*t7708*t7697;
  t7725 = 15.*t7694*t7712;
  t7726 = 5.*t7708*t7712;
  t4496 = t4480 + t4485 + t4494 + t4495;
  t7681 = -0.5*var2[3]*t4496;
  t7727 = t7698 + t7709 + t7725 + t7726;
  t7728 = -0.5*var2[4]*t7727;
  t7750 = Power(t2609,2);
  t7751 = 5.*t7750;
  t7752 = 5.*t2609*t4484;
  t7765 = Power(t4470,2);
  t7766 = 5.*t7765;
  t7767 = 5.*t4470*t4493;
  t7770 = Power(t7694,2);
  t7771 = 5.*t7770;
  t7772 = 5.*t7694*t7708;
  t7773 = Power(t7697,2);
  t7774 = 5.*t7773;
  t7775 = 5.*t7697*t7712;
  t7778 = t7751 + t7752 + t7766 + t7767 + t7771 + t7772 + t7774 + t7775;
  t7768 = t7751 + t7752 + t7766 + t7767;
  t7776 = t7771 + t7772 + t7774 + t7775;
  t7788 = 10.*t7750;
  t7793 = 10.*t2609*t4484;
  t7794 = 10.*t4470*t4493;
  t7795 = Power(t4493,2);
  t7801 = 10.*t7795;
  t7805 = 10.*t7770;
  t7806 = 10.*t7694*t7708;
  t7807 = 10.*t7697*t7712;
  t7808 = Power(t7712,2);
  t7809 = 10.*t7808;
  t7802 = t7788 + t7793 + t7794 + t7801;
  t7803 = -0.5*var2[3]*t7802;
  t7810 = t7805 + t7806 + t7807 + t7809;
  t7811 = -0.5*var2[4]*t7810;
  t7822 = 10.*t2609*t4470;
  t7823 = 10.*t2609*t4493;
  t7826 = 10.*t7694*t7697;
  t7827 = 10.*t7694*t7712;
  t7830 = t7822 + t7823 + t7826 + t7827;
  t7824 = t7822 + t7823;
  t7828 = t7826 + t7827;
  t7836 = Power(t848,2);
  t7837 = 0.5*t7836;
  t7838 = Power(t2606,2);
  t7839 = 0.5*t7838;
  t7840 = t7837 + t7839;
  t7842 = Power(t7682,2);
  t7843 = 0.5*t7842;
  t7844 = Power(t7684,2);
  t7845 = 0.5*t7844;
  t7846 = t7843 + t7845;
  t7841 = -2.5*var2[3]*t4484*t7840;
  t7847 = -2.5*var2[4]*t7708*t7846;
  t7863 = -2.5*t2391;
  t7864 = 5.*t4493*t7840;
  t7865 = 5.*t7712*t7846;
  t7866 = t7863 + t7864 + t7865;
  t7872 = -1.25*var2[2]*t4484;
  t7873 = -1.25*var2[3]*t4484;
  t7874 = t7872 + t7873;
  t7875 = var2[1]*t7874;
  t7879 = -1.25*var2[1]*t4493;
  t7880 = -1.25*var2[2]*t7708;
  t7881 = -1.25*var2[4]*t7708;
  t7882 = t7880 + t7881;
  t7883 = var2[1]*t7882;
  t7887 = -1.25*var2[1]*t7712;
  p_output1[0]=var2[1]*(t7681 + t7728 - 0.5*(t4480 + t4485 + t4494 + t4495 + t7698 + t7709 + t7725 + t7726)*var2[2]);
  p_output1[1]=var2[1]*(t7681 - 0.5*t4496*var2[2]);
  p_output1[2]=var2[1]*(t7728 - 0.5*t7727*var2[2]);
  p_output1[3]=-0.5*t7778*var2[2] - 0.5*t7768*var2[3] - 0.5*t7776*var2[4];
  p_output1[4]=-0.5*t7778*var2[1];
  p_output1[5]=-0.5*t7768*var2[1];
  p_output1[6]=-0.5*t7776*var2[1];
  p_output1[7]=var2[1]*(t7803 + t7811 - 0.5*(t7788 + t7793 + t7794 + t7801 + t7805 + t7806 + t7807 + t7809)*var2[2]);
  p_output1[8]=var2[1]*(t7803 - 0.5*t7802*var2[2]);
  p_output1[9]=var2[1]*(t7811 - 0.5*t7810*var2[2]);
  p_output1[10]=-0.5*t7830*var2[2] - 0.5*t7824*var2[3] - 0.5*t7828*var2[4];
  p_output1[11]=-0.5*t7830*var2[1];
  p_output1[12]=-0.5*t7824*var2[1];
  p_output1[13]=-0.5*t7828*var2[1];
  p_output1[14]=var2[1]*(t7841 + t7847 - 0.5*(2.5*t1826 + 5.*t4484*t7840 + 5.*t7708*t7846)*var2[2]);
  p_output1[15]=var2[1]*(t7841 - 2.5*t4484*t7840*var2[2]);
  p_output1[16]=var2[1]*(t7847 - 2.5*t7708*t7846*var2[2]);
  p_output1[17]=-0.5*t7866*var2[2] - 2.5*t4493*t7840*var2[3] - 2.5*t7712*t7846*var2[4];
  p_output1[18]=-0.5*t7866*var2[1];
  p_output1[19]=-2.5*t4493*t7840*var2[1];
  p_output1[20]=-2.5*t7712*t7846*var2[1];
  p_output1[21]=t7875;
  p_output1[22]=t7875;
  p_output1[23]=-1.25*t4493*var2[2] - 1.25*t4493*var2[3];
  p_output1[24]=t7879;
  p_output1[25]=t7879;
  p_output1[26]=t7883;
  p_output1[27]=t7883;
  p_output1[28]=-1.25*t7712*var2[2] - 1.25*t7712*var2[4];
  p_output1[29]=t7887;
  p_output1[30]=t7887;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 31, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec2_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce1_vec2_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
