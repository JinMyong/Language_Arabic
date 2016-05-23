//
//  AlphaBetUtils.cpp
//  AlephBet
//
//  Created by Fredric on 12/16/15.
//
//

#include "AlphaBetUtils.hpp"
#include "GameOptions.hpp"

AlphaBetUtils* AlphaBetUtils::instance = NULL;

AlphaBetUtils* AlphaBetUtils::getInstance()
{
    if (instance == NULL) {
        instance = new AlphaBetUtils();
    }
    return instance;
}

AlphaBetUtils::AlphaBetUtils()
{
    setupLetterFontKeyMap_Print();
    setupLetterNameArray();
}

void AlphaBetUtils::setupLetterFontKeyMap_Print()
{
// Consonant
    letterFontKeyMap[0]  = "أ";     // Alef
    letterFontKeyMap[1]  = "ب";     // Baa
    letterFontKeyMap[2]  = "ت";     // Taa
    letterFontKeyMap[3]  = "ث";     // Thaa
    letterFontKeyMap[4]  = "ج";     // Geem
    letterFontKeyMap[5]  = "ح";     // Haaa
    letterFontKeyMap[6]  = "خ";     // Khaa
    letterFontKeyMap[7]  = "د";     // Daal
    letterFontKeyMap[8]  = "ذ";     // Zaal
    letterFontKeyMap[9]  = "ر";     // Raa
    letterFontKeyMap[10] = "ز";     // Zaay
    letterFontKeyMap[11] = "س";     // Seen
    letterFontKeyMap[12] = "ش";     // Sheen
    letterFontKeyMap[13] = "ص";     // Saad
    letterFontKeyMap[14] = "ض";     // Daad
    letterFontKeyMap[15] = "ط";     // Taa
    letterFontKeyMap[16] = "ظ";     // Zaa
    letterFontKeyMap[17] = "ع";     // een
    letterFontKeyMap[18] = "غ";     // gheen
    letterFontKeyMap[19] = "ف";     // Faa
    letterFontKeyMap[20] = "ق";     // Qaaf
    letterFontKeyMap[21] = "ك";     // Kaaf
    letterFontKeyMap[22] = "ل";     // Laam
    letterFontKeyMap[23] = "م";     // Meem
    letterFontKeyMap[24] = "ن";     // Noon
    letterFontKeyMap[25] = "ھـ";    // Haa
    letterFontKeyMap[26] = "و";     // Waaaw
    letterFontKeyMap[27] = "ي";     // Yaaa
// Vowel
    letterFontKeyMap[28] = "أَ";     // aaa
    letterFontKeyMap[29] = "إِ";     // eee
    letterFontKeyMap[30] = "أُ";     // Uooo
    letterFontKeyMap[31] = "بَ";     // Baa
    letterFontKeyMap[32] = "بِ";     // Beee
    letterFontKeyMap[33] = "بُ";     // Buu
}

void AlphaBetUtils::setupLetterNameArray()
{
    letterNames[0] =  "Alef";
    letterNames[1] =  "Baa";
    letterNames[2] =  "Taa";
    letterNames[3] =  "Thaa";
    letterNames[4] =  "Geem";
    letterNames[5] =  "Haaa";
    letterNames[6] =  "Khaa";
    letterNames[7] =  "Daal";
    letterNames[8] =  "Zaal";
    letterNames[9] =  "Raa";
    letterNames[10] = "Zaay";
    letterNames[11] = "Seen";
    letterNames[12] = "Sheen";
    letterNames[13] = "Saad";
    letterNames[14] = "Daad";
    letterNames[15] = "Taa";
    letterNames[16] = "Zaa";
    letterNames[17] = "3een";
    letterNames[18] = "gheen";
    letterNames[19] = "Faa";
    letterNames[20] = "Qaaf";
    letterNames[21] = "Kaaf";
    letterNames[22] = "Laam";
    letterNames[23] = "Meem";
    letterNames[24] = "Noon";
    letterNames[25] = "Haa";
    letterNames[26] = "Waaaw";
    letterNames[27] = "Yaaa";

// Vowel
    letterNames[28] = "aaa";
    letterNames[29] = "eee";
    letterNames[30] = "Uooo";
    letterNames[31] = "Baa";
    letterNames[32] = "Beee";
    letterNames[33] = "Buu";
}

bool AlphaBetUtils::isSoundaAlikesVowel(int scrLetter, int compareLetter)
{
    bool isAlike = false;
//
//    CCInteger* srcObj = CCInteger::create(scrLetter);
//    CCInteger* compareObj = CCInteger::create(compareLetter);
//    
//    for (CCArray *groupArray in soundAlikes) {
//        
//    }
    return isAlike;
}

bool AlphaBetUtils::isVowel(int scrLetter)
{
    bool isVowel = false;
    if (scrLetter >= FIRST_CONSONANT_IDX) {
        isVowel = true;
    }
    return isVowel;
}

string AlphaBetUtils::getLetterName(int index)
{
    string letterName;
    if (index < (sizeof(letterNames) / sizeof(letterNames[0]))) {
        letterName = letterNames[index];
    }else
    {
        letterName = "Not Found";
    }
    
    return letterName;
}

int AlphaBetUtils::getLetterIndex(string letterName)
{
    int index = 100000;
    for (int i = 0 ; i < (sizeof(letterNames) / sizeof(letterNames[0])); i++) {
        if (letterNames[i].compare(letterName)) {
            index = i;
        }
    }
    return index;
}

string AlphaBetUtils::getKeyMapFont(int index)
{
    string keyMap;
    int sz = sizeof(letterFontKeyMap) / sizeof(letterFontKeyMap[0]);
    if (index < sz) {
        keyMap = letterFontKeyMap[index];
    }else
    {
        keyMap = "Not Found";
    }
    
    return keyMap;
}