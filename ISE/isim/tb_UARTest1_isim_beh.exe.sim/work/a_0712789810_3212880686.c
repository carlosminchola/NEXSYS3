/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/video_controller/uCAMII/NEXSYS3/sourcesvhdl/UARTest1.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0712789810_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7280);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7168);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0712789810_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7344);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7184);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0712789810_3212880686_p_2(char *t0)
{
    char t29[16];
    char t31[16];
    char t36[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t37;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 7200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 7408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 7472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 7536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    if (t13 == 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB33;

LAB35:
LAB34:
LAB17:    goto LAB6;

LAB8:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t2 = (t0 + 3912U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (8U * t15);
    t17 = (0U + t16);
    t2 = (t0 + 7600);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 8U);
    xsi_driver_first_trans_delta(t2, t17, 8U, 0LL);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 > 24);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 7408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t14;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 7408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB18:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)3);
    if (t9 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB17;

LAB21:;
LAB22:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t1 = (t0 + 4072U);
    t8 = *((char **)t1);
    t14 = *((int *)t8);
    t22 = (t14 - 0);
    t15 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 25, 1, t14);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t1 = (t7 + t17);
    t18 = (t0 + 2312U);
    t19 = *((char **)t18);
    t18 = (t0 + 4072U);
    t20 = *((char **)t18);
    t23 = *((int *)t20);
    t24 = (t23 + 1);
    t25 = (t24 - 0);
    t26 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 25, 1, t24);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t18 = (t19 + t28);
    t30 = ((IEEE_P_2592010699) + 4024);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 7;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 7);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t36 + 0U);
    t37 = (t33 + 0U);
    *((int *)t37) = 7;
    t37 = (t33 + 4U);
    *((int *)t37) = 0;
    t37 = (t33 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - 7);
    t35 = (t38 * -1);
    t35 = (t35 + 1);
    t37 = (t33 + 12U);
    *((unsigned int *)t37) = t35;
    t21 = xsi_base_array_concat(t21, t29, t30, (char)97, t1, t31, (char)97, t18, t36, (char)101);
    t35 = (8U + 8U);
    t12 = (16U != t35);
    if (t12 == 1)
        goto LAB28;

LAB29:    t37 = (t0 + 7664);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t21, 16U);
    xsi_driver_first_trans_fast(t37);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 7472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 > 23);
    if (t3 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 2);
    t1 = (t0 + 7536);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t14;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB23;

LAB25:    t1 = (t0 + 3272U);
    t6 = *((char **)t1);
    t10 = *((unsigned char *)t6);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB27;

LAB28:    xsi_size_not_matching(16U, t35, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 7536);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 7472);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

}


extern void work_a_0712789810_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0712789810_3212880686_p_0,(void *)work_a_0712789810_3212880686_p_1,(void *)work_a_0712789810_3212880686_p_2};
	xsi_register_didat("work_a_0712789810_3212880686", "isim/tb_UARTest1_isim_beh.exe.sim/work/a_0712789810_3212880686.didat");
	xsi_register_executes(pe);
}
