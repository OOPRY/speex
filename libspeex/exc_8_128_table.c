/* Copyright (C) 2002 Jean-Marc Valin 
   File: exc_8_128_table.c
   Codebook for excitation in narrowband CELP mode (7000 bps)
  
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:

   1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.  

   2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

   3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
*/

float exc_8_128_table[128][8]={
{-0.331492,0.203871,0.386807,-0.954330,0.139839,-0.393049,0.964879,-0.438279},
{-0.125630,-0.262089,0.212513,-0.197138,-0.132923,0.463029,-2.191379,1.183216},
{0.152235,0.466616,0.279553,0.140392,0.321444,-0.705757,0.525300,0.950599},
{-0.021162,1.394966,-1.509472,-0.607848,0.085995,0.771679,0.057404,-0.451897},
{1.040362,0.904743,1.019818,0.836015,0.787295,0.599370,0.514674,0.320630},
{-0.025035,1.137433,1.007764,0.095396,-0.753928,-1.143808,-0.475483,-0.132821},
{0.335366,-0.346668,1.109376,-1.789480,0.854396,0.758773,-1.320680,0.997511},
{0.945549,-0.551366,-0.414693,0.641703,-0.532272,0.459163,-1.137920,0.594698},
{-0.272658,0.742469,-0.455203,-0.183106,1.167172,-0.323576,0.792870,-1.248116},
{0.036782,0.024931,1.043703,-0.412486,-1.561490,-0.279020,0.283949,0.737628},
{0.529681,-0.108087,0.027044,-0.052797,0.208024,-0.104929,-0.065240,-0.165212},
{0.183102,0.522252,-1.912226,1.721155,0.610214,-0.491724,0.436661,-0.326454},
{-1.323745,-1.189573,-0.944590,-0.279479,-0.032150,0.346999,0.544361,0.482553},
{-0.397077,-0.124299,0.217842,0.499439,0.271116,0.064819,0.214940,-0.333965},
{-0.126032,-1.193262,0.310696,0.238086,-0.204416,0.655925,-0.183657,0.261288},
{0.207975,0.312318,-0.723408,1.281536,-0.392292,0.296900,0.222887,-1.302335},
{-0.314730,0.174055,-0.317568,0.294992,-0.311999,1.136037,-0.110855,-3.172744},
{0.153026,0.172182,-1.409403,0.617790,1.021137,-0.269625,-1.094277,0.446519},
{-0.042691,-0.026237,0.011576,0.426860,1.455646,-1.624663,-0.447196,-0.219152},
{-2.923980,0.537468,0.285813,0.063968,-0.112731,-0.103716,-0.010835,-0.208917},
{-0.967845,-0.197077,1.693304,0.103888,-1.043443,0.039097,0.862621,-0.377290},
{-0.611219,0.088222,1.666577,1.104250,0.132641,-0.439913,-0.706771,-0.083854},
{-0.124454,-1.030867,1.934769,-1.174751,0.497576,-0.086345,0.118185,0.360846},
{-1.913558,1.386428,-0.700302,0.591214,-0.751539,0.638605,-0.573716,0.163818},
{-0.346022,0.888449,-0.987721,1.251678,0.290858,-1.732351,1.138411,-0.393898},
{-0.331706,0.309017,-0.750781,0.087694,-0.396559,1.019093,-1.283152,-0.033587},
{0.718752,-0.719920,0.819767,-0.687769,0.653054,-0.458066,1.072999,-0.659436},
{-0.423881,0.084469,-0.165029,-0.055076,0.084588,0.014415,-0.137629,-0.288398},
{-0.091371,-1.629401,0.291112,1.236877,0.095668,-0.983165,-0.169648,0.458356},
{0.976599,0.645166,-0.892773,-0.707482,1.049211,-0.086226,-0.918610,-0.095419},
{0.318007,-1.344944,0.354273,0.464902,0.696871,0.573661,0.147138,-0.194148},
{0.378441,-1.380839,-0.510944,0.429554,0.806833,-0.137099,-0.978904,-0.222291},
{-0.133297,0.429255,-0.120531,0.635168,-0.527003,-0.020389,2.099508,-0.642771},
{0.250533,-0.324332,0.162057,-0.189108,0.349432,-0.294906,-0.728212,3.180924},
{-1.516292,0.710028,1.507485,-1.185444,-0.117650,-0.755234,0.167712,0.331423},
{-0.467272,1.432394,-2.140914,-0.045810,1.409237,-0.618911,0.436749,-0.027918},
{-1.250649,-0.483042,-0.454124,0.251760,0.918016,1.347190,0.561639,0.205240},
{-0.114316,-0.233496,-0.287736,-0.438069,-0.755009,-0.989497,-1.015796,-0.857645},
{0.349464,-0.304069,0.319959,-0.614492,1.859437,-0.481278,-0.922291,0.889929},
{0.145400,-0.320115,-0.199541,2.152395,-0.548960,-0.203605,-0.333230,0.005943},
{-0.212773,-0.625715,0.233817,0.545551,0.031526,-0.953436,0.548239,-0.832925},
{0.098455,0.038632,-0.295834,0.325764,-0.588844,2.265056,0.201232,-1.590979},
{0.250111,0.164345,1.053845,-0.319900,0.218337,-0.473926,-0.175554,-0.184779},
{0.063992,-0.409111,-0.528455,0.861646,-0.055637,-0.309495,0.199318,0.447039},
{0.201979,0.349852,-0.617869,-0.884746,-1.281129,-0.061466,0.898255,0.609457},
{-0.353583,-0.568007,-0.456232,-0.455824,-0.365639,-0.228978,-0.194218,-0.205655},
{0.480867,-1.319070,1.319962,0.120018,-0.392445,0.554945,-1.233700,0.979443},
{1.384822,-1.600500,0.142906,1.596397,-0.468495,0.422343,0.024052,0.252705},
{0.479386,0.177297,-0.067942,-0.851361,-0.750783,1.342596,1.425781,-0.163080},
{0.086371,0.089336,-0.182324,0.125975,0.300165,-0.038791,-0.676337,1.009037},
{-0.534360,1.084418,-0.547173,-1.285406,2.059426,-0.509250,0.112275,0.384613},
{-0.933997,1.200704,0.515231,-0.390240,-1.129843,0.732505,-0.015993,-0.393688},
{-0.454905,-0.506097,1.043364,1.377662,-1.500240,-0.669019,0.004622,0.045432},
{-1.445728,-0.168967,0.248588,1.524160,0.834583,0.046518,-0.171925,-0.102499},
{0.066279,-0.332414,0.715613,-0.734908,0.022706,0.727563,-0.034714,-0.685951},
{-1.424453,2.173355,-1.696158,0.787094,-0.476016,0.055421,0.270473,-0.544580},
{-1.789739,0.980772,0.136591,0.170226,0.834948,-0.803213,0.549048,-0.033362},
{0.089328,-0.434739,0.898747,-0.575445,-0.526211,2.020796,-0.189367,-0.018014},
{1.648083,-0.420167,0.117290,0.106873,-0.070668,-0.545944,0.838147,-0.222212},
{-0.950717,0.553874,0.379997,0.719944,-0.236222,-0.022054,-0.876960,-0.067510},
{1.193153,-0.351615,-0.611451,0.870105,0.382472,-1.446071,-0.455615,0.235666},
{-0.242590,1.027520,0.112480,-1.106057,0.366304,1.366055,-0.745580,-0.373497},
{1.821669,-0.573871,0.686741,-0.228870,0.442115,-0.105199,-0.733547,0.604592},
{2.866314,0.032150,-0.819617,-0.356541,-0.136092,0.177547,-0.261856,-0.047741},
{0.491103,-0.173490,-0.118387,-0.170252,0.001112,-0.325397,-0.011131,-1.515541},
{0.577876,-0.166457,0.043343,-0.857330,-0.157448,0.704927,-0.544861,1.036200},
{-0.688201,0.036493,-0.034797,-0.456993,1.174500,-0.016922,-0.167590,0.178290},
{-2.175777,2.756310,-0.106052,-0.399457,0.026009,-0.068858,0.232508,-0.118038},
{-0.062884,0.229896,0.367894,0.645174,0.817412,0.889504,0.876625,0.703817},
{1.786800,1.187615,0.802912,0.207506,-0.201840,-0.373424,-0.479668,-0.457609},
{0.189216,-0.638630,0.830076,-0.551023,0.028447,-0.416637,-0.396911,0.535845},
{-0.039095,-0.032044,-0.399545,-0.016113,-0.434340,0.873804,0.222587,0.302256},
{-0.124948,0.295648,-0.092883,-0.125240,0.513684,-1.576379,1.869329,0.138658},
{0.592455,-1.037163,0.758118,0.446980,-2.068673,1.053105,-0.333520,-0.252999},
{1.255616,-0.263497,-0.186406,-0.671270,1.001585,0.767108,0.163303,0.152225},
{1.507591,-0.386205,-1.729619,0.978504,-0.173159,0.226659,-0.000949,-0.214555},
{0.670578,-0.437833,-1.495667,-1.233824,0.175649,0.648783,0.682447,0.372502},
{-0.122918,0.394459,0.205886,0.127230,-0.010114,0.255921,0.070589,0.261349},
{0.801119,0.348299,0.345374,0.342898,-0.213652,0.585956,-0.050005,0.236531},
{-0.052471,-0.110437,-0.209191,0.718844,-2.116751,0.409335,1.635996,-0.883676},
{0.256428,-0.432725,0.659737,0.521894,-0.838494,0.576911,-0.281929,-1.199970},
{-0.985765,1.233244,0.036200,-0.776446,0.792369,-0.133075,-0.983349,0.564838},
{-0.055302,-0.005619,0.384443,-0.320228,0.393409,-2.041758,0.512971,2.003786},
{-1.125468,0.836801,-0.396703,0.476200,-0.384048,-0.680632,0.581544,-0.083480},
{-1.294278,-0.094593,0.209229,0.116970,-0.602644,0.387242,1.050740,0.076930},
{0.295048,1.012527,0.105214,0.785576,0.609554,-0.054913,-0.322686,-0.497024},
{1.395098,-2.400055,1.382779,-0.574416,0.165958,0.153257,-0.326480,0.113246},
{-0.934244,0.513635,-0.661888,-0.270615,-0.075808,-0.216076,-0.278732,0.586388},
{-0.988797,0.899761,-0.644949,0.387286,-0.221221,0.369318,1.119712,-1.082391},
{0.224364,-0.585431,0.401186,-0.351326,-0.453701,2.005324,-1.809923,-0.253241},
{0.281001,-0.203922,0.762173,-1.641391,1.344787,-1.040708,0.298763,0.065764},
{0.483738,0.807265,-0.319563,0.140852,-0.703043,-0.220756,-0.649146,-0.136240},
{1.111445,-0.687498,-0.401867,-0.124688,-0.425654,-0.563353,0.139132,0.936559},
{0.490259,1.206584,-0.200035,-0.685454,0.072594,0.552688,0.115809,-0.932095},
{0.660697,-1.268870,1.550549,0.332074,-0.827601,-0.264393,0.476039,0.277750},
{0.754499,-0.504853,-1.058979,-0.178903,0.300539,0.999536,-0.244938,-0.824850},
{-0.260068,0.125071,-0.201891,0.021560,-0.103164,-0.454436,1.591943,-2.703050},
{-0.550062,-0.145510,0.094114,0.393192,-0.713990,0.220623,-0.256602,1.562806},
{-1.105577,0.892471,0.990719,-0.163441,0.226091,0.557750,0.334117,-0.443262},
{-0.579242,0.465463,-0.730298,0.247452,0.415250,-1.625026,-0.219625,0.582903},
{-1.372885,-1.468718,0.468087,0.153855,0.642141,-0.130503,0.082048,-0.104914},
{1.274093,0.136603,-0.238218,-1.026089,-0.890095,-0.772693,-0.329346,-0.050124},
{0.188257,-0.153558,0.357840,-0.431967,0.614558,-1.417439,-1.561732,1.337177},
{-0.194877,0.053879,-0.533122,1.077366,-1.607939,0.956006,-0.228703,-0.106905},
{-0.095601,0.009064,0.002394,0.084082,-0.811425,-0.873563,2.223656,1.463086},
{-0.188245,-0.061316,0.168311,0.273466,-0.155348,0.173726,-1.811762,-1.411801},
{0.420394,-1.147673,-0.058836,-0.667471,0.403598,-0.285297,0.570391,0.328273},
{0.029637,0.041681,-0.488507,1.513555,-1.238298,-1.608766,0.892188,0.083428},
{0.899454,1.111777,0.664948,-1.037593,-0.601032,-0.019009,0.450931,0.550192},
{-1.107095,-0.946588,-1.085173,-0.960329,-0.892158,-0.675214,-0.536247,-0.329282},
{1.534793,-0.878520,0.243291,-0.577057,-0.698711,0.647174,-0.259247,-0.254685},
{1.059871,-0.692781,-0.298041,0.721482,-0.678085,0.088746,1.021963,-0.237371},
{0.201968,0.529343,-0.139392,0.148092,-0.707031,-0.259691,0.608666,-0.335335},
{-0.367723,-0.010754,0.137424,-0.394912,0.442052,0.346274,0.934708,1.631703},
{-0.674835,0.445069,0.300006,-2.251839,0.774986,0.837005,0.099852,0.038682},
{-1.257437,-0.272556,1.045792,-0.431044,0.150844,0.567709,-0.756594,0.113441},
{-1.543460,-0.178422,0.819097,0.511547,-0.357860,-1.180516,-0.144516,0.314900},
{-0.104704,-0.109501,-0.118033,0.296348,1.613597,0.703211,-0.854462,-1.144876},
{-0.014142,-0.445680,1.669287,-1.832889,-1.041865,1.023590,-0.210824,0.035635},
{-0.020657,0.829573,-1.652218,1.109834,-0.588929,0.646257,-0.176350,0.300769},
{-0.026431,0.515792,-0.775974,-0.081695,0.461297,-0.753201,0.538208,-0.329348},
{0.166781,-0.195644,0.239849,-0.376881,1.298876,0.546300,-2.304415,-0.277072},
{1.798196,-1.633479,0.980541,-0.743534,0.945904,-0.694650,0.170191,-0.208899},
{-1.146633,0.137465,-0.930619,0.683229,-0.276209,0.359184,0.029966,-0.366745},
{0.223230,-0.775257,-1.409359,0.344877,1.138070,0.167799,0.527628,-0.091717},
{-0.351297,1.511748,-0.342735,-1.331482,-0.094673,-0.291265,0.181148,-0.042352},
{2.483520,-2.411442,-0.502123,0.124620,0.123284,-0.112840,-0.173959,0.103491},
{1.044050,0.984022,-1.307117,-0.180794,-0.047926,-0.215923,0.599406,0.394659}};