
#include <math.h>

#define N_FEATURES 52
#define N_CLASSES 2
#define SVC_2_2_N_VECTORS 1101
#define N_ROWS 2
#define N_COEFFICIENTS 1
#define N_INTERCEPTS 1
#define KERNEL_TYPE 'r'
#define KERNEL_GAMMA 0.019230757768344375
#define KERNEL_COEF 0.0
#define KERNEL_DEGREE 3

class SVC_2_2{
public:
double coefficients[1][1101] = {{-0.6693350922098058, -1.0, -1.0, -1.0, -0.38821455302508406, -0.6238171186307053, -0.44572755634462546, -0.3565084976057433, -1.0, -1.0, -1.0, -0.48521947915016445, -0.021328642974486202, -1.0, -0.7907345932394345, -0.8297979314550789, -0.5761330373206583, -0.1045569953475891, -1.0, -0.014139810199515712, -0.7652030148715708, -0.5580447705789667, -1.0, -1.0, -0.24574194285263248, -1.0, -0.42819751137091405, -0.6343151244228316, -0.09911156847297856, -0.3455203123992126, -0.6200760230166619, -0.8537333722124153, -0.3744946232673388, -0.49368516719515637, -0.7754099783088203, -1.0, -1.0, -0.6610556296949441, -1.0, -0.5392614120590279, -0.33880795040628103, -0.6396306167311848, -1.0, -0.5399521159536959, -0.5129970844408972, -0.7158200688948562, -0.03546562631505374, -0.13727039476426775, -0.4291001406465138, -0.479442112778129, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.38164052280631877, -1.0, -0.523886455649647, -1.0, -1.0, -0.15985711512037504, -1.0, -0.04364430361910735, -1.0, -1.0, -1.0, -0.24167330332555037, -1.0, -1.0, -1.0, -0.3975334531977791, -0.10942459434144386, -0.3785861506839674, -0.052748991765851974, -0.16300148187296878, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.278035281004094, -1.0, -1.0, -0.7108937604810377, -0.4093884531513097, -1.0, -0.6956641317213573, -1.0, -0.2348024701991597, -1.0, -1.0, -1.0, -1.0, -0.43569737448289964, -1.0, -0.7178737515101475, -0.6522595856304847, -0.6630052109900424, -0.04404896613064555, -1.0, -1.0, -0.7928638036638382, -0.34571175535957827, -0.7291270098163267, -0.6958008674453854, -0.556767220937645, -0.8308020435151112, -0.27017864874734276, -0.07637645891302687, -0.33053693156216646, -1.0, -1.0, -1.0, -0.08333244986383304, -1.0, -0.3796975617400288, -0.9105628086289408, -0.489426590039802, -1.0, -0.8554863899805553, -0.2765333008514064, -0.9743387150247202, -0.22333312960131527, -0.2688802011235912, -0.13366550431111163, -0.9726280849357669, -1.0, -0.8284525767274926, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.8294337065372615, -0.8504599964294579, -1.0, -1.0, -0.8688420451593868, -0.36392252123166935, -0.5667042952266448, -0.6949499295213785, -0.061150501908151744, -0.7811310770577746, -0.09393984405942733, -1.0, -0.4929000490747986, -1.0, -0.21583580113297438, -0.4831548580030487, -1.0, -0.4707509165517232, -0.20241895228504012, -1.0, -0.8511068731205639, -1.0, -1.0, -0.4603251934798797, -1.0, -0.17692464653931186, -0.10011503953580923, -0.8153321665826874, -0.05892142298364772, -0.493702400021939, -0.1341424256114461, -0.5494828753106143, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0026630833360759168, -0.5753108982983914, -0.33942458129800046, -1.0, -0.9747123331535239, -0.2620434595395761, -1.0, -0.8600536822145676, -1.0, -0.24100138887796357, -1.0, -0.39122498553108737, -0.27093197740862685, -0.6614019484453426, -1.0, -0.08698857669710514, -0.8899929707956438, -0.7451039257271204, -0.29176253065592567, -0.010930959471370157, -0.49269997996446513, -0.11840679077170292, -0.5068417094847413, -0.3865442199742287, -0.9788833611455573, -1.0, -0.2821048874100725, -0.7464227750406142, -0.011174030825435525, -1.0, -1.0, -1.0, -1.0, -0.6370089310909464, -1.0, -1.0, -1.0, -0.505752228210254, -1.0, -1.0, -0.022714108438291355, -1.0, -0.46519744954817244, -1.0, -0.27730110078972225, -0.4070910494931272, -1.0, -0.3569049456522315, -0.2975401463873822, -1.0, -0.1525076827126806, -0.2730043660115403, -0.07081829318008201, -1.0, -1.0, -0.013043163262591008, -0.5763468739436526, -0.45076992458404364, -0.6546969486892595, -0.293095660451719, -1.0, -0.26499470839471106, -1.0, -1.0, -0.8361181770949982, -0.5211683671939937, -0.6966075286225069, -1.0, -1.0, -0.2545284542881509, -0.35969277239976155, -0.4389284656764882, -0.12093475667996739, -0.7714294639997415, -0.6948330928774678, -0.30452940941038614, -0.7534666953598853, -1.0, -0.40242166768929455, -0.6302187473767027, -1.0, -0.4012974457598034, -0.7769648347212619, -0.6819887296155556, -1.0, -0.6573724582468394, -1.0, -0.13948573910507195, -0.535736560361967, -1.0, -0.8126685101228593, -0.44721338210673256, -1.0, -0.8489411219404904, -0.35703608163937245, -0.002129261912998767, -0.4254760133639925, -0.6534950771446085, -0.519033766815067, -1.0, -1.0, -0.5855951821440537, -1.0, -0.3334257477772926, -1.0, -1.0, -1.0, -1.0, -0.09033756798777987, -1.0, -1.0, -0.2649497991123238, -0.6960602740226807, -1.0, -0.05377295623069344, -0.38295022540384327, -0.291117175137162, -0.6903430346297273, -0.1804733674901215, -1.0, -0.6148131531103215, -0.6250733122752543, -1.0, -1.0, -0.6833393462136513, -0.06497414487657896, -1.0, -1.0, -0.24334841935145834, -0.7601399158063935, -0.9783926182766575, -1.0, -0.9270840770223631, -0.5952157759993355, -1.0, -0.16610808149824793, -0.23794961282261393, -1.0, -0.16271483517642785, -0.527046475300641, -1.0, -0.2869617401000999, -0.2006891797218868, -1.0, -0.08145393456472365, -0.3978167997373441, -0.41438015353795665, -1.0, -0.28640033332981657, -0.26743733293462313, -1.0, -1.0, -0.41435734881438874, -0.2747296577167672, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.1446106512769531, -0.3004414711641497, -0.5567952219779564, -0.30500870918035683, -0.3488561558152646, -0.6336151833886579, -0.6898919266226902, -1.0, -0.1385205538107579, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0381261636700157, -0.6177972440339704, -0.5886976628286246, -0.42098126640470435, -1.0, -0.4944489783178041, -1.0, -1.0, -1.0, -0.5526704578636498, -1.0, -0.6899700502460654, -0.016015318248552925, -1.0, -0.10093872405642673, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.6935161397552272, -1.0, -1.0, -1.0, -1.0, -1.0, -0.9781292474106846, -0.5547964607015137, -0.48824961768256037, -0.6820351822371151, -0.7346763173414892, -0.5609862849155614, -1.0, -1.0, -0.6779099103058575, -0.7452786245618072, -0.5454682824154348, -1.0, -0.811192800882016, -0.07095528090092858, -0.8541900552597366, -0.1978342767656479, -0.483476962076066, -0.7669652729626557, -1.0, -1.0, -1.0, -1.0, -0.6579740220427917, -0.11358589417251981, -0.6945033465720007, -1.0, -0.19498663203560804, -0.33100341192282307, -0.3459358653175157, -1.0, -1.0, -0.5152670904746595, -0.7513708132072384, -1.0, -1.0, -1.0, -0.18016747457924578, -0.2313457223544986, -0.5315858707938829, -1.0, -1.0, -0.14970260264093999, -0.43808271385464986, -1.0, -1.0, -0.38292764978296384, -1.0, -0.8326763414447059, -1.0, -1.0, -1.0, -1.0, -1.0, -0.44999269343215453, -1.0, -0.6966261376552854, -1.0, -0.3507353627915888, -0.2708652207551577, -0.9986358069780823, -1.0, -1.0, -0.6035471729819458, -1.0, -1.0, -1.0, -0.6741331941965928, -0.08116704164790525, -0.6848975156363127, -1.0, -1.0, -0.525208679690941, -1.0, -1.0, -0.5915026197539562, -0.25817354904161455, -1.0, -0.7277755610626583, -0.11973895914275462, -1.0, -1.0, -0.921695838135498, -1.0, -1.0, -0.6560072757348848, -0.28345241845032865, -0.1385731520648535, -1.0, -1.0, -0.30701042258309297, -0.22872775910516402, -0.8485555802916053, -1.0, -0.6378462090653838, -1.0, -0.5524052674540961, -0.5757038967830225, -0.595573072234138, -1.0, -0.22552750412487424, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.14057573151442904, -0.5569699782048297, -0.8039787844960925, -0.7319184703867325, -1.0, -1.0, -0.07186444912463252, -1.0, -1.0, -0.7458146417491345, -0.4672159596240775, -1.0, -1.0, -1.0, -0.4416101668489525, -0.21696092139318082, -0.5673373317796602, -1.0, -1.0, -1.0, -1.0, -0.24563563606718633, -0.29130498195163124, -0.8403254704137343, -0.10115084851725777, -1.0, -1.0, -0.1873528087455484, -1.0, -1.0, -0.6432380941262796, -1.0, -0.8908797618775491, -0.21436210513619566, -0.17023198021147876, -0.19077457408707574, -1.0, -0.12416242402415088, -0.7006774859666104, -1.0, -0.02604205048283035, -0.4386749926529566, -1.0, -1.0, -0.5702261701692218, -1.0, -0.24697127948146672, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.683699115034818, -1.0, -1.0, -1.0, -1.0, -0.2868188459912081, -1.0, -1.0, -1.0, -0.24437629740025418, -1.0, -1.0, -1.0, -0.4311796029891216, -0.43259462183358527, -0.1829614861776153, -1.0, -0.6329545909313958, -1.0, -0.3418746920478865, -0.8389424721886494, -1.0, -0.8192186413759421, -1.0, -1.0, -1.0, -0.5440714567556907, -1.0, -0.8417932317700939, -1.0, -0.6149300520454454, -1.0, -1.0, -0.2268248611728651, -1.0, -0.8472084121919558, -0.5145536772723843, -1.0, -0.20655766128982342, -1.0, -0.513283122564045, -1.0, -0.4196727053435236, -0.568711251197045, -0.4748161076257238, -0.9333023727390553, -1.0, -0.45915691058433106, -1.0, -0.18525960857857215, -1.0, 0.5225931299081767, 1.0, 0.826230297634066, 0.8519443761756249, 0.7161525181336956, 0.34900344997834426, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.8509191565394314, 0.5520778570535505, 1.0, 1.0, 1.0, 0.7524775315435132, 1.0, 0.7135023093364381, 1.0, 1.0, 1.0, 0.9182928737987208, 1.0, 0.22775197781336406, 1.0, 0.1918386422688756, 1.0, 1.0, 0.957185113393304, 0.03799763603656581, 1.0, 1.0, 0.5694624152214239, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.4170818385108606, 0.5217468557265501, 0.9902622227317293, 1.0, 1.0, 1.0, 1.0, 0.7483941355061177, 1.0, 0.758418505272037, 1.0, 0.6135002653499813, 1.0, 0.5965012485235421, 1.0, 1.0, 1.0, 0.049663976185846934, 1.0, 1.0, 0.695452220127398, 1.0, 0.17248944722094925, 0.14188054434241848, 1.0, 0.04807842288062773, 0.480244232723274, 1.0, 0.4560628310465012, 1.0, 1.0, 1.0, 0.27208368830571233, 1.0, 1.0, 0.5014732945795449, 0.4969500578830745, 1.0, 0.5648952572246929, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5804853067195221, 1.0, 1.0, 0.6309011334517198, 1.0, 0.04298645129171618, 0.01579950966172965, 1.0, 0.09855717759118016, 1.0, 1.0, 1.0, 0.6042001954920518, 1.0, 0.7591146959905861, 0.20481770897567514, 0.20662026126105842, 0.3024201296005226, 1.0, 1.0, 0.3458851604124992, 1.0, 1.0, 0.2377539891939133, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5450237932166773, 1.0, 0.6095318606180009, 0.4123299480290805, 1.0, 1.0, 0.9584120431430365, 1.0, 1.0, 0.2853695512053452, 1.0, 0.2473319746447778, 1.0, 1.0, 1.0, 1.0, 1.0, 0.4826191602103721, 1.0, 1.0, 1.0, 1.0, 0.45320660976002164, 1.0, 0.08481834242609829, 1.0, 0.6506548134670507, 1.0, 1.0, 1.0, 0.48242348637472565, 1.0, 0.2808851288008117, 0.10867018559966596, 0.7146768402262054, 1.0, 0.780694393599861, 0.2268559716573205, 0.7495043072984402, 1.0, 1.0, 1.0, 0.8528102626853941, 0.6790600130624087, 1.0, 1.0, 1.0, 1.0, 0.11008915441981647, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.6436027993764625, 0.8788550459569339, 1.0, 0.8449475192842559, 0.12402169443087233, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5127219944666626, 0.4986959444656001, 1.0, 0.6301609303619142, 1.0, 0.7461623242827887, 0.7124140081541465, 1.0, 0.7552851729152579, 1.0, 0.8491658823693211, 1.0, 0.7031674506563494, 0.7308095219615113, 0.9728214544518625, 0.851156136754633, 1.0, 0.2128778706973264, 1.0, 1.0, 0.5316958496007245, 1.0, 0.7481048811445602, 1.0, 0.19094685928648766, 1.0, 0.494993463734882, 0.09329305062511484, 0.8290362555463121, 0.2115588944512086, 1.0, 0.5141907522344451, 0.6487967593063031, 0.5080892283932801, 0.07563873955443887, 0.6935434901186319, 1.0, 0.9018252559950695, 1.0, 1.0, 1.0, 1.0, 0.06848318761091106, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.2940186302423822, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.9463793885561527, 1.0, 0.18943588252784574, 1.0, 1.0, 0.06515240648697085, 0.552285861834248, 1.0, 0.8601465267133819, 0.10181565441508338, 1.0, 0.882375493329208, 0.6507234387720418, 0.07336654630531081, 1.0, 1.0, 0.7068954909176144, 0.7835956029757472, 0.14711278390326887, 0.15270275528471683, 0.20074266951209152, 0.7695458269705677, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.28767563421767367, 1.0, 1.0, 0.37929537425718934, 1.0, 1.0, 0.2188680251098254, 1.0, 0.8850413664229926, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.9248053393623119, 1.0, 1.0, 0.019078595818738556, 0.5727162966640533, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.6170034973681714, 0.21249015369787635, 0.527807998517186, 1.0, 1.0, 1.0, 0.5531652375287286, 0.5999042039247369, 1.0, 1.0, 0.2148704044548664, 1.0, 1.0, 0.9343564738335176, 1.0, 1.0, 0.6497679165276166, 1.0, 0.9322501291702402, 1.0, 1.0, 1.0, 1.0, 1.0, 0.6006869666159936, 0.8163532402898682, 1.0, 1.0, 0.0549926580799209, 1.0, 0.08306588552078435, 1.0, 1.0, 0.4874039117517774, 1.0, 0.573503955009807, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.9939476345045134, 0.18130243096479953, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5889890450739639, 0.4634871168054818, 0.3333421090562246, 0.029261368523244104, 1.0, 1.0, 1.0, 0.20969320520783133, 0.22353190886442198, 1.0, 1.0, 1.0, 0.762177410124383, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.828214191009469, 1.0, 0.6490907069451246, 1.0, 0.32582587321103673, 1.0, 0.36020856404176177, 1.0, 0.8578735692770862, 1.0, 0.3267125184392801, 1.0, 0.8084426324134107, 0.6908372939123798, 0.3835710232306256, 0.5561126220392552, 1.0, 1.0, 0.10726066303163458, 1.0, 0.3244853296576719, 0.32913834494081795, 1.0, 1.0, 0.6375307467237226, 0.9818670054387908, 0.6243594907121827, 1.0, 0.6750393333791219, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.12076597623653451, 0.47051380895157496, 1.0, 0.5225207087453315, 0.8443676767421575, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.4590420988102586, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0641752737174704, 0.13308284899602332, 0.9936528414545094, 1.0, 1.0, 1.0, 0.46018472590524817, 0.12534911778276348, 0.11631692494277604, 1.0, 1.0, 1.0, 1.0, 0.9760481223733852, 0.23331332092180715, 0.2490478627649138, 1.0, 0.20608276489236294, 0.699185590679356, 1.0, 1.0, 0.4830689955001362, 0.5166088266534576, 1.0, 0.31037364996110406, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.4526029456744068, 0.7245657291603318, 0.9524216163857256, 1.0, 0.4083335223816433, 1.0, 0.661327569307693, 0.2692711609483936, 1.0, 1.0, 1.0, 1.0, 0.18361559115188406, 0.7126940794337646, 0.1489583536254646, 1.0, 1.0, 0.7086480289078563, 1.0, 1.0, 0.2150829608242753, 0.4924137595665092, 1.0, 1.0, 1.0, 0.49555007751962765, 1.0, 1.0, 1.0, 0.798070947284372, 1.0, 0.5202908980215308, 0.7840444120110663, 1.0, 0.732089860921542, 1.0, 0.8182222355377347, 1.0, 1.0, 1.0, 0.5439478706373139, 1.0, 0.50816596782871, 0.01918804547960168, 1.0, 1.0, 1.0, 0.1377167326516414, 0.562637603016727, 1.0, 0.6292666414736124, 1.0, 1.0, 1.0, 0.11879591330370823}};
double intercepts[1] = {0.14445810828603672};
int weights[2] = {587, 514};

double predict (double features[]) {
    int i, j, k, d, l;

    double kernels[SVC_2_2_N_VECTORS];
    double kernel;
    switch (KERNEL_TYPE) {
        case 'l':
            // <x,x'>
            for (i = 0; i < SVC_2_2_N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = kernel;
            }
            break;
        case 'p':
            // (y<x,x'>+r)^d
            for (i = 0; i < SVC_2_2_N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = pow((KERNEL_GAMMA * kernel) + KERNEL_COEF, KERNEL_DEGREE);
            }
            break;
        case 'r':
            // exp(-y|x-x'|^2)
            for (i = 0; i < SVC_2_2_N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += pow(vectors[i][j] - features[j], 2);
                }
                kernels[i] = exp(-KERNEL_GAMMA * kernel);
            }
            break;
        case 's':
            // tanh(y<x,x'>+r)
            for (i = 0; i < SVC_2_2_N_VECTORS; i++) {
                kernel = 0.;
                for (j = 0; j < N_FEATURES; j++) {
                    kernel += vectors[i][j] * features[j];
                }
                kernels[i] = tanh((KERNEL_GAMMA * kernel) + KERNEL_COEF);
            }
            break;
    }

    int starts[N_ROWS];
    int start;
    for (i = 0; i < N_ROWS; i++) {
        if (i != 0) {
            start = 0;
            for (j = 0; j < i; j++) {
                start += weights[j];
            }
            starts[i] = start;
        } else {
            starts[0] = 0;
        }
    }

    int ends[N_ROWS];
    for (i = 0; i < N_ROWS; i++) {
        ends[i] = weights[i] + starts[i];
    }

    if (N_CLASSES == 2) {

        for (i = 0; i < SVC_2_2_N_VECTORS; i++) {
            kernels[i] = -kernels[i];
        }

        double decision = 0.;
        for (k = starts[1]; k < ends[1]; k++) {
            decision += kernels[k] * coefficients[0][k];
        }
        for (k = starts[0]; k < ends[0]; k++) {
            decision += kernels[k] * coefficients[0][k];
        }
        decision += intercepts[0];
        return decision;
    }
}
};