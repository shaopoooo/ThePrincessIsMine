title RPG
include irvine32.inc

include map.inc
include story.inc
include mapmove.inc
include bigcastel.inc
include swords.inc
include sheild.inc
include book.inc
include store.inc
include storemove.inc
include heart.inc
include cheat.inc
include buy.inc
include cross.inc

include trutle.inc
include ghost.inc
include dragon.inc
include green.inc
include bat.inc
include boss_inc.inc
include midboss.inc
include wolf.inc
include turkey.inc
include dragoncat.inc
include R2D2.inc

include hero_stage.inc
include fight.inc
include hero_att_inc.inc
include hero_mag_inc.inc
include hero_def_inc.inc
include win_inc.inc
include win_m_inc.inc
include lose_inc.inc
include lose_m_inc.inc
include getexp_inc.inc
include levelup_inc.inc

.data
;message byte "",0ah,0dh,0
message00 byte "            ________            ____       _                                    "                             
message01 byte "           /_  __/ /_  ___     / __ \_____(_)___  ________  __________          "    
message02 byte "            / / / __ \/ _ \   / /_/ / ___/ / __ \/ ___/ _ \/ ___/ ___/          "    
message03 byte "           / / / / / /  __/  / ____/ /  / / / / / /__/  __(__  |__  )           "    
message04 byte "          /_/ /_/ /_/\___/  /_/   /_/  /_/_/ /_/\___/\___/____/____/            ",0ah,0dh,0      
message05 byte "                         _                                                      "                                                          
message06 byte "                        (_)____                                                 "                                                     
message07 byte "                       / / ___/                                                 "                                                    
message08 byte "                      / (__  )                                                  "                                                       
message09 byte "                     /_/____/                                                   ",0ah,0dh,0                                                        
message80 byte "                __  ________   ________                                         "                               
message81 byte "               /  |/  /  _/ | / / ____/                                         "                                     
message82 byte "              / /|_/ // //  |/ / __/                                            "                                        
message83 byte "             / /  / // // /|  / /___                                            "                                       
message84 byte "            /_/  /_/___/_/ |_/_____/                                            ",0ah,0dh,0
message0 byte "The Princess is MINE",0ah,0dh,0
message1 byte "Press [Enter] to start game",0ah,0dh,0
message2 byte "...............................................................................",0ah,0dh,0
message3 byte "How to play",0ah,0dh,0
message4 byte "              This is a Role.Play.Game ,you will be facing monsters.",0ah,0dh,0
message5 byte "                      Defeat them and the princess is yours.",0ah,0dh,0
message6 byte "           There will be shops where you can get items that can help you.",0ah,0dh,0
message7 byte "                 Follow instructions given throughout your journey.",0ah,0dh,0
message8 byte "                                   Good Luck!",0ah,0dh,0
message9 byte "Once upon a time ,there was a peaceful kingdom realmed by a mighty king.",0ah,0dh,0
message10 byte "...Until one day...",0ah,0dh,0
message11 byte "A frightful scream of a young lady ,broke the silent night.",0ah,0dh,0
message12 byte "The princess is gone!",0ah,0dh,0
message13 byte "The King wants you to be the one who saves her,",0ah,0dh,0
message109 byte "go on and fight for the princess!",0ah,0dh,0
message14 byte "          *                             |>>>                    +               "
message15 byte "      +          *                      |                   *                   "
message16 byte "            +                           |           +                           "
message17 byte "                          |>>>      _  _|_  _   *     |>>>                      "
message18 byte "                 *        |        |;| |;| |;|        |                 *       "
message19 byte "           +          _  _|_  _    \\.    .  /    _  _|_  _       +             "
message20 byte "       *             |;|_|;|_|;|    \\: +   /    |;|_|;|_|;|                    "
message21 byte "                     \\..      /    ||:+++. |    \\.    .  /           *        "
message22 byte "            +         \\.  ,  /     ||:+++  |     \\:  .  /                     "
message23 byte "                       ||:+  |_   _ ||_ . _ | _   _||:+  |       *              " 
message24 byte "                *      ||+++.|||_|;|_|;|_|;|_|;|_|;||+++ |          +           "
message25 byte "                       ||+++ ||.    .     .      . ||+++.|   *                  " 
message26 byte "      +   *            ||: . ||:.     . .   .  ,   ||:   |               *      "
message27 byte "               *       ||:   ||:  ,     +       .  ||: , |      +               "
message28 byte "        *              ||:   ||:.     +++++      . ||:   |         *            "
message29 byte "           +           ||:   ||.     +++++++  .    ||: . |    +                 "
message30 byte "                 +     ||: . ||: ,   +++++++ .  .  ||:   |             +        "
message31 byte "                       ||: . ||: ,   +++++++ .  .  ||:   |        *             "
message32 byte "                       ||: . ||: ,   +++++++ .  .  ||:   |                      ",0 
message33 byte "--------------------------------------------------------------------------------",0ah,0dh,0
message34 byte "|",0
message35 byte "HP:"
message36 byte "ATT:"
message37 byte "DEF:"
message38 byte "+------------------------------------------------------------------------------+",0ah,0dh,0
message39 byte "  /\",0ah,0dh,0     ;tree
message40 byte " /  \",0ah,0dh,0
message41 byte "/_  _\",0ah,0dh,0
message42 byte "  []",0ah,0dh,0
message43 byte "..",0ah,0dh,0
message54 byte " O",0ah,0dh,0
message44 byte "                        ",0ah,0dh,0
message45 byte "[START]",0ah,0dh,0
message46 byte "         |ZZzz",0ah,0dh,0   ;smallcastel
message47 byte "   |Zzz  |     |Zzz",0ah,0dh,0
message48 byte "  /_\ /\ | /\ /_\",0ah,0dh,0
message49 byte "  |*|_||/_\||_|*|",0ah,0dh,0
message50 byte "  |.....|*|.....|",0ah,0dh,0
message51 byte "__~| .. !~! .. |~___",0ah,0dh,0
message52 byte ".*.|____|_|____|.*. ",0ah,0dh,0
message53 byte "  ",0ah,0dh,0
message55 byte "  ___I_",0ah,0dh,0    
message56 byte " /\-_--\",0ah,0dh,0   
message57 byte "/  \_-__\",0ah,0dh,0  
message58 byte "|[]|    |",0ah,0dh,0
message59 byte "SHOP",0ah,0dh,0
message60 byte " \          /",0ah,0dh,0
message61 byte " )\        /(",0ah,0dh,0
message62 byte "___\      /___ ",0ah,0dh,0
message63 byte " ) /\ /\ /\ ( ",0ah,0dh,0
message64 byte "  /^, \/ ,^\ ",0ah,0dh,0
message65 byte "     \  / ",0ah,0dh,0
message66 byte "     w,,w ",0ah,0dh,0
message67 byte "    `8||8'",0ah,0dh,0
message68 byte "      {(",0ah,0dh,0
message69 byte "       \\",0ah,0dh,0
message70 byte "        ))",0ah,0dh,0
message71 byte "       /^\",0ah,0dh,0
message72 byte "Enter number to move",0
message73 byte "0: enter stage",0
message74 byte "2: down",0ah,0dh,0
message75 byte "4: left",0ah,0dh,0
message76 byte "6: right",0ah,0dh,0
message77 byte "8: up",0ah,0dh,0
message78 byte "[backspace]: back to story",0ah,0dh,0
message79 byte "[Q]: quit game",0ah,0dh,0
message85 byte "         .....",0ah,0dh,0
message86 byte "         WWWWW",0ah,0dh,0
message87 byte "        ((. .))",0ah,0dh,0    
message88 byte "       ))) 0 (((	",0ah,0dh,0  
message89 byte "     ((((`...')))  ",0ah,0dh,0     
message90 byte "      )))) \/((((",0ah,0dh,0
message91 byte "      / / \  / \ \",0ah,0dh,0
message92 byte "     @@@ / \/ \ @@@",0ah,0dh,0
message93 byte "     (v /      \  v)",0ah,0dh,0
message94 byte "       @@@@@@@@@@",0ah,0dh,0
message95 byte "      /          \",0ah,0dh,0
message96 byte "     @@@@@@@@@@@@@@",0ah,0dh,0
message97 byte "    /              \",0ah,0dh,0
message98 byte "   @@@@@@@@@@@@@@@@@@",0ah,0dh,0
message99 byte "         v  v",0ah,0dh,0
message100 byte ". .",0ah,0dh,0  ;w
message101 byte "0",0ah,0dh,0   ;r
message102 byte "`...'",0ah,0dh,0   ;w
message103 byte "\/",0ah,0dh,0   ;c
message104 byte "/ \/ \",0ah,0dh,0
message105 byte "/      \",0ah,0dh,0   ;b
message106 byte "@xxxx[{:::::::::::::::::::::::::::::>",0ah,0dh,0
message107 byte "  (Press 0: to buy [backspace]: to map)",0ah,0dh,0
message108 byte "Play again (Y/N)? ",0

store01 byte "     The skill book of Attack",0ah,0dh,0
store02 byte "     The skill book of Defence",0ah,0dh,0
store03 byte "     The skill book of Intelligence",0ah,0dh,0
store04 byte "     The skill book of HP",0ah,0dh,0
store05 byte "     Secret",0ah,0dh,0
store06 byte "STORE ITEMS:",0ah,0dh,0
store07 byte "You have: ",0ah,0dh,0
store08 byte "88224646",0ah,0dh,0
store09 byte "     Heal",0ah,0dh,0
store10 byte "G",0

swords01 byte ".-.",0ah,0dh,0    ;swords
swords02 byte "{{@}}",0ah,0dh,0
swords03 byte "8@8",0ah,0dh,0
swords04 byte "888",0ah,0dh,0
swords05 byte "8@8",0ah,0dh,0
swords06 byte "_    )8(    _",0ah,0dh,0
swords07 byte "(@)__/8@8\__(@)",0ah,0dh,0
swords08 byte "`~'-=):(=-'~`",0ah,0dh,0
swords09 byte "|S|",0ah,0dh,0
swords10 byte "|'|",0ah,0dh,0
swords11 byte "|W|",0ah,0dh,0
swords12 byte "|'|",0ah,0dh,0
swords13 byte "|O|",0ah,0dh,0
swords14 byte "|'|",0ah,0dh,0
swords15 byte "|R|",0ah,0dh,0
swords16 byte "|'|",0ah,0dh,0
swords17 byte "|D|",0ah,0dh,0
swords18 byte "|'|",0ah,0dh,0
swords19 byte "\ /",0ah,0dh,0
swords20 byte "^",0ah,0dh,0 
swords21 byte"     Effect: Plus 1 Att-points",0ah,0dh,0
swords22 byte"     Price: 100 G",0ah,0dh,0

sheild01 byte "<>",0ah,0dh,0      ;sheild
sheild02 byte ".::::.",0ah,0dh,0
sheild03 byte "@\\/W\/\/W\//@",0ah,0dh,0
sheild04 byte "\\/^\/\/^\//",0ah,0dh,0
sheild05 byte "\_O_<>_O_/",0ah,0dh,0
sheild06 byte " ____________________",0ah,0dh,0
sheild07 byte "|<><><>  |  |  <><><>|",0ah,0dh,0
sheild08 byte "|<>      |  |      <>|",0ah,0dh,0
sheild09 byte "|<>   .--------.   <>|",0ah,0dh,0
sheild10 byte "|     |   ()   |     |",0ah,0dh,0
sheild11 byte "|_____| (O\/O) |_____|",0ah,0dh,0
sheild12 byte "|     \   /\   /     |",0ah,0dh,0
sheild13 byte "|------\  \/  /------|",0ah,0dh,0
sheild14 byte ":       '.__.'       :",0ah,0dh,0
sheild15 byte "\<>     |  |     <>/",0ah,0dh,0
sheild16 byte "\<>    |  |    <>/",0ah,0dh,0
sheild17 byte "\<>   |  |   <>/",0ah,0dh,0
sheild18 byte "`\<> |  | <>/'",0ah,0dh,0
sheild19 byte "`-.|__|.-`",0ah,0dh,0
sheild20 byte"     Effect: Plus 1 Def-points",0ah,0dh,0
sheild21 byte"     Price: 100 G",0ah,0dh,0

book01 byte "   ________________   ________________",0ah,0dh,0
book02 byte "./|                \ /                |\.",0ah,0dh,0
book03 byte "|||   Assembly      |                 |||",0ah,0dh,0
book04 byte "|||   Language      |      ~~*~~      |||",0ah,0dh,0
book05 byte "|||   --==*==--     |                 |||",0ah,0dh,0
book06 byte "|||                 |                 |||",0ah,0dh,0
book07 byte "|||                 |                 |||",0ah,0dh,0
book08 byte "|||                 |    --==*==--    |||",0ah,0dh,0
book09 byte "|||                 |                 |||",0ah,0dh,0
book10 byte "|||                 |                 |||",0ah,0dh,0
book11 byte "|||________________ | ________________|||",0ah,0dh,0
book12 byte "|/=================\|/=================\|",0ah,0dh,0
book13 byte "`-----------------~___~----------------'",0ah,0dh,0
book14 byte"     Effect: Plus 1 Int-points",0ah,0dh,0
book15 byte"     Price: 100 G",0ah,0dh,0

heart00 byte "         *",0ah,0dh,0
heart01 byte "       * | *",0ah,0dh,0
heart02 byte "      * \|/ *",0ah,0dh,0
heart03 byte " * * * \|O|/ * * *",0ah,0dh,0
heart04 byte "  \o\o\o|O|o/o/o/",0ah,0dh,0
heart05 byte "  (<><><>O<><><>)  ",0ah,0dh,0
heart06 byte "   '==========='",0ah,0dh,0
heart07 byte "      .....           .....",0ah,0dh,0
heart08 byte "  ,ad8PPPP88b,     ,d88PPPP8ba,",0ah,0dh,0
heart09 byte " d8P'      'Y8b, ,d8P'      'Y8b",0ah,0dh,0
heart10 byte "dP'           '8a8'           `Yd",0ah,0dh,0
heart11 byte "8(              '              )8",0ah,0dh,0
heart12 byte "I8                             8I",0ah,0dh,0
heart13 byte " Yb,                         ,dP",0ah,0dh,0
heart14 byte "  '8a,                     ,a8'",0ah,0dh,0
heart15 byte "    '8a,                 ,a8'",0ah,0dh,0
heart16 byte "      'Yba             adP'",0ah,0dh,0
heart17 byte "        `Y8a         a8P'",0ah,0dh,0
heart18 byte "          `88,     ,88'",0ah,0dh,0
heart19 byte "            '8b   d8'",0ah,0dh,0
heart20 byte "               Y8P",0ah,0dh,0
heart21 byte"     Effect: Plus 1 Hp-points",0ah,0dh,0
heart22 byte"     Price: 100 G",0ah,0dh,0

cheat01 byte"        ________",0ah,0dh,0
cheat02 byte"    _jgN########Ngg_",0ah,0dh,0
cheat03 byte"  _N##N@@''  ''9NN##Np_",0ah,0dh,0
cheat04 byte" d###P            N####p",0ah,0dh,0
cheat05 byte" '^^'              T####",0ah,0dh,0
cheat06 byte"                   d###P",0ah,0dh,0
cheat07 byte"                _g###@F",0ah,0dh,0
cheat08 byte"             _gN##@P",0ah,0dh,0
cheat09 byte"           gN###F'",0ah,0dh,0
cheat10 byte"          d###F",0ah,0dh,0
cheat11 byte"         0###F",0ah,0dh,0
cheat12 byte"         0###F",0ah,0dh,0
cheat13 byte"         0###F",0ah,0dh,0
cheat14 byte"         'NN@'",0ah,0dh,0
cheat15 byte"  ___",0ah,0dh,0
cheat16 byte" q###r",0ah,0dh,0
cheat17 byte"  '''",0ah,0dh,0
cheat18 byte"     Effect: ???",0ah,0dh,0
cheat19 byte"     Price: 500 G",0ah,0dh,0

cross01 byte "            .-------.",0ah,0dh,0
cross02 byte "            |(~\o/~)|",0ah,0dh,0
cross03 byte "          _.||\/X\/||._",0ah,0dh,0
cross04 byte "       ,-'  || \ / ||  '-,",0ah,0dh,0
cross05 byte "     ,'  () ||o X o|| ()  ',",0ah,0dh,0
cross06 byte "    / ()  ,-|| / \ ||-,  () \",0ah,0dh,0
cross07 byte "   : o  ,'  ||/\X/\||  ',  o ;",0ah,0dh,0
cross08 byte ".----------._)~   ~(_.----------.",0ah,0dh,0
cross09 byte "|\/)~~(\/\   (~\ /~)   /\/)~~(\/|",0ah,0dh,0
cross10 byte "|(X () X) >o  >-X-<  o< (X () X)|",0ah,0dh,0
cross11 byte "|/\)__(/\/  _(_/|\_)_  \/\)__(/\|",0ah,0dh,0
cross12 byte "'----------' )     ( '----------'",0ah,0dh,0
cross13 byte "   ; o  ',  ||\/X\/||  ,'  o ;",0ah,0dh,0
cross14 byte "    \ ()  '-|| \ / ||-'  () /",0ah,0dh,0
cross15 byte "     ',  () ||o X o|| ()  ,'",0ah,0dh,0
cross16 byte "       '-._ || / \ || _.-'",0ah,0dh,0
cross17 byte "           '||/\_/\||'",0ah,0dh,0
cross18 byte "            |(~/o\~)|",0ah,0dh,0
cross19 byte "            '._____.'",0ah,0dh,0
cross20 byte "     Effect: Recover full HP",0ah,0dh,0
cross21 byte "     Price: 100 G",0ah,0dh,0

trutle1		byte"                                      ***************                           "           
trutle2     byte"                                    ***   / \\      ***                         "            
trutle3     byte"                     ******       *** \  /   \\    ///***                       "             
trutle4     byte"                    *     ***   ***   \\/     \\ //     ***                     "            
trutle5     byte"                   *  o  o   * **      //      \//      / **                    "             
trutle6     byte"                   *          **      //\     ///     //   **                   "            
trutle7     byte"                    **  -    **      // \\   // \\\ ///     **                  "            
trutle8     byte"                      **    **      //  \  //    \\\        **                  "            
trutle9     byte"                        *****      //   \\//      \\        **                  "             
trutle10    byte"                           **    //     \/        \\     ****                   "             
trutle11    byte"                            ********************************                    "              
trutle12    byte"                              **     **         **     **                       "               
trutle13    byte"                              *       *         *       *                       ",0ah,0

ghost1     	byte"                                     *********                                  "
ghost2      byte"                                 *****        ***                               "
ghost3      byte"                              ****    **    *   ***                             "
ghost4      byte"                            ***       *     *     **                            "
ghost5      byte"                           **         *     *      *                            "
ghost7      byte"                          *        ********         *                           "
ghost8      byte"                          *         **  **          *                           "
ghost9      byte"                          *    *                    *                           "
ghost10     byte"                          * *  *            *   *   *                           "
ghost11     byte"                          * *  *            *  ** **                            "
ghost12     byte"                          *****             ****  *                             "
ghost13     byte"                            *                  **                               "
ghost14     byte"                            **                **                                "
ghost15     byte"                             **            ****                                 "
ghost16     byte"                              **      ******                                    "
ghost17     byte"                               **   ***                                         "
ghost18     byte"                                *****                                           "
ghost19     byte"                                 ***                                            ",0ah,0

dragon1		byte"                                     .       .                                  "
dragon2		byte"                                    / `.   .' \                                 "
dragon3		byte"                            .---.  <    > <    >  .---.                         "
dragon4		byte"                            |    \  \ - ~ ~ - /  /    |                         "
dragon5		byte"                             ~-..-~             ~-..-~                          "
dragon6		byte"                         \~~~\.'                    `./~~~/                     "
dragon7		byte"               .-~~^-.    \__/                        \__/                      "
dragon8		byte"             .'  O    \     /               /       \  \                        "
dragon9		byte"            (_____,    `._.'               |         }  \/~~~/                  "
dragon10	byte"             `----.          /       }     |        /    \__/                   "
dragon11	byte"                   `-.      |       /      |       /      `. ,~~|               "
dragon12	byte"                       ~-.__|      /_ - ~ ^|      /- _      `..-'   f: f:       "
dragon13	byte"                            |     /        |     /     ~-.     `-. _||_||_      "
dragon14	byte"                            |_____|        |_____|         ~ - . _ _ _ _ _>     ",0ah,0

green1		byte"                                    ***                                         "    
green2		byte"                                  **   **                                       "   
green3		byte"                                  *      **                                     "   
green4		byte"                                  *      ***                                    "   
green5		byte"                         ****     *      * ***                                  "   
green6		byte"                         *  *    *      **   ******                             "   
green7		byte"                         ****  **     ***          ***                          "   
green8		byte"                           ****    ****                **                       "   
green9		byte"                                 ***                     *                      "   
green10		byte"                               ***               O       **                     "   
green11		byte"                               *           O              *                     "   
green12		byte"                               *               W          *                     "   
green13		byte"                               *                         **                     "   
green14		byte"                                **                     ***                      "   
green15		byte"                                  ****              ****                        "   
green16		byte"                                       ************                             ",0ah,0            

bat1		byte"                                    |\     /|                                   "
bat2		byte"                                    ||\\ //||                                   "
bat3		byte"                                    /,    ,  \                                  "
bat4		byte"                                   <0/  /0>  |                                  "
bat5		byte"                ______             (00)_     /                ______            "
bat6		byte"               \\\\\\\\\            |WW/    |              //////////           "
bat7		byte"             \\\\\\\\\\\\\\\\____    |      |     ____/////////////////         "
bat8		byte"            \\\\\\\\\\\\\\\\\\\\\\  /        \   ///////////////////////        "
bat9		byte"          \\\\\\\\\\\\\\\\\\\\\\\\\/          \///////////////////////////      "
bat10		byte"         \\\\\\\\\\\\\\\\\\\\\\\\\(     |     )////////////////////////////     "
bat11		byte"                ~~~~~~~\\\\\\\\\\\|    / \    |///////////~~~~~~~               "
bat12		byte"                           \\\\\\ |    | |    |///////                          "
bat13		byte"                              \\\/|    | |    |\///                             "
bat14		byte"                               /  |    | |    |  \                              "
bat15		byte"                               \  |    | |    |  /                              "
bat16		byte"                             __/\ \   /   \   / /\__                            "
bat17		byte"                             (vvv)(vvv)---(vvv)(vvv)                            ",0ah,0

midboss1	byte"                           -==\\                /===-_---~~~~~~~~~------____   "
midboss2	byte"                       ______-==|               |===-~___                _,-'   "
midboss3	byte"                __--~~~  ,-/-==\\              `//~\\   ~~~~`---.___.-~~        "
midboss4	byte"             _-~       /'    |  \\              | |  \\           _-~`          "
midboss5	byte"           .'        /       |   \\             | |   `\        ,'              "
midboss6	byte"          /  ____  /         |    \`\.         / /      \      /                "
midboss7	byte"         /-'~    ~~~~~---__  |     ~-        /' /        \   /'                 "
midboss8	byte"                             __/-~~ ~ \ _ _/'  /          \/'                   "
midboss9	byte"                            /~         ( )   /'        _--~`                    "
midboss10	byte"                           /        _)   ;  ),   __--~~                         "
midboss11	byte"                          /      _-~/-  / \   '-~ \                             "
midboss12	byte"                   {\__--_/}    / \\_>- )<__\      \                            "
midboss13	byte"                   /'   (_/  _-~  | |__>--<__|      |                           "
midboss14	byte"                  |0  0 _/) )-~   | |__>--<__|      |                         "
midboss15	byte"                  / /~ ,_/       / /__>---<__/      |                           "
midboss16	byte"                 o o _//        /-~_>---<__-~      /                            "
midboss17	byte"                 (^(~          /~_>---<__-      _-~                             "
midboss18	byte"                ,/|           /__>--<__/     _-~                                "
midboss19	byte"             ,//('(          |__>--<__|     /                  .----_           "
midboss20	byte"            ( ( '))          |__>--<__|    |                 /' _---_~\         "
midboss21	byte"         `-)) )) (           |__>--<__|    |               /'  /     ~\`\       "
midboss22	byte"        ,/,'//( (             \__>--<__\    \            /'  //        ||       "
midboss23	byte"      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'        "
midboss24	byte"    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/                   "
midboss25	byte"  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~                     ",0ah,0

boss1		byte"                                        _ooOoo_                                 "
boss2		byte"                                       o8888888o                                "
boss3		byte"                                       88  .  88                                "
boss4		byte"                                       (| -_- |)                                "
boss5		byte"                                       O\  =  /O                                "
boss6		byte"                                    ____/`---'\____                             "
boss7		byte"                                  .'  \\|     |//  `.                           "
boss8		byte"                                 /  \\|||  :  |||//  \                          "
boss9		byte"                                /  _||||| -:- |||||_  \                         "
boss10		byte"                                |   | \\\  -  /'| |   |                         "
boss11		byte"                                | \_|  `\`---'//  |_/ |                         "
boss12		byte"                                \  .-\__ `-. -'__/-.  /                         "
boss13		byte"                              ___`. .'  /--.--\  `. .'___                       "
boss14		byte"                           .// '<  `.___\_<|>_/___.' _> \\\.                    "
boss15		byte"                          | | :  `- \`. ;`. _/; .'/ /  .' ; |                   "
boss16		byte"                          \  \ `-.   \_\_`. _.'_/_/  -' _.' /                   "
boss17		byte"                ===========`-.`___`-.__\ \___  /__.-'_.'_.-'==============      "
boss18		byte"                                        `=--=-'                                 ",0ah,0

wolf5		byte"                                                                  oooo          "
wolf6		byte"                                                                 oOOOOo         " 
wolf7		byte"                                  A                             oOOOOOOo        "
wolf8		byte"                                  AMa                           oOOOOOOo        "
wolf9		byte"                                  VMMML                          oOOOOo         "
wolf10		byte"                                h  VMMHMA                         oooo          "
wolf11		byte"                                 VAMMMMMMA;,.                                   "
wolf12		byte"                                  VHHHHHHV^^^^^                                 "
wolf13		byte"                                   AMMMMM                                       "
wolf14		byte"                                 AMMMMMHHha           A                         "
wolf15		byte"                                  AMMMMMMMMMmma        VA                       "
wolf16		byte"                                  MMMMMMMMMMMMMMMA      AV                      "
wolf17		byte"                                  VMMMMMMMMMMMMMMMMMA   AV                      "
wolf18		byte"                                  MM  VMMMMMMMMMMMMMMMMMV                       "
wolf19		byte"                                  MM     VMMMMMMMMMMMMMV                        "
wolf20		byte"                     ____________AMA__AMMMMMMMMMMMMMMMV_________                ",0ah,0

turkey1		byte"                                              ,+*^^*+___+++_                    "
turkey2		byte"                                         ,*^^^^              )                  "
turkey3		byte"                                      _+*                     ^**+_             "
turkey4		byte"                                    +^       _ _++*+_+++_,         )            "
turkey5		byte"                        _+^^*+_    (     ,+*^ ^          \+_        )           "
turkey6		byte"                       {       )  (    ,(    ,_+--+--,      ^)      ^\          "
turkey7		byte"                      { (@)    } f   ,(  ,+-^ __*_*_  ^^\_   ^\       )         "
turkey8		byte"                     {:;-/    (_+*-+^^^^^+*+*<_ _++_)_    )    )      /         "
turkey9		byte"                    ( /  (    (        ,___    ^*+_+* )   <    <      \         "
turkey10	byte"                     U _/     )    *--<  ) ^\-----++__)   )    )       )        "
turkey11	byte"                      (      )  _(^)^^))  )  )\^^^^^))^*+/    /       /         "
turkey12	byte"                    (      /  (_))_^)) )  )  ))^^^^^))^^^)__/     +^^           "
turkey13	byte"                   (     ,/    (^))^))  )  ) ))^^^^^^^))^^)       _)            "
turkey14	byte"                    *+__+*       (_))^)  ) ) ))^^^^^^))^^^^^)____*^             "
turkey15	byte"                    \             \_)^)_)) ))^^^^^^^^^^))^^^^)                  "
turkey16	byte"                     (_             ^\__^^^^^^^^^^^^))^^^^^^^)                  "
turkey17	byte"                       ^\___            ^\__^^^^^^))^^^^^^^^)\\                 "
turkey18	byte"                            ^^^^^\uuu/^^\uuu/^^^^\^\^\^\^\^\^\^\                "
turkey19	byte"                               ___) >____) >___   ^\_\_\_\_\_\_\)               "
turkey20	byte"                              ^^^//\\_^^//\\_^       ^(\_\_\_\)                 "
turkey21	byte"                                ^^^ ^^ ^^^                                      ",0ah,0

dragoncat1	byte"                                     !         !                                "
dragoncat2	byte"                                    ! !       ! !                               "
dragoncat3	byte"                                   ! . !     ! . !                              "
dragoncat4	byte"                                     ^^^^^^^^^ ^                                "
dragoncat5	byte"                                   ^             ^                              "
dragoncat6	byte"                                 ^  (O)       (O)  ^                            "
dragoncat7	byte"                                ^        ---        ^                           "
dragoncat8	byte"                               ^  .................  ^                          "
dragoncat9	byte"                             ^   *                 *   ^                        "
dragoncat10 byte"                            ^   *   /\   /\   /\    *    ^                      "
dragoncat11	byte"                           ^   *                     *    ^                     " 
dragoncat12	byte"                          ^   *   /\   /\   /\   /\   *    ^                    "
dragoncat13	byte"                         ^   *                         *    ^                   "
dragoncat16	byte"                          ^ *                           *  ^                    "
dragoncat17	byte"                           ^*                           * ^                     "
dragoncat18	byte"                            ^ *                        * ^                      "
dragoncat19	byte"                            ^  *                      *  ^                      "
dragoncat20	byte"                             ^  *       ) (         * ^                         "
dragoncat21	byte"                                 ^^^^^^^^ ^^^^^^^^^                             ",0ah,0

R2D21  		byte"                                           ,-----.                              "                        
R2D22  		byte"                                         ,'_/_|_\_`.                            "                        
R2D23  		byte"                                        /<<::8[O]::>\                           "
R2D24  		byte"                                       _|-----------|_                          "                        
R2D25  		byte"                                   :::|  | ====-=- |  |:::                      "                        
R2D26  		byte"                                   :::|  | -=-==== |  |:::                      "                        
R2D27  		byte"                                   :::\  | ::::|()||  /:::                      "                        
R2D28  		byte"                                   ::::| | ....|()|| |::::                      "                        
R2D29  		byte"                                       | |_________| |                          "                        
R2D210 		byte"                                       | |\_______/| |                          "
R2D211 		byte"                                      /   \ /   \ /   \                         "                        
R2D212 		byte"                                      `---' `---' `---'                         ",0ah,0

happy_end1	byte"                          (,);    /\                                            "
happy_end2	byte"                        ((  ^_   ||            ...                              "
happy_end3	byte"                          ' /  \  ||           (()))                            "
happy_end4	byte"                            L {=) ||           {' ())                           "
happy_end5	byte"                            ) -  ||            )_ (()                           "
happy_end6	byte"                           (_   \====       @  (   (_)                          "
happy_end7	byte"                           | (___/{ }        \7 \ _) |                          "
happy_end8	byte"                            \____\/)          {)=== /\                          "
happy_end9	byte"                            |    |             \ |    |                         "
happy_end10	byte"                            |_/\_|               |    |                         "
happy_end11	byte"                             |  |                |    |                         "
happy_end12	byte"                              ) )\               |    |                         "
happy_end13	byte"                            _/| |/               |    |                         "
happy_end14	byte"                           ( ,\ |_               '~~~~'                         "
happy_end15	byte"                            \_(___)               _/Y                           ",0ah,0

happy_end16	byte"                                   (,);        ...                              "
happy_end17	byte"                                   ((  ^_.     (()))                            "
happy_end18	byte"                                    ' / /_\    {' ())                           "
happy_end19	byte"                                      L( '}     )_ (()                          "
happy_end20	byte"                                       ) (_    (   (_)                          "
happy_end21	byte"                                     (_  / }{)===='_/                           "
happy_end22	byte"                                     | `/\/\     |   \                          "
happy_end23	byte"                                     L___/ |     |    |                         "
happy_end24	byte"                                      |  . \     |    |                         "
happy_end25	byte"                                      |_/ \_\    |    |                         "
happy_end26	byte"                                      ( ____ )   |    |                         "
happy_end27	byte"                                       | | | |   |    |                         "
happy_end28	byte"                                   ( --' | \ |_  '~~~~'                         "
happy_end29	byte"                                   /_/---) (___)  _/Y                           "
happy_end30	byte"                                      H                                         "
happy_end31	byte"                              -=======H%%O   @-;-----                           ",0ah,0

happy_end32	byte"                                             (\/)                               "
happy_end33	byte"                                              \/                                "
happy_end34	byte"                                                                                "
happy_end35	byte"                                        (,);                                    "
happy_end36	byte"                                       ((  ^_.  ...                             "
happy_end37	byte"                                        ' / /_\(()))                            "
happy_end38	byte"                                          L( '}{' ())                           "
happy_end39	byte"                                          ) (   )_ (()                          "
happy_end40	byte"                                        (_   \ (   (_)                          "
happy_end41	byte"                                        | (__'__\_) |                           "
happy_end42	byte"                                         \___|_(}==/ \                          "
happy_end43	byte"                                         |    |  |    |                         "
happy_end44	byte"                                         |_/\_|  |    |                         "
happy_end45	byte"                                          |  |   |    |                         "
happy_end46	byte"                                           ) )\  |    |                         "
happy_end47	byte"                                         _/| |/  |    \                         "
happy_end48	byte"                                        ( ,\ |_  '~~~~/7                        "
happy_end49	byte"                                         \_(___)  _/Y                           "
happy_end50	byte"                                      H                                         "
happy_end51	byte"                              -=======H%%O   @-;-----                           "
happy_end52	byte"                                      H                                         ",0ah,0

num1       	dword 1        ;one
num2       	dword 2        ;two
num3    	dword 3      ;three
num4       	dword 4        ;four

level      	dword 1    ;關卡紀錄
tmp1        dword ?
tmp2        dword ?
tmp3        dword ?
tmp4        dword ?
tmp5        dword ?         

hero_lv         dword 1 ;等級
hero_exp_now    dword 0 ;經驗值 
hero_exp_max    dword 6 ;經驗值    
gold		 	dword 0
cheatflg		dword 0

hero_hp_full dword 10    ;血量
hero_hp_now  dword 10    ;血量運算   
hero_Att     dword 5     ;攻擊
hero_Def     dword 2     ;防禦
hero_Int     dword 5     ;智力
hero_Luk     dword 5     ;幸運    
hero_magic_power    dword ? ;英雄魔攻係數

monster_hp         dword ?    ;怪物血量
monster_state1     dword ? ;怪物模式1
monster_state2     dword ? ;怪物模式2
monster_state3     dword ? ;怪物模式3
monster_att        dword ?    ;怪物攻擊力
monster_Int        dword ? ;怪物智力
monster_def        dword ?    ;怪物防禦力
monster_exp     dword ?    ;怪物經驗
att_miss        dword ? ;攻擊完全迴避
mag_miss        dword ? ;魔法完全迴避
def_miss        dword ? ;防禦完全迴避
plus			dword 0
boss_lv			dword 0 
m_type			byte 0
m_poewr			byte 0

monster_magic_power    dword 1 ;怪物魔攻係數

UImesSpace byte"              ",0
UImes0 byte " rule: attack > magic(int) > def > attack...",0ah,0
UImes1 byte "MonsterHP:",0
UImes1_2 byte "level:",0
UImes2 byte " Choose your move ",0ah
UImes3 byte " 1)attack 2)magic ",0ah
UImes4 byte " 3)def    4)escape",0ah,0dh,0
UImes5 byte " you    ->Attack",0
UImes6 byte " you    ->Magic ",0
UImes7 byte " you    ->Def   ",0
UImes8 byte " monster->Attack",0
UImes8_2 byte " monster->X     ",0
UImes9 byte " monster->Magic ",0
UImes10 byte" monster->Def   ",0
UImes11 byte" win            ",0
UImes11_2 byte" lose            ",0
UImes12 byte" miss try again ",0
UImes13 byte" HeroHP : ",0
UImes14 byte" HeroAtt: ",0
UImes15 byte" HeroInt: ",0
UImes16 byte" HeroDef: ",0
UImes17 byte" HeroEXP: ",0
UImes18 byte" Gold   : ",0

getexp2	 byte"                                        _                                       "
getexp3	 byte"                              __      _(_)_ __                                  "
getexp4	 byte"                              \ \ /\ / / | '_ \                                 "
getexp5	 byte"                               \ V  V /| | | | |                                "
getexp6  byte"                                \_/\_/ |_|_| |_|                                ",0ah,0
getexp13 byte"You get      exp",0ah,0
getexp14 byte"You get      Gold",0ah,0

levelup1	byte"you have 5 points to add",0ah,0
levelup2	byte" How many  HP-points ++:",0
levelup3	byte" How many Att-points ++:",0
levelup4	byte" How many Def-points ++:",0
levelup5	byte" How many Int-points ++:",0

levelup6	byte"                            _                _ _   _ __                         "
levelup7	byte"                           | | _____   _____| | | | |  _ \                      " 
levelup8	byte"                           | |/ _ \ \ / / _ \ | | | | |_) |                     "
levelup9	byte"                           | |  __/\ V /  __/ | |_| |  __/                      "
levelup10	byte"                           |_|\___| \_/ \___|_|\___/|_|                         ",0ah,0   
levelup11	byte"    Error try again     ",0ah,0

death1		byte"                              _                   _                             "
death2		byte"                             | |              _  | |                            "
death3		byte"                           __| |_____ _____ _| |_| |__                          "
death4		byte"                          / _  | ___ (____ (_   _)  _ \                         "
death5		byte"                         ( (_| | ____/ ___ | | |_| | | |                        "
death6		byte"                          \____|_____)_____|  \__)_| |_|                        "
death7      byte"                                Try again next time                             ",0ah,0
.code
main proc
top:

story
jumpmap:
mov level,1
mov m_type,0
map
mapmove
jumpstore:
store
storemove

battle_stage:
	call clrscr
cmp m_type,1
	je monster_green
cmp m_type,2
	je monster_turtle
cmp m_type,3
	je monster_green
cmp m_type,4
	je monster_dragon	
.if( level == 40)
	jmp monster_boss
.elseif (level == 20)
	jmp monster_midboss
.endif
	
	call randomize
	mov eax,9
	call randomRange 
 
.if(eax == 0)
    jmp monster_Turtle
.elseif(eax == 1)
    jmp monster_ghost
.elseif(eax == 2)
	jmp monster_dragon
.elseif(eax == 3)
	jmp monster_green
.elseif(eax == 4)
	jmp monster_bat
.elseif(eax == 5)
	jmp monster_wolf	
.elseif(eax == 6)
	jmp monster_turkey	
.elseif(eax == 7)
	jmp monster_dragoncat
.elseif(eax == 8)
	jmp monster_R2D2	
	
.endif    
jmp battle_stage
    
monster_Turtle:         ;怪物隨機生成器-1 
						;HP : O 4+level+(2~0)	ATT: O 3+level+(2~0)
	trutle				;Def: O 1+level	        2 5 10    
	jmp  Hero_state

monster_ghost:          ;怪物隨機生成器-2
						;HP : O 2+level+(2~0)	ATT: X 4+level+(2~0
	ghost 				;Def: O 0+level		    2 5 10
	jmp  Hero_state

monster_dragon:			;怪物3
						;HP : O 2+level+(2~0)	ATT: O 2+level+(1~0)
	dragon   			;DEf: O 3+level			3 6 10
	jmp  Hero_state

monster_green:
		
	greenm
	jmp  Hero_state

monster_bat:
		
	bat
	jmp  Hero_state	

monster_wolf:

	wolf
	jmp Hero_state

monster_turkey:

	turkey
	jmp Hero_state

monster_dragoncat:

	dragoncat
	jmp Hero_state

monster_R2D2:

	R2D2
	jmp Hero_state	
	
monster_midboss:
	
	midboss
	jmp Hero_state
	
monster_boss:

	boss_stage
	jmp Hero_state	
	
Hero_state:

	hero_stage
	jmp fight
	
fight:

	fight_inc
	jmp Hero_state      

hero_att_stage:         ;攻擊

	hero_att_inc

hero_magic_stage:        ;魔法

	hero_mag_inc

hero_def_stage:            ;hero防禦

	hero_def_inc

win:

	win_inc

win_magic:

	win_m_inc

lose:

	lose_inc

lose_magic:

	lose_m_inc

getexp:

	getexp_inc

levelup:
    call clrscr            ;設定英雄能力
	levelup_inc

happy_end:
	call clrscr
	
	mov dh,5
	mov dl,0
	call gotoxy
	mov edx,offset getexp2
	call writestring
	
	mov dh,21
	mov dl,25
	call gotoxy
	call waitmsg
	
	call clrscr
	
	mov dh,5
	mov dl,0
	call gotoxy
	mov edx,offset happy_end1
	call writeString
	
	mov    eax , 1000     ; 1秒
	call delay
	
	mov dh,6
	mov dl,0
	call gotoxy
	mov edx,offset happy_end16
	call writeString
	
	mov    eax , 1000     ; 1秒
	call delay
	
	mov dh,3
	mov dl,0
	call gotoxy
	mov edx,offset happy_end32
	call writeString
	
	mov    eax , 2000     ; 2秒
	call delay
	
	call clrscr
	
	mov dh,10
	mov dl,33
	call gotoxy
	mov edx,offset message108
	call writeString
	
	while15:
	call readchar
	.if al=='y'
	mov hero_lv,1
	mov level,1
	mov hero_exp_now,0
	mov hero_exp_max,6
	mov gold,0
	mov cheatflg,0
	mov hero_hp_now,10
	mov hero_hp_full,10
	mov hero_Att,5
	mov hero_Def,2
	mov hero_Int,5
	mov hero_Luk,5 
	jmp top
	.endif
	mov bl,'n'
	cmp al,bl
	jne while15
	jmp endofgame

death:
	call clrscr
	
	mov dh,5
	mov dl,0
	call gotoxy
	mov edx,offset death1
	call writeString
	mov dh,18
	mov dl,33
	call gotoxy
	mov edx,offset message108
	call writeString
	
	while14:
	call readchar
	.if al=='y'
	mov hero_lv,1
	mov level,1
	mov hero_exp_now,0
	mov hero_exp_max,6
	mov gold,0
	mov cheatflg,0
	mov hero_hp_now,10
	mov hero_hp_full,10
	mov hero_Att,5
	mov hero_Def,2
	mov hero_Int,5
	mov hero_Luk,5 
	jmp top
	.endif
	mov bl,'n'
	cmp al,bl
	jne while14
	jmp endofgame
	
endofgame:
call clrscr
mov eax, white + (black* 16)
	call SetTextColor
ret
main endp
end main