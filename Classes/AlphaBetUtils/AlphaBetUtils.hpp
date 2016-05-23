//
//  AlphaBetUtils.hpp
//  AlephBet
//
//  Created by Fredric on 12/16/15.
//
//

#ifndef AlphaBetUtils_hpp
#define AlphaBetUtils_hpp

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;
using namespace std;

enum LETTER_INDEXES {
    ALIF_1_IDX,		// 0
    BA_IDX,         // 1
    TA_1_IDX,		// 2
    THA_IDX,		// 3
    JIM_IDX,		// 4
    HA_1_IDX,		// 5
    KHA_IDX,		// 6
    DAL_IDX,		// 7
    DHAL_IDX,		// 8
    RA_IDX,         // 9
    ZAY_IDX,		// 10
    SIN_IDX,		// 11
    SHIN_IDX,		// 12
    SAD_IDX,        // 13
    DAD_IDX,		// 14
    TA_2_IDX,		// 15
    ZA_IDX,         // 16
    CAYN_IDX,		// 17
    GHAYN_IDX,      // 18
    FA_IDX,         // 19
    QAF_IDX,		// 20
    KAF_IDX,		// 21
    LAM_IDX,		// 22
    MIM_SOFIT,		// 23
    NUN_IDX,		// 24
    HA_2_IDX,       // 25
    WAW_1_IDX,		// 26
    YA_1_IDX,		// 27
//    HAMZA_IDX,		// 28	// Last consanant
    
    DAMMA_IDX,		// 29   // First vowel
    WAW_2_IDX,		// 30
    FATHA_IDX,		// 31
    ALIF_2_IDX,		// 32
    KASRA_IDX,		// 33
    YA_2_IDX,		// 34
//    SUKUN_IDX,		// 35
//    SHADDA_IDX,		// 36
//    BEH_IDX,		// 37
//    BOH_1_IDX,		// 38
//    BOH_2_IDX,		// 39
//    BOO_1_IDX,		// 40
//    BOO_2_IDX,		// 41
//    B_SLNT_IDX,		// 42
    
    NUM_LETTERS_IDX
};

#define FIRST_CONSONANT_IDX	DAMMA_IDX
#define LAST_CONSONANT_IDX	YA_1_IDX // Change by kerberos -old HAMZA_IDX

class AlphaBetUtils
{
private:
    static AlphaBetUtils* instance;
    string letterNames[34];
    string letterFontKeyMap[34];
    CCArray* soundAlikes;
    
public:
    AlphaBetUtils();
    ~AlphaBetUtils();
    static  AlphaBetUtils*    getInstance();
    
    string   getLetterName(int index);
    string   getKeyMapFont(int index);
    int      getLetterIndex(string letterName);
    
    void     setupLetterFontKeyMap_Print();
    void     setupLetterNameArray();
    void     setupSoundAlikes();
    
    bool     isSoundaAlikesVowel(int scrLetter, int compareLetter);
    bool     isVowel(int scrLetter);
};

#endif /* AlphaBetUtils_hpp */
