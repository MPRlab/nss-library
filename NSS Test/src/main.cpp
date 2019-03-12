#include <mbed.h>

int main() {

DigitalOut solenoids[] = {(PG_1 ),(PF_7 ),(PE_3 ),(PE_2 ),
                          (PD_6 ),(PD_2 ),(PG_0 ),(PD_0 ),
                          (PE_6 ),(PD_3 ),(PD_7 ),(PC_12),
                          (PD_1 ),(PF_8 ),(PE_5 ),(PD_4 ),
                          (PG_3 ),(PC_11),(PF_9 ),(PF_0 ), //PF_0 NOT PH_0
                          (PE_4 ),(PD_5 ),(PG_2 ),(PC_10),
                          (PC_9 )};

                          // The pinout images at https://os.mbed.com/platforms/ST-Nucleo-F767ZI/
                          //    are wrong. The PDF at https://www.st.com/resource/en/user_manual/dm00244518.pdf
                          //    is correct


  while(1) {
    for(int i = 0; i < 25; i++) {
      solenoids[i] = 1;
      wait(1);
      solenoids[i] = 0;
    }
  }
}
/*
inverse of 2x2 matrix 






*/
