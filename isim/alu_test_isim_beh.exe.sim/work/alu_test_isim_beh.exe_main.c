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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002288263566_2725559894_init();
    work_m_00000000003807212396_1119861224_init();
    work_m_00000000003398336677_3403746731_init();
    work_m_00000000002843281627_2351635246_init();
    work_m_00000000002667932474_2220189930_init();
    work_m_00000000000695885974_0878684766_init();
    work_m_00000000003873409916_2602956921_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003873409916_2602956921");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
