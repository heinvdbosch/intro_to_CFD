#define NPI        		20        /* number of grid cells in x-direction [-] */
#define NPJ        		20        /* number of grid cells in y-direction [-] */
#define XMAX       		20        /* width of the domain [m] */ 
#define YMAX       		0.2       /* height of the domain [m] */
#define PI         		3.1415927 /* value of pi [-] */
#define MAX_ITER   		100       /* maximum number of outer iterations [-] */
#define U_ITER     		1         /* number of Newton iterations for u equation [-] */
#define V_ITER    		1         /* number of Newton iterations for u equation [-] */
#define PC_ITER    		30        /* number of Newton iterations for pc equation [-] */
#define T_ITER     		1         /* number of Newton iterations for T equation [-] */
#define EPS_ITER   		1         /* number of Newton iterations for Eps equation [-] */
#define K_ITER     		1         /* number of Newton iterations for K equation [-] */
#define SMAXneeded 		1E-8      /* maximum accepted error in mass balance [kg/s] */
#define SAVGneeded 		1E-9      /* maximum accepted average error in mass balance [kg/s] */
#define LARGE      		1E30      /* arbitrary very large value [-] */
#define SMALL      		1E-30     /* arbitrary very small value [-] */
#define P_ATM      		101000.   /* athmospheric pressure [Pa] */
#define U_IN       		.2       /* in flow velocity [m/s] */
#define V_IN       		.02       /* in flow velocity [m/s] */

#define Cmu        		0.09
#define sigmak       	1.
#define sigmaeps     	1.3
#define C1eps      		1.44
#define C2eps      		1.92
#define kappa      		0.4187
#define ERough     		9.793
#define Ti         		0.04

#define CHIMNEY_pos 	50*NPI/100	/* Starting postition of the chimney */
#define CHIMNEY_wall	NPI/100  /* wall tickness*/
#define CHIMNEY_w		10*NPI/100	/* inside width of the chimney */
#define CHIMNEY_h		20*NPJ/100	/* Height of the chimney */


