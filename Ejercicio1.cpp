#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "Ejercicio1.hpp"
#include "structs.hpp"

void cargarRegistroDeGoles(RegistroDeGoles goles[]) //Generamos vector con informacion en memoria.
{
    goles[0].id_gol=0;
    strcpy(goles[0].nombre_jugador,"Aleksandr Golovin");
    goles[0].codigo_equipo=22;
    goles[0].fecha=20180614;
	goles[0].id_partido=1;
    

    goles[1].id_gol=1;
    strcpy(goles[1].nombre_jugador,"Artyom Dzyuba");
    goles[1].codigo_equipo=22;
    goles[1].fecha=20180614;
	goles[1].id_partido=1;

    goles[2].id_gol=2;
    goles[3].id_gol=3;
    goles[4].id_gol=4;
    goles[5].id_gol=5;
    goles[6].id_gol=6;
    goles[7].id_gol=7;
    goles[8].id_gol=8;
    goles[9].id_gol=9;
    goles[10].id_gol=10;
    goles[11].id_gol=11;
    goles[12].id_gol=12;
    goles[13].id_gol=13;
    goles[14].id_gol=14;
    goles[15].id_gol=15;
    goles[16].id_gol=16;
    goles[17].id_gol=17;
    goles[18].id_gol=18;
    goles[19].id_gol=19;
    goles[20].id_gol=20;
    goles[21].id_gol=21;
    goles[22].id_gol=22;
    goles[23].id_gol=23;
    goles[24].id_gol=24;
    goles[25].id_gol=25;
    goles[26].id_gol=26;
    goles[27].id_gol=27;
    goles[28].id_gol=28;
    goles[29].id_gol=29;
    goles[30].id_gol=30;
    goles[31].id_gol=31;
    goles[32].id_gol=32;
    goles[33].id_gol=33;
    goles[34].id_gol=34;
    goles[35].id_gol=35;
    goles[36].id_gol=36;
    goles[37].id_gol=37;
    goles[38].id_gol=38;
    goles[39].id_gol=39;
    goles[40].id_gol=40;
    goles[41].id_gol=41;
    goles[42].id_gol=42;
    goles[43].id_gol=43;
    goles[44].id_gol=44;
    goles[45].id_gol=45;
    goles[46].id_gol=46;
    goles[47].id_gol=47;
    goles[48].id_gol=48;
    goles[49].id_gol=49;
    goles[50].id_gol=50;
    goles[51].id_gol=51;
    goles[52].id_gol=52;
    goles[53].id_gol=53;
    goles[54].id_gol=54;
    goles[55].id_gol=55;
    goles[56].id_gol=56;
    goles[57].id_gol=57;
    goles[58].id_gol=58;
    goles[59].id_gol=59;
    goles[60].id_gol=60;
    goles[61].id_gol=61;
    goles[62].id_gol=62;
    goles[63].id_gol=63;
    goles[64].id_gol=64;
    goles[65].id_gol=65;
    goles[66].id_gol=66;
    goles[67].id_gol=67;
    goles[68].id_gol=68;
    goles[69].id_gol=69;
    goles[70].id_gol=70;
    goles[71].id_gol=71;
    goles[72].id_gol=72;
    goles[73].id_gol=73;
    goles[74].id_gol=74;
    goles[75].id_gol=75;
    goles[76].id_gol=76;
    goles[77].id_gol=77;
    goles[78].id_gol=78;
    goles[79].id_gol=79;
    goles[80].id_gol=80;
    goles[81].id_gol=81;
    goles[82].id_gol=82;
    goles[83].id_gol=83;
    goles[84].id_gol=84;
    goles[85].id_gol=85;
    goles[86].id_gol=86;
    goles[87].id_gol=87;
    goles[88].id_gol=88;
    goles[89].id_gol=89;
    goles[90].id_gol=90;
    goles[91].id_gol=91;
    goles[92].id_gol=92;
    goles[93].id_gol=93;
    goles[94].id_gol=94;
    goles[95].id_gol=95;
    goles[96].id_gol=96;
    goles[97].id_gol=97;
    goles[98].id_gol=98;
    goles[99].id_gol=99;
    goles[100].id_gol=100;
    goles[101].id_gol=101;
    goles[102].id_gol=102;
    goles[103].id_gol=103;
    goles[104].id_gol=104;
    goles[105].id_gol=105;
    goles[106].id_gol=106;
    goles[107].id_gol=107;
    goles[108].id_gol=108;
    goles[109].id_gol=109;
    goles[110].id_gol=110;
    goles[111].id_gol=111;
    goles[112].id_gol=112;
    goles[113].id_gol=113;
    goles[114].id_gol=114;
    goles[115].id_gol=115;
    goles[116].id_gol=116;
    goles[117].id_gol=117;
    goles[118].id_gol=118;
    goles[119].id_gol=119;
    goles[120].id_gol=120;
    goles[121].id_gol=121;
    goles[122].id_gol=122;
    goles[123].id_gol=123;
    goles[124].id_gol=124;
    goles[125].id_gol=125;
    goles[126].id_gol=126;
    goles[127].id_gol=127;
    goles[128].id_gol=128;
    goles[129].id_gol=129;
    goles[130].id_gol=130;
    goles[131].id_gol=131;
    goles[132].id_gol=132;
    goles[133].id_gol=133;
    goles[134].id_gol=134;
    goles[135].id_gol=135;
    goles[136].id_gol=136;
    goles[137].id_gol=137;
    goles[138].id_gol=138;
    goles[139].id_gol=139;
    goles[140].id_gol=140;
    goles[141].id_gol=141;
    goles[142].id_gol=142;
    goles[143].id_gol=143;
    goles[144].id_gol=144;
    goles[145].id_gol=145;
    goles[146].id_gol=146;
    goles[147].id_gol=147;
    goles[148].id_gol=148;
    goles[149].id_gol=149;
    goles[150].id_gol=150;
    goles[151].id_gol=151;
    goles[152].id_gol=152;
    goles[153].id_gol=153;
    goles[154].id_gol=154;
    goles[155].id_gol=155;
    goles[156].id_gol=156;
    goles[157].id_gol=157;
    goles[158].id_gol=158;
    goles[159].id_gol=159;
    goles[160].id_gol=160;
    goles[161].id_gol=161;
    goles[162].id_gol=162;
    goles[163].id_gol=163;
    goles[164].id_gol=164;
    goles[165].id_gol=165;
    goles[166].id_gol=166;
    goles[167].id_gol=167;
    goles[168].id_gol=168;
    goles[167].id_gol=167;
    goles[168].id_gol=168;

    strcpy(goles[2].nombre_jugador,"Denis Cheryshev");
    strcpy(goles[3].nombre_jugador,"Denis Cheryshev");
    strcpy(goles[4].nombre_jugador,"Yuriy Gazinskiy");
    strcpy(goles[5].nombre_jugador,"José María Giménez");
    strcpy(goles[6].nombre_jugador,"Aziz Bouhaddouz");
    strcpy(goles[7].nombre_jugador,"Cristiano Ronaldo Av");
    strcpy(goles[8].nombre_jugador,"Cristiano Ronaldo Av");
    strcpy(goles[9].nombre_jugador,"Cristiano Ronaldo Av");
    strcpy(goles[10].nombre_jugador,"Diego Costa");
    strcpy(goles[11].nombre_jugador,"Diego Costa");
    strcpy(goles[12].nombre_jugador,"Nacho Fernández");
    strcpy(goles[13].nombre_jugador,"Mile Jedinak");
    strcpy(goles[14].nombre_jugador,"Antoine Griezmann");
    strcpy(goles[15].nombre_jugador,"Aziz Behich");
    strcpy(goles[16].nombre_jugador,"Yussuf Yurary Poulse");
    strcpy(goles[17].nombre_jugador,"Sergio Agüero");
    strcpy(goles[18].nombre_jugador,"Alfreð Finnbason");
    strcpy(goles[19].nombre_jugador,"henekaro Etebo");
    strcpy(goles[20].nombre_jugador,"Luka Modrić");
    strcpy(goles[21].nombre_jugador,"Aleksandar Kolarov");
    strcpy(goles[22].nombre_jugador,"Philippe Coutinho Co");
    strcpy(goles[23].nombre_jugador,"Steven Zuber");
    strcpy(goles[24].nombre_jugador,"Hirving Lozano");
    strcpy(goles[25].nombre_jugador,"Andreas Granqvist");
    strcpy(goles[26].nombre_jugador,"Dries Mertens");
    strcpy(goles[27].nombre_jugador,"Romelu Lukaku");
    strcpy(goles[28].nombre_jugador,"Romelu Lukaku");
    strcpy(goles[29].nombre_jugador,"Harry Kane");
    strcpy(goles[30].nombre_jugador,"Harry Kane");
    strcpy(goles[31].nombre_jugador,"Ferjani Sassi");
    strcpy(goles[32].nombre_jugador,"Mohammed Salah");
    strcpy(goles[33].nombre_jugador,"Ahmed Fathy");
    strcpy(goles[34].nombre_jugador,"Artyom Dzyuba");
    strcpy(goles[35].nombre_jugador,"Denis Cheryshev");
    strcpy(goles[36].nombre_jugador,"Juan Fernando Quinte");
    strcpy(goles[37].nombre_jugador,"Shinji Kagawa");
    strcpy(goles[38].nombre_jugador,"Yūya Ōsako");
    strcpy(goles[39].nombre_jugador,"Grzegorz Krychowiak");
    strcpy(goles[40].nombre_jugador,"MBaye Niang");
    strcpy(goles[41].nombre_jugador,"Thiago Cionek");
    strcpy(goles[42].nombre_jugador,"Luis Suárez");
    strcpy(goles[43].nombre_jugador,"Cristiano Ronaldo Av");
    strcpy(goles[44].nombre_jugador,"Diego Costa");
    strcpy(goles[45].nombre_jugador,"Mile Jedinak");
    strcpy(goles[46].nombre_jugador,"Christian Eriksen");
    strcpy(goles[47].nombre_jugador,"Kylian Mbappé");
    strcpy(goles[48].nombre_jugador,"Ante Rebić");
    strcpy(goles[49].nombre_jugador,"Ivan Rakitić");
    strcpy(goles[50].nombre_jugador,"Luka Modrić");
    strcpy(goles[51].nombre_jugador,"Ahmed Musa");
    strcpy(goles[52].nombre_jugador,"Ahmed Musa");
    strcpy(goles[53].nombre_jugador,"Neymar Santos Júnior");
    strcpy(goles[54].nombre_jugador,"Philippe Coutinho Co");
    strcpy(goles[55].nombre_jugador,"Aleksandar Mitrović");
    strcpy(goles[56].nombre_jugador,"Granit Xhaka");
    strcpy(goles[57].nombre_jugador,"Xherdan Shaqiri");
    strcpy(goles[58].nombre_jugador,"Carlos Vela");
    strcpy(goles[59].nombre_jugador,"Javier Hernández");
    strcpy(goles[60].nombre_jugador,"Son Heung-Min");
    strcpy(goles[61].nombre_jugador,"Marco Reus");
    strcpy(goles[62].nombre_jugador,"Toni Kroos");
    strcpy(goles[63].nombre_jugador,"Ola Toivonen");
    strcpy(goles[64].nombre_jugador,"Eden Hazard");
    strcpy(goles[65].nombre_jugador,"Eden Hazard");
    strcpy(goles[66].nombre_jugador,"Michy Batshuayi");
    strcpy(goles[67].nombre_jugador,"Romelu Lukaku");
    strcpy(goles[68].nombre_jugador,"Romelu Lukaku");
    strcpy(goles[69].nombre_jugador,"Dylan Bronn");
    strcpy(goles[70].nombre_jugador,"Wahbi Khazri");
    strcpy(goles[71].nombre_jugador,"Harry Kane");
    strcpy(goles[72].nombre_jugador,"Harry Kane");
    strcpy(goles[73].nombre_jugador,"Harry Kane");
    strcpy(goles[74].nombre_jugador,"Jesse Lingard");
    strcpy(goles[75].nombre_jugador,"John Stones");
    strcpy(goles[76].nombre_jugador,"John Stones");
    strcpy(goles[77].nombre_jugador,"Felipe Baloy");
    strcpy(goles[78].nombre_jugador,"Keisuke Honda");
    strcpy(goles[79].nombre_jugador,"Takashi Inui");
    strcpy(goles[80].nombre_jugador,"Moussa Wagué");
    strcpy(goles[81].nombre_jugador,"Sadio Mané");
    strcpy(goles[82].nombre_jugador,"Juan Guillermo Cuadr");
    strcpy(goles[83].nombre_jugador,"Radamel Falcao Garcí");
    strcpy(goles[84].nombre_jugador,"Yerry Mina");
    strcpy(goles[85].nombre_jugador,"Mohammed Salah");
    strcpy(goles[86].nombre_jugador,"Salem Ad-Dawsari");
    strcpy(goles[87].nombre_jugador,"Salman Al-Faraj");
    strcpy(goles[88].nombre_jugador,"Denis Cheryshev");
    strcpy(goles[89].nombre_jugador,"Edinson Cavani");
    strcpy(goles[90].nombre_jugador,"Luis Suárez");
    strcpy(goles[91].nombre_jugador,"Karim Ansarifard");
    strcpy(goles[92].nombre_jugador,"Ricardo Quaresma Ber");
    strcpy(goles[93].nombre_jugador,"Khalid Boutaïb");
    strcpy(goles[94].nombre_jugador,"Youssef En-Nesyri");
    strcpy(goles[95].nombre_jugador,"Iago Aspas");
    strcpy(goles[96].nombre_jugador,"Isco Alarcón");
    strcpy(goles[97].nombre_jugador,"André Carrillo");
    strcpy(goles[98].nombre_jugador,"Paolo Guerrero");
    strcpy(goles[99].nombre_jugador,"Ivan Perišić");
    strcpy(goles[100].nombre_jugador,"Milan Badelj");
    strcpy(goles[101].nombre_jugador,"Gylfi Þór Sigurðsson");
    strcpy(goles[102].nombre_jugador,"Lionel Messi");
    strcpy(goles[103].nombre_jugador,"Marcos Rojo");
    strcpy(goles[104].nombre_jugador,"Victor Moses");
    strcpy(goles[105].nombre_jugador,"Júnior Paulinho");
    strcpy(goles[106].nombre_jugador,"Thiago da Silva");
    strcpy(goles[107].nombre_jugador,"Kendall Waston");
    strcpy(goles[108].nombre_jugador,"Yann Sommer");
    strcpy(goles[109].nombre_jugador,"Blerim Džemaili");
    strcpy(goles[110].nombre_jugador,"Josip Drmić");
    strcpy(goles[111].nombre_jugador,"Kim Young-Gwon");
    strcpy(goles[112].nombre_jugador,"Son Heung-Min");
    strcpy(goles[113].nombre_jugador,"Andreas Granqvist");
    strcpy(goles[114].nombre_jugador,"Edson Álvarez");
    strcpy(goles[115].nombre_jugador,"Ludwig Augustinsson");
    strcpy(goles[116].nombre_jugador,"Adnan Januzaj");
    strcpy(goles[117].nombre_jugador,"Yassine Meriah");
    strcpy(goles[118].nombre_jugador,"Fakhreddine Ben Yous");
    strcpy(goles[119].nombre_jugador,"Wahbi Khazri");
    strcpy(goles[120].nombre_jugador,"Jan Bednarek");
    strcpy(goles[121].nombre_jugador,"Yerry Mina");
    strcpy(goles[122].nombre_jugador,"Ángel Di María");
    strcpy(goles[123].nombre_jugador,"Gabriel Mercado");
    strcpy(goles[124].nombre_jugador,"Sergio Agüero");
    strcpy(goles[125].nombre_jugador,"Antoine Griezmann");
    strcpy(goles[126].nombre_jugador,"Benjamin Pavard");
    strcpy(goles[127].nombre_jugador,"Kylian Mbappé");
    strcpy(goles[128].nombre_jugador,"Kylian Mbappé");
    strcpy(goles[129].nombre_jugador,"Képler Ferreira Pepe");
    strcpy(goles[130].nombre_jugador,"Edinson Cavani");
    strcpy(goles[131].nombre_jugador,"Edinson Cavani");
    strcpy(goles[132].nombre_jugador,"Artyom Dzyuba");
    strcpy(goles[133].nombre_jugador,"Sergey Ignashevich");
    strcpy(goles[134].nombre_jugador,"Mario Mandžukić");
    strcpy(goles[135].nombre_jugador,"Mathias Jørgensen");
    strcpy(goles[136].nombre_jugador,"Neymar Santos Júnior");
    strcpy(goles[137].nombre_jugador,"Roberto Firmino de O");
    strcpy(goles[138].nombre_jugador,"Jan Vertonghen");
    strcpy(goles[139].nombre_jugador,"Marouane Fellaini");
    strcpy(goles[140].nombre_jugador,"Nacer Chadli");
    strcpy(goles[141].nombre_jugador,"Genki Haraguchi");
    strcpy(goles[142].nombre_jugador,"Takashi Inui");
    strcpy(goles[143].nombre_jugador,"Manuel Akanji");
    strcpy(goles[144].nombre_jugador,"Yerry Mina");
    strcpy(goles[145].nombre_jugador,"Harry Kane");
    strcpy(goles[146].nombre_jugador,"Antoine Griezmann");
    strcpy(goles[147].nombre_jugador,"Raphaël Varane");
    strcpy(goles[148].nombre_jugador,"Fernando Roza Fernan");
    strcpy(goles[149].nombre_jugador,"Kevin De Bruyne");
    strcpy(goles[150].nombre_jugador,"Renato Augusto");
    strcpy(goles[151].nombre_jugador,"Dele Alli");
    strcpy(goles[152].nombre_jugador,"Harry Maguire");
    strcpy(goles[153].nombre_jugador,"Andrej Kramarić");
    strcpy(goles[154].nombre_jugador,"Domagoj Vida");
    strcpy(goles[155].nombre_jugador,"Denis Cheryshev");
    strcpy(goles[156].nombre_jugador,"Mário Fernandes");
    strcpy(goles[157].nombre_jugador,"Samuel Umtiti");
    strcpy(goles[158].nombre_jugador,"Ivan Perišić");
    strcpy(goles[159].nombre_jugador,"Mario Mandžukić");
    strcpy(goles[160].nombre_jugador,"Kieran Trippier");
    strcpy(goles[161].nombre_jugador,"Eden Hazard");
    strcpy(goles[162].nombre_jugador,"Thomas Meunier");
    strcpy(goles[163].nombre_jugador,"Ivan Perišić");
    strcpy(goles[164].nombre_jugador,"Mario Mandžukić");
    strcpy(goles[165].nombre_jugador,"Antoine Griezmann");
    strcpy(goles[166].nombre_jugador,"Kylian Mbappé");
    strcpy(goles[167].nombre_jugador,"Mario Mandžukić");
    strcpy(goles[168].nombre_jugador,"Paul Pba");
    strcpy(goles[167].nombre_jugador,"Mario Mandžukić");
    strcpy(goles[168].nombre_jugador,"Paul Pba");

    goles[2].codigo_equipo=22;
    goles[3].codigo_equipo=22;
    goles[4].codigo_equipo=22;
    goles[5].codigo_equipo=31;
    goles[6].codigo_equipo=13;
    goles[7].codigo_equipo=21;
    goles[8].codigo_equipo=21;
    goles[9].codigo_equipo=21;
    goles[10].codigo_equipo=27;
    goles[11].codigo_equipo=27;
    goles[12].codigo_equipo=27;
    goles[13].codigo_equipo=1;
    goles[14].codigo_equipo=10;
    goles[15].codigo_equipo=10;
    goles[16].codigo_equipo=7;
    goles[17].codigo_equipo=0;
    goles[18].codigo_equipo=12;
    goles[19].codigo_equipo=6;
    goles[20].codigo_equipo=6;
    goles[21].codigo_equipo=25;
    goles[22].codigo_equipo=3;
    goles[23].codigo_equipo=29;
    goles[24].codigo_equipo=15;
    goles[25].codigo_equipo=28;
    goles[26].codigo_equipo=2;
    goles[27].codigo_equipo=2;
    goles[28].codigo_equipo=2;
    goles[29].codigo_equipo=9;
    goles[30].codigo_equipo=9;
    goles[31].codigo_equipo=30;
    goles[32].codigo_equipo=8;
    goles[33].codigo_equipo=22;
    goles[34].codigo_equipo=22;
    goles[35].codigo_equipo=22;
    goles[36].codigo_equipo=4;
    goles[37].codigo_equipo=14;
    goles[38].codigo_equipo=14;
    goles[39].codigo_equipo=20;
    goles[40].codigo_equipo=24;
    goles[41].codigo_equipo=24;
    goles[42].codigo_equipo=31;
    goles[43].codigo_equipo=21;
    goles[44].codigo_equipo=27;
    goles[45].codigo_equipo=1;
    goles[46].codigo_equipo=7;
    goles[47].codigo_equipo=10;
    goles[48].codigo_equipo=6;
    goles[49].codigo_equipo=6;
    goles[50].codigo_equipo=6;
    goles[51].codigo_equipo=17;
    goles[52].codigo_equipo=17;
    goles[53].codigo_equipo=3;
    goles[54].codigo_equipo=3;
    goles[55].codigo_equipo=25;
    goles[56].codigo_equipo=29;
    goles[57].codigo_equipo=29;
    goles[58].codigo_equipo=15;
    goles[59].codigo_equipo=15;
    goles[60].codigo_equipo=26;
    goles[61].codigo_equipo=11;
    goles[62].codigo_equipo=11;
    goles[63].codigo_equipo=28;
    goles[64].codigo_equipo=2;
    goles[65].codigo_equipo=2;
    goles[66].codigo_equipo=2;
    goles[67].codigo_equipo=2;
    goles[68].codigo_equipo=2;
    goles[69].codigo_equipo=30;
    goles[70].codigo_equipo=30;
    goles[71].codigo_equipo=9;
    goles[72].codigo_equipo=9;
    goles[73].codigo_equipo=9;
    goles[74].codigo_equipo=9;
    goles[75].codigo_equipo=9;
    goles[76].codigo_equipo=9;
    goles[77].codigo_equipo=18;
    goles[78].codigo_equipo=14;
    goles[79].codigo_equipo=14;
    goles[80].codigo_equipo=24;
    goles[81].codigo_equipo=24;
    goles[82].codigo_equipo=4;
    goles[83].codigo_equipo=4;
    goles[84].codigo_equipo=4;
    goles[85].codigo_equipo=8;
    goles[86].codigo_equipo=23;
    goles[87].codigo_equipo=23;
    goles[88].codigo_equipo=31;
    goles[89].codigo_equipo=31;
    goles[90].codigo_equipo=31;
    goles[91].codigo_equipo=13;
    goles[92].codigo_equipo=21;
    goles[93].codigo_equipo=16;
    goles[94].codigo_equipo=16;
    goles[95].codigo_equipo=27;
    goles[96].codigo_equipo=27;
    goles[97].codigo_equipo=19;
    goles[98].codigo_equipo=19;
    goles[99].codigo_equipo=6;
    goles[100].codigo_equipo=6;
    goles[101].codigo_equipo=12;
    goles[102].codigo_equipo=0;
    goles[103].codigo_equipo=0;
    goles[104].codigo_equipo=17;
    goles[105].codigo_equipo=3;
    goles[106].codigo_equipo=3;
    goles[107].codigo_equipo=5;
    goles[108].codigo_equipo=5;
    goles[109].codigo_equipo=29;
    goles[110].codigo_equipo=29;
    goles[111].codigo_equipo=26;
    goles[112].codigo_equipo=26;
    goles[113].codigo_equipo=28;
    goles[114].codigo_equipo=28;
    goles[115].codigo_equipo=28;
    goles[116].codigo_equipo=2;
    goles[117].codigo_equipo=18;
    goles[118].codigo_equipo=30;
    goles[119].codigo_equipo=30;
    goles[120].codigo_equipo=20;
    goles[121].codigo_equipo=4;
    goles[122].codigo_equipo=0;
    goles[123].codigo_equipo=0;
    goles[124].codigo_equipo=0;
    goles[125].codigo_equipo=10;
    goles[126].codigo_equipo=10;
    goles[127].codigo_equipo=10;
    goles[128].codigo_equipo=10;
    goles[129].codigo_equipo=21;
    goles[130].codigo_equipo=31;
    goles[131].codigo_equipo=31;
    goles[132].codigo_equipo=22;
    goles[133].codigo_equipo=27;
    goles[134].codigo_equipo=6;
    goles[135].codigo_equipo=7;
    goles[136].codigo_equipo=3;
    goles[137].codigo_equipo=3;
    goles[138].codigo_equipo=2;
    goles[139].codigo_equipo=2;
    goles[140].codigo_equipo=2;
    goles[141].codigo_equipo=14;
    goles[142].codigo_equipo=14;
    goles[143].codigo_equipo=28;
    goles[144].codigo_equipo=4;
    goles[145].codigo_equipo=9;
    goles[146].codigo_equipo=10;
    goles[147].codigo_equipo=10;
    goles[148].codigo_equipo=2;
    goles[149].codigo_equipo=2;
    goles[150].codigo_equipo=3;
    goles[151].codigo_equipo=9;
    goles[152].codigo_equipo=9;
    goles[153].codigo_equipo=6;
    goles[154].codigo_equipo=6;
    goles[155].codigo_equipo=22;
    goles[156].codigo_equipo=22;
    goles[157].codigo_equipo=10;
    goles[158].codigo_equipo=6;
    goles[159].codigo_equipo=6;
    goles[160].codigo_equipo=9;
    goles[161].codigo_equipo=2;
    goles[162].codigo_equipo=2;
    goles[163].codigo_equipo=6;
    goles[164].codigo_equipo=6;
    goles[165].codigo_equipo=10;
    goles[166].codigo_equipo=10;
    goles[167].codigo_equipo=10;
    goles[168].codigo_equipo=10;
    goles[167].codigo_equipo=10;
    goles[168].codigo_equipo=10;
    


	goles[2].fecha=20180614;
	goles[3].fecha=20180614;
	goles[4].fecha=20180614;
	goles[5].fecha=20180615;
	goles[6].fecha=20180615;
	goles[7].fecha=20180615;
	goles[8].fecha=20180615;
	goles[9].fecha=20180615;
	goles[10].fecha=20180615;
	goles[11].fecha=20180615;
	goles[12].fecha=20180615;
	goles[13].fecha=20180616;
	goles[14].fecha=20180616;
	goles[15].fecha=20180616;
	goles[16].fecha=20180616;
	goles[17].fecha=20180616;
	goles[18].fecha=20180616;
	goles[19].fecha=20180616;
	goles[20].fecha=20180616;
	goles[21].fecha=20180617;
	goles[22].fecha=20180617;
	goles[23].fecha=20180617;
	goles[24].fecha=20180617;
	goles[25].fecha=20180618;
	goles[26].fecha=20180618;
	goles[27].fecha=20180618;
	goles[28].fecha=20180618;
	goles[29].fecha=20180618;
	goles[30].fecha=20180618;
	goles[31].fecha=20180618;
	goles[32].fecha=20180619;
	goles[33].fecha=20180619;
	goles[34].fecha=20180619;
	goles[35].fecha=20180619;
	goles[36].fecha=20180619;
	goles[37].fecha=20180619;
	goles[38].fecha=20180619;
	goles[39].fecha=20180619;
	goles[40].fecha=20180619;
	goles[41].fecha=20180619;
	goles[42].fecha=20180620;
	goles[43].fecha=20180620;
	goles[44].fecha=20180620;
	goles[45].fecha=20180621;
	goles[46].fecha=20180621;
	goles[47].fecha=20180621;
	goles[48].fecha=20180621;
	goles[49].fecha=20180621;
	goles[50].fecha=20180621;
	goles[51].fecha=20180622;
	goles[52].fecha=20180622;
	goles[53].fecha=20180622;
	goles[54].fecha=20180622;
	goles[55].fecha=20180622;
	goles[56].fecha=20180622;
	goles[57].fecha=20180622;
	goles[58].fecha=20180623;
	goles[59].fecha=20180623;
	goles[60].fecha=20180623;
	goles[61].fecha=20180623;
	goles[62].fecha=20180623;
	goles[63].fecha=20180623;
	goles[64].fecha=20180623;
	goles[65].fecha=20180623;
	goles[66].fecha=20180623;
	goles[67].fecha=20180623;
	goles[68].fecha=20180623;
	goles[69].fecha=20180623;
	goles[70].fecha=20180623;
	goles[71].fecha=20180624;
	goles[72].fecha=20180624;
	goles[73].fecha=20180624;
	goles[74].fecha=20180624;
	goles[75].fecha=20180624;
	goles[76].fecha=20180624;
	goles[77].fecha=20180624;
	goles[78].fecha=20180624;
	goles[79].fecha=20180624;
	goles[80].fecha=20180624;
	goles[81].fecha=20180624;
	goles[82].fecha=20180624;
	goles[83].fecha=20180624;
	goles[84].fecha=20180624;
	goles[85].fecha=20180625;
	goles[86].fecha=20180625;
	goles[87].fecha=20180625;
	goles[88].fecha=20180625;
	goles[89].fecha=20180625;
	goles[90].fecha=20180625;
	goles[91].fecha=20180625;
	goles[92].fecha=20180625;
	goles[93].fecha=20180625;
	goles[94].fecha=20180625;
	goles[95].fecha=20180625;
	goles[96].fecha=20180625;
	goles[97].fecha=20180626;
	goles[98].fecha=20180626;
	goles[99].fecha=20180626;
	goles[100].fecha=20180626;
	goles[101].fecha=20180626;
	goles[102].fecha=20180626;
	goles[103].fecha=20180626;
	goles[104].fecha=20180626;
	goles[105].fecha=20180627;
	goles[106].fecha=20180627;
	goles[107].fecha=20180627;
	goles[108].fecha=20180627;
	goles[109].fecha=20180627;
	goles[110].fecha=20180627;
	goles[111].fecha=20180627;
	goles[112].fecha=20180627;
	goles[113].fecha=20180627;
	goles[114].fecha=20180627;
	goles[115].fecha=20180627;
	goles[116].fecha=20180628;
	goles[117].fecha=20180628;
	goles[118].fecha=20180628;
	goles[119].fecha=20180628;
	goles[120].fecha=20180628;
	goles[121].fecha=20180628;
	goles[122].fecha=20180630;
	goles[123].fecha=20180630;
	goles[124].fecha=20180630;
	goles[125].fecha=20180630;
	goles[126].fecha=20180630;
	goles[127].fecha=20180630;
	goles[128].fecha=20180630;
	goles[129].fecha=20180630;
	goles[130].fecha=20180630;
	goles[131].fecha=20180630;
	goles[132].fecha=20180701;
	goles[133].fecha=20180701;
	goles[134].fecha=20180701;
	goles[135].fecha=20180701;
	goles[136].fecha=20180702;
	goles[137].fecha=20180702;
	goles[138].fecha=20180702;
	goles[139].fecha=20180702;
	goles[140].fecha=20180702;
	goles[141].fecha=20180702;
	goles[142].fecha=20180702;
	goles[143].fecha=20180703;
	goles[144].fecha=20180703;
	goles[145].fecha=20180703;
	goles[146].fecha=20180706;
	goles[147].fecha=20180706;
	goles[148].fecha=20180706;
	goles[149].fecha=20180706;
	goles[150].fecha=20180706;
	goles[151].fecha=20180707;
	goles[152].fecha=20180707;
	goles[153].fecha=20180707;
	goles[154].fecha=20180707;
	goles[155].fecha=20180707;
	goles[156].fecha=20180707;
	goles[157].fecha=20180710;
	goles[158].fecha=20180711;
	goles[159].fecha=20180711;
	goles[160].fecha=20180711;
	goles[161].fecha=20180714;
	goles[162].fecha=20180714;
	goles[163].fecha=20180715;
	goles[164].fecha=20180715;
	goles[165].fecha=20180715;
	goles[166].fecha=20180715;
	goles[167].fecha=20180715;
	goles[168].fecha=20180715;
	goles[167].fecha=20180715;
	goles[168].fecha=20180715;


    goles[0].id_partido=1;
    goles[1].id_partido=1;
    goles[2].id_partido=1;
    goles[3].id_partido=1;
    goles[4].id_partido=1;
    goles[5].id_partido=2;
    goles[6].id_partido=3;
    goles[7].id_partido=4;
    goles[8].id_partido=4;
    goles[9].id_partido=4;
    goles[10].id_partido=4;
    goles[11].id_partido=4;
    goles[12].id_partido=4;
    goles[13].id_partido=5;
    goles[14].id_partido=5;
    goles[15].id_partido=5;
    goles[16].id_partido=6;
    goles[17].id_partido=7;
    goles[18].id_partido=7;
    goles[19].id_partido=8;
    goles[20].id_partido=8;
    goles[21].id_partido=9;
    goles[22].id_partido=10;
    goles[23].id_partido=10;
    goles[24].id_partido=11;
    goles[25].id_partido=12;
    goles[26].id_partido=13;
    goles[27].id_partido=13;
    goles[28].id_partido=13;
    goles[29].id_partido=14;
    goles[30].id_partido=14;
    goles[31].id_partido=14;
    goles[32].id_partido=15;
    goles[33].id_partido=15;
    goles[34].id_partido=15;
    goles[35].id_partido=15;
    goles[36].id_partido=16;
    goles[37].id_partido=16;
    goles[38].id_partido=16;
    goles[39].id_partido=17;
    goles[40].id_partido=17;
    goles[41].id_partido=17;
    goles[42].id_partido=18;
    goles[43].id_partido=19;
    goles[44].id_partido=20;
    goles[45].id_partido=21;
    goles[46].id_partido=21;
    goles[47].id_partido=22;
    goles[48].id_partido=23;
    goles[49].id_partido=23;
    goles[50].id_partido=23;
    goles[51].id_partido=24;
    goles[52].id_partido=24;
    goles[53].id_partido=25;
    goles[54].id_partido=25;
    goles[55].id_partido=26;
    goles[56].id_partido=26;
    goles[57].id_partido=26;
    goles[58].id_partido=27;
    goles[59].id_partido=27;
    goles[60].id_partido=27;
    goles[61].id_partido=28;
    goles[62].id_partido=28;
    goles[63].id_partido=28;
    goles[64].id_partido=29;
    goles[65].id_partido=29;
    goles[66].id_partido=29;
    goles[67].id_partido=29;
    goles[68].id_partido=29;
    goles[69].id_partido=29;
    goles[70].id_partido=29;
    goles[71].id_partido=30;
    goles[72].id_partido=30;
    goles[73].id_partido=30;
    goles[74].id_partido=30;
    goles[75].id_partido=30;
    goles[76].id_partido=30;
    goles[77].id_partido=30;
    goles[78].id_partido=31;
    goles[79].id_partido=31;
    goles[80].id_partido=31;
    goles[81].id_partido=31;
    goles[82].id_partido=32;
    goles[83].id_partido=32;
    goles[84].id_partido=32;
    goles[85].id_partido=32;
    goles[86].id_partido=32;
    goles[87].id_partido=32;
    goles[88].id_partido=33;
    goles[89].id_partido=33;
    goles[90].id_partido=33;
    goles[91].id_partido=35;
    goles[92].id_partido=35;
    goles[93].id_partido=36;
    goles[94].id_partido=36;
    goles[95].id_partido=36;
    goles[96].id_partido=36;
    goles[97].id_partido=37;
    goles[98].id_partido=37;
    goles[99].id_partido=39;
    goles[100].id_partido=39;
    goles[101].id_partido=39;
    goles[102].id_partido=40;
    goles[103].id_partido=40;
    goles[104].id_partido=40;
    goles[105].id_partido=41;
    goles[106].id_partido=41;
    goles[107].id_partido=42;
    goles[108].id_partido=42;
    goles[109].id_partido=42;
    goles[110].id_partido=42;
    goles[111].id_partido=43;
    goles[112].id_partido=43;
    goles[113].id_partido=44;
    goles[114].id_partido=44;
    goles[115].id_partido=44;
    goles[116].id_partido=45;
    goles[117].id_partido=46;
    goles[118].id_partido=46;
    goles[119].id_partido=46;
    goles[120].id_partido=47;
    goles[121].id_partido=48;
    goles[122].id_partido=49;
    goles[123].id_partido=49;
    goles[124].id_partido=49;
    goles[125].id_partido=49;
    goles[126].id_partido=49;
    goles[127].id_partido=49;
    goles[128].id_partido=49;
    goles[129].id_partido=50;
    goles[130].id_partido=50;
    goles[131].id_partido=50;
    goles[132].id_partido=51;
    goles[133].id_partido=51;
    goles[134].id_partido=52;
    goles[135].id_partido=52;
    goles[136].id_partido=53;
    goles[137].id_partido=53;
    goles[138].id_partido=54;
    goles[139].id_partido=54;
    goles[140].id_partido=54;
    goles[141].id_partido=54;
    goles[142].id_partido=54;
    goles[143].id_partido=55;
    goles[144].id_partido=56;
    goles[145].id_partido=56;
    goles[146].id_partido=57;
    goles[147].id_partido=57;
    goles[148].id_partido=58;
    goles[149].id_partido=58;
    goles[150].id_partido=58;
    goles[151].id_partido=59;
    goles[152].id_partido=59;
    goles[153].id_partido=60;
    goles[154].id_partido=60;
    goles[155].id_partido=60;
    goles[156].id_partido=60;
    goles[157].id_partido=61;
    goles[158].id_partido=60;
    goles[159].id_partido=60;
    goles[160].id_partido=62;
    goles[161].id_partido=63;
    goles[162].id_partido=63;
    goles[163].id_partido=64;
    goles[164].id_partido=64;
    goles[165].id_partido=64;
    goles[166].id_partido=64;
    goles[167].id_partido=64;
    goles[168].id_partido=64;
	
	return;
}

nodoArbol * VectorAArbol(RegistroDeGoles goles[], int lenGoles) 	//Cargamos la informacion a un arbol binario, siguiendo criterio de orden por Equipo y por fecha.
{
	nodoArbol * raiz = NULL;
	for(int i=0; i<lenGoles; i++) {
        insertarNodo(raiz,goles[i]);
    }
    return raiz;
}


void generarRegistro(nodoArbol* arbol)	// Leemos el arbol con metodo InOrden y guardamos en archivo.
{
	FILE * fileRegistroDeGoles = fopen("RegistroGoles.dat", "wb");

    // RegistroDeGoles regGoles;
    inOrden(arbol, fileRegistroDeGoles);
    fclose(fileRegistroDeGoles);
	return;
}

void mostrarRegistroDeGoles()  	// Mostramos contenido en consola, recorriendo el archivo, para verificacion.
{
    FILE * fileRegistroDeGoles = fopen("RegistroGoles.dat", "rb");
    RegistroDeGoles regGoles;

    char paises[32][13]= {
        "ARGENTINA",
        "AUSTRALIA",
        "BELGIUM",
        "BRAZIL",
        "COLOMBIA",
        "COSTA RICA",
        "CROATIA",
        "DENMARK",
        "EGYPT",
        "ENGLAND",
        "FRANCE",
        "GERMANY",
        "ICELAND",
        "IRAN",
        "JAPAN",
        "MEXICO",
        "MOROCCO",
        "NIGERIA",
        "PANAMA",
        "PERU",
        "POLAND",
        "PORTUGAL",
        "RUSSIA",
        "SAUDI ARABIA",
        "SENEGAL",
        "SERBIA",
        "SOUTH KOREA",
        "SPAIN",
        "SWEDEN",
        "SWITZERLAND",
        "TUNISIA",
        "URUGUAY"
    };

    fread(&regGoles, sizeof(RegistroDeGoles), 1, fileRegistroDeGoles);
    cout << "_______________________________________________________________" << endl;
    cout << "******** REGISTRO DE GOLES DE CADA PARTIDO POR EQUIPO ******** " << endl;
    cout << "_______________________________________________________________" << endl;
    while (!feof(fileRegistroDeGoles)) {
        cout << "EQUIPO:         " << paises[regGoles.codigo_equipo] << endl;
        cout << "CÓDIGO:         " << regGoles.codigo_equipo << endl;
        cout << "FECHA:          " << regGoles.fecha << endl;
        cout << "ID DEL GOL:     " << regGoles.id_gol << endl;
        cout << "ID DEL PARTIDO: " << regGoles.id_partido << endl;
        cout << "JUGADOR:        " << regGoles.nombre_jugador << endl << endl;
        fread(&regGoles,sizeof(RegistroDeGoles),1,fileRegistroDeGoles);
    }
    cout << "_______________________________________________________________" << endl;
    cout << "_______________________________________________________________" << endl;
    cout << "_______________________________________________________________" << endl;
    fclose(fileRegistroDeGoles);
}

void insertarNodo(nodoArbol* &ptrArbol, RegistroDeGoles valor)
{
	if(ptrArbol==NULL) {
		nodoArbol* aux=new nodoArbol();
		aux->info=valor;
		aux->izq=NULL;
		aux->der=NULL;
		ptrArbol=aux;
	} else if(valor.codigo_equipo < ptrArbol->info.codigo_equipo) {
        insertarNodo(ptrArbol->izq, valor);
    } else {
        if(valor.codigo_equipo > ptrArbol->info.codigo_equipo) {
            insertarNodo(ptrArbol->der, valor);
        } else {
            if(valor.fecha < ptrArbol->info.fecha) {
                insertarNodo(ptrArbol->izq, valor);
            } else {
                insertarNodo(ptrArbol->der, valor);
            }
        }
    }
}

void inOrden(nodoArbol* arbol, FILE*& fileRegistroDeGoles)
{
    RegistroDeGoles regGoles;

	if(arbol!=NULL) {
		inOrden(arbol->izq, fileRegistroDeGoles);
        regGoles.codigo_equipo = arbol->info.codigo_equipo;
    	regGoles.fecha = arbol->info.fecha;
        regGoles.id_gol = arbol->info.id_gol;
        regGoles.id_partido = arbol->info.id_partido;
        strcpy(regGoles.nombre_jugador, arbol->info.nombre_jugador);
        fwrite(&regGoles, sizeof(RegistroDeGoles), 1, fileRegistroDeGoles);
		inOrden(arbol->der, fileRegistroDeGoles);
	}
}
