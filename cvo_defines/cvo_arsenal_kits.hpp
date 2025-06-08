/*
*   CVO Arsenal Define File
*   Detailed Information: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/addons/arsenal/readme.md
*   Example File: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/.hemtt/missions/Arsenal.Altis/cvo_arsenal_kits.hpp
*/


class cvo_arsenal_kits
{
    editor_layer_name = "CVO_Arsenal_Boxes";
    object_variable_names[] = {"source"};

    // Imports Base from configFile
    import Base from cvo_arsenal_kits;

    //  MISCELLANEOUS
    class GreenMagStuff: Base {
        addon_dependency = "greenmag_main";
        class items {
            // @ KYO - IDK if you edited those already or not - just comment out the entries you dont need.
			//class greenmag_ammo_556x45_basic_60Rnd;
			//class greenmag_ammo_556x45_basic_30Rnd;

			class greenmag_ammo_762x51_basic_60Rnd;
			class greenmag_ammo_762x51_basic_30Rnd;

			//class greenmag_ammo_545x39_basic_60Rnd;
			//class greenmag_ammo_545x39_basic_30Rnd;

			//class greenmag_ammo_762x39_basic_60Rnd;
			//class greenmag_ammo_762x39_basic_30Rnd;

			class greenmag_ammo_9x21_basic_60Rnd;
			class greenmag_ammo_9x21_basic_30Rnd;

			//class greenmag_ammo_45ACP_basic_30Rnd;
			//class greenmag_ammo_45ACP_basic_60Rnd;

			//class greenmag_ammo_762x54_basic_60Rnd;
			//class greenmag_ammo_762x54_basic_30Rnd;

			class greenmag_item_speedloader;
        };
    };
    

    //FISH_CAMO_CREAM
    class FishCamoCream: Base {
        class items {
            class FISH_Cream_Kit_Tropical;
            class FISH_Cream_Kit_Snow;
            class FISH_Cream_Kit_Europe;
            class FISH_Cream_Kit_Desert;
        };
    };

     //CIGS
    class Immersion_Cigs: Base {
        addon_dependency = "cigs_core";
        class items {
            class cigs_cigars_cigarbox_5;
            class cigs_lucky_strike_cigpack;
            class cigs_morley_cigpack;
            class cigs_pops_poppack;
        };
    };

    // ACE RATIONS
    class Rations: Base {
        condition = "missionNamespace getVariable ['ace_field_rations_enabled', true]";
        class items {
	        class vn_prop_food_pir_01_03;
	        class vn_prop_food_pir_01_05;
	        class vn_prop_food_pir_01_04;
	        class vn_prop_food_pir_01_02;
	        class vn_prop_food_pir_01_01;
        };
    };

    class HAM_Stuff: Base {
        condition = "missionNamespace getVariable ['ace_field_rations_enabled', true]";
        class items {
	        class vn_prop_food_sack_01;
        };
    };

    class Binoculars: Base {
        class items {
            //hates camera 
            class Old_Camera;
            class Old_Camera_HUD;
            class Old_Camera_Color;
            class Old_Camera_Color_HUD;
            //binoculars
            class vn_m19_binocs_grn;
            class vn_m19_binocs_grey;
            class vn_mk21_binocs;
            class vn_camera_01;
            class vn_anpvs2_binoc;
        };
    };

    class Uniforms: Base {
        class Items {
            //SEAL uniforms 
            class vn_b_uniform_seal_01_06;
            class vn_b_uniform_seal_01_01;
            class vn_b_uniform_seal_01_07;
            class vn_b_uniform_seal_01_05;
            class vn_b_uniform_seal_01_02;
            class vn_b_uniform_seal_02_06;
            class vn_b_uniform_seal_02_01;
            class vn_b_uniform_seal_02_07;
            class vn_b_uniform_seal_02_05;
            class vn_b_uniform_seal_02_02;
            class vn_b_uniform_seal_03_01;
            class vn_b_uniform_seal_04_01;
            class vn_b_uniform_seal_05_06;
            class vn_b_uniform_seal_05_01;
            class vn_b_uniform_seal_05_07;
            class vn_b_uniform_seal_05_05;
            class vn_b_uniform_seal_05_02;
            class vn_b_uniform_seal_06_06;
            class vn_b_uniform_seal_06_01;
            class vn_b_uniform_seal_06_07;
            class vn_b_uniform_seal_06_05;
            class vn_b_uniform_seal_06_02;
            //sog uniforms 
            class vn_b_uniform_sog_01_03;
            class vn_b_uniform_sog_01_01;
            class vn_b_uniform_sog_01_04;
            class vn_b_uniform_sog_01_06;
            class vn_b_uniform_sog_01_02;
            class vn_b_uniform_sog_01_05;
            class vn_b_uniform_sog_02_03;
            class vn_b_uniform_sog_02_01;
            class vn_b_uniform_sog_02_04;
            class vn_b_uniform_sog_02_06;
            class vn_b_uniform_sog_02_02;
            class vn_b_uniform_sog_02_05;
            //macv uniforms
            class vn_b_uniform_macv_01_15;
            class vn_b_uniform_macv_01_06;
            class vn_b_uniform_macv_01_08;
            class vn_b_uniform_macv_01_07;
            class vn_b_uniform_macv_01_01;
            class vn_b_uniform_macv_01_04;
            class vn_b_uniform_macv_01_05;
            class vn_b_uniform_macv_01_02;
            class vn_b_uniform_macv_02_15;
            class vn_b_uniform_macv_02_06;
            class vn_b_uniform_macv_02_08;
            class vn_b_uniform_macv_02_07;
            class vn_b_uniform_macv_02_01;
            class vn_b_uniform_macv_02_05;
            class vn_b_uniform_macv_02_02;
            class vn_b_uniform_macv_03_15;
            class vn_b_uniform_macv_03_06;
            class vn_b_uniform_macv_03_08;
            class vn_b_uniform_macv_03_07;
            class vn_b_uniform_macv_03_01;
            class vn_b_uniform_macv_03_05;
            class vn_b_uniform_macv_03_02;
            class vn_b_uniform_macv_04_15;
            class vn_b_uniform_macv_04_21;
            class vn_b_uniform_macv_04_06;
            class vn_b_uniform_macv_04_08;
            class vn_b_uniform_macv_04_07;
            class vn_b_uniform_macv_04_01;
            class vn_b_uniform_macv_04_05;
            class vn_b_uniform_macv_04_02;
            class vn_b_uniform_macv_04_20;
            class vn_b_uniform_macv_05_15;
            class vn_b_uniform_macv_05_06;
            class vn_b_uniform_macv_05_08;
            class vn_b_uniform_macv_05_07;
            class vn_b_uniform_macv_05_01;
            class vn_b_uniform_macv_05_05;
            class vn_b_uniform_macv_05_02;
            class vn_b_uniform_macv_06_15;
            class vn_b_uniform_macv_06_06;
            class vn_b_uniform_macv_06_08;
            class vn_b_uniform_macv_06_07;
            class vn_b_uniform_macv_06_01;
            class vn_b_uniform_macv_06_05;
            class vn_b_uniform_macv_06_02;
            class vn_b_uniform_macv_01_03;
        };
    };

    class Vests: Base {
        class Items {
            //sas vest 
            class vn_b_vest_sas_02;
            class vn_b_vest_sas_03;
            class vn_b_vest_sas_04;
            class vn_b_vest_sas_01;
            //seal vests 
            class vn_b_vest_seal_07;
            class vn_b_vest_seal_06;
            class vn_b_vest_seal_03;
            class vn_b_vest_seal_04;
            class vn_b_vest_seal_05;
            class vn_b_vest_seal_02;
            //sog vests
            class vn_b_vest_sog_04;
            class vn_b_vest_sog_05;
            class vn_b_vest_sog_06;
            class vn_b_vest_sog_01;
        };
    };

    class Backpacks: Base {
        class Items {
            //sas packs 
            class vn_b_pack_pfield_01;
            class vn_b_pack_pfield_02;
            class vn_b_pack_p08_01;
            class vn_b_pack_p08_02;
            class vn_b_pack_p08_03;
            class vn_b_pack_p44_01;
            class vn_b_pack_p44_02;
            class vn_b_pack_p44_03;
            //parachute
            class vn_b_pack_ba22_01;
            //sog packs 
            class vn_b_pack_02;
            class vn_b_pack_04;
            class vn_b_pack_01;
            class vn_b_pack_trp_02;
            class vn_b_pack_trp_01;
            class vn_b_pack_trp_02_02;
            class vn_b_pack_trp_01_02;
        };
    };
    
    class Headgear: Base {
        class items {
            //berets 
            class vn_i_beret_03_03;
            class vn_i_beret_03_02;
            class vn_i_beret_03_04;
            class vn_i_beret_03_01;
            class vn_b_beret_01_02;
            class vn_b_beret_01_01;
            class vn_b_beret_01_05;
            class vn_b_beret_01_08;
            class vn_b_beret_01_04;
            class vn_b_beret_01_03;
            class vn_b_beret_04_01;
            class vn_b_beret_01_07;
            class vn_b_beret_01_06;
            //m1 helmets 
            class vn_i_helmet_m1_02_01;
            class vn_i_helmet_m1_03_01;
            class vn_b_helmet_m1_01_01;
            class vn_b_helmet_m1_14_01;
            class vn_b_helmet_m1_15_01;
            class vn_b_helmet_m1_16_01;
            class vn_b_helmet_m1_18_01;
            class vn_b_helmet_m1_17_01;
            class vn_b_helmet_m1_19_01;
            class vn_b_helmet_m1_02_01;
            class vn_b_helmet_m1_20_01;
            class vn_b_helmet_m1_03_01;
            class vn_b_helmet_m1_05_01;
            class vn_b_helmet_m1_06_01;
            class vn_b_helmet_m1_07_01;
            class vn_b_helmet_m1_09_01;
            class vn_b_helmet_m1_04_01;
            class vn_b_helmet_m1_17_01;
            class vn_b_helmet_m1_08_01;
            class vn_b_helmet_m1_10_01;
            class vn_b_helmet_m1_11_01;
            //sog pith helmet
            class vn_b_helmet_sog_01;
            //boonies
            class vn_b_boonie_08_02;
            class vn_b_boonie_08_01;
            class vn_b_boonie_07_02;
            class vn_b_boonie_07_01;
            class vn_b_boonie_06_02;
            class vn_b_boonie_06_01;
            class vn_b_boonie_02_03;
            class vn_b_boonie_02_06;
            class vn_b_boonie_02_08;
            class vn_b_boonie_02_01;
            class vn_b_boonie_02_09;
            class vn_b_boonie_02_07;
            class vn_b_boonie_02_04;
            class vn_b_boonie_02_05;
            class vn_b_boonie_02_02;
            class vn_b_boonie_03_03;
            class vn_b_boonie_03_06;
            class vn_b_boonie_03_08;
            class vn_b_boonie_03_01;
            class vn_b_boonie_03_09;
            class vn_b_boonie_03_07;
            class vn_b_boonie_03_04;
            class vn_b_boonie_03_05;
            class vn_b_boonie_03_02;
            class vn_b_boonie_04_03;
            class vn_b_boonie_04_06;
            class vn_b_boonie_04_08;
            class vn_b_boonie_04_01;
            class vn_b_boonie_04_09;
            class vn_b_boonie_04_07;
            class vn_b_boonie_04_04;
            class vn_b_boonie_04_05;
            class vn_b_boonie_04_02;
            class vn_b_boonie_05_03;
            class vn_b_boonie_05_06;
            class vn_b_boonie_05_08;
            class vn_b_boonie_05_01;
            class vn_b_boonie_05_09;
            class vn_b_boonie_05_07;
            class vn_b_boonie_05_04;
            class vn_b_boonie_05_05;
            class vn_b_boonie_05_02;
            class vn_b_boonie_01_03;
            class vn_b_boonie_01_06;
            class vn_b_boonie_01_08;
            class vn_b_boonie_01_01;
            class vn_b_boonie_01_09;
            class vn_b_boonie_01_07;
            class vn_b_boonie_01_04;
            class vn_b_boonie_01_05;
            class vn_b_boonie_01_02;
            //sog headbands 
            class vn_b_headband_03;
            class vn_b_headband_05;
            class vn_b_headband_08;
            class vn_b_headband_01;
            class vn_b_headband_04;
            class vn_b_headband_02;
            //sog bandanas
            class vn_b_bandana_06;
            class vn_b_bandana_01;
            class vn_b_bandana_07;
            class vn_b_bandana_04;
            class vn_b_bandana_05;
            class vn_b_bandana_02;
            class vn_b_bandana_08;
            class vn_b_bandana_03;
        };
    };

    
    class Facewear: Base {
        class items {
            //sog facewear 
            class vn_o_poncho_01_01;
            class vn_b_bandana_a;
            class vn_o_bandana_b;
            class vn_o_bandana_g;
            class vn_b_scarf_01_03;
            class vn_o_scarf_01_04;
            class vn_o_scarf_01_03;
            class vn_o_scarf_01_02;
            class vn_b_scarf_01_01;
            class vn_b_acc_rag_02;
            class vn_b_acc_rag_01;
            class vn_b_spectacles;
            class vn_g_spectacles_02;
            class vn_g_spectacles_01;
            class vn_b_squares;
            class vn_b_squares_tinted;
            class vn_g_glasses_01;
            class vn_b_spectacles_tinted;
            class vn_b_acc_towel_01;
            class vn_b_acc_towel_02;
            class vn_b_aviator;
            class G_Aviator;            
        };
    };
    
    class Rifles: Base {
        class items {
            //svd 
            class vn_svd;
            class vn_o_4x_svd;
            class vn_b_camo_svd;
            class vn_svd_mag;
            class vn_svd_t_mag;
            //m197 shotgun 
            class vn_m1897;
            class vn_m1897_buck_mag;
            class vn_m1897_fl_mag;
            //vz54
            //class vn_vz54;
            //class vn_o_3x_vz54;
            //class vn_b_camo_vz54;
            //vz61
            class vn_vz61;
            class vn_vz61_mag;
            class vn_vz61_t_mag;
            //stenmk2
            class vn_sten;
            class vn_sten_mag;
            class vn_sten_t_mag;
            class vn_s_sten;
            //sks
            class vn_sks;
            class vn_sks_gl;
            class vn_o_3x_sks;
            class vn_b_sks;
            class vn_sks_mag;
            class vn_sks_t_mag;
            //rpd
            class vn_rpd;
            class vn_rpd_shorty_01;
            class vn_rpd_shorty;
            class vn_rpd_100_mag;
            class vn_rpd_125_mag;
            //pkm
            class vn_pk;
            class vn_pk_100_mag;
            //mpu
            class vn_mpu;
            class vn_s_mpu;
            class vn_mpu_mag;
            class vn_mpu_t_mag;
            //mp40
            //class vn_mp40;
            //class vn_mp40_mag;
            //class vn_mp40_t_mag;
            //mg-42
            //class vn_mg42;
            //class vn_mg42_50_mag;
            //class vn_mg42_50_t_mag;
            //class sog_mg_belts_mg42_100_mag;
            //class sog_mg_belts_mg42_100_t_mag;
            //mc-10
            class vn_mc10;
            class vn_mc10_mag;
            class vn_mc10_t_mag;
            class vn_s_mc10;
            //mat-49
            class vn_mat49;
            class vn_mat49_mag;
            class vn_mat49_t_mag;
            class vn_s_mat49;
            //m79
            class vn_m79;
            class vn_40mm_m381_he_mag;
            class vn_40mm_m397_ab_mag;
            class vn_40mm_m406_he_mag;
            class vn_40mm_m433_hedp_mag;
            class vn_40mm_m583_flare_w_mag;
            class vn_40mm_m651_cs_mag;
            class vn_40mm_m661_flare_g_mag;
            class vn_40mm_m662_flare_r_mag;
            class vn_40mm_m680_smoke_w_mag;
            class vn_40mm_m682_smoke_r_mag;
            class vn_40mm_m695_flare_y_mag;
            class vn_40mm_m715_smoke_g_mag;
            class vn_40mm_m716_smoke_y_mag;
            class vn_40mm_m717_smoke_p_mag;
            class vn_40mm_m576_buck_mag;
            //m63
            class vn_m63a;
            class vn_m63a_30_mag;
            class vn_m63a_30_t_mag;
            class vn_m63a_cdo;
            class vn_m63a_lmg;
            class vn_m63a_150_mag;
            class vn_m63a_150_t_mag;
            class vn_m63a_100_mag;
            class vn_m63a_100_t_mag;
            class vn_bipod_m63a;
            //m60
            class vn_m60;
            class vn_m60_shorty;
            class vn_m60_shorty_camo;
            class vn_m60_100_mag;
            //m49/56
            class vn_m4956;
            class vn_m4956_gl;
            class vn_o_4x_m4956;
            class vn_b_m4956;
            class vn_m4956_10_mag;
            class vn_m4956_10_t_mag;
            //m40
            class vn_m40a1;
            class vn_m40a1_camo;
            class vn_m40a1_mag;
            class vn_m40a1_t_mag;
            class vn_o_9x_m40a1;
            class vn_o_anpvs2_m40a1;
            class vn_b_camo_m40a1;
            //m3a1
            class vn_m3a1;
            class vn_s_m3a1;
            class vn_m3a1_mag;
            class vn_m3a1_t_mag;
            //m36
            //class vn_m36;
            //class vn_b_camo_m36;
            //class vn_b_m36;
            //class vn_m36_mag;
            //class vn_m36_t_mag;
            //FM24/29
            class vnx_fm2429;
            class vnx_fm2429_mag;
            class vnx_fm2429_t_mag;
            //Tommy Gun
            //class vn_m1928_tommy;
            class vn_m1928a1_tommy;
            class vn_m1a1_tommy;
            class vn_m1a1_tommy_so;
            class vn_m1a1_20_mag;
            class vn_m1a1_20_t_mag;
            class vn_m1a1_30_mag;
            class vn_m1a1_30_t_mag;
            class vn_m1928_mag;
            class vn_m1928_t_mag;
            //M1918A2
            class vn_m1918;
            class vn_m1918_mag;
            class vn_m1918_t_mag;
            class vn_bipod_m1918;
            //M1903
            //class vn_m1903;
            //class vn_m1903_gl;
            //class vn_o_8x_m1903;
            //class vn_b_m1903;
            //class vn_b_camo_m1903;
            //class vn_m1903_mag;
            //class vn_m1903_t_mag;
            //M1891/M38
            class vn_m9130;
            class vn_o_3x_m9130;
            class vn_b_camo_m9130;
            //class vn_m1891;
            //class vn_m38;
            //class vn_b_m38;
            class vn_m38_mag;
            class vn_m38_t_mag;
            //M14
            class vn_m14_camo;
            class vn_m14;
            class vn_m14a1;
            class vn_m14a1_shorty;
            class vn_o_9x_m14;
            class vn_o_anpvs2_m14;
            class vn_b_m14;
            class vn_s_m14;
            class vn_b_camo_m14;
            class vn_m14_10_mag;
            class vn_m14_10_t_mag;
            class vn_m14_mag;
            class vn_m14_t_mag;
            class vn_o_m14_front;
            class vn_m14_camo;
            //m1 garand
            //class vn_m1_garand;
            //class vn_m1_garand_gl;
            //class vn_b_m1_garand;
            //class vn_b_camo_m1_garand;
            //class vn_m1_garand_mag;
            //class vn_m1_garand_t_mag;
            //m1 carbine shorty
            class vn_m1carbine_shorty;
            class vn_hp_sd_mag;
            //m1 carbine/m2
            //class vn_m1carbine;
            //class vn_m1carbine_gl;
            class vn_m2carbine;
            //class vn_m2carbine_gl;
            class vn_m3carbine;
            class vn_o_3x_m84;
            class vn_b_carbine;
            class vn_carbine_15_mag;
            class vn_carbine_15_t_mag;
            class vn_carbine_30_mag;
            class vn_carbine_30_t_mag;
            class vn_22mm_cs_mag;
            class vn_22mm_lume_mag;
            class vn_22mm_m17_frag_mag;
            class vn_22mm_m19_wp_mag;
            class vn_22mm_m1a2_frag_mag;
            class vn_22mm_m22_smoke_mag;
            class vn_22mm_m9_heat_mag;
            //K-50m/PPs/PPsh
            class vn_k50m;
            class vn_pps43;
            //class vn_pps52;
            //class vn_ppsh41;
            class vn_pps_mag;
            class vn_pps_t_mag;
            class vn_ppsh41_35_mag;
            class vn_ppsh41_35_t_mag;
            class vn_ppsh41_71_mag;
            class vn_ppsh41_71_t_mag;
            //Ish-54
            class vn_izh54;
            class vn_izh54_mag;
            //M16/XM16/XM17
            class vn_m16;
            class vn_m16_camo;
            class vn_m16_m203_camo;
            class vn_m16_m203;
            class vn_m16_xm148;
            class vn_xm177;
            class vn_xm177_camo;
            class vn_xm177_fg;
            class vn_xm177_m203;
            class vn_xm177_m203_camo;
            class vn_xm177_short;
            class vn_xm177_stock;
            class vn_xm177_stock_camo;
            class vn_xm177_xm148;
            class vn_xm177_xm148_camo;
            class vn_o_9x_m16;
            class vn_o_4x_m16;
            class vn_o_1x_sp_m16;
            class vn_o_anpvs2_m16;
            class vn_s_m16;
            class vn_bipod_m16;
            class vn_m16_20_mag;
            class vn_m16_40_mag;
            class vn_m16_20_t_mag;
            class vn_m16_40_t_mag;
            class vn_m16_30_mag;
            class vn_m16_30_t_mag;
            //f1/l2a3/l3a1
            class vn_l2a3;
            class vn_l34a1;
            class vn_l34a1_xm148;
            class vn_f1_smg;
            class vn_f1_smg_mag;
            class vn_f1_smg_t_mag;
            //dp-27
            class vn_dp28;
            class vn_dp28_mag;
            //ubgl mags
            class vn_40mm_m381_he_mag;
            class vn_40mm_m397_ab_mag;
            class vn_40mm_m406_he_mag;
            class vn_40mm_m433_hedp_mag;
            class vn_40mm_m583_flare_w_mag;
            class vn_40mm_m651_cs_mag;
            class vn_40mm_m661_flare_g_mag;
            class vn_40mm_m662_flare_r_mag;
            class vn_40mm_m680_smoke_w_mag;
            class vn_40mm_m682_smoke_r_mag;
            class vn_40mm_m695_flare_y_mag;
            class vn_40mm_m715_smoke_g_mag;
            class vn_40mm_m716_smoke_y_mag;
            class vn_40mm_m717_smoke_p_mag;
            //type 56/AK
            class vn_ak_01;
            class vnx_type56_xm148;
            class vn_type56;
            class vn_b_type56;
            class vn_type56_mag;
            class vn_type56_t_mag;
            //m77e
            class vnx_m77e;
            class vnx_m77e_shorty;
            class vnx_m77e_fl_mag;
            class vnx_m77e_buck_mag;
            class vnx_m77e_so_mag;
            //m50
            class vnx_m50_smg;	
            class vnx_m50_smg_mag;
            class vnx_m50_smg_t_mag;
            //m12
            class vnx_m12_smg;
            
            class vnx_m12_smg_20_mag;
            class vnx_m12_smg_20_t_mag;
            class vnx_m12_smg_32_mag;
            class vnx_m12_smg_32_t_mag;
            //m/45
            class vnx_m45_sf;
            
            class vn_m45;
            class vn_m45_camo;
            class vn_s_m45_camo;
            class vn_s_m45;
            class vn_m45_mag;
            class vn_m45_t_mag;
            //L1/L2/l4
            class vn_l4;
            class vn_l2a1_01;
            class vn_l1a1_xm148_camo;
            class vn_l1a1_xm148;
            class vn_l1a1_03_camo;
            class vn_l1a1_03;
            class vn_l1a1_02_gl;
            class vn_l1a1_02_camo;
            class vn_l1a1_02;
            class vn_l1a1_01_gl;
            class vn_l1a1_01_camo;
            class vn_l1a1_01;
            class vnx_l1a1_04_camo;
            class vnx_l1a1_04;
            //class vnx_l1a1_05_camo;
            //class vnx_l1a1_05;
            class vn_o_3x_l1a1;
            class vn_l1a1_10_mag;
            class vn_l1a1_10_t_mag;
            class vn_l1a1_20_mag;
            class vn_l1a1_20_t_mag;
            class vn_l1a1_30_mag;
            class vn_l1a1_30_t_mag;
            class vn_l1a1_30_02_mag;
            class vn_l1a1_30_02_t_mag;            
        };
    };
    
    
    class Pistols: Base {
        class items {
            class vn_izh54_p;
            class vn_izh54_so_mag;
            class vn_izh54_mag;
            class vn_m1895;
            class vn_m1895_mag;
            class vn_s_m1895;
            class vn_m1911;
            class vn_mx991_m1911;
            class vn_m1911_mag;
            class vn_m79_p;
            class vn_mk22;
            class vn_mk22_mag;
            class vn_s_mk22;
            class vn_m10;
            class vn_m10_mag;
            //browning hi-power 
            class vn_hp;
            class vn_hp_mag;
            class vn_s_hp;
            //welrod
            class vn_welrod;
            class vn_welrod_mag;
            //vz61 sidearm
            class vn_vz61_p;
            //type64
            //class vn_type64;
            //class vn_type64_mag;
            //tt33
            //class vn_tt33;
            //class vn_tt33_mag;
            //ppk
            class vn_ppk;
            class vn_ppk_mag;
            //pm
            class vn_pm;
            class vn_s_pm;
            class vn_pm_mag;
            class vn_fkb1_pm;
            //p38
            class vn_p38;
            class vn_p38_mag;
            class vn_s_ppk;
            //flashlight
            class vn_fkb1;
            class vn_fkb1_red;
            class vn_mx991;
            class vn_mx991_red;
            //melee weapons
            class vnx_m_ladle;
            //class vnx_m_spoon_01;
            //class vnx_m_spoon_02;
            //class vn_m_axe_01;
            //class vn_m_axe_fire;
            //class vn_b_melee_k98k;
            //class vn_m_bayo_carbine;
            //class vn_b_melee_m1903;
            class vn_m_bayo_m1897;
            //class vn_b_melee_m36;
            //class vn_m_bayo_m4956;
            class vn_m_bayo_m14;
            class vn_m_bayo_m16;
            //class vn_m_bolo_01;
            //class vn_m_fishing_rod_01;
            //class vn_m_hammer;
            class vn_m_fighting_knife_01;
            class vn_b_melee_m43_etool_01;
            class vn_m_m51_etool_01;
            class vn_m_machete_02;
            //class vn_m_machete_01;
            class vn_m_mk2_knife_01;
            class vn_m_shovel_01;
            class vn_m_typeivaxe_01;
            //class vn_m_wrench_01;
            //38 revolver
            class vn_p38s;
            class vn_m10_mag;
            //hd pistol
            class vn_hd;
            class vn_hd_mag;
            class vnx_hd_02;
            class vnx_hd_02_mag;
            //gyrojet pistol
            class vnx_gjet;
            class vnx_gjet_mag;
        };
    };
    
    
    class Throwables: Base {
        class items {
            class vn_molotov_grenade_mag;
            class vn_f1_grenade_mag;
            class vn_m14_early_grenade_mag;
            class vn_m34_grenade_mag;
            class vn_m61_grenade_mag;
            class vn_m67_grenade_mag;
            class vn_m7_grenade_mag;
            class vn_m18_green_mag;
            class vn_m18_purple_mag;
            class vn_m18_red_mag;
            class vn_m18_white_mag;
            class vn_m18_yellow_mag;
            class vn_satchelcharge_02_throw_mag;
            class vn_v40_grenade_mag;

            class ACE_HandFlare_Green;
            class ACE_HandFlare_Yellow;
            class ACE_HandFlare_Red;
            class ACE_HandFlare_White;

            class Chemlight_yellow;
            class Chemlight_red;
            class Chemlight_blue;
            class Chemlight_green;
            class ACE_Chemlight_Orange;
            class ACE_Chemlight_White;
            class ACE_Chemlight_HiWhite;
            class ACE_Chemlight_UltraHiOrange;
        };
    };
    
    
    class Explosives: Base {
        class items {
            //flare launcher
            class vn_m127;
            class vn_m127_mag;
            class vn_m128_mag;
            class vn_m129_mag;
            //lock poppers
            //class tsp_breach_popper_mag;
            //class tsp_breach_popper_auto_mag;
            //m72
            class vn_m72;
            class vn_m72_mag;
        };
    };
    
    
    class Medic: Base {
        role = 'Medic';
        class items {
            //medic vests 
            class vn_b_vest_usarmy_07;
            class vn_b_vest_sog_02;
            //sog medic packs 
            class vn_b_pack_m5_01;
            class vn_b_pack_lw_07;
        };
    };
    
    
    class Engineer: Base {
        role = 'Engineer';
        class items {
            //demo vests 
            class vn_b_vest_sog_03;
            //sog mines
            class vn_mine_ammobox_range_mag;
            class vn_mine_limpet_01_mag;
            class vn_mine_m14_mag;
            class vn_mine_m15_mag;
            class vn_mine_tripwire_m16_02_mag;
            class vn_mine_tripwire_m16_04_mag;
            class vn_mine_m16_mag;
            class vn_mine_m18_fuze10_mag;
            class vn_mine_m18_range_mag;
            class vn_mine_m18_mag;
            class vn_mine_m18_x3_range_mag;
            class vn_mine_m18_x3_mag;
            class vn_mine_m18_wp_fuze10_mag;
            class vn_mine_m18_wp_range_mag;
            class vn_mine_m18_wp_mag;
            class vn_mine_tm57_mag;
            class vn_mine_satchel_remote_02_mag;
            class vn_mine_satchelcharge_02_mag;
            //ace defusal kit 
            class ACE_DefusalKit;
            //sog trap kit
            class vn_b_item_trapkit;
            //sog demo pack 
            class vn_b_pack_trp_03;
            class vn_b_pack_05;
            class vn_b_pack_05_02;
            // Explosives
            //class tsp_breach_popper_mag;
            class tsp_breach_popper_auto_mag;
            //class tsp_breach_silhouette_mag;
            //class tsp_breach_stick_mag;
            class ACE_Clacker;
            class DemoCharge_Remote_Mag;
            class ACE_DemoCharge_Remote_Mag_Throwable;
            class SatchelCharge_Remote_Mag;
            class ACE_SatchelCharge_Remote_Mag_Throwable;

        };
    };
    
    
    class RTO: Base {
        role = 'RTO';
        class items {
            //sog rto vest
            class vn_b_vest_sog_06;
            //sog rto packs 
            class vn_b_pack_trp_04;
            class vn_b_pack_03;
            //class vn_b_pack_03_02;
            class vn_b_pack_trp_04_02;
            class vn_b_pack_lw_06;
            class vn_b_pack_prc77_01;

            //ACRE GroundSpike and Mast
            class ACRE_VHF30108SPIKE; 
            class ACRE_VHF30108; 
            class ACRE_VHF30108MAST;
            class ACRE_PRC343;
            //LR radio
            class ACRE_PRC77;            
        };
    };
    
    
    class Officer: Base {
        role = 'Officer';
        class items {
            //sog officer vests 
            class vn_b_vest_sog_01;
            class vn_b_vest_usarmy_09;
            //SOG Berets 
            class vn_b_beret_01_01;
            class ACE_DAGR;
            //ACRE GroundSpike and Mast
            class ACRE_VHF30108SPIKE; 
            class ACRE_VHF30108; 
            class ACRE_VHF30108MAST;
            class ACRE_PRC343;
            
        };
    };
    
    

};

