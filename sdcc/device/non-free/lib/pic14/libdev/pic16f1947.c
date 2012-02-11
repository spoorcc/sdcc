/* Register definitions for pic16f1947.
 * This file was automatically generated by:
 *   inc2h.pl
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16f1947.h>

__sfr  __at (INDF0_ADDR)                   INDF0;
__sfr  __at (INDF1_ADDR)                   INDF1;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR0_ADDR)                    FSR0;
__sfr  __at (FSR0L_ADDR)                   FSR0L;
__sfr  __at (FSR0H_ADDR)                   FSR0H;
__sfr  __at (FSR1_ADDR)                    FSR1;
__sfr  __at (FSR1L_ADDR)                   FSR1L;
__sfr  __at (FSR1H_ADDR)                   FSR1H;
__sfr  __at (BSR_ADDR)                     BSR;
__sfr  __at (WREG_ADDR)                    WREG;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTB_ADDR)                   PORTB;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PORTD_ADDR)                   PORTD;
__sfr  __at (PORTE_ADDR)                   PORTE;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (PIR3_ADDR)                    PIR3;
__sfr  __at (PIR4_ADDR)                    PIR4;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (TMR1_ADDR)                    TMR1;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (T1GCON_ADDR)                  T1GCON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (CPSCON0_ADDR)                 CPSCON0;
__sfr  __at (CPSCON1_ADDR)                 CPSCON1;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISB_ADDR)                   TRISB;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (TRISD_ADDR)                   TRISD;
__sfr  __at (TRISE_ADDR)                   TRISE;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PIE3_ADDR)                    PIE3;
__sfr  __at (PIE4_ADDR)                    PIE4;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (WDTCON_ADDR)                  WDTCON;
__sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (OSCSTAT_ADDR)                 OSCSTAT;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADRESL_ADDR)                  ADRESL;
__sfr  __at (ADRESH_ADDR)                  ADRESH;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (LATA_ADDR)                    LATA;
__sfr  __at (LATB_ADDR)                    LATB;
__sfr  __at (LATC_ADDR)                    LATC;
__sfr  __at (LATD_ADDR)                    LATD;
__sfr  __at (LATE_ADDR)                    LATE;
__sfr  __at (CM1CON0_ADDR)                 CM1CON0;
__sfr  __at (CM1CON1_ADDR)                 CM1CON1;
__sfr  __at (CM2CON0_ADDR)                 CM2CON0;
__sfr  __at (CM2CON1_ADDR)                 CM2CON1;
__sfr  __at (CMOUT_ADDR)                   CMOUT;
__sfr  __at (BORCON_ADDR)                  BORCON;
__sfr  __at (FVRCON_ADDR)                  FVRCON;
__sfr  __at (DACCON0_ADDR)                 DACCON0;
__sfr  __at (DACCON1_ADDR)                 DACCON1;
__sfr  __at (SRCON0_ADDR)                  SRCON0;
__sfr  __at (SRCON1_ADDR)                  SRCON1;
__sfr  __at (APFCON_ADDR)                  APFCON;
__sfr  __at (CM3CON0_ADDR)                 CM3CON0;
__sfr  __at (CM3CON1_ADDR)                 CM3CON1;
__sfr  __at (ANSELA_ADDR)                  ANSELA;
__sfr  __at (ANSELE_ADDR)                  ANSELE;
__sfr  __at (EEADR_ADDR)                   EEADR;
__sfr  __at (EEADRL_ADDR)                  EEADRL;
__sfr  __at (EEADRH_ADDR)                  EEADRH;
__sfr  __at (EEDAT_ADDR)                   EEDAT;
__sfr  __at (EEDATL_ADDR)                  EEDATL;
__sfr  __at (EEDATH_ADDR)                  EEDATH;
__sfr  __at (EECON1_ADDR)                  EECON1;
__sfr  __at (EECON2_ADDR)                  EECON2;
__sfr  __at (RC1REG_ADDR)                  RC1REG;
__sfr  __at (RCREG_ADDR)                   RCREG;
__sfr  __at (TX1REG_ADDR)                  TX1REG;
__sfr  __at (TXREG_ADDR)                   TXREG;
__sfr  __at (SP1BRGL_ADDR)                 SP1BRGL;
__sfr  __at (SPBRG_ADDR)                   SPBRG;
__sfr  __at (SPBRGL_ADDR)                  SPBRGL;
__sfr  __at (SP1BRGH_ADDR)                 SP1BRGH;
__sfr  __at (SPBRGH_ADDR)                  SPBRGH;
__sfr  __at (RC1STA_ADDR)                  RC1STA;
__sfr  __at (RCSTA_ADDR)                   RCSTA;
__sfr  __at (TX1STA_ADDR)                  TX1STA;
__sfr  __at (TXSTA_ADDR)                   TXSTA;
__sfr  __at (BAUD1CON_ADDR)                BAUD1CON;
__sfr  __at (WPUB_ADDR)                    WPUB;
__sfr  __at (SSP1BUF_ADDR)                 SSP1BUF;
__sfr  __at (SSPBUF_ADDR)                  SSPBUF;
__sfr  __at (SSP1ADD_ADDR)                 SSP1ADD;
__sfr  __at (SSPADD_ADDR)                  SSPADD;
__sfr  __at (SSP1MSK_ADDR)                 SSP1MSK;
__sfr  __at (SSPMSK_ADDR)                  SSPMSK;
__sfr  __at (SSP1STAT_ADDR)                SSP1STAT;
__sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
__sfr  __at (SSP1CON1_ADDR)                SSP1CON1;
__sfr  __at (SSPCON_ADDR)                  SSPCON;
__sfr  __at (SSPCON1_ADDR)                 SSPCON1;
__sfr  __at (SSP1CON2_ADDR)                SSP1CON2;
__sfr  __at (SSPCON2_ADDR)                 SSPCON2;
__sfr  __at (SSP1CON3_ADDR)                SSP1CON3;
__sfr  __at (SSPCON3_ADDR)                 SSPCON3;
__sfr  __at (SSP2BUF_ADDR)                 SSP2BUF;
__sfr  __at (SSP2ADD_ADDR)                 SSP2ADD;
__sfr  __at (SSP2MSK_ADDR)                 SSP2MSK;
__sfr  __at (SSP2STAT_ADDR)                SSP2STAT;
__sfr  __at (SSP2CON1_ADDR)                SSP2CON1;
__sfr  __at (SSP2CON2_ADDR)                SSP2CON2;
__sfr  __at (SSP2CON3_ADDR)                SSP2CON3;
__sfr  __at (PORTF_ADDR)                   PORTF;
__sfr  __at (PORTG_ADDR)                   PORTG;
__sfr  __at (CCPR1L_ADDR)                  CCPR1L;
__sfr  __at (CCPR1H_ADDR)                  CCPR1H;
__sfr  __at (CCP1CON_ADDR)                 CCP1CON;
__sfr  __at (PWM1CON_ADDR)                 PWM1CON;
__sfr  __at (CCP1AS_ADDR)                  CCP1AS;
__sfr  __at (ECCP1AS_ADDR)                 ECCP1AS;
__sfr  __at (PSTR1CON_ADDR)                PSTR1CON;
__sfr  __at (CCPR2L_ADDR)                  CCPR2L;
__sfr  __at (CCPR2H_ADDR)                  CCPR2H;
__sfr  __at (CCP2CON_ADDR)                 CCP2CON;
__sfr  __at (PWM2CON_ADDR)                 PWM2CON;
__sfr  __at (CCP2AS_ADDR)                  CCP2AS;
__sfr  __at (ECCP2AS_ADDR)                 ECCP2AS;
__sfr  __at (PSTR2CON_ADDR)                PSTR2CON;
__sfr  __at (CCPTMRS0_ADDR)                CCPTMRS0;
__sfr  __at (CCPTMRS1_ADDR)                CCPTMRS1;
__sfr  __at (TRISF_ADDR)                   TRISF;
__sfr  __at (TRISG_ADDR)                   TRISG;
__sfr  __at (CCPR3L_ADDR)                  CCPR3L;
__sfr  __at (CCPR3H_ADDR)                  CCPR3H;
__sfr  __at (CCP3CON_ADDR)                 CCP3CON;
__sfr  __at (PWM3CON_ADDR)                 PWM3CON;
__sfr  __at (CCP3AS_ADDR)                  CCP3AS;
__sfr  __at (ECCP3AS_ADDR)                 ECCP3AS;
__sfr  __at (PSTR3CON_ADDR)                PSTR3CON;
__sfr  __at (CCPR4L_ADDR)                  CCPR4L;
__sfr  __at (CCPR4H_ADDR)                  CCPR4H;
__sfr  __at (CCP4CON_ADDR)                 CCP4CON;
__sfr  __at (CCPR5L_ADDR)                  CCPR5L;
__sfr  __at (CCPR5H_ADDR)                  CCPR5H;
__sfr  __at (CCP5CON_ADDR)                 CCP5CON;
__sfr  __at (LATF_ADDR)                    LATF;
__sfr  __at (LATG_ADDR)                    LATG;
__sfr  __at (IOCBP_ADDR)                   IOCBP;
__sfr  __at (IOCBN_ADDR)                   IOCBN;
__sfr  __at (IOCBF_ADDR)                   IOCBF;
__sfr  __at (ANSELF_ADDR)                  ANSELF;
__sfr  __at (ANSELG_ADDR)                  ANSELG;
__sfr  __at (TMR4_ADDR)                    TMR4;
__sfr  __at (PR4_ADDR)                     PR4;
__sfr  __at (T4CON_ADDR)                   T4CON;
__sfr  __at (TMR6_ADDR)                    TMR6;
__sfr  __at (PR6_ADDR)                     PR6;
__sfr  __at (T6CON_ADDR)                   T6CON;
__sfr  __at (WPUG_ADDR)                    WPUG;
__sfr  __at (RC2REG_ADDR)                  RC2REG;
__sfr  __at (TX2REG_ADDR)                  TX2REG;
__sfr  __at (SP2BRGL_ADDR)                 SP2BRGL;
__sfr  __at (SPBRG2_ADDR)                  SPBRG2;
__sfr  __at (SP2BRGH_ADDR)                 SP2BRGH;
__sfr  __at (RC2STA_ADDR)                  RC2STA;
__sfr  __at (TX2STA_ADDR)                  TX2STA;
__sfr  __at (BAUD2CON_ADDR)                BAUD2CON;
__sfr  __at (LCDCON_ADDR)                  LCDCON;
__sfr  __at (LCDPS_ADDR)                   LCDPS;
__sfr  __at (LCDREF_ADDR)                  LCDREF;
__sfr  __at (LCDCST_ADDR)                  LCDCST;
__sfr  __at (LCDRL_ADDR)                   LCDRL;
__sfr  __at (LCDSE0_ADDR)                  LCDSE0;
__sfr  __at (LCDSE1_ADDR)                  LCDSE1;
__sfr  __at (LCDSE2_ADDR)                  LCDSE2;
__sfr  __at (LCDSE2_ADDR)                  LCDSE2;
__sfr  __at (LCDSE4_ADDR)                  LCDSE4;
__sfr  __at (LCDSE5_ADDR)                  LCDSE5;
__sfr  __at (LCDDATA0_ADDR)                LCDDATA0;
__sfr  __at (LCDDATA1_ADDR)                LCDDATA1;
__sfr  __at (LCDDATA2_ADDR)                LCDDATA2;
__sfr  __at (LCDDATA3_ADDR)                LCDDATA3;
__sfr  __at (LCDDATA4_ADDR)                LCDDATA4;
__sfr  __at (LCDDATA5_ADDR)                LCDDATA5;
__sfr  __at (LCDDATA6_ADDR)                LCDDATA6;
__sfr  __at (LCDDATA7_ADDR)                LCDDATA7;
__sfr  __at (LCDDATA8_ADDR)                LCDDATA8;
__sfr  __at (LCDDATA9_ADDR)                LCDDATA9;
__sfr  __at (LCDDATA10_ADDR)               LCDDATA10;
__sfr  __at (LCDDATA11_ADDR)               LCDDATA11;
__sfr  __at (LCDDATA12_ADDR)               LCDDATA12;
__sfr  __at (LCDDATA13_ADDR)               LCDDATA13;
__sfr  __at (LCDDATA14_ADDR)               LCDDATA14;
__sfr  __at (LCDDATA15_ADDR)               LCDDATA15;
__sfr  __at (LCDDATA16_ADDR)               LCDDATA16;
__sfr  __at (LCDDATA17_ADDR)               LCDDATA17;
__sfr  __at (LCDDATA18_ADDR)               LCDDATA18;
__sfr  __at (LCDDATA19_ADDR)               LCDDATA19;
__sfr  __at (LCDDATA20_ADDR)               LCDDATA20;
__sfr  __at (LCDDATA21_ADDR)               LCDDATA21;
__sfr  __at (LCDDATA22_ADDR)               LCDDATA22;
__sfr  __at (LCDDATA23_ADDR)               LCDDATA23;
__sfr  __at (STATUS_SHAD_ADDR)             STATUS_SHAD;
__sfr  __at (WREG_SHAD_ADDR)               WREG_SHAD;
__sfr  __at (BSR_SHAD_ADDR)                BSR_SHAD;
__sfr  __at (PCLATH_SHAD_ADDR)             PCLATH_SHAD;
__sfr  __at (FSR0L_SHAD_ADDR)              FSR0L_SHAD;
__sfr  __at (FSR0H_SHAD_ADDR)              FSR0H_SHAD;
__sfr  __at (FSR1L_SHAD_ADDR)              FSR1L_SHAD;
__sfr  __at (FSR1H_SHAD_ADDR)              FSR1H_SHAD;
__sfr  __at (STKPTR_ADDR)                  STKPTR;
__sfr  __at (TOSL_ADDR)                    TOSL;
__sfr  __at (TOSH_ADDR)                    TOSH;

// 
// bitfield definitions
// 
volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;
volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;
volatile __ANSELAbits_t __at(ANSELA_ADDR) ANSELAbits;
volatile __ANSELEbits_t __at(ANSELE_ADDR) ANSELEbits;
volatile __ANSELFbits_t __at(ANSELF_ADDR) ANSELFbits;
volatile __ANSELGbits_t __at(ANSELG_ADDR) ANSELGbits;
volatile __APFCONbits_t __at(APFCON_ADDR) APFCONbits;
volatile __BAUD1CONbits_t __at(BAUD1CON_ADDR) BAUD1CONbits;
volatile __BAUD2CONbits_t __at(BAUD2CON_ADDR) BAUD2CONbits;
volatile __BORCONbits_t __at(BORCON_ADDR) BORCONbits;
volatile __BSRbits_t __at(BSR_ADDR) BSRbits;
volatile __CCP1ASbits_t __at(CCP1AS_ADDR) CCP1ASbits;
volatile __CCP1CONbits_t __at(CCP1CON_ADDR) CCP1CONbits;
volatile __CCP2ASbits_t __at(CCP2AS_ADDR) CCP2ASbits;
volatile __CCP2CONbits_t __at(CCP2CON_ADDR) CCP2CONbits;
volatile __CCP3ASbits_t __at(CCP3AS_ADDR) CCP3ASbits;
volatile __CCP3CONbits_t __at(CCP3CON_ADDR) CCP3CONbits;
volatile __CCP4CONbits_t __at(CCP4CON_ADDR) CCP4CONbits;
volatile __CCP5CONbits_t __at(CCP5CON_ADDR) CCP5CONbits;
volatile __CCPTMRS0bits_t __at(CCPTMRS0_ADDR) CCPTMRS0bits;
volatile __CCPTMRS1bits_t __at(CCPTMRS1_ADDR) CCPTMRS1bits;
volatile __CM1CON0bits_t __at(CM1CON0_ADDR) CM1CON0bits;
volatile __CM1CON1bits_t __at(CM1CON1_ADDR) CM1CON1bits;
volatile __CM2CON0bits_t __at(CM2CON0_ADDR) CM2CON0bits;
volatile __CM2CON1bits_t __at(CM2CON1_ADDR) CM2CON1bits;
volatile __CM3CON0bits_t __at(CM3CON0_ADDR) CM3CON0bits;
volatile __CM3CON1bits_t __at(CM3CON1_ADDR) CM3CON1bits;
volatile __CMOUTbits_t __at(CMOUT_ADDR) CMOUTbits;
volatile __CPSCON0bits_t __at(CPSCON0_ADDR) CPSCON0bits;
volatile __CPSCON1bits_t __at(CPSCON1_ADDR) CPSCON1bits;
volatile __DACCON0bits_t __at(DACCON0_ADDR) DACCON0bits;
volatile __DACCON1bits_t __at(DACCON1_ADDR) DACCON1bits;
volatile __ECCP1ASbits_t __at(ECCP1AS_ADDR) ECCP1ASbits;
volatile __ECCP2ASbits_t __at(ECCP2AS_ADDR) ECCP2ASbits;
volatile __ECCP3ASbits_t __at(ECCP3AS_ADDR) ECCP3ASbits;
volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;
volatile __FVRCONbits_t __at(FVRCON_ADDR) FVRCONbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __IOCBFbits_t __at(IOCBF_ADDR) IOCBFbits;
volatile __IOCBNbits_t __at(IOCBN_ADDR) IOCBNbits;
volatile __IOCBPbits_t __at(IOCBP_ADDR) IOCBPbits;
volatile __LATAbits_t __at(LATA_ADDR) LATAbits;
volatile __LATBbits_t __at(LATB_ADDR) LATBbits;
volatile __LATCbits_t __at(LATC_ADDR) LATCbits;
volatile __LATDbits_t __at(LATD_ADDR) LATDbits;
volatile __LATEbits_t __at(LATE_ADDR) LATEbits;
volatile __LATFbits_t __at(LATF_ADDR) LATFbits;
volatile __LATGbits_t __at(LATG_ADDR) LATGbits;
volatile __LCDCONbits_t __at(LCDCON_ADDR) LCDCONbits;
volatile __LCDCSTbits_t __at(LCDCST_ADDR) LCDCSTbits;
volatile __LCDDATA0bits_t __at(LCDDATA0_ADDR) LCDDATA0bits;
volatile __LCDDATA1bits_t __at(LCDDATA1_ADDR) LCDDATA1bits;
volatile __LCDDATA10bits_t __at(LCDDATA10_ADDR) LCDDATA10bits;
volatile __LCDDATA11bits_t __at(LCDDATA11_ADDR) LCDDATA11bits;
volatile __LCDDATA12bits_t __at(LCDDATA12_ADDR) LCDDATA12bits;
volatile __LCDDATA13bits_t __at(LCDDATA13_ADDR) LCDDATA13bits;
volatile __LCDDATA14bits_t __at(LCDDATA14_ADDR) LCDDATA14bits;
volatile __LCDDATA15bits_t __at(LCDDATA15_ADDR) LCDDATA15bits;
volatile __LCDDATA16bits_t __at(LCDDATA16_ADDR) LCDDATA16bits;
volatile __LCDDATA17bits_t __at(LCDDATA17_ADDR) LCDDATA17bits;
volatile __LCDDATA18bits_t __at(LCDDATA18_ADDR) LCDDATA18bits;
volatile __LCDDATA19bits_t __at(LCDDATA19_ADDR) LCDDATA19bits;
volatile __LCDDATA2bits_t __at(LCDDATA2_ADDR) LCDDATA2bits;
volatile __LCDDATA20bits_t __at(LCDDATA20_ADDR) LCDDATA20bits;
volatile __LCDDATA21bits_t __at(LCDDATA21_ADDR) LCDDATA21bits;
volatile __LCDDATA22bits_t __at(LCDDATA22_ADDR) LCDDATA22bits;
volatile __LCDDATA23bits_t __at(LCDDATA23_ADDR) LCDDATA23bits;
volatile __LCDDATA3bits_t __at(LCDDATA3_ADDR) LCDDATA3bits;
volatile __LCDDATA4bits_t __at(LCDDATA4_ADDR) LCDDATA4bits;
volatile __LCDDATA5bits_t __at(LCDDATA5_ADDR) LCDDATA5bits;
volatile __LCDDATA6bits_t __at(LCDDATA6_ADDR) LCDDATA6bits;
volatile __LCDDATA7bits_t __at(LCDDATA7_ADDR) LCDDATA7bits;
volatile __LCDDATA8bits_t __at(LCDDATA8_ADDR) LCDDATA8bits;
volatile __LCDDATA9bits_t __at(LCDDATA9_ADDR) LCDDATA9bits;
volatile __LCDPSbits_t __at(LCDPS_ADDR) LCDPSbits;
volatile __LCDREFbits_t __at(LCDREF_ADDR) LCDREFbits;
volatile __LCDRLbits_t __at(LCDRL_ADDR) LCDRLbits;
volatile __LCDSE0bits_t __at(LCDSE0_ADDR) LCDSE0bits;
volatile __LCDSE1bits_t __at(LCDSE1_ADDR) LCDSE1bits;
volatile __LCDSE2bits_t __at(LCDSE2_ADDR) LCDSE2bits;
volatile __LCDSE4bits_t __at(LCDSE4_ADDR) LCDSE4bits;
volatile __LCDSE5bits_t __at(LCDSE5_ADDR) LCDSE5bits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;
volatile __OSCSTATbits_t __at(OSCSTAT_ADDR) OSCSTATbits;
volatile __OSCTUNEbits_t __at(OSCTUNE_ADDR) OSCTUNEbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIE2bits_t __at(PIE2_ADDR) PIE2bits;
volatile __PIE3bits_t __at(PIE3_ADDR) PIE3bits;
volatile __PIE4bits_t __at(PIE4_ADDR) PIE4bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PIR2bits_t __at(PIR2_ADDR) PIR2bits;
volatile __PIR3bits_t __at(PIR3_ADDR) PIR3bits;
volatile __PIR4bits_t __at(PIR4_ADDR) PIR4bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;
volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;
volatile __PORTDbits_t __at(PORTD_ADDR) PORTDbits;
volatile __PORTEbits_t __at(PORTE_ADDR) PORTEbits;
volatile __PORTFbits_t __at(PORTF_ADDR) PORTFbits;
volatile __PORTGbits_t __at(PORTG_ADDR) PORTGbits;
volatile __PSTR1CONbits_t __at(PSTR1CON_ADDR) PSTR1CONbits;
volatile __PSTR2CONbits_t __at(PSTR2CON_ADDR) PSTR2CONbits;
volatile __PSTR3CONbits_t __at(PSTR3CON_ADDR) PSTR3CONbits;
volatile __PWM1CONbits_t __at(PWM1CON_ADDR) PWM1CONbits;
volatile __PWM2CONbits_t __at(PWM2CON_ADDR) PWM2CONbits;
volatile __PWM3CONbits_t __at(PWM3CON_ADDR) PWM3CONbits;
volatile __RC1STAbits_t __at(RC1STA_ADDR) RC1STAbits;
volatile __RC2STAbits_t __at(RC2STA_ADDR) RC2STAbits;
volatile __RCSTAbits_t __at(RCSTA_ADDR) RCSTAbits;
volatile __SRCON0bits_t __at(SRCON0_ADDR) SRCON0bits;
volatile __SRCON1bits_t __at(SRCON1_ADDR) SRCON1bits;
volatile __SSP1CON1bits_t __at(SSP1CON1_ADDR) SSP1CON1bits;
volatile __SSP1CON2bits_t __at(SSP1CON2_ADDR) SSP1CON2bits;
volatile __SSP1CON3bits_t __at(SSP1CON3_ADDR) SSP1CON3bits;
volatile __SSP1STATbits_t __at(SSP1STAT_ADDR) SSP1STATbits;
volatile __SSP2CON1bits_t __at(SSP2CON1_ADDR) SSP2CON1bits;
volatile __SSP2CON2bits_t __at(SSP2CON2_ADDR) SSP2CON2bits;
volatile __SSP2CON3bits_t __at(SSP2CON3_ADDR) SSP2CON3bits;
volatile __SSP2STATbits_t __at(SSP2STAT_ADDR) SSP2STATbits;
volatile __SSPCONbits_t __at(SSPCON_ADDR) SSPCONbits;
volatile __SSPCON1bits_t __at(SSPCON1_ADDR) SSPCON1bits;
volatile __SSPCON2bits_t __at(SSPCON2_ADDR) SSPCON2bits;
volatile __SSPCON3bits_t __at(SSPCON3_ADDR) SSPCON3bits;
volatile __SSPSTATbits_t __at(SSPSTAT_ADDR) SSPSTATbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __STATUS_SHADbits_t __at(STATUS_SHAD_ADDR) STATUS_SHADbits;
volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;
volatile __T1GCONbits_t __at(T1GCON_ADDR) T1GCONbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __T4CONbits_t __at(T4CON_ADDR) T4CONbits;
volatile __T6CONbits_t __at(T6CON_ADDR) T6CONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;
volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;
volatile __TRISDbits_t __at(TRISD_ADDR) TRISDbits;
volatile __TRISEbits_t __at(TRISE_ADDR) TRISEbits;
volatile __TRISFbits_t __at(TRISF_ADDR) TRISFbits;
volatile __TRISGbits_t __at(TRISG_ADDR) TRISGbits;
volatile __TX1STAbits_t __at(TX1STA_ADDR) TX1STAbits;
volatile __TX2STAbits_t __at(TX2STA_ADDR) TX2STAbits;
volatile __TXSTAbits_t __at(TXSTA_ADDR) TXSTAbits;
volatile __WDTCONbits_t __at(WDTCON_ADDR) WDTCONbits;
volatile __WPUBbits_t __at(WPUB_ADDR) WPUBbits;
volatile __WPUGbits_t __at(WPUG_ADDR) WPUGbits;

