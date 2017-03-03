/* ----------------------------------------------------------------------- */
/* Configuration bits: adapt to your setup and needs */


__code char __at __CONFIG1H CONFIG1H = _FOSC_INTIO67_1H & _FCMEN_OFF_1H & _IESO_OFF_1H;
__code char __at __CONFIG2L CONFIG2L = _PWRT_OFF_2L & _BOREN_SBORDIS_2L & _BORV_18_2L;
__code char __at __CONFIG2H CONFIG2H = _WDTEN_OFF_2H & _WDTPS_32768_2H;
__code char __at __CONFIG3H CONFIG3H = _CCP2MX_PORTC_3H & _PBADEN_ON_3H & _LPT1OSC_OFF_3H & _HFOFST_ON_3H & _MCLRE_ON_3H;
__code char __at __CONFIG4L CONFIG4L = _STVREN_ON_4L & _LVP_OFF_4L & _XINST_OFF_4L & _DEBUG_OFF_4L;
__code char __at __CONFIG5L CONFIG5L = _CP0_OFF_5L & _CP1_OFF_5L & _CP2_OFF_5L & _CP3_OFF_5L;
__code char __at __CONFIG5H CONFIG5H = _CPB_OFF_5H & _CPD_OFF_5H;
__code char __at __CONFIG6L CONFIG6L = _WRT0_OFF_6L & _WRT1_OFF_6L & _WRT2_OFF_6L & _WRT3_OFF_6L;
__code char __at __CONFIG6H CONFIG6H = _WRTC_OFF_6H & _WRTB_OFF_6H & _WRTD_OFF_6H;
__code char __at __CONFIG7L CONFIG7L = _EBTR0_OFF_7L & _EBTR1_OFF_7L & _EBTR2_OFF_7L & _EBTR3_OFF_7L;
__code char __at __CONFIG7H CONFIG7H = _EBTRB_OFF_7H;