//
// Created by charles-antoine.bat on 07/09/2023.
//

#include <stdio.h>

char fiscalcode (int activite){
    int bucheron;
    int comptable;
    int nothing;

    if (activite == 5) {
        return 'B';
    } else if (activite == 2) {
        return 'C'
    } else if (activite == 1 || activite == 3 || activite == 4){
        return 'A'
    }

}



float revenumensuel (float revenuanuel) {
    return revenuanuel / 12;
}
