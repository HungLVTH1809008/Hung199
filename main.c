#include <stdio.h>
#include <stdlib.h>

float tinhluong13(int namkinhnghiem, int namlamviec) {
    int luongchinhthuc;
    float thuongthang13;
    if (0 <= namkinhnghiem < 2) {
        luongchinhthuc = 10;
    } else if (2 <= namkinhnghiem <= 5) {
        luongchinhthuc = 20;
    } else if (namkinhnghiem > 5) {
        luongchinhthuc = 30;
    }
    if (0 <= namlamviec < 1) {
        thuongthang13 = 0.3 * luongchinhthuc;
    } else if (1 <= namkinhnghiem <= 2) {
        thuongthang13 = 0.5 * luongchinhthuc;
    } else if (2 <= namkinhnghiem <= 5) {
        thuongthang13 = luongchinhthuc;
    }
    return thuongthang13;
}





int main() {
    char a;
    int namkinhnghiem,namconghien;
    do {
        printf("\n nhap so nam kinh nghiem lam viec cua ban");
        scanf("%d", &namkinhnghiem)
        printf("\n nhap so nam kinh nghiem lam viec cua ban");
        scanf("%d", &namconghien);


        if()


