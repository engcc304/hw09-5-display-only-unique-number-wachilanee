/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/
#include <stdio.h>
int main() {
    
    int N, num[ 100 ], i, j, hold ;

    printf( "Input N:\n" ) ;
    scanf( "%d", &N ) ;

    for ( i = 0 ; i < N ; i++) {
        printf( "Input :\n" ) ;
        scanf( "%d", &num[ i ] ) ;
    }

    for ( int i = 0 ; i < N ; i++ ) {
        for ( int j = i + 1 ; j < N ; j++ ) {
            if ( num[ i ] > num[ j ] ) {
                hold = num[ j ] ;
                num[ j ] = num[ i ] ;
                num[ i ] = hold ;
            }
        }
    }

    printf( "Unique value : ") ;
    for ( i = 0 ; i < N; i++) {
        int same = 1;
        while (i < N - 1 && num[ i ] == num[i + 1]) {
            same++ ;
            i++ ;
        }
        if (same == 1 ) {
            printf( "%d ", num[ i ] ) ;
        }
        

    }
    
    
    return 0;
}
