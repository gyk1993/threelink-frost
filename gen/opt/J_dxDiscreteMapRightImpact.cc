/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:55 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4941;
  double t3497;
  double t8593;
  double t8625;
  double t8656;
  double t8658;
  double t8635;
  double t8652;
  double t8653;
  double t8617;
  double t8626;
  double t8630;
  double t8663;
  double t8664;
  double t8665;
  double t8657;
  double t8659;
  double t8660;
  double t8714;
  double t8715;
  double t8716;
  double t8719;
  double t8720;
  double t8721;
  double t8654;
  double t8745;
  double t8746;
  double t8747;
  double t8666;
  double t8726;
  double t8727;
  double t8728;
  double t8729;
  double t8730;
  double t8732;
  double t8733;
  double t8734;
  double t8735;
  double t8736;
  double t8741;
  double t8742;
  double t8743;
  double t8744;
  double t8748;
  double t8779;
  double t8780;
  double t8752;
  double t8753;
  double t8754;
  double t8755;
  double t8760;
  double t8761;
  double t8762;
  double t8765;
  double t8766;
  double t8767;
  double t8768;
  double t8749;
  double t8750;
  double t8751;
  double t8756;
  double t8757;
  double t8769;
  double t8770;
  double t8771;
  double t8772;
  double t8773;
  double t8774;
  double t8775;
  double t8776;
  double t4106;
  double t5525;
  double t8631;
  double t8661;
  double t8717;
  double t8718;
  double t8722;
  double t8723;
  double t8724;
  double t4107;
  double t8558;
  double t8655;
  double t8667;
  double t8777;
  double t8725;
  double t8824;
  double t8825;
  double t8826;
  double t8828;
  double t8790;
  double t8827;
  double t8829;
  double t8796;
  double t8804;
  double t8805;
  double t8806;
  double t8807;
  double t8808;
  double t8799;
  double t8800;
  double t8781;
  double t8782;
  double t8783;
  double t8784;
  double t8731;
  double t8737;
  double t8738;
  double t8818;
  double t8819;
  double t8820;
  double t8821;
  double t8833;
  double t8834;
  double t8835;
  double t8809;
  double t8810;
  double t8811;
  double t8812;
  double t8851;
  double t8853;
  double t8740;
  double t8823;
  double t8857;
  double t8875;
  double t8876;
  double t8877;
  double t8813;
  double t8849;
  double t8870;
  double t8739;
  double t8822;
  double t8856;
  double t8878;
  double t8879;
  double t8880;
  double t8814;
  double t8850;
  double t8871;
  t4941 = Sin(var2[2]);
  t3497 = Cos(var2[2]);
  t8593 = Cos(var2[3]);
  t8625 = Sin(var2[3]);
  t8656 = Cos(var2[4]);
  t8658 = Sin(var2[4]);
  t8635 = t3497*t8593;
  t8652 = -1.*t4941*t8625;
  t8653 = t8635 + t8652;
  t8617 = t8593*t4941;
  t8626 = t3497*t8625;
  t8630 = t8617 + t8626;
  t8663 = t3497*t8656;
  t8664 = -1.*t4941*t8658;
  t8665 = t8663 + t8664;
  t8657 = t8656*t4941;
  t8659 = t3497*t8658;
  t8660 = t8657 + t8659;
  t8714 = -1.*t8593*t4941;
  t8715 = -1.*t3497*t8625;
  t8716 = t8714 + t8715;
  t8719 = -1.*t8656*t4941;
  t8720 = -1.*t3497*t8658;
  t8721 = t8719 + t8720;
  t8654 = Power(t8653,2);
  t8745 = -1.*t3497*t8593;
  t8746 = t4941*t8625;
  t8747 = t8745 + t8746;
  t8666 = Power(t8665,2);
  t8726 = Power(t8593,2);
  t8727 = 0.5*t8726;
  t8728 = Power(t8625,2);
  t8729 = 0.5*t8728;
  t8730 = t8727 + t8729;
  t8732 = Power(t8656,2);
  t8733 = 0.5*t8732;
  t8734 = Power(t8658,2);
  t8735 = 0.5*t8734;
  t8736 = t8733 + t8735;
  t8741 = -1.*var1[4];
  t8742 = var3[3] + t8741;
  t8743 = 2.5*t8742*t8716;
  t8744 = -1.*var4[0]*t8716;
  t8748 = -1.*var4[2]*t8747;
  t8779 = -1.*var1[2];
  t8780 = var3[2] + t8779;
  t8752 = -1.*var1[0];
  t8753 = var3[0] + t8752;
  t8754 = 10.*t8716*t8653;
  t8755 = 10.*t8630*t8653;
  t8760 = -1.*var1[1];
  t8761 = var3[1] + t8760;
  t8762 = Power(t8716,2);
  t8765 = 5.*t8762;
  t8766 = 5.*t8716*t8630;
  t8767 = 5.*t8654;
  t8768 = 5.*t8653*t8747;
  t8749 = -1.*var1[3];
  t8750 = var3[4] + t8749;
  t8751 = 2.5*t8750*t8721;
  t8756 = 10.*t8721*t8665;
  t8757 = 10.*t8660*t8665;
  t8769 = Power(t8721,2);
  t8770 = 5.*t8769;
  t8771 = 5.*t8721*t8660;
  t8772 = 5.*t8666;
  t8773 = -1.*t3497*t8656;
  t8774 = t4941*t8658;
  t8775 = t8773 + t8774;
  t8776 = 5.*t8665*t8775;
  t4106 = Power(t3497,2);
  t5525 = Power(t4941,2);
  t8631 = Power(t8630,2);
  t8661 = Power(t8660,2);
  t8717 = -5.*t8716*t8653;
  t8718 = -5.*t8630*t8653;
  t8722 = -5.*t8721*t8665;
  t8723 = -5.*t8660*t8665;
  t8724 = t8717 + t8718 + t8722 + t8723;
  t4107 = -25.*t4106;
  t8558 = -25.*t5525;
  t8655 = -5.*t8654;
  t8667 = -5.*t8666;
  t8777 = t8765 + t8766 + t8767 + t8768 + t8770 + t8771 + t8772 + t8776;
  t8725 = -2.5*t3497;
  t8824 = -1.*var4[2]*t8630;
  t8825 = 2.5*t8742*t8747;
  t8826 = -1.*var4[0]*t8747;
  t8828 = 10.*t8716*t8747;
  t8790 = t8765 + t8766 + t8767 + t8768;
  t8827 = 2.5*t8750*t8775;
  t8829 = 10.*t8721*t8775;
  t8796 = t8770 + t8771 + t8772 + t8776;
  t8804 = 5.*t8716*t8653;
  t8805 = 5.*t8630*t8653;
  t8806 = 5.*t8721*t8665;
  t8807 = 5.*t8660*t8665;
  t8808 = t8804 + t8805 + t8806 + t8807;
  t8799 = 25.*t4106;
  t8800 = 25.*t5525;
  t8781 = -2.5*t4941;
  t8782 = 5.*t8716*t8730;
  t8783 = 5.*t8721*t8736;
  t8784 = t8781 + t8782 + t8783;
  t8731 = -5.*t8653*t8730;
  t8737 = -5.*t8665*t8736;
  t8738 = t8725 + t8731 + t8737;
  t8818 = 2.5*t4941;
  t8819 = -5.*t8716*t8730;
  t8820 = -5.*t8721*t8736;
  t8821 = t8818 + t8819 + t8820;
  t8833 = 5.*t8747*t8730;
  t8834 = 5.*t8775*t8736;
  t8835 = t8725 + t8833 + t8834;
  t8809 = 2.5*t3497;
  t8810 = 5.*t8653*t8730;
  t8811 = 5.*t8665*t8736;
  t8812 = t8809 + t8810 + t8811;
  t8851 = Power(t8730,2);
  t8853 = Power(t8736,2);
  t8740 = -2.5*t8653;
  t8823 = -2.5*t8716;
  t8857 = -2.5*t8730;
  t8875 = 2.5*t8753*t8716;
  t8876 = 2.5*t8761*t8747;
  t8877 = t8875 + t8876;
  t8813 = 2.5*t8653;
  t8849 = 2.5*t8716;
  t8870 = 2.5*t8730;
  t8739 = -2.5*t8665;
  t8822 = -2.5*t8721;
  t8856 = -2.5*t8736;
  t8878 = 2.5*t8753*t8721;
  t8879 = 2.5*t8761*t8775;
  t8880 = t8878 + t8879;
  t8814 = 2.5*t8665;
  t8850 = 2.5*t8721;
  t8871 = 2.5*t8736;
  p_output1[0]=t4107 + t8558 - 5.*t8631 + t8655 - 5.*t8661 + t8667;
  p_output1[1]=t8724;
  p_output1[2]=t8738;
  p_output1[3]=t8739;
  p_output1[4]=t8740;
  p_output1[5]=t8743 + t8744 + t8748 + t8751 + t8753*(t8754 + t8755 + t8756 + t8757) + t8761*t8777 + t8780*t8784;
  p_output1[6]=t8743 + t8744 + t8748 + t8753*(t8754 + t8755) + 5.*t8716*t8730*t8780 + t8761*t8790;
  p_output1[7]=t8751 + t8753*(t8756 + t8757) + 5.*t8721*t8736*t8780 + t8761*t8796;
  p_output1[8]=5.*t8631 + 5.*t8661 + t8767 + t8772 + t8799 + t8800;
  p_output1[9]=t8808;
  p_output1[10]=t8812;
  p_output1[11]=t8813;
  p_output1[12]=t8814;
  p_output1[13]=t8747;
  p_output1[14]=t8630;
  p_output1[15]=t8724;
  p_output1[16]=t4107 + t8558 + t8655 + t8667 - 5.*t8762 - 5.*t8769;
  p_output1[17]=t8821;
  p_output1[18]=t8822;
  p_output1[19]=t8823;
  p_output1[20]=t8753*t8777 + t8824 + t8825 + t8826 + t8827 + t8761*(t8754 + t8756 + t8828 + t8829) + t8780*t8835;
  p_output1[21]=5.*t8730*t8747*t8780 + t8753*t8790 + t8824 + t8825 + t8826 + t8761*(t8754 + t8828);
  p_output1[22]=5.*t8736*t8775*t8780 + t8753*t8796 + t8827 + t8761*(t8756 + t8829);
  p_output1[23]=t8808;
  p_output1[24]=t8765 + t8767 + t8770 + t8772 + t8799 + t8800;
  p_output1[25]=t8784;
  p_output1[26]=t8849;
  p_output1[27]=t8850;
  p_output1[28]=t8630;
  p_output1[29]=t8653;
  p_output1[30]=t8738;
  p_output1[31]=t8821;
  p_output1[32]=-1.025 - 5.*t8851 - 5.*t8853;
  p_output1[33]=t8856;
  p_output1[34]=t8857;
  p_output1[35]=t8753*t8784 + t8761*t8835;
  p_output1[36]=5.*t8716*t8730*t8753 + 5.*t8730*t8747*t8761;
  p_output1[37]=5.*t8721*t8736*t8753 + 5.*t8736*t8761*t8775;
  p_output1[38]=t8812;
  p_output1[39]=t8784;
  p_output1[40]=1.025 + 5.*t8851 + 5.*t8853;
  p_output1[41]=t8870;
  p_output1[42]=t8871;
  p_output1[43]=-1.*t8726 - 1.*t8728;
  p_output1[44]=t8740;
  p_output1[45]=t8823;
  p_output1[46]=t8857;
  p_output1[47]=-1.25;
  p_output1[48]=t8877;
  p_output1[49]=t8877;
  p_output1[50]=t8813;
  p_output1[51]=t8849;
  p_output1[52]=t8870;
  p_output1[53]=1.25;
  p_output1[54]=-1.;
  p_output1[55]=t8739;
  p_output1[56]=t8822;
  p_output1[57]=t8856;
  p_output1[58]=-1.25;
  p_output1[59]=t8880;
  p_output1[60]=t8880;
  p_output1[61]=t8814;
  p_output1[62]=t8850;
  p_output1[63]=t8871;
  p_output1[64]=1.25;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 65, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMapRightImpact.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
