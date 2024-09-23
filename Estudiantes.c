#include "Estudiantes.h"

Alumno** obtener_estudiantes(int *n)
{
    char * csv =
"1046828,2,nicole,ferguson,2004,6,11     \
\n5655916,8,chad,archer,1997,8,19          \
\n556584,8,matthew,meyer,2001,10,23        \
\n4941384,2,james,gibson,1999,6,25         \
\n1601792,4,justin,kaiser,2001,8,14        \
\n8119204,8,adriana,brown,1995,12,24       \
\n9482580,8,seth,simpson,2004,12,18        \
\n8555842,4,rodney,perez,1996,9,18         \
\n981699,1,david,ellis,1990,8,12           \
\n3990184,4,christina,chandler,1994,7,10   \
\n2031046,4,jacob,ramsey,1996,9,8          \
\n1449421,3,jill,wilson,2003,8,5           \
\n9390705,1,xavier,hudson,1998,11,1        \
\n1181103,1,jessica,williams,1995,2,6      \
\n9185408,3,crystal,henry,2003,6,9         \
\n7029368,8,luke,pierce,1991,7,14          \
\n7893332,5,kim,mccall,1999,5,28           \
\n7431549,1,rodney,burton,1991,11,16       \
\n137379,2,adam,tanner,1999,2,8            \
\n6351796,3,laura,nunez,1993,4,15          \
\n3174501,8,susan,leonard,1991,4,26        \
\n2178747,5,courtney,miller,2005,9,24      \
\n8995140,2,darren,matthews,2005,4,11      \
\n5948964,3,jasmine,huffman,2000,8,2       \
\n7008095,6,brian,olson,1995,8,9           \
\n2848283,4,christopher,mcintosh,1999,8,4  \
\n8388947,8,michael,marshall,1995,8,11     \
\n8527614,7,emily,bowman,1996,8,3          \
\n7913620,6,danielle,holloway,2002,7,3     \
\n2663448,3,max,tate,2001,7,7              \
\n5542367,5,christine,kane,1994,12,10      \
\n2454929,2,donald,santana,1992,8,8        \
\n8358948,5,alexander,austin,1996,8,27     \
\n7654949,8,vincent,owens,1996,12,26       \
\n9956165,3,angela,thomas,2003,4,23        \
\n3724914,7,donald,lee,1996,6,15           \
\n2376421,6,fernando,davis,1991,6,24       \
\n556910,1,amy,anderson,2002,8,24          \
\n5473152,7,april,parker,2001,2,23         \
\n2389699,8,jennifer,scott,2001,7,7        \
\n4974529,2,zachary,walker,2004,3,12       \
\n3630749,1,james,robinson,1996,5,28       \
\n6142481,5,michael,mitchell,2000,4,23     \
\n5447698,7,elizabeth,wade,2002,5,5        \
\n9380684,6,misty,hayes,2001,6,17          \
\n1722278,7,james,williams,1992,11,16      \
\n3117463,2,tony,monroe,1998,12,15         \
\n9662741,6,kathy,nash,2003,3,15           \
\n2189472,3,isaiah,anderson,1995,10,18     \
\n1291151,7,jay,patel,2004,3,12            \
\n9643940,7,edwin,taylor,2002,11,22        \
\n4575639,1,lindsay,cuevas,2000,2,4        \
\n3447011,6,raymond,bell,2000,4,18         \
\n2695386,8,tara,shepherd,1990,1,14        \
\n9199884,4,lisa,fischer,1997,2,20         \
\n5237510,4,michael,graham,1994,11,21      \
\n104000,4,leah,spencer,1995,8,2           \
\n692768,8,gregory,hodges,2001,5,25        \
\n8425664,8,matthew,petty,1997,10,26       \
\n5271480,4,leslie,miller,1995,9,21        \
\n5209528,5,douglas,henry,2001,7,1         \
\n7846163,5,james,rivera,2004,8,21         \
\n6842228,8,laura,brock,2000,7,11          \
\n4218260,7,diane,powers,1993,12,12        \
\n2513530,6,ashley,white,1992,7,26         \
\n3232236,4,robert,stanley,1997,11,28      \
\n750122,7,toni,singh,1997,11,7            \
\n9591140,6,veronica,hicks,1993,8,22       \
\n856893,7,kathryn,mendoza,1993,3,2        \
\n8498433,8,aaron,santana,1997,1,1         \
\n6654401,8,margaret,johnson,1991,1,16     \
\n498359,8,taylor,chavez,1990,4,20         \
\n9857178,2,betty,torres,2001,10,7         \
\n2691505,7,douglas,prince,1997,6,27       \
\n2926683,3,timothy,novak,2005,12,16       \
\n8660087,1,hannah,west,1991,4,27          \
\n8642578,3,timothy,gonzales,2004,2,17     \
\n4355553,5,andrew,santana,1998,8,6        \
\n6858686,3,theodore,lyons,2003,12,4       \
\n6579531,2,marie,garcia,1991,5,22         \
\n3326346,2,caitlin,smith,1998,1,7         \
\n4981431,2,michael,rodriguez,1999,4,19    \
\n8291749,6,james,swanson,1991,4,1         \
\n3420363,8,thomas,mendoza,2004,2,9        \
\n5378763,2,bradley,ramirez,2003,5,2       \
\n4909080,6,christine,miller,2000,4,17     \
\n7008097,7,jay,martinez,2004,7,17         \
\n7096971,4,anthony,jensen,1991,6,8        \
\n4354939,7,sarah,bowman,1997,1,13         \
\n3122349,1,patricia,hutchinson,1996,5,16  \
\n7206152,5,kevin,green,1991,10,16         \
\n7812946,8,ashley,james,1990,2,28         \
\n977846,5,james,williams,2004,8,6         \
\n4449736,8,heather,stone,1990,4,3         \
\n5908598,6,jasmin,smith,1997,9,14         \
\n5736055,7,daniel,foster,1991,6,17        \
\n393324,4,lisa,gonzalez,1996,10,5         \
\n2516961,4,katrina,hernandez,1997,5,19    \
\n1714946,5,charles,taylor,1998,5,14       \
\n1718062,8,robert,washington,2002,8,2          \
\n9763921,2,teresa,arias,2004,11,12             \
\n5744095,12,kevin,miller,2004,3,14             \
\n6500908,3,ethan,lee,2008,9,12                 \
\n2348816,14,jasmine,harper,2009,12,6           \
\n7480164,7,diane,kelly,2000,8,17               \
\n6873742,10,brandon,thomas,1998,10,17          \
\n9257290,2,debbie,joseph,2006,9,19             \
\n7201488,14,matthew,andrade,1998,6,8           \
\n4632128,3,teresa,erickson,1992,11,28          \
\n1597343,13,emily,hardy,2004,4,26              \
\n6178133,8,chloe,scott,1998,7,21               \
\n7970904,4,maria,graham,1995,4,21              \
\n5180119,4,lisa,schmidt,1990,9,17              \
\n8003771,1,paul,barnes,1996,6,22               \
\n1376027,3,johnny,lee,2003,1,27                \
\n4970054,6,arthur,mendoza,1992,10,5            \
\n9358169,9,philip,shaw,1996,6,27               \
\n4672199,10,mike,clark,2003,2,7                \
\n9575457,14,linda,jimenez,2008,1,4             \
\n6772431,9,christian,rocha,1995,9,13           \
\n2609911,5,diana,navarro,1995,9,22             \
\n3469886,2,morgan,richardson,1997,11,8         \
\n7208880,5,alan,davidson,2005,11,9             \
\n8026955,12,fred,mitchell,1997,3,21            \
\n1946668,10,rachel,haynes,1991,7,9             \
\n1063038,12,tiffany,barnett,2006,1,18          \
\n1002645,1,george,jones,1995,8,28              \
\n9642878,12,perry,thomas,2000,7,21             \
\n7835643,14,sean,blair,2009,10,19              \
\n4194246,1,richard,johnson,2009,2,1            \
\n3187108,10,rhonda,smith,2002,10,19            \
\n7760130,12,james,everett,1995,5,16            \
\n3645292,11,donald,kline,2001,10,8             \
\n9880717,14,james,jones,2006,10,16             \
\n2909077,6,frank,porter,2009,2,22              \
\n6873231,14,nicholas,ferguson,1995,5,23        \
\n9739857,14,jonathan,smith,2001,8,22           \
\n6013483,6,mary,lopez,2001,5,7                 \
\n3876690,13,charles,graham,1993,1,24           \
\n9649045,4,robert,morrow,2004,1,4              \
\n8595649,4,morgan,anderson,1994,2,19           \
\n3461802,5,james,taylor,1996,9,4               \
\n5888216,14,joshua,parrish,2007,1,14           \
\n3840555,6,lori,williams,2005,2,15             \
\n6995534,13,emily,robinson,2000,3,24           \
\n8869716,8,jeffrey,garcia,2010,12,20           \
\n1146309,3,michelle,stewart,2006,2,27          \
\n9599614,2,ronald,martin,1999,4,15             \
\n4321876,2,brooke,underwood,1991,9,24          \
\n5224612,12,samuel,taylor,2007,8,16            \
\n1543517,12,kenneth,flores,2010,4,13           \
\n8536648,7,yvette,evans,1992,9,22              \
\n2784102,2,laurie,flores,1997,5,9              \
\n5923508,11,paula,johnson,1996,4,22            \
\n7061562,2,michael,sanchez,1996,11,5           \
\n3731399,3,maria,shelton,2000,4,12             \
\n5405552,10,chase,guzman,1998,7,23             \
\n6425589,4,hailey,terry,2001,11,27             \
\n6168641,10,mary,valenzuela,2000,5,11          \
\n6786126,4,stuart,miller,1996,4,28             \
\n7764191,1,daniel,coleman,1993,2,10            \
\n6131198,8,nicholas,sims,2009,1,5              \
\n2464842,4,marcia,davis,2010,7,17              \
\n8113440,5,monica,parks,2001,11,8              \
\n6799920,4,christian,smith,1990,5,15           \
\n4649529,14,brian,roberts,1990,5,12            \
\n4272601,9,michael,schaefer,2009,2,19          \
\n8028029,12,louis,west,1995,1,11               \
\n3435950,4,crystal,johnson,2006,11,2           \
\n4944095,6,nichole,johnson,1997,12,6           \
\n2895913,13,glenn,clark,2000,3,12              \
\n7949547,7,jessica,dominguez,1998,11,25        \
\n2762955,8,julie,baxter,1998,1,9               \
\n5823488,3,rebecca,collier,2004,7,23           \
\n7043726,7,mark,cardenas,2002,6,23             \
\n3843721,7,shelly,bailey,1997,12,14            \
\n6750799,8,alison,roth,1999,7,16               \
\n4112581,13,william,clark,1998,7,4             \
\n1095728,9,timothy,smith,1999,7,9              \
\n4608774,14,karina,bowman,1993,2,4             \
\n4373985,13,laurie,fisher,1999,4,27            \
\n4629663,8,clinton,best,2000,8,14              \
\n3536157,7,jessica,combs,1990,2,27             \
\n8194958,14,david,smith,1992,11,10             \
\n5138028,2,rebecca,nguyen,1994,5,21            \
\n3348829,13,gina,benson,1996,1,7               \
\n5095001,13,david,jones,1992,1,25              \
\n7862828,11,alejandro,juarez,2003,1,13         \
\n6252870,6,noah,johnson,2005,11,6              \
\n2359368,6,dana,bartlett,2003,12,4             \
\n8211281,3,thomas,brown,1994,9,15              \
\n8358875,9,madeline,middleton,2001,12,21       \
\n9352375,7,kathleen,daniel,2007,8,21           \
\n8333791,3,michael,martinez,1990,4,21          \
\n3102999,13,alex,reyes,1994,3,27               \
\n4789610,14,nicholas,phelps,1996,3,19          \
\n2514277,9,joshua,morris,2009,12,6             \
\n6306067,6,michael,delgado,2010,6,27           \
\n4090542,2,hannah,johnson,1993,8,27            \
\n4545546,2,kristen,warner,2004,6,12            \
\n9980533,2,linda,stanley,1991,11,16            \
\n4945302,8,raymond,matthews,2002,7,1           \
\n9682561,9,ricky,brock,1999,11,5               \
\n9079481,1,jennifer,davidson,2004,10,3         \
\n7238864,1,emily,flores,1996,12,2              \
\n9116879,8,sarah,matthews,1990,6,11            \
\n5027736,13,william,ortega,1990,3,11           \
\n8223128,6,brandon,morris,1999,4,14            \
\n4702967,10,jennifer,ortega,2007,7,24          \
\n6738715,9,stephen,castro,1995,7,6             \
\n4880386,6,douglas,stewart,1991,6,9            \
\n4771245,9,daniel,wong,1998,1,6                \
\n3088269,10,sarah,brown,2008,6,5               \
\n6322825,1,steven,hunter,1999,12,3             \
\n3521824,5,christina,marshall,2005,7,23        \
\n2115091,8,zachary,brooks,1999,1,9             \
\n4548317,8,sandra,hudson,2005,12,21            \
\n9649112,7,brittany,salas,1993,7,3             \
\n5134029,11,deborah,key,1994,12,9              \
\n7897925,13,tina,sanchez,2001,11,8             \
\n6698580,14,maria,white,1996,1,21              \
\n8328589,8,jeff,taylor,1995,11,18              \
\n4932154,4,kayla,odom,1993,7,3                 \
\n7062074,12,anna,lewis,2002,2,5                \
\n4014524,6,brian,bennett,1999,3,22             \
\n2283744,12,janet,hodges,2009,6,16             \
\n9721107,5,richard,douglas,2003,9,5            \
\n4881048,13,michael,adams,1998,5,3             \
\n6746584,12,nathaniel,wilson,2008,10,2         \
\n7188019,7,rose,murray,2004,2,17               \
\n4978192,1,david,booth,2005,11,25              \
\n1066577,12,jamie,simpson,1993,10,25           \
\n1070270,10,kyle,petersen,2010,10,25           \
\n7267456,7,james,kim,1992,9,10                 \
\n2397793,4,arthur,spencer,1993,10,27           \
\n6449375,11,justin,jimenez,2008,3,7            \
\n1367804,7,holly,martinez,2005,11,3            \
\n1872843,1,jeremy,brown,2003,6,19              \
\n3271938,7,rachel,calhoun,1998,1,17            \
\n7674184,3,misty,hatfield,2000,1,16            \
\n9838612,9,steven,underwood,1995,2,12          \
\n9901477,4,dylan,cole,1995,9,20                \
\n5320838,10,michael,yates,2005,10,23           \
\n6570031,9,katrina,jones,1998,8,25             \
\n1113598,5,john,morris,2002,8,23               \
\n5490859,5,amy,summers,1994,7,20               \
\n4857232,4,leslie,daniels,2010,6,2             \
\n3463105,9,michelle,johnson,2002,8,23          \
\n2831463,12,beverly,conner,1993,9,6            \
\n5602984,7,andrew,morris,2003,3,2              \
\n1565691,8,shannon,morales,1998,3,19           \
\n2782178,11,william,wilson,2005,8,1            \
\n8164848,9,tiffany,ford,1991,10,19             \
\n5966856,3,jason,evans,1990,9,13               \
\n2059423,10,jamie,wood,1992,9,13               \
\n8106178,1,brian,brown,2003,4,11               \
\n5219071,8,michael,ortiz,1990,2,16             \
\n6876149,13,christopher,mccall,1999,1,23       \
\n7329554,11,lisa,nunez,1990,12,6               \
\n2481147,10,curtis,west,1993,5,11              \
\n8226544,7,richard,wilson,2010,12,24           \
\n9173276,14,richard,johnson,1997,5,22          \
\n7022549,8,andrea,villanueva,2000,8,16         \
\n8490535,14,brian,jackson,1995,7,11            \
\n5176941,11,ronald,simmons,2009,11,14          \
\n1900441,8,kaitlyn,leonard,1990,3,15           \
\n4351975,2,amy,herrera,1999,8,19               \
\n7922219,1,lacey,garcia,2007,9,5               \
\n5855176,7,jessica,valenzuela,2002,2,13        \
\n2804498,6,kristy,martinez,2010,7,19           \
\n6849123,14,anthony,goodman,1998,10,22         \
\n9616546,4,alicia,donaldson,1990,5,24          \
\n4582200,1,charles,ayala,1999,8,14             \
\n2089094,6,jodi,farmer,2009,5,23               \
\n6870122,3,mariah,mueller,2008,7,4             \
\n1253669,4,joshua,stout,2005,8,6               \
\n4256665,6,joshua,clark,2002,4,26              \
\n5177911,1,william,garcia,2002,12,10           \
\n7780277,6,jose,hudson,2010,6,1                \
\n9791977,3,shane,lucas,1992,12,26              \
\n1083639,5,mark,rubio,1995,10,10               \
\n9183223,3,lauren,clark,2004,6,8               \
\n7283599,12,bobby,hutchinson,2002,8,5          \
\n9741299,2,kimberly,parsons,2004,10,18         \
\n8371597,8,james,montgomery,1996,5,16          \
\n3204025,14,angelica,navarro,1994,1,2          \
\n8192974,1,jenna,stark,2004,5,7                \
\n5377411,12,laura,mitchell,1995,12,20          \
\n8996595,8,andre,sweeney,1991,2,12             \
\n3612118,1,morgan,mata,1995,6,22               \
\n4848438,3,matthew,york,1992,6,23              \
\n9755537,5,mark,white,1997,2,22                \
\n6478881,13,erika,villarreal,1997,4,10         \
\n3722401,13,christopher,lang,2000,3,21         \
\n6368788,4,rebecca,williamson,2010,10,20       \
\n6781207,4,jeffrey,hunt,1991,5,10              \
\n1384007,5,robert,robinson,1994,10,16          \
\n6224042,14,jessica,powell,2009,2,7            \
\n8899851,3,erica,leblanc,2010,3,14             \
\n2621131,3,austin,baker,2001,6,25              \
\n4278607,2,timothy,smith,1993,3,14             \
\n4611181,1,jeffrey,barnes,2008,5,13            \
\n9480194,6,lisa,moran,2008,5,19                \
\n6247716,2,margaret,lopez,1997,8,3             \
\n8133152,7,bobby,alvarez,2008,12,23            \
\n9215940,4,rachel,wiley,1997,11,22             \
\n7153205,8,megan,thompson,2010,7,16            \
\n7203630,11,savannah,harris,2007,1,12          \
\n4581460,7,audrey,king,1994,4,16               \
\n6141823,12,jenny,barker,2004,9,1              \
\n8222118,2,charlotte,martinez,2004,1,22        \
\n2679367,13,jonathon,hayes,1998,10,28          \
\n8949802,4,david,gutierrez,2003,8,10           \
\n3740924,7,cynthia,martinez,2010,5,18          \
\n9990251,5,james,fowler,1991,2,18              \
\n2721772,5,tyler,wilkins,1993,12,1             \
\n2870832,12,victoria,ballard,2002,1,28         \
\n2365484,13,michael,mckenzie,2010,8,4          \
\n5410847,12,vicki,petersen,2010,8,7            \
\n7268016,11,alicia,mcneil,2008,2,4             \
\n2746834,14,jessica,bennett,2005,4,8           \
\n9440042,14,mallory,newman,1993,3,21           \
\n4911483,2,felicia,torres,2008,10,11           \
\n2942942,13,steven,love,1996,11,17             \
\n6326787,9,david,carter,2006,10,18             \
\n8995706,10,scott,jackson,2004,5,4             \
\n8328269,9,david,knight,2002,5,28              \
\n8837314,7,janet,saunders,2004,10,15           \
\n9761016,2,leroy,juarez,2006,3,16              \
\n5885458,13,steven,reese,2001,7,2              \
\n7750144,14,cathy,wilson,1994,7,5              \
\n3840445,5,robert,chung,2005,8,9               \
\n5632115,10,amanda,david,1999,4,26             \
\n7304976,12,michael,sweeney,2003,11,17         \
\n4927725,9,peter,fuentes,1995,6,8              \
\n8705087,8,matthew,sandoval,1999,11,11         \
\n4841192,8,donald,hamilton,2000,3,25           \
\n6776016,10,kelly,parker,1991,3,13             \
\n5984258,6,richard,guzman,1996,5,16            \
\n8085330,10,michael,madden,1997,4,25           \
\n8243656,4,brandon,riley,1998,11,1             \
\n4913616,6,brittany,holt,2009,8,8              \
\n3610712,2,vanessa,moreno,1995,12,3            \
\n2007479,10,jose,chan,1994,12,14               \
\n6096038,3,brendan,george,2000,8,3             \
\n1759309,14,christopher,blackwell,2007,4,18    \
\n9756910,1,jamie,welch,2002,3,28               \
\n7322234,4,keith,beck,1990,9,9                 \
\n9106582,9,vanessa,phillips,1992,7,21          \
\n8158164,11,sarah,woods,2004,5,20              \
\n2378198,11,destiny,king,2010,1,22             \
\n6555309,2,thomas,stone,2006,1,4               \
\n9598407,11,benjamin,wells,2001,5,6            \
\n1835304,5,chelsea,hughes,2006,4,19            \
\n9304553,4,heather,lopez,2000,2,10             \
\n4719708,4,dale,white,1990,3,15                \
\n7932640,3,deborah,myers,1992,11,3             \
\n4493116,7,brent,graham,2002,10,26             \
\n4752131,7,jeffrey,foster,2009,8,16            \
\n2359498,6,justin,brown,1997,3,6               \
\n2390954,12,scott,johnson,1991,2,14            \
\n9368508,8,ann,olsen,1994,4,11                 \
\n8549164,8,oscar,burgess,2004,1,27             \
\n7221919,11,ryan,li,2005,1,26                  \
\n4903189,4,joel,williams,1997,7,7              \
\n8652154,5,lisa,lewis,2006,7,23                \
\n9009576,11,jane,sheppard,2000,11,10           \
\n3515928,12,joseph,martinez,1996,3,12          \
\n9537823,13,amy,weaver,2002,10,28              \
\n4914067,1,joyce,franklin,1995,1,28            \
\n6341567,10,angela,jackson,1999,8,27           \
\n7536970,12,tara,white,2000,4,13               \
\n4293151,4,stephanie,lynch,2009,10,24          \
\n7600328,1,ellen,kelly,1995,2,25               \
\n2595973,2,joshua,davis,2008,9,27              \
\n5449676,5,brian,fleming,1993,10,28            \
\n4446287,3,alyssa,griffin,1991,6,25            \
\n2673875,10,james,hill,1993,8,24               \
\n7886782,11,matthew,james,1992,8,4             \
\n7913420,9,mark,farrell,1994,7,7               \
\n7341609,8,ashley,collins,2007,2,26            \
\n4460782,1,jonathan,juarez,1991,8,2            \
\n1771945,1,aaron,ingram,1992,10,16             \
\n9674109,11,russell,wilson,2000,4,28           \
\n4687872,10,benjamin,holmes,1997,9,9           \
\n4387844,3,james,sosa,2000,6,3                 \
\n7117273,2,laurie,herrera,1996,11,21           \
\n6387084,11,natalie,huynh,1998,12,11           \
\n5619578,13,calvin,mcdonald,2001,10,8          \
\n2807343,5,robert,valencia,1994,7,22           \
\n9219319,1,susan,austin,1993,7,14              \
\n2405471,3,david,owen,1991,2,4                 \
\n6844019,12,thomas,porter,1997,10,9            \
\n6110773,11,charles,gonzalez,2006,6,26         \
\n4383869,5,daniel,scott,1998,12,7              \
\n1836376,14,rachel,savage,1998,6,20            \
\n1675163,13,joshua,perez,1991,7,10             \
\n5495882,3,robert,brewer,1995,11,13            \
\n6774358,8,sarah,smith,2010,10,25              \
\n1742665,14,patricia,lee,2000,5,15             \
\n2011635,14,sheila,young,2006,7,19             \
\n9157953,4,robert,johnston,2009,4,28           \
\n3636885,3,richard,ball,1994,4,24              \
\n4056234,9,patrick,parks,2005,10,8             \
\n1444918,12,jeffrey,gomez,1992,1,1             \
\n9985785,7,timothy,scott,2010,9,22             \
\n8808497,5,jamie,johnson,2010,12,16            \
\n1011595,3,trevor,mason,1992,5,2               \
\n9630040,5,paul,diaz,2000,11,18                \
\n9059050,4,angela,lee,2007,4,20                \
\n2294751,3,antonio,jones,1997,12,24            \
\n4927889,2,erica,leon,2008,3,19                \
\n1011021,13,debbie,curtis,1995,4,15            \
\n1461980,13,jesse,gonzales,1990,1,1            \
\n4296978,14,duane,kennedy,1995,6,9             \
\n1956464,7,tiffany,cabrera,2005,7,5            \
\n6203963,12,ronald,davis,1995,5,3              \
\n2148693,7,eric,holloway,2004,5,10             \
\n9561037,9,lucas,brown,2005,5,9                \
\n1760674,10,adam,cameron,1996,3,9              \
\n9460251,2,sarah,austin,2002,2,19              \
\n9099564,5,calvin,rhodes,2004,11,10            \
\n2496127,9,tina,jordan,2007,8,23               \
\n5663879,2,roy,marquez,1998,3,3                \
\n6638877,5,jasmine,lopez,1990,10,13            \
\n9367006,7,sarah,peterson,2005,9,15            \
\n3444869,1,james,burns,1991,4,10               \
\n9088810,14,kim,castillo,1991,9,16             \
\n4612263,11,andrea,todd,2004,10,26             \
\n3661929,10,bruce,kent,2007,6,15               \
\n7240738,14,pamela,smith,2006,7,1              \
\n8955968,2,andrew,smith,2000,3,13              \
\n4053517,14,samantha,hodges,1999,6,5           \
\n5544756,6,shawn,gibson,2002,2,15              \
\n6452154,13,jacob,gardner,1996,12,13           \
\n5037930,2,steven,pitts,2006,6,1               \
\n2138287,3,vicki,velazquez,2004,4,27           \
\n2233262,5,emily,robinson,1999,2,11            \
\n6766402,11,craig,morgan,2002,10,23            \
\n6483486,10,jimmy,brown,1999,9,26              \
\n1498745,10,christopher,cox,2005,3,14          \
\n1923660,13,jay,ortiz,2005,12,7                \
\n6990701,2,linda,gray,2005,3,11                \
\n9668121,13,latoya,jensen,1999,1,16            \
\n6035600,3,jeffery,mclaughlin,2010,1,12        \
\n2577295,8,samantha,reyes,2004,5,18            \
\n3848927,3,joseph,green,1994,1,20              \
\n1031464,5,alice,nolan,1995,4,7                \
\n8961703,6,latoya,ramirez,1997,4,3             \
\n4484715,14,jack,thomas,1996,2,9               \
\n5096006,4,pamela,hurley,2005,5,3              \
\n5924057,10,daniel,sheppard,2008,12,2          \
\n8961106,13,cynthia,eaton,1993,4,24            \
\n4949038,12,angelica,parrish,1994,7,19         \
\n9755318,12,joseph,gregory,1994,7,3            \
\n5774400,6,jenna,johnson,1991,6,21             \
\n1147051,9,christopher,everett,2009,10,27      \
\n4195596,12,ashley,bradford,1994,1,20          \
\n5482195,14,ricardo,taylor,1990,3,24           \
\n2439374,8,mary,watts,2008,2,5                 \
\n4031808,7,christina,evans,2001,10,6           \
\n5631084,14,jose,cobb,1994,11,7                \
\n1092551,9,chelsea,barnett,1991,11,20          \
\n1983922,3,anthony,elliott,2001,6,19           \
\n5265530,7,amanda,washington,2010,7,25         \
\n8375534,11,troy,warner,1991,9,14              \
\n4991117,14,jeremy,williams,1992,6,23          \
\n1878647,11,cynthia,baker,2005,12,10           \
\n6354301,1,jack,may,1997,3,2                   \
\n8187457,13,rebecca,holt,2007,12,10            \
\n3749949,3,joseph,mcdowell,2005,7,4            \
\n7516349,9,emily,waller,1995,3,10              \
\n9793950,4,christopher,scott,2001,2,6          \
\n1543377,8,norman,mcguire,1992,5,25            \
\n6621189,8,taylor,garcia,2008,8,12             \
\n1634313,11,melinda,jacobs,1993,2,5            \
\n3048797,8,sarah,kelly,2009,8,23               \
\n1463113,4,tammy,martinez,1998,10,9            \
\n5951069,5,timothy,miller,2006,1,2             \
\n6836238,5,paul,cole,2005,7,13                 \
\n8867052,13,kathleen,hopkins,2010,8,24         \
\n6770860,4,luis,chapman,1999,10,14             \
\n5999522,1,rhonda,austin,2009,5,11             \
\n9313947,7,annette,young,1993,7,5              \
\n8884739,6,christina,williams,2005,11,13       \
\n8492530,1,michael,yoder,2003,1,25             \
\n2761665,10,ashley,kennedy,2002,3,26           \
\n8561529,7,katrina,jacobson,2004,8,16          \
\n9874003,11,javier,johnson,2009,11,4           \
\n6462634,2,alyssa,james,1990,4,7               \
\n4644077,8,patricia,browning,1990,7,6          \
\n8194745,12,jason,finley,2009,2,4              \
\n4959031,7,angela,potts,1993,8,28              \
\n8836917,4,randall,myers,1996,12,8             \
\n3185911,9,joel,nichols,2002,7,25              \
\n2495253,1,ronald,smith,1990,2,25              \
\n7569563,5,dwayne,snyder,1994,8,22             \
\n8492138,3,evan,walker,1994,3,6                \
\n8419173,4,laura,dyer,2002,3,7                 \
\n4800241,5,david,elliott,2009,11,28            \
\n5817062,3,michelle,melton,2010,3,14           \
\n7905283,14,alexis,foster,2000,4,12            \
\n8164223,5,crystal,walker,1996,11,16           \
\n5770300,12,robert,peterson,2010,12,4          \
\n6303161,2,allison,lara,2002,2,13              \
\n5729735,4,lisa,boyd,1997,12,23                \
\n3000584,1,carolyn,garcia,2000,8,25            \
\n2720056,6,harry,davidson,1992,10,18           \
\n3202804,4,brianna,garcia,1996,5,9             \
\n4644035,11,candice,garza,1998,6,5             \
\n9671241,5,stacy,lee,1999,11,12                \
\n2426393,4,ashley,freeman,1993,3,25            \
\n7543374,12,rachel,crawford,2009,3,13          \
\n7102757,13,kim,jackson,2003,11,16             \
\n5680124,14,anne,solis,2005,12,6               \
\n1895555,2,mary,johnson,2002,9,15              \
\n9655609,3,kelli,vasquez,1996,11,17            \
\n7479517,9,rebecca,hart,2000,12,26             \
\n4293441,7,john,wilson,2010,6,17               \
\n3995388,12,debbie,johnson,2007,1,14           \
\n3536822,13,john,lewis,1995,12,25              \
\n9684623,9,lee,gross,2010,9,17                 \
\n6189109,13,wayne,davis,1998,8,4               \
\n7374271,4,michael,fritz,2002,3,5              \
\n6294044,1,matthew,allen,1991,10,14            \
\n6037048,11,melissa,phillips,2007,11,28        \
\n2143742,4,nicholas,garcia,1993,9,27           \
\n8531817,9,carl,hansen,1994,2,15               \
\n2776364,5,ariel,mercado,2007,2,15             \
\n7426614,5,sarah,williams,1991,2,4             \
\n7526784,8,donald,meyers,1994,4,24             \
\n8105343,13,ashley,williams,1991,10,27         \
\n3300027,8,rebecca,murphy,1999,6,17            \
\n6850874,6,sheila,miller,1995,9,28             \
\n6991552,10,matthew,perkins,2008,3,1           \
\n8548808,4,melissa,cox,1993,2,6                \
\n1212519,14,kenneth,collier,2000,4,1           \
\n4465984,13,timothy,martinez,1999,3,3          \
\n8340701,4,larry,miller,2006,4,10              \
\n4434669,3,anthony,carroll,1994,2,4            \
\n8508954,5,kevin,sullivan,2006,5,17            \
\n6146581,7,tina,phillips,2000,1,24             \
\n1453804,14,angel,obrien,2002,3,28             \
\n7767183,7,margaret,smith,1999,7,7             \
\n1809671,7,caleb,stewart,2002,10,20            \
\n5104971,11,robert,arnold,1999,6,4             \
\n6311111,13,marie,stokes,2003,6,11             \
\n8142314,1,gail,best,2008,11,18                \
\n1334813,7,vanessa,ramos,2001,3,27             \
\n6476757,6,peter,larson,2008,11,12             \
\n8258830,13,timothy,rodgers,2007,10,9          \
\n1615944,13,patricia,tapia,2000,8,27           \
\n7283951,11,john,martin,1993,9,9               \
\n2575023,7,jose,tucker,2007,10,3               \
\n8154273,3,daniel,yates,1997,12,9              \
\n5586392,6,tina,thomas,2001,9,12               \
\n9174900,12,christopher,payne,1990,4,7         \
\n2143157,5,mitchell,walters,1990,12,19         \
\n5304557,4,heather,pratt,2005,2,16             \
\n3327052,3,robert,garcia,2003,3,11             \
\n2093246,5,laura,miller,1998,4,6               \
\n9179535,3,zachary,garner,1993,10,22           \
\n9431713,10,craig,koch,1998,4,4                \
\n4914713,1,benjamin,ramirez,2006,8,26          \
\n2383542,5,michelle,baker,1994,4,17            \
\n9169351,11,monica,butler,2000,5,24            \
\n4602241,12,david,west,2000,2,22               \
\n2407426,11,zachary,schmidt,2008,12,16         \
\n1065797,2,jose,pugh,2008,3,16                 \
\n9381440,6,veronica,carpenter,2000,6,4         \
\n5294237,7,susan,davies,2001,12,8              \
\n7930525,14,john,west,1990,5,6                 \
\n3625084,14,karina,moore,1993,2,28             \
\n5137054,8,john,carroll,1990,12,17             \
\n4401876,7,rachel,williams,2001,5,3            \
\n2519427,4,gabriel,navarro,1997,11,12          \
\n7945253,8,dawn,banks,2010,3,25                \
\n4100924,11,kevin,pineda,2002,11,12            \
\n9693751,12,jennifer,gibson,2008,11,23         \
\n2866947,4,sharon,gallagher,2007,8,19          \
\n3853077,9,hunter,dawson,1991,4,4              \
\n8371267,3,candace,murray,1997,10,21           \
\n6919199,7,catherine,skinner,2005,4,9          \
\n3955421,12,charles,martin,2009,12,12          \
\n8904722,3,manuel,washington,1998,1,9          \
\n3188160,3,danielle,henderson,2009,4,26        \
\n3078002,10,teresa,mcdaniel,1998,7,9           \
\n2643685,7,ashley,stark,2004,8,13              \
\n3791555,10,zachary,morrison,2003,9,17         \
\n9947602,8,zoe,ibarra,1999,11,6                \
\n7217597,3,amanda,williams,1991,2,1            \
\n1796040,5,kenneth,bradshaw,2010,8,5           \
\n2544142,12,nicholas,mora,2000,1,22            \
\n2935381,5,joseph,hughes,1992,5,23             \
\n8608268,5,jennifer,miller,2005,5,24           \
\n4312926,4,edward,french,1999,1,5              \
\n7745987,13,benjamin,simmons,1994,8,7          \
\n9359486,5,john,turner,2005,2,26               \
\n3188389,11,christine,miller,2010,10,5         \
\n8321557,7,amy,weaver,2005,7,3            ";
    
    int i,j = 0;    
	char *token;
    char line[256];  // Buffer para almacenar la línea extraída
    
    Alumno **alumnos = NULL;
    Alumno **tmp = NULL;
    Alumno nuevoA;    
    
    i=0;
    getLine(csv, i, line); 
    
    while( line[0]!='\0')
    {
        j=0;
        while(line[j++]!=' ');
        line[j-1] = '\0';  
        
        nuevoA = csv_a_alumno(line);
                      
        if(alumnos == NULL)
        {
            alumnos = (Alumno**)calloc(i+1,sizeof(Alumno*));
            alumnos[i] = (Alumno*)calloc(i+1,sizeof(Alumno));
        }
        else
        {
            tmp = NULL;
            while(tmp==NULL)
            {
                tmp = (Alumno**) realloc(alumnos,sizeof(Alumno*)*(i+1));
            }
            alumnos = tmp;
            alumnos[i] = (Alumno*)calloc(i+1,sizeof(Alumno));
        }
        *(alumnos[i]) = nuevoA;   
        
                
        i++;
        getLine(csv, i, line);
    }
    *n=i;
    return alumnos;
}


Alumno csv_a_alumno(char *linea_csv)
{
	char *token;
	char *tmp ; 
	Alumno alumno;
	int i,p;
	p = 0;
	
	token = strtok(linea_csv, ",");
	// Iterar sobre las subcadenas
    while (token != NULL) {
        //printf("\n %s", token);  // Imprimir cada subcadena
		i=0;
		while(token[i++]!='\0');
		//printf(" %d",i);	
        switch(p)
		{
			case 0:
				alumno.matricula = atoi(token);
				break;
			case 1:			
				alumno.semestre = atoi(token);
				break;
			case 2:
				alumno.nombre = (char*) calloc(i,sizeof(char));
				memcpy(alumno.nombre,token,i);
				break;
			case 3:
				alumno.apellido = (char*) calloc(i,sizeof(char));
				memcpy(alumno.apellido,token,i);
				break;
			case 4:
				alumno.fecha.year = atoi(token);
				break;
			case 5:
				alumno.fecha.month = atoi(token);
				break;
			case 6:
				alumno.fecha.day = atoi(token);
				break;
			default:
				break;			
		}
		token = strtok(NULL, ",");  // Obtener el siguiente token
		p++;
	
	}
	return alumno;
}



void getLine(const char *texto, int lineNumber, char *line) {
    int currentLine = 0;
    int i = 0, j = 0;

    // Recorre el texto hasta encontrar la línea deseada
    while (texto[i] != '\0') {
        if (currentLine == lineNumber) {
            // Copia la línea al buffer 'line'
            while (texto[i] != '\n' && texto[i] != '\0') {
                line[j++] = texto[i++];
            }
            line[j] = '\0';  // Termina la línea con el carácter nulo
            return;
        }

        // Avanza al siguiente carácter
        if (texto[i] == '\n') {
            currentLine++;
        }
        i++;
    }

    // Si la línea no se encontró, devuelve una cadena vacía
    line[0] = '\0';
}