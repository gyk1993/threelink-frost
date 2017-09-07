/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:32 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t3792;
  double t812;
  double t858;
  double t2644;
  double t2659;
  double t2660;
  double t4394;
  double t8541;
  double t8542;
  double t8545;
  double t8553;
  double t8554;
  double t8555;
  double t8581;
  double t8582;
  double t8584;
  double t8585;
  double t8590;
  double t8591;
  double t8598;
  double t8611;
  double t8612;
  double t8618;
  double t8627;
  double t8672;
  double t8677;
  double t8685;
  double t8693;
  double t8712;
  double t8709;
  double t8763;
  double t8764;
  double t8673;
  double t8674;
  double t8675;
  double t8676;
  double t8678;
  double t8679;
  double t8680;
  double t8681;
  double t8682;
  double t8683;
  double t8684;
  double t8686;
  double t8687;
  double t8688;
  double t8689;
  double t8690;
  double t8691;
  double t8692;
  double t8694;
  double t8695;
  double t8696;
  double t8697;
  double t8698;
  double t8699;
  double t8700;
  double t8701;
  double t8702;
  double t8703;
  double t8704;
  double t8705;
  double t8706;
  double t8707;
  double t8708;
  double t8710;
  double t8711;
  t3792 = -1.*var6[1];
  t812 = -1. + var7[0];
  t858 = -1. + var8[0];
  t2644 = 1/t858;
  t2659 = -1.*t812*t2644;
  t2660 = 1. + t2659;
  t4394 = var6[0] + t3792;
  t8541 = Power(t4394,-5);
  t8542 = -1.*var1[0];
  t8545 = t8542 + var1[1];
  t8553 = t812*t2644*t8545;
  t8554 = t3792 + var1[0] + t8553;
  t8555 = Power(t8554,2);
  t8581 = Power(t4394,-4);
  t8582 = 1/t4394;
  t8584 = -1.*t8582*t8554;
  t8585 = 1. + t8584;
  t8590 = Power(t4394,-3);
  t8591 = Power(t8585,2);
  t8598 = Power(t8554,3);
  t8611 = Power(t4394,-2);
  t8612 = Power(t8585,3);
  t8618 = Power(t8554,4);
  t8627 = Power(t8585,4);
  t8672 = -20.*t8611*t8612;
  t8677 = -60.*t8590*t8554*t8591;
  t8685 = -60.*t8581*t8555*t8585;
  t8693 = -20.*t8541*t8598;
  t8712 = Power(t4394,-6);
  t8709 = Power(t8554,5);
  t8763 = -1.*t8611*t8554;
  t8764 = t8582 + t8763;
  t8673 = 5.*var9[1]*t8582*t8627;
  t8674 = Power(t8585,5);
  t8675 = -1.*var9[0]*t8674;
  t8676 = t8672 + t8673 + t8675;
  t8678 = 40.*t8611*t8612;
  t8679 = -5.*var9[0]*t8582*t8554*t8627;
  t8680 = 20.*t8611*t8554*t8612;
  t8681 = -5.*t8582*t8627;
  t8682 = t8680 + t8681;
  t8683 = var9[1]*t8682;
  t8684 = t8677 + t8678 + t8679 + t8683;
  t8686 = 120.*t8590*t8554*t8591;
  t8687 = -10.*var9[0]*t8611*t8555*t8612;
  t8688 = 30.*t8590*t8555*t8591;
  t8689 = -20.*t8611*t8554*t8612;
  t8690 = t8688 + t8689;
  t8691 = var9[1]*t8690;
  t8692 = t8685 + t8686 + t8672 + t8687 + t8691;
  t8694 = 120.*t8581*t8555*t8585;
  t8695 = -10.*var9[0]*t8590*t8598*t8591;
  t8696 = 20.*t8581*t8598*t8585;
  t8697 = -30.*t8590*t8555*t8591;
  t8698 = t8696 + t8697;
  t8699 = var9[1]*t8698;
  t8700 = t8693 + t8694 + t8677 + t8695 + t8699;
  t8701 = 40.*t8541*t8598;
  t8702 = -5.*var9[0]*t8581*t8618*t8585;
  t8703 = 5.*t8541*t8618;
  t8704 = -20.*t8581*t8598*t8585;
  t8705 = t8703 + t8704;
  t8706 = var9[1]*t8705;
  t8707 = t8701 + t8685 + t8702 + t8706;
  t8708 = -5.*var9[1]*t8541*t8618;
  t8710 = -1.*var9[0]*t8541*t8709;
  t8711 = t8693 + t8708 + t8710;
  p_output1[0]=60.*t2660*t8590*t8591*var5[0] + 120.*t2660*t8554*t8581*t8585*var5[2] - 180.*t2660*t8590*t8591*var5[2] + 60.*t2660*t8541*t8555*var5[4] - 360.*t2660*t8554*t8581*t8585*var5[4] + 180.*t2660*t8590*t8591*var5[4] - 180.*t2660*t8541*t8555*var5[6] + 360.*t2660*t8554*t8581*t8585*var5[6] - 60.*t2660*t8590*t8591*var5[6] + 180.*t2660*t8541*t8555*var5[8] - 120.*t2660*t8554*t8581*t8585*var5[8] - 60.*t2660*t8541*t8555*var5[10] + (5.*t2660*t8582*t8627*var5[0] + 20.*t2660*t8554*t8611*t8612*var5[2] - 5.*t2660*t8582*t8627*var5[2] + 30.*t2660*t8555*t8590*t8591*var5[4] - 20.*t2660*t8554*t8611*t8612*var5[4] - 30.*t2660*t8555*t8590*t8591*var5[6] + 20.*t2660*t8581*t8585*t8598*var5[6] - 20.*t2660*t8581*t8585*t8598*var5[8] + 5.*t2660*t8541*t8618*var5[8] - 5.*t2660*t8541*t8618*var5[10])*var9[0] + (-20.*t2660*t8611*t8612*var5[0] - 60.*t2660*t8554*t8590*t8591*var5[2] + 40.*t2660*t8611*t8612*var5[2] - 60.*t2660*t8555*t8581*t8585*var5[4] + 120.*t2660*t8554*t8590*t8591*var5[4] - 20.*t2660*t8611*t8612*var5[4] + 120.*t2660*t8555*t8581*t8585*var5[6] - 60.*t2660*t8554*t8590*t8591*var5[6] - 20.*t2660*t8541*t8598*var5[6] - 60.*t2660*t8555*t8581*t8585*var5[8] + 40.*t2660*t8541*t8598*var5[8] - 20.*t2660*t8541*t8598*var5[10])*var9[1];
  p_output1[1]=60.*t2644*t812*t8590*t8591*var5[0] + 120.*t2644*t812*t8554*t8581*t8585*var5[2] - 180.*t2644*t812*t8590*t8591*var5[2] + 60.*t2644*t812*t8541*t8555*var5[4] - 360.*t2644*t812*t8554*t8581*t8585*var5[4] + 180.*t2644*t812*t8590*t8591*var5[4] - 180.*t2644*t812*t8541*t8555*var5[6] + 360.*t2644*t812*t8554*t8581*t8585*var5[6] - 60.*t2644*t812*t8590*t8591*var5[6] + 180.*t2644*t812*t8541*t8555*var5[8] - 120.*t2644*t812*t8554*t8581*t8585*var5[8] - 60.*t2644*t812*t8541*t8555*var5[10] + (5.*t2644*t812*t8582*t8627*var5[0] + 20.*t2644*t812*t8554*t8611*t8612*var5[2] - 5.*t2644*t812*t8582*t8627*var5[2] + 30.*t2644*t812*t8555*t8590*t8591*var5[4] - 20.*t2644*t812*t8554*t8611*t8612*var5[4] - 30.*t2644*t812*t8555*t8590*t8591*var5[6] + 20.*t2644*t812*t8581*t8585*t8598*var5[6] - 20.*t2644*t812*t8581*t8585*t8598*var5[8] + 5.*t2644*t812*t8541*t8618*var5[8] - 5.*t2644*t812*t8541*t8618*var5[10])*var9[0] + (-20.*t2644*t812*t8611*t8612*var5[0] - 60.*t2644*t812*t8554*t8590*t8591*var5[2] + 40.*t2644*t812*t8611*t8612*var5[2] - 60.*t2644*t812*t8555*t8581*t8585*var5[4] + 120.*t2644*t812*t8554*t8590*t8591*var5[4] - 20.*t2644*t812*t8611*t8612*var5[4] + 120.*t2644*t812*t8555*t8581*t8585*var5[6] - 60.*t2644*t812*t8554*t8590*t8591*var5[6] - 20.*t2644*t812*t8541*t8598*var5[6] - 60.*t2644*t812*t8555*t8581*t8585*var5[8] + 40.*t2644*t812*t8541*t8598*var5[8] - 20.*t2644*t812*t8541*t8598*var5[10])*var9[1];
  p_output1[2]=var9[0];
  p_output1[3]=var9[1];
  p_output1[4]=1.;
  p_output1[5]=t8676;
  p_output1[6]=t8684;
  p_output1[7]=t8692;
  p_output1[8]=t8700;
  p_output1[9]=t8707;
  p_output1[10]=t8711;
  p_output1[11]=-60.*t8554*t8581*t8591*var5[0] + 40.*t8590*t8612*var5[0] - 120.*t8541*t8555*t8585*var5[2] + 300.*t8554*t8581*t8591*var5[2] - 80.*t8590*t8612*var5[2] + 480.*t8541*t8555*t8585*var5[4] - 420.*t8554*t8581*t8591*var5[4] + 40.*t8590*t8612*var5[4] - 60.*t8598*t8712*var5[4] - 600.*t8541*t8555*t8585*var5[6] + 180.*t8554*t8581*t8591*var5[6] + 220.*t8598*t8712*var5[6] + 240.*t8541*t8555*t8585*var5[8] - 260.*t8598*t8712*var5[8] + 100.*t8598*t8712*var5[10] + (-5.*t8554*t8611*t8627*var5[0] - 20.*t8555*t8590*t8612*var5[2] + 5.*t8554*t8611*t8627*var5[2] - 30.*t8581*t8591*t8598*var5[4] + 20.*t8555*t8590*t8612*var5[4] + 30.*t8581*t8591*t8598*var5[6] - 20.*t8541*t8585*t8618*var5[6] + 20.*t8541*t8585*t8618*var5[8] - 5.*t8709*t8712*var5[8] + 5.*t8709*t8712*var5[10])*var9[0] + (20.*t8554*t8590*t8612*var5[0] - 5.*t8611*t8627*var5[0] + 60.*t8555*t8581*t8591*var5[2] - 60.*t8554*t8590*t8612*var5[2] + 5.*t8611*t8627*var5[2] - 150.*t8555*t8581*t8591*var5[4] + 60.*t8541*t8585*t8598*var5[4] + 40.*t8554*t8590*t8612*var5[4] + 90.*t8555*t8581*t8591*var5[6] - 140.*t8541*t8585*t8598*var5[6] + 20.*t8618*t8712*var5[6] + 80.*t8541*t8585*t8598*var5[8] - 45.*t8618*t8712*var5[8] + 25.*t8618*t8712*var5[10])*var9[1];
  p_output1[12]=-40.*t8590*t8612*var5[0] - 60.*t8591*t8611*t8764*var5[0] - 180.*t8554*t8581*t8591*var5[2] + 60.*t8590*t8591*var5[2] + 80.*t8590*t8612*var5[2] - 120.*t8554*t8585*t8590*t8764*var5[2] + 120.*t8591*t8611*t8764*var5[2] - 240.*t8541*t8555*t8585*var5[4] + 120.*t8554*t8581*t8585*var5[4] + 360.*t8554*t8581*t8591*var5[4] - 120.*t8590*t8591*var5[4] - 40.*t8590*t8612*var5[4] - 60.*t8555*t8581*t8764*var5[4] + 240.*t8554*t8585*t8590*t8764*var5[4] - 60.*t8591*t8611*t8764*var5[4] + 60.*t8541*t8555*var5[6] + 480.*t8541*t8555*t8585*var5[6] - 240.*t8554*t8581*t8585*var5[6] - 180.*t8554*t8581*t8591*var5[6] + 60.*t8590*t8591*var5[6] - 100.*t8598*t8712*var5[6] + 120.*t8555*t8581*t8764*var5[6] - 120.*t8554*t8585*t8590*t8764*var5[6] - 120.*t8541*t8555*var5[8] - 240.*t8541*t8555*t8585*var5[8] + 120.*t8554*t8581*t8585*var5[8] + 200.*t8598*t8712*var5[8] - 60.*t8555*t8581*t8764*var5[8] + 60.*t8541*t8555*var5[10] - 100.*t8598*t8712*var5[10] + (-5.*t8627*t8764*var5[0] + 5.*t8582*t8627*var5[2] - 5.*t8554*t8611*t8627*var5[2] - 20.*t8554*t8582*t8612*t8764*var5[2] - 20.*t8555*t8590*t8612*var5[4] + 20.*t8554*t8611*t8612*var5[4] - 30.*t8555*t8591*t8611*t8764*var5[4] + 30.*t8555*t8590*t8591*var5[6] - 30.*t8581*t8591*t8598*var5[6] - 20.*t8585*t8590*t8598*t8764*var5[6] + 20.*t8581*t8585*t8598*var5[8] - 20.*t8541*t8585*t8618*var5[8] - 5.*t8581*t8618*t8764*var5[8] + 5.*t8541*t8618*var5[10] - 5.*t8709*t8712*var5[10])*var9[0] + (5.*t8611*t8627*var5[0] + 20.*t8582*t8612*t8764*var5[0] + 40.*t8554*t8590*t8612*var5[2] - 20.*t8611*t8612*var5[2] - 5.*t8611*t8627*var5[2] + 60.*t8554*t8591*t8611*t8764*var5[2] - 20.*t8582*t8612*t8764*var5[2] + 90.*t8555*t8581*t8591*var5[4] - 60.*t8554*t8590*t8591*var5[4] - 40.*t8554*t8590*t8612*var5[4] + 20.*t8611*t8612*var5[4] + 60.*t8555*t8585*t8590*t8764*var5[4] - 60.*t8554*t8591*t8611*t8764*var5[4] - 60.*t8555*t8581*t8585*var5[6] - 90.*t8555*t8581*t8591*var5[6] + 60.*t8554*t8590*t8591*var5[6] + 80.*t8541*t8585*t8598*var5[6] - 60.*t8555*t8585*t8590*t8764*var5[6] + 20.*t8581*t8598*t8764*var5[6] + 60.*t8555*t8581*t8585*var5[8] - 20.*t8541*t8598*var5[8] - 80.*t8541*t8585*t8598*var5[8] + 25.*t8618*t8712*var5[8] - 20.*t8581*t8598*t8764*var5[8] + 20.*t8541*t8598*var5[10] - 25.*t8618*t8712*var5[10])*var9[1];
  p_output1[13]=60.*t2660*t8590*t8591*var5[1] + 120.*t2660*t8554*t8581*t8585*var5[3] - 180.*t2660*t8590*t8591*var5[3] + 60.*t2660*t8541*t8555*var5[5] - 360.*t2660*t8554*t8581*t8585*var5[5] + 180.*t2660*t8590*t8591*var5[5] - 180.*t2660*t8541*t8555*var5[7] + 360.*t2660*t8554*t8581*t8585*var5[7] - 60.*t2660*t8590*t8591*var5[7] + 180.*t2660*t8541*t8555*var5[9] - 120.*t2660*t8554*t8581*t8585*var5[9] - 60.*t2660*t8541*t8555*var5[11] + (5.*t2660*t8582*t8627*var5[1] + 20.*t2660*t8554*t8611*t8612*var5[3] - 5.*t2660*t8582*t8627*var5[3] + 30.*t2660*t8555*t8590*t8591*var5[5] - 20.*t2660*t8554*t8611*t8612*var5[5] - 30.*t2660*t8555*t8590*t8591*var5[7] + 20.*t2660*t8581*t8585*t8598*var5[7] - 20.*t2660*t8581*t8585*t8598*var5[9] + 5.*t2660*t8541*t8618*var5[9] - 5.*t2660*t8541*t8618*var5[11])*var9[0] + (-20.*t2660*t8611*t8612*var5[1] - 60.*t2660*t8554*t8590*t8591*var5[3] + 40.*t2660*t8611*t8612*var5[3] - 60.*t2660*t8555*t8581*t8585*var5[5] + 120.*t2660*t8554*t8590*t8591*var5[5] - 20.*t2660*t8611*t8612*var5[5] + 120.*t2660*t8555*t8581*t8585*var5[7] - 60.*t2660*t8554*t8590*t8591*var5[7] - 20.*t2660*t8541*t8598*var5[7] - 60.*t2660*t8555*t8581*t8585*var5[9] + 40.*t2660*t8541*t8598*var5[9] - 20.*t2660*t8541*t8598*var5[11])*var9[1];
  p_output1[14]=60.*t2644*t812*t8590*t8591*var5[1] + 120.*t2644*t812*t8554*t8581*t8585*var5[3] - 180.*t2644*t812*t8590*t8591*var5[3] + 60.*t2644*t812*t8541*t8555*var5[5] - 360.*t2644*t812*t8554*t8581*t8585*var5[5] + 180.*t2644*t812*t8590*t8591*var5[5] - 180.*t2644*t812*t8541*t8555*var5[7] + 360.*t2644*t812*t8554*t8581*t8585*var5[7] - 60.*t2644*t812*t8590*t8591*var5[7] + 180.*t2644*t812*t8541*t8555*var5[9] - 120.*t2644*t812*t8554*t8581*t8585*var5[9] - 60.*t2644*t812*t8541*t8555*var5[11] + (5.*t2644*t812*t8582*t8627*var5[1] + 20.*t2644*t812*t8554*t8611*t8612*var5[3] - 5.*t2644*t812*t8582*t8627*var5[3] + 30.*t2644*t812*t8555*t8590*t8591*var5[5] - 20.*t2644*t812*t8554*t8611*t8612*var5[5] - 30.*t2644*t812*t8555*t8590*t8591*var5[7] + 20.*t2644*t812*t8581*t8585*t8598*var5[7] - 20.*t2644*t812*t8581*t8585*t8598*var5[9] + 5.*t2644*t812*t8541*t8618*var5[9] - 5.*t2644*t812*t8541*t8618*var5[11])*var9[0] + (-20.*t2644*t812*t8611*t8612*var5[1] - 60.*t2644*t812*t8554*t8590*t8591*var5[3] + 40.*t2644*t812*t8611*t8612*var5[3] - 60.*t2644*t812*t8555*t8581*t8585*var5[5] + 120.*t2644*t812*t8554*t8590*t8591*var5[5] - 20.*t2644*t812*t8611*t8612*var5[5] + 120.*t2644*t812*t8555*t8581*t8585*var5[7] - 60.*t2644*t812*t8554*t8590*t8591*var5[7] - 20.*t2644*t812*t8541*t8598*var5[7] - 60.*t2644*t812*t8555*t8581*t8585*var5[9] + 40.*t2644*t812*t8541*t8598*var5[9] - 20.*t2644*t812*t8541*t8598*var5[11])*var9[1];
  p_output1[15]=var9[0];
  p_output1[16]=var9[1];
  p_output1[17]=1.;
  p_output1[18]=t8676;
  p_output1[19]=t8684;
  p_output1[20]=t8692;
  p_output1[21]=t8700;
  p_output1[22]=t8707;
  p_output1[23]=t8711;
  p_output1[24]=-60.*t8554*t8581*t8591*var5[1] + 40.*t8590*t8612*var5[1] - 120.*t8541*t8555*t8585*var5[3] + 300.*t8554*t8581*t8591*var5[3] - 80.*t8590*t8612*var5[3] + 480.*t8541*t8555*t8585*var5[5] - 420.*t8554*t8581*t8591*var5[5] + 40.*t8590*t8612*var5[5] - 60.*t8598*t8712*var5[5] - 600.*t8541*t8555*t8585*var5[7] + 180.*t8554*t8581*t8591*var5[7] + 220.*t8598*t8712*var5[7] + 240.*t8541*t8555*t8585*var5[9] - 260.*t8598*t8712*var5[9] + 100.*t8598*t8712*var5[11] + (-5.*t8554*t8611*t8627*var5[1] - 20.*t8555*t8590*t8612*var5[3] + 5.*t8554*t8611*t8627*var5[3] - 30.*t8581*t8591*t8598*var5[5] + 20.*t8555*t8590*t8612*var5[5] + 30.*t8581*t8591*t8598*var5[7] - 20.*t8541*t8585*t8618*var5[7] + 20.*t8541*t8585*t8618*var5[9] - 5.*t8709*t8712*var5[9] + 5.*t8709*t8712*var5[11])*var9[0] + (20.*t8554*t8590*t8612*var5[1] - 5.*t8611*t8627*var5[1] + 60.*t8555*t8581*t8591*var5[3] - 60.*t8554*t8590*t8612*var5[3] + 5.*t8611*t8627*var5[3] - 150.*t8555*t8581*t8591*var5[5] + 60.*t8541*t8585*t8598*var5[5] + 40.*t8554*t8590*t8612*var5[5] + 90.*t8555*t8581*t8591*var5[7] - 140.*t8541*t8585*t8598*var5[7] + 20.*t8618*t8712*var5[7] + 80.*t8541*t8585*t8598*var5[9] - 45.*t8618*t8712*var5[9] + 25.*t8618*t8712*var5[11])*var9[1];
  p_output1[25]=-40.*t8590*t8612*var5[1] - 60.*t8591*t8611*t8764*var5[1] - 180.*t8554*t8581*t8591*var5[3] + 60.*t8590*t8591*var5[3] + 80.*t8590*t8612*var5[3] - 120.*t8554*t8585*t8590*t8764*var5[3] + 120.*t8591*t8611*t8764*var5[3] - 240.*t8541*t8555*t8585*var5[5] + 120.*t8554*t8581*t8585*var5[5] + 360.*t8554*t8581*t8591*var5[5] - 120.*t8590*t8591*var5[5] - 40.*t8590*t8612*var5[5] - 60.*t8555*t8581*t8764*var5[5] + 240.*t8554*t8585*t8590*t8764*var5[5] - 60.*t8591*t8611*t8764*var5[5] + 60.*t8541*t8555*var5[7] + 480.*t8541*t8555*t8585*var5[7] - 240.*t8554*t8581*t8585*var5[7] - 180.*t8554*t8581*t8591*var5[7] + 60.*t8590*t8591*var5[7] - 100.*t8598*t8712*var5[7] + 120.*t8555*t8581*t8764*var5[7] - 120.*t8554*t8585*t8590*t8764*var5[7] - 120.*t8541*t8555*var5[9] - 240.*t8541*t8555*t8585*var5[9] + 120.*t8554*t8581*t8585*var5[9] + 200.*t8598*t8712*var5[9] - 60.*t8555*t8581*t8764*var5[9] + 60.*t8541*t8555*var5[11] - 100.*t8598*t8712*var5[11] + (-5.*t8627*t8764*var5[1] + 5.*t8582*t8627*var5[3] - 5.*t8554*t8611*t8627*var5[3] - 20.*t8554*t8582*t8612*t8764*var5[3] - 20.*t8555*t8590*t8612*var5[5] + 20.*t8554*t8611*t8612*var5[5] - 30.*t8555*t8591*t8611*t8764*var5[5] + 30.*t8555*t8590*t8591*var5[7] - 30.*t8581*t8591*t8598*var5[7] - 20.*t8585*t8590*t8598*t8764*var5[7] + 20.*t8581*t8585*t8598*var5[9] - 20.*t8541*t8585*t8618*var5[9] - 5.*t8581*t8618*t8764*var5[9] + 5.*t8541*t8618*var5[11] - 5.*t8709*t8712*var5[11])*var9[0] + (5.*t8611*t8627*var5[1] + 20.*t8582*t8612*t8764*var5[1] + 40.*t8554*t8590*t8612*var5[3] - 20.*t8611*t8612*var5[3] - 5.*t8611*t8627*var5[3] + 60.*t8554*t8591*t8611*t8764*var5[3] - 20.*t8582*t8612*t8764*var5[3] + 90.*t8555*t8581*t8591*var5[5] - 60.*t8554*t8590*t8591*var5[5] - 40.*t8554*t8590*t8612*var5[5] + 20.*t8611*t8612*var5[5] + 60.*t8555*t8585*t8590*t8764*var5[5] - 60.*t8554*t8591*t8611*t8764*var5[5] - 60.*t8555*t8581*t8585*var5[7] - 90.*t8555*t8581*t8591*var5[7] + 60.*t8554*t8590*t8591*var5[7] + 80.*t8541*t8585*t8598*var5[7] - 60.*t8555*t8585*t8590*t8764*var5[7] + 20.*t8581*t8598*t8764*var5[7] + 60.*t8555*t8581*t8585*var5[9] - 20.*t8541*t8598*var5[9] - 80.*t8541*t8585*t8598*var5[9] + 25.*t8618*t8712*var5[9] - 20.*t8581*t8598*t8764*var5[9] + 20.*t8541*t8598*var5[11] - 25.*t8618*t8712*var5[11])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 26, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "J_d2y_timevc_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_d2y_timevc_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
