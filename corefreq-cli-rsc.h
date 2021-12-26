/*
 * CoreFreq
 * Copyright (C) 2015-2021 CYRIL INGENIERIE
 * Licenses: GPL2
 */

enum UI_THEME {
	UI_FUSE_RESET_LAYER,
	UI_FUSE_PAINT_LAYER,
	UI_MAKE_TITLE_UNFOCUS,
	UI_MAKE_TITLE_FOCUS,
	UI_MAKE_BORDER_UNFOCUS,
	UI_MAKE_BORDER_FOCUS,
	UI_MAKE_SELECT_UNFOCUS,
	UI_MAKE_SELECT_FOCUS,
	UI_MAKE_PRINT_UNFOCUS,
	UI_MAKE_PRINT_FOCUS,
	UI_MAKE_PRINT_DROP,
	UI_LAYOUT_LCD_RESET,
	UI_LAYOUT_LCD_CLOCK_LOW,
	UI_LAYOUT_LCD_CLOCK_MEDIUM,
	UI_LAYOUT_LCD_CLOCK_HIGH,
	UI_LAYOUT_LCD_COUNTER_LOW,
	UI_LAYOUT_LCD_COUNTER_MEDIUM,
	UI_LAYOUT_LCD_COUNTER_HIGH,
	UI_LAYOUT_LCD_LOAD_LOW,
	UI_LAYOUT_LCD_LOAD_MEDIUM,
	UI_LAYOUT_LCD_LOAD_HIGH,
	UI_LAYOUT_LCD_IDLE_LOW,
	UI_LAYOUT_LCD_IDLE_MEDIUM,
	UI_LAYOUT_LCD_IDLE_HIGH,
	UI_LAYOUT_LCD_SYSTEM_LOW,
	UI_LAYOUT_LCD_SYSTEM_MEDIUM,
	UI_LAYOUT_LCD_SYSTEM_HIGH,
	UI_LAYOUT_UBENCH,
	UI_LAYOUT_HEADER_PROC_BRAND,
	UI_LAYOUT_HEADER_PROC_BRAND_FILL,
	UI_LAYOUT_HEADER_ARCHITECTURE,
	UI_LAYOUT_HEADER_ARCH_FILL,
	UI_LAYOUT_HEADER_BCLK_FILL,
	UI_LAYOUT_RULER_INSTRUCTIONS,
	UI_LAYOUT_RULER_CYCLES,
	UI_LAYOUT_RULER_CSTATES,
	UI_LAYOUT_RULER_INTERRUPTS,
	UI_LAYOUT_RULER_PACKAGE,
	UI_LAYOUT_RULER_TASKS_FILL,
	UI_LAYOUT_RULER_TASKS_TRACKING,
	UI_LAYOUT_RULER_ENERGY,
	UI_LAYOUT_RULER_SLICE,
	UI_LAYOUT_RULER_CUSTOM,
	UI_LAYOUT_FOOTER_ENABLE_0,
	UI_LAYOUT_FOOTER_ENABLE_1,
	UI_LAYOUT_FOOTER_ENABLE_2,
	UI_LAYOUT_FOOTER_TSC_NONE,
	UI_LAYOUT_FOOTER_TSC_VAR,
	UI_LAYOUT_FOOTER_TSC_INV,
	UI_LAYOUT_FOOTER_TM_0,
	UI_LAYOUT_FOOTER_TM_1,
	UI_LAYOUT_FOOTER_TM_2,
	UI_LAYOUT_FOOTER_TM_3,
	UI_LAYOUT_FOOTER_FILL,
	UI_LAYOUT_FOOTER_GATE,
	UI_LAYOUT_FOOTER_SPACE,
	UI_LAYOUT_FOOTER_LEFT_BRACE,
	UI_LAYOUT_FOOTER_RIGHT_BRACE,
	UI_LAYOUT_FOOTER_KERNEL_VERSION,
	UI_LAYOUT_FOOTER_UNMAP_GATE,
	UI_LAYOUT_FOOTER_DMI_STRING,
	UI_LAYOUT_BCLK_TO_VIEW,
	UI_LAYOUT_ROW_CPU_OFFLINE,
	UI_LAYOUT_RULER_LOAD_TAB_DIM,
	UI_LAYOUT_RULER_LOAD_TAB_BRIGHT,
	UI_ILLUMINATES_CPU_OFF,
	UI_ILLUMINATES_CPU_ON,
	UI_ILLUMINATES_CPU_SP,
	UI_DRAW_FREQUENCY_LOAD_CLEAR,
	UI_DRAW_FREQUENCY_LOAD_LOW,
	UI_DRAW_FREQUENCY_LOAD_MEDIUM,
	UI_DRAW_FREQUENCY_LOAD_HIGH,
	UI_DRAW_ALTMONITOR_TASKS_CLEAR,
	UI_DRAW_ALTMONITOR_TASKS_SPACE,
	UI_DRAW_MONITOR_FREQUENCY_NOMINAL,
	UI_DRAW_MONITOR_FREQUENCY_LOW,
	UI_DRAW_MONITOR_FREQUENCY_HIGH,
	UI_DRAW_MONITOR_FREQUENCY_HOT,
	UI_LAYOUT_CARD_CORE_OFFLINE,
	UI_LAYOUT_CARD_RAM_2DIGITS,
	UI_LAYOUT_CARD_RAM_3DIGITS,
	UI_DRAW_CARD_CORE_NOMINAL,
	UI_DRAW_CARD_CORE_LOW,
	UI_DRAW_CARD_CORE_MEDIUM,
	UI_DRAW_CARD_CORE_HIGH,
	UI_DRAW_CARD_TASK_FILL,
	UI_WIN_MENU_UNSELECT,
	UI_WIN_MENU_SELECT,
	UI_WIN_MENU_TITLE_UNFOCUS,
	UI_WIN_MENU_TITLE_FOCUS,
	UI_WIN_MENU_ERASE_CELL,
	UI_WIN_SORT_BY_FIELD_TITLE,
	UI_WIN_TRACKING_PARENT_PROCESS,
	UI_WIN_TRACKING_CHILD_PROCESS,
	UI_WIN_TRACKING_COUNTERS,
	UI_WIN_TRACKING_TITLE,
	UI_WIN_HOT_PLUG_CPU_TITLE,
	UI_WIN_SELECT_IDLE_RESET,
	UI_WIN_SELECT_IDLE_POLL,
	UI_WIN_SELECT_IDLE_CURRENT,
	UI_WIN_POPUP_MSG_ITEM,
	UI_WIN_POPUP_MSG_SELECT_UNFOCUS,
	UI_WIN_POPUP_MSG_SELECT_FOCUS,
	UI_WIN_POPUP_MSG_BORDER_UNFOCUS,
	UI_WIN_POPUP_MSG_BORDER_FOCUS,
	UI_WIN_POPUP_MSG_TITLE_UNFOCUS,
	UI_WIN_POPUP_MSG_TITLE_FOCUS,
	UI_WIN_EXIT_ISSUE_RECORDER,
	UI_WIN_EXIT_ISSUE_STRESS,
	UI_WIN_EXIT_ISSUE_OS_CPU_IDLE,
	UI_WIN_EXIT_HEADER,
	UI_WIN_EXIT_BLANK,
	UI_WIN_EXIT_CONFIRM,
	UI_WIN_EXIT_FOOTER,
	UI_BOX_DISABLE_STATE,
	UI_BOX_ENABLE_STATE,
	UI_BOX_BLANK,
	UI_BOX_DESC,
	UI_BOX_INTERVAL,
	UI_BOX_EXPERIMENTAL_NOMINAL,
	UI_BOX_EXPERIMENTAL_WARNING,
	UI_DROP_IDLE_ROUTE,
	UI_BOX_TOOLS_STOP
};

enum {
	RSC_UI,
	RSC_VOID,
	RSC_THEME_DFLT,
	RSC_THEME_USR1,
	RSC_THEME_USR2,
	RSC_LAYOUT_LCD_RESET,
#ifndef NO_HEADER
	RSC_LAYOUT_HEADER_PROC,
	RSC_LAYOUT_HEADER_CPU,
	RSC_LAYOUT_HEADER_ARCH,
	RSC_LAYOUT_HEADER_CACHE_L1,
	RSC_LAYOUT_HEADER_BCLK,
	RSC_LAYOUT_HEADER_CACHES,
#endif
#ifndef NO_UPPER
	RSC_LAYOUT_RULER_LOAD,
	RSC_LAYOUT_RULER_REL_LOAD,
	RSC_LAYOUT_RULER_ABS_LOAD,
#endif
#ifndef NO_LOWER
	RSC_LAYOUT_MONITOR_FREQUENCY,
	RSC_LAYOUT_MONITOR_INST,
	RSC_LAYOUT_MONITOR_COMMON,
	RSC_LAYOUT_MONITOR_TASKS,
	RSC_LAYOUT_MONITOR_SLICE,
	RSC_LAYOUT_CUSTOM_FIELD,
	RSC_LAYOUT_RULER_FREQUENCY,
	RSC_LAYOUT_RULER_FREQUENCY_AVG,
	RSC_LAYOUT_RULER_FREQUENCY_PKG,
	RSC_LAYOUT_RULER_INST,
	RSC_LAYOUT_RULER_CYCLES,
	RSC_LAYOUT_RULER_CSTATES,
	RSC_LAYOUT_RULER_INTERRUPTS,
	RSC_LAYOUT_RULER_PACKAGE,
	RSC_LAYOUT_PACKAGE_PC,
	RSC_LAYOUT_PACKAGE_PC02,
	RSC_LAYOUT_PACKAGE_PC03,
	RSC_LAYOUT_PACKAGE_PC04,
	RSC_LAYOUT_PACKAGE_PC06,
	RSC_LAYOUT_PACKAGE_PC07,
	RSC_LAYOUT_PACKAGE_PC08,
	RSC_LAYOUT_PACKAGE_PC09,
	RSC_LAYOUT_PACKAGE_PC10,
	RSC_LAYOUT_PACKAGE_MC06,
	RSC_LAYOUT_PACKAGE_UNCORE,
	RSC_LAYOUT_RULER_TASKS,
	RSC_LAYOUT_TASKS_TRACKING,
	RSC_LAYOUT_TASKS_STATE_SORTED,
	RSC_LAYOUT_TASKS_RUNTIME_SORTED,
	RSC_LAYOUT_TASKS_USRTIME_SORTED,
	RSC_LAYOUT_TASKS_SYSTIME_SORTED,
	RSC_LAYOUT_TASKS_PROCESS_SORTED,
	RSC_LAYOUT_TASKS_COMMAND_SORTED,
	RSC_LAYOUT_TASKS_REVERSE_SORT_OFF,
	RSC_LAYOUT_TASKS_REVERSE_SORT_ON,
	RSC_LAYOUT_TASKS_VALUE_SWITCH,
	RSC_LAYOUT_TASKS_VALUE_OFF,
	RSC_LAYOUT_TASKS_VALUE_ON,
	RSC_LAYOUT_RULER_SENSORS,
	RSC_LAYOUT_RULER_PWR_UNCORE,
	RSC_LAYOUT_RULER_PWR_PLATFORM,
	RSC_LAYOUT_RULER_PWR_SOC,
	RSC_LAYOUT_RULER_VOLTAGE,
	RSC_LAYOUT_RULER_VPKG_SOC,
	RSC_LAYOUT_RULER_ENERGY,
	RSC_LAYOUT_RULER_POWER,
	RSC_LAYOUT_RULER_SLICE,
	RSC_LAYOUT_RULER_CUSTOM,
#endif /* NO_LOWER */
#ifndef NO_FOOTER
	RSC_LAYOUT_FOOTER_TECH_X86,
	RSC_LAYOUT_FOOTER_TECH_INTEL,
	RSC_LAYOUT_FOOTER_TECH_AMD,
	RSC_LAYOUT_FOOTER_VOLT_TEMP,
	RSC_LAYOUT_FOOTER_SYSTEM,
	RSC_LAYOUT_FOOTER_TSC_NONE,
	RSC_LAYOUT_FOOTER_TSC_VAR,
	RSC_LAYOUT_FOOTER_TSC_INV,
#endif
	RSC_LAYOUT_CARD_CORE_ONLINE_COND0,
	RSC_LAYOUT_CARD_CORE_ONLINE_COND1,
	RSC_LAYOUT_CARD_CORE_OFFLINE,
	RSC_LAYOUT_CARD_CLK,
	RSC_LAYOUT_CARD_UNCORE,
	RSC_LAYOUT_CARD_BUS,
	RSC_LAYOUT_CARD_MC,
	RSC_LAYOUT_CARD_LOAD,
	RSC_LAYOUT_CARD_IDLE,
	RSC_LAYOUT_CARD_RAM,
	RSC_LAYOUT_CARD_TASK,
/* ATTRIBUTE */
	RSC_RUN_STATE_COLOR,
	RSC_UNINT_STATE_COLOR,
	RSC_ZOMBIE_STATE_COLOR,
	RSC_SLEEP_STATE_COLOR,
	RSC_WAIT_STATE_COLOR,
	RSC_OTHER_STATE_COLOR,
#ifndef NO_LOWER
	RSC_TRACKER_STATE_COLOR,
#endif
	RSC_SYSINFO_CPUID_COND0,
	RSC_SYSINFO_CPUID_COND1,
	RSC_SYSINFO_CPUID_COND2,
	RSC_SYSINFO_CPUID_COND3,
	RSC_SYSTEM_REGISTERS_COND0,
	RSC_SYSTEM_REGISTERS_COND1,
	RSC_SYSTEM_REGISTERS_COND2,
	RSC_SYSTEM_REGISTERS_COND3,
	RSC_SYSTEM_REGISTERS_COND4,
	RSC_SYSINFO_PROC_COND0,
	RSC_SYSINFO_PROC_COND1,
	RSC_SYSINFO_PROC_COND2,
	RSC_SYSINFO_PROC_COND3,
	RSC_SYSINFO_ISA_COND_0_0,
	RSC_SYSINFO_ISA_COND_0_1,
	RSC_SYSINFO_ISA_COND_0_2,
	RSC_SYSINFO_ISA_COND_0_3,
	RSC_SYSINFO_ISA_COND_0_4,
	RSC_SYSINFO_ISA_COND_1_0,
	RSC_SYSINFO_ISA_COND_1_1,
	RSC_SYSINFO_ISA_COND_1_2,
	RSC_SYSINFO_ISA_COND_1_3,
	RSC_SYSINFO_ISA_COND_1_4,
	RSC_SYSINFO_FEATURES_COND0,
	RSC_SYSINFO_FEATURES_COND1,
	RSC_SYSINFO_FEATURES_COND2,
	RSC_SYSINFO_FEATURES_COND3,
	RSC_SYSINFO_FEATURES_COND4,
	RSC_SYSINFO_TECH_COND0,
	RSC_SYSINFO_TECH_COND1,
	RSC_SYSINFO_PERFMON_COND0,
	RSC_SYSINFO_PERFMON_COND1,
	RSC_SYSINFO_PERFMON_COND2,
	RSC_SYSINFO_PERFMON_COND3,
	RSC_SYSINFO_PERFMON_COND4,
	RSC_SYSINFO_PERFMON_HWP_CAP_COND0,
	RSC_SYSINFO_PERFMON_HWP_CAP_COND1,
	RSC_SYSINFO_PWR_THERMAL_COND0,
	RSC_SYSINFO_PWR_THERMAL_COND1,
	RSC_SYSINFO_PWR_THERMAL_COND2,
	RSC_SYSINFO_PWR_THERMAL_COND3,
	RSC_SYSINFO_PWR_THERMAL_COND4,
	RSC_SYSINFO_PWR_THERMAL_COND5,
	RSC_SYSINFO_PWR_THERMAL_COND6,
	RSC_SYSINFO_KERNEL,
	RSC_TOPOLOGY_COND0,
	RSC_TOPOLOGY_COND1,
	RSC_TOPOLOGY_COND2,
	RSC_TOPOLOGY_COND3,
	RSC_TOPOLOGY_COND4,
	RSC_MEMORY_CONTROLLER_COND0,
	RSC_MEMORY_CONTROLLER_COND1,
	RSC_CREATE_MENU_DISABLE,
	RSC_CREATE_MENU_FN_KEY,
	RSC_CREATE_MENU_SHORTKEY,
	RSC_CREATE_MENU_CTRL_KEY,
	RSC_CREATE_SETTINGS_COND0,
	RSC_CREATE_SETTINGS_COND1,
	RSC_CREATE_ADV_HELP_COND0,
	RSC_CREATE_ADV_HELP_COND1,
	RSC_CREATE_HOTPLUG_CPU_TITLE,
	RSC_CREATE_HOTPLUG_CPU_ENABLE,
	RSC_CREATE_HOTPLUG_CPU_DISABLE,
	RSC_CREATE_HOTPLUG_CPU_ONLINE,
	RSC_CREATE_HOTPLUG_CPU_OFFLINE,
	RSC_CREATE_RATIO_CLOCK_COND0,
	RSC_CREATE_RATIO_CLOCK_COND1,
	RSC_CREATE_RATIO_CLOCK_COND2,
	RSC_CREATE_RATIO_CLOCK_COND3,
	RSC_CREATE_RATIO_CLOCK_COND4,
	RSC_CREATE_RATIO_CLOCK_COND5,
	RSC_CREATE_RATIO_CLOCK_COND6,
	RSC_CREATE_SELECT_CPU_COND0,
	RSC_CREATE_SELECT_CPU_COND1,
	RSC_CREATE_SELECT_CPU_COND2,
#ifndef NO_FOOTER
	RSC_HOT_EVENT_COND0,
	RSC_HOT_EVENT_COND1,
	RSC_HOT_EVENT_COND2,
	RSC_HOT_EVENT_COND3,
	RSC_HOT_EVENT_COND4,
#endif
	RSC_BOX_EVENT,
	RSC_CREATE_RECORDER,
	RSC_SMBIOS_ITEM,
	RSC_CREATE_SELECT_FREQ_PKG,
	RSC_CREATE_SELECT_FREQ_COND0,
	RSC_CREATE_SELECT_FREQ_COND1,
/* ASCII */
	RSC_COREFREQ_TITLE,
	RSC_PROCESSOR_TITLE,
	RSC_PROCESSOR,
	RSC_ARCHITECTURE,
	RSC_VENDOR_ID,
	RSC_FIRMWARE,
	RSC_MICROCODE,
	RSC_SIGNATURE,
	RSC_STEPPING,
	RSC_ONLINE_CPU,
	RSC_BASE_CLOCK,
	RSC_FREQUENCY,
	RSC_RATIO,
	RSC_FACTORY,
	RSC_PERFORMANCE,
	RSC_TARGET,
	RSC_LEVEL,
	RSC_PROGRAMMABLE,
	RSC_CONFIGURATION,
	RSC_TURBO_ACTIVATION,
	RSC_NOMINAL,
	RSC_UNLOCK,
	RSC_LOCK,
	RSC_ENABLE,
	RSC_DISABLE,
	RSC_CAPABILITIES,
	RSC_LOWEST,
	RSC_EFFICIENT,
	RSC_GUARANTEED,
	RSC_HIGHEST,
	RSC_RECORDER,
	RSC_STRESS,
	RSC_SYSGATE,
	RSC_FREQ_UNIT_MHZ,
	RSC_PPIN,
	RSC_PSTATE,
	RSC_UNCORE,
	RSC_BOOST,
	RSC_TURBO,
	RSC_MAX,
	RSC_MIN,
	RSC_TGT,
	RSC_HWP,
	RSC_XFR,
	RSC_CPB,
	RSC_TDP,
	RSC_ACT,
	RSC_SCOPE_NONE,
	RSC_SCOPE_THREAD,
	RSC_SCOPE_CORE,
	RSC_SCOPE_PACKAGE,
	RSC_CPUID_TITLE,
	RSC_LARGEST_STD_FUNC,
	RSC_LARGEST_EXT_FUNC,
	RSC_SYS_REGS_TITLE,
	RSC_SYS_REGS_SPACE,
	RSC_SYS_REGS_NA,
	RSC_SYS_REGS_HDR_CPU,
	RSC_SYS_REG_HDR_FLAGS,
	RSC_SYS_REG_HDR_TF,
	RSC_SYS_REG_HDR_IF,
	RSC_SYS_REG_HDR_IOPL,
	RSC_SYS_REG_HDR_NT,
	RSC_SYS_REG_HDR_RF,
	RSC_SYS_REG_HDR_VM,
	RSC_SYS_REG_HDR_AC,
	RSC_SYS_REG_HDR_VIF,
	RSC_SYS_REG_HDR_VIP,
	RSC_SYS_REG_HDR_ID,
	RSC_SYS_REG_FLAGS_TF,
	RSC_SYS_REG_FLAGS_IF,
	RSC_SYS_REG_FLAGS_IOPL,
	RSC_SYS_REG_FLAGS_NT,
	RSC_SYS_REG_FLAGS_RF,
	RSC_SYS_REG_FLAGS_VM,
	RSC_SYS_REG_FLAGS_AC,
	RSC_SYS_REG_FLAGS_VIF,
	RSC_SYS_REG_FLAGS_VIP,
	RSC_SYS_REG_FLAGS_ID,
	RSC_SYS_REG_HDR_CR0,
	RSC_SYS_REG_HDR_CR0_PE,
	RSC_SYS_REG_HDR_CR0_MP,
	RSC_SYS_REG_HDR_CR0_EM,
	RSC_SYS_REG_HDR_CR0_TS,
	RSC_SYS_REG_HDR_CR0_ET,
	RSC_SYS_REG_HDR_CR0_NE,
	RSC_SYS_REG_HDR_CR0_WP,
	RSC_SYS_REG_HDR_CR0_AM,
	RSC_SYS_REG_HDR_CR0_NW,
	RSC_SYS_REG_HDR_CR0_CD,
	RSC_SYS_REG_HDR_CR0_PG,
	RSC_SYS_REGS_CR0,
	RSC_SYS_REG_CR0_PE,
	RSC_SYS_REG_CR0_MP,
	RSC_SYS_REG_CR0_EM,
	RSC_SYS_REG_CR0_TS,
	RSC_SYS_REG_CR0_ET,
	RSC_SYS_REG_CR0_NE,
	RSC_SYS_REG_CR0_WP,
	RSC_SYS_REG_CR0_AM,
	RSC_SYS_REG_CR0_NW,
	RSC_SYS_REG_CR0_CD,
	RSC_SYS_REG_CR0_PG,
	RSC_SYS_REG_HDR_CR3,
	RSC_SYS_REG_HDR_CR3_PWT,
	RSC_SYS_REG_HDR_CR3_PCD,
	RSC_SYS_REGS_CR3,
	RSC_SYS_REG_CR3_PWT,
	RSC_SYS_REG_CR3_PCD,
	RSC_SYS_REG_HDR_CR4,
	RSC_SYS_REG_HDR_CR4_VME,
	RSC_SYS_REG_HDR_CR4_PVI,
	RSC_SYS_REG_HDR_CR4_TSD,
	RSC_SYS_REG_HDR_CR4_DE,
	RSC_SYS_REG_HDR_CR4_PSE,
	RSC_SYS_REG_HDR_CR4_PAE,
	RSC_SYS_REG_HDR_CR4_MCE,
	RSC_SYS_REG_HDR_CR4_PGE,
	RSC_SYS_REG_HDR_CR4_PCE,
	RSC_SYS_REG_HDR_CR4_FX,
	RSC_SYS_REG_HDR_CR4_XMM,
	RSC_SYS_REG_HDR_CR4_UMIP,
	RSC_SYS_REG_HDR_CR4_5LP,
	RSC_SYS_REG_HDR_CR4_VMX,
	RSC_SYS_REG_HDR_CR4_SMX,
	RSC_SYS_REG_HDR_CR4_FS,
	RSC_SYS_REG_HDR_CR4_PCID,
	RSC_SYS_REG_HDR_CR4_SAV,
	RSC_SYS_REG_HDR_CR4_KL,
	RSC_SYS_REG_HDR_CR4_SME,
	RSC_SYS_REG_HDR_CR4_SMA,
	RSC_SYS_REG_HDR_CR4_PKE,
	RSC_SYS_REG_HDR_CR4_CET,
	RSC_SYS_REG_HDR_CR4_PKS,
	RSC_SYS_REGS_CR4,
	RSC_SYS_REG_CR4_VME,
	RSC_SYS_REG_CR4_PVI,
	RSC_SYS_REG_CR4_TSD,
	RSC_SYS_REG_CR4_DE,
	RSC_SYS_REG_CR4_PSE,
	RSC_SYS_REG_CR4_PAE,
	RSC_SYS_REG_CR4_MCE,
	RSC_SYS_REG_CR4_PGE,
	RSC_SYS_REG_CR4_PCE,
	RSC_SYS_REG_CR4_FX,
	RSC_SYS_REG_CR4_XMM,
	RSC_SYS_REG_CR4_UMIP,
	RSC_SYS_REG_CR4_5LP,
	RSC_SYS_REG_CR4_VMX,
	RSC_SYS_REG_CR4_SMX,
	RSC_SYS_REG_CR4_FS,
	RSC_SYS_REG_CR4_PCID,
	RSC_SYS_REG_CR4_SAV,
	RSC_SYS_REG_CR4_KL,
	RSC_SYS_REG_CR4_SME,
	RSC_SYS_REG_CR4_SMA,
	RSC_SYS_REG_CR4_PKE,
	RSC_SYS_REG_CR4_CET,
	RSC_SYS_REG_CR4_PKS,
	RSC_SYS_REG_HDR_CR8,
	RSC_SYS_REG_HDR_CR8_TPL,
	RSC_SYS_REGS_CR8,
	RSC_SYS_REG_CR8_TPL,
	RSC_SYS_REG_HDR_EFCR,
	RSC_SYS_REG_HDR_EFCR_LCK,
	RSC_SYS_REG_HDR_EFCR_VMX,
	RSC_SYS_REG_HDR_EFCR_SGX,
	RSC_SYS_REG_HDR_EFCR_LSE,
	RSC_SYS_REG_HDR_EFCR_GSE,
	RSC_SYS_REG_HDR_EFCR_LSGX,
	RSC_SYS_REG_HDR_EFCR_GSGX,
	RSC_SYS_REG_HDR_EFCR_LMC,
	RSC_SYS_REG_HDR_EFER,
	RSC_SYS_REG_HDR_EFER_SCE,
	RSC_SYS_REG_HDR_EFER_LME,
	RSC_SYS_REG_HDR_EFER_LMA,
	RSC_SYS_REG_HDR_EFER_NXE,
	RSC_SYS_REG_HDR_EFER_SVM,
	RSC_SYS_REG_HDR_EFER_LMS,
	RSC_SYS_REG_HDR_EFER_FFX,
	RSC_SYS_REG_HDR_EFER_TCE,
	RSC_SYS_REG_HDR_EFER_MCM,
	RSC_SYS_REG_HDR_EFER_WBI,
	RSC_SYS_REGS_EFCR,
	RSC_SYS_REG_EFCR_LCK,
	RSC_SYS_REG_EFCR_VMX,
	RSC_SYS_REG_EFCR_SGX,
	RSC_SYS_REG_EFCR_LSE,
	RSC_SYS_REG_EFCR_GSE,
	RSC_SYS_REG_EFCR_LSGX,
	RSC_SYS_REG_EFCR_GSGX,
	RSC_SYS_REG_EFCR_LMC,
	RSC_SYS_REGS_EFER,
	RSC_SYS_REG_EFER_SCE,
	RSC_SYS_REG_EFER_LME,
	RSC_SYS_REG_EFER_LMA,
	RSC_SYS_REG_EFER_NXE,
	RSC_SYS_REG_EFER_SVM,
	RSC_SYS_REG_EFER_LMS,
	RSC_SYS_REG_EFER_FFX,
	RSC_SYS_REG_EFER_TCE,
	RSC_SYS_REG_EFER_MCM,
	RSC_SYS_REG_EFER_WBI,
	RSC_ISA_TITLE,
	RSC_ISA_3DNOW,
	RSC_ISA_3DNOW_COMM,
	RSC_ISA_ADX,
	RSC_ISA_ADX_COMM,
	RSC_ISA_AES,
	RSC_ISA_AES_COMM,
	RSC_ISA_AVX,
	RSC_ISA_AVX_COMM,
	RSC_ISA_AVX512_F,
	RSC_ISA_AVX512_DQ,
	RSC_ISA_AVX512_IFMA,
	RSC_ISA_AVX512_PF,
	RSC_ISA_AVX512_ER,
	RSC_ISA_AVX512_CD,
	RSC_ISA_AVX512_BW,
	RSC_ISA_AVX512_VL,
	RSC_ISA_AVX512_VBMI,
	RSC_ISA_AVX512_VBMI2,
	RSC_ISA_AVX512_VNMI,
	RSC_ISA_AVX512_ALG,
	RSC_ISA_AVX512_VPOP,
	RSC_ISA_AVX512_VNNIW,
	RSC_ISA_AVX512_FMAPS,
	RSC_ISA_AVX512_VP2I,
	RSC_ISA_AVX512_BF16,
	RSC_ISA_BMI,
	RSC_ISA_BMI_COMM,
	RSC_ISA_CLWB,
	RSC_ISA_CLWB_COMM,
	RSC_ISA_CLFLUSH,
	RSC_ISA_CLFLUSH_COMM,
	RSC_ISA_AC_FLAG,
	RSC_ISA_AC_FLAG_COMM,
	RSC_ISA_CMOV,
	RSC_ISA_CMOV_COMM,
	RSC_ISA_XCHG8B,
	RSC_ISA_XCHG8B_COMM,
	RSC_ISA_XCHG16B,
	RSC_ISA_XCHG16B_COMM,
	RSC_ISA_F16C,
	RSC_ISA_F16C_COMM,
	RSC_ISA_FPU,
	RSC_ISA_FPU_COMM,
	RSC_ISA_FXSR,
	RSC_ISA_FXSR_COMM,
	RSC_ISA_LSHF,
	RSC_ISA_LSHF_COMM,
	RSC_ISA_MMX,
	RSC_ISA_MMX_COMM,
	RSC_ISA_MWAITX,
	RSC_ISA_MWAITX_COMM,
	RSC_ISA_MOVBE,
	RSC_ISA_MOVBE_COMM,
	RSC_ISA_PCLMULDQ,
	RSC_ISA_PCLMULDQ_COMM,
	RSC_ISA_POPCNT,
	RSC_ISA_POPCNT_COMM,
	RSC_ISA_RDRAND,
	RSC_ISA_RDRAND_COMM,
	RSC_ISA_RDSEED,
	RSC_ISA_RDSEED_COMM,
	RSC_ISA_RDTSCP,
	RSC_ISA_RDTSCP_COMM,
	RSC_ISA_SEP,
	RSC_ISA_SEP_COMM,
	RSC_ISA_SHA,
	RSC_ISA_SHA_COMM,
	RSC_ISA_SSE,
	RSC_ISA_SSE_COMM,
	RSC_ISA_SSE2,
	RSC_ISA_SSE2_COMM,
	RSC_ISA_SSE3,
	RSC_ISA_SSE3_COMM,
	RSC_ISA_SSSE3,
	RSC_ISA_SSSE3_COMM,
	RSC_ISA_SSE4_1,
	RSC_ISA_SSE4_1_COMM,
	RSC_ISA_SSE4_2,
	RSC_ISA_SSE4_2_COMM,
	RSC_ISA_SERIALIZE,
	RSC_ISA_SERIALIZE_COMM,
	RSC_ISA_SYSCALL,
	RSC_ISA_SYSCALL_COMM,
	RSC_ISA_RDPID_FMT1,
	RSC_ISA_RDPID_FMT2,
	RSC_ISA_RDPID_COMM,
	RSC_ISA_UMIP,
	RSC_ISA_UMIP_COMM,
	RSC_ISA_SGX,
	RSC_ISA_SGX_COMM,
	RSC_FEATURES_TITLE,
	RSC_NOT_AVAILABLE,
	RSC_AUTOMATIC,
	RSC_MISSING,
	RSC_PRESENT,
	RSC_VARIANT,
	RSC_INVARIANT,
	RSC_XAPIC,
	RSC_X2APIC,
	RSC_FEATURES_1GB_PAGES,
	RSC_FEATURES_100MHZ,
	RSC_FEATURES_ACPI,
	RSC_FEATURES_APIC,
	RSC_FEATURES_ARAT,
	RSC_FEATURES_CORE_MP,
	RSC_FEATURES_CNXT_ID,
	RSC_FEATURES_CPPC,
	RSC_FEATURES_DCA,
	RSC_FEATURES_DE,
	RSC_FEATURES_DS_PEBS,
	RSC_FEATURES_DS_CPL,
	RSC_FEATURES_DTES_64,
	RSC_FEATURES_FAST_STR,
	RSC_FEATURES_FMA,
	RSC_FEATURES_HLE,
	RSC_FEATURES_IBS,
	RSC_FEATURES_INVLPGB,
	RSC_FEATURES_INVPCID,
	RSC_FEATURES_LM,
	RSC_FEATURES_LWP,
	RSC_FEATURES_MBE,
	RSC_FEATURES_MCA,
	RSC_FEATURES_MCOMMIT,
	RSC_FEATURES_MPX,
	RSC_FEATURES_MSR,
	RSC_FEATURES_MTRR,
	RSC_FEATURES_NX,
	RSC_FEATURES_OSXSAVE,
	RSC_FEATURES_PAE,
	RSC_FEATURES_PAT,
	RSC_FEATURES_PBE,
	RSC_FEATURES_PCID,
	RSC_FEATURES_PDCM,
	RSC_FEATURES_PGE,
	RSC_FEATURES_PSE,
	RSC_FEATURES_PSE36,
	RSC_FEATURES_PSN,
	RSC_FEATURES_RDT_PQE,
	RSC_FEATURES_RDT_PQM,
	RSC_FEATURES_RDPRU,
	RSC_FEATURES_RTM,
	RSC_FEATURES_SMX,
	RSC_FEATURES_SELF_SNOOP,
	RSC_FEATURES_SMAP,
	RSC_FEATURES_SMEP,
	RSC_FEATURES_TSC,
	RSC_FEATURES_TSC_DEADLN,
	RSC_FEATURES_TSXABORT,
	RSC_FEATURES_TSXLDTRK,
	RSC_FEATURES_UMIP,
	RSC_FEATURES_VME,
	RSC_FEATURES_VMX,
	RSC_FEATURES_X2APIC,
	RSC_FEATURES_XD_BIT,
	RSC_FEATURES_XSAVE,
	RSC_FEATURES_XTPR,
	RSC_FEAT_SECTION_MECH,
	RSC_TECHNOLOGIES_TITLE,
	RSC_TECHNOLOGIES_DCU,
	RSC_TECH_L1_HW_PREFETCH,
	RSC_TECH_L1_HW_IP_PREFETCH,
	RSC_TECH_L2_HW_PREFETCH,
	RSC_TECH_L2_HW_CL_PREFETCH,
	RSC_TECHNOLOGIES_SMM,
	RSC_TECHNOLOGIES_HTT,
	RSC_TECHNOLOGIES_EIST,
	RSC_TECHNOLOGIES_IDA,
	RSC_TECHNOLOGIES_TURBO,
	RSC_TECHNOLOGIES_TBMT3,
	RSC_TECHNOLOGIES_VM,
	RSC_TECHNOLOGIES_IOMMU,
	RSC_TECHNOLOGIES_SMT,
	RSC_TECHNOLOGIES_CNQ,
	RSC_TECHNOLOGIES_CPB,
	RSC_TECHNOLOGIES_EEO,
	RSC_TECHNOLOGIES_R2H,
	RSC_TECHNOLOGIES_HYPERV,
	RSC_TECHNOLOGIES_WDT,
	RSC_TECH_HYPERV_NONE,
	RSC_TECH_BARE_METAL,
	RSC_TECH_HYPERV_XEN,
	RSC_TECH_HYPERV_KVM,
	RSC_TECH_HYPERV_VBOX,
	RSC_TECH_HYPERV_KBOX,
	RSC_TECH_HYPERV_VMWARE,
	RSC_TECH_HYPERV_HYPERV,
	RSC_PERF_MON_TITLE,
	RSC_VERSION,
	RSC_COUNTERS,
	RSC_GENERAL_CTRS,
	RSC_FIXED_CTRS,
	RSC_PERF_MON_UNIT_BIT,
	RSC_PERF_MON_UNIT_HWP,
	RSC_PERF_MON_C1E,
	RSC_PERF_MON_C1A,
	RSC_PERF_MON_C3A,
	RSC_PERF_MON_C1U,
	RSC_PERF_MON_C2U,
	RSC_PERF_MON_C3U,
	RSC_PERF_MON_C6D,
	RSC_PERF_MON_MC6,
	RSC_PERF_MON_CC6,
	RSC_PERF_MON_PC6,
	RSC_PERF_MON_FID,
	RSC_PERF_MON_VID,
	RSC_PERF_MON_HWCF,
	RSC_PERF_MON_HWP,
	RSC_PERF_MON_HDC,
	RSC_PERF_MON_PKG_CSTATE,
	RSC_PERF_MON_CORE_CSTATE,
	RSC_PERF_MON_CFG_CTRL,
	RSC_PERF_MON_LOW_CSTATE,
	RSC_PERF_MON_IOMWAIT,
	RSC_PERF_MON_MAX_CSTATE,
	RSC_PERF_MON_CSTATE_BAR,
	RSC_PERF_MON_MONITOR_MWAIT,
	RSC_PERF_MON_MWAIT_IDX_CSTATE,
	RSC_PERF_MON_MWAIT_SUB_CSTATE,
	RSC_PERF_MON_CORE_CYCLE,
	RSC_PERF_MON_INST_RET,
	RSC_PERF_MON_REF_CYCLE,
	RSC_PERF_MON_REF_LLC,
	RSC_PERF_MON_MISS_LLC,
	RSC_PERF_MON_BRANCH_RET,
	RSC_PERF_MON_BRANCH_MIS,
	RSC_PERF_MON_TOPDOWN_SLOTS,
	RSC_PERF_MON_TSC,
	RSC_PERF_MON_NB_DF,
	RSC_PERF_MON_CORE,
	RSC_PERF_LABEL_VER,
	RSC_PERF_LABEL_C1E,
	RSC_PERF_LABEL_C1A,
	RSC_PERF_LABEL_C3A,
	RSC_PERF_LABEL_C1U,
	RSC_PERF_LABEL_C2U,
	RSC_PERF_LABEL_C3U,
	RSC_PERF_LABEL_CC6,
	RSC_PERF_LABEL_PC6,
	RSC_PERF_LABEL_MC6,
	RSC_PERF_LABEL_FID,
	RSC_PERF_LABEL_VID,
	RSC_PERF_LABEL_HWCF,
	RSC_PERF_LABEL_HWP,
	RSC_PERF_LABEL_HDC,
	RSC_PERF_LABEL_CFG_CTRL,
	RSC_PERF_LABEL_LOW_CST,
	RSC_PERF_LABEL_IOMWAIT,
	RSC_PERF_LABEL_MAX_CST,
	RSC_PERF_LABEL_CST_BAR,
	RSC_PERF_LABEL_MWAIT_IDX,
	RSC_PERF_ENCODING_C0,
	RSC_PERF_ENCODING_C1,
	RSC_PERF_ENCODING_C2,
	RSC_PERF_ENCODING_C3,
	RSC_PERF_ENCODING_C4,
	RSC_PERF_ENCODING_C6,
	RSC_PERF_ENCODING_C6R,
	RSC_PERF_ENCODING_C7,
	RSC_PERF_ENCODING_C7S,
	RSC_PERF_ENCODING_C8,
	RSC_PERF_ENCODING_C9,
	RSC_PERF_ENCODING_C10,
	RSC_PERF_ENCODING_UNS,
	RSC_POWER_THERMAL_TITLE,
	RSC_POWER_THERMAL_ODCM,
	RSC_POWER_THERMAL_DUTY,
	RSC_POWER_THERMAL_MGMT,
	RSC_POWER_THERMAL_BIAS,
	RSC_POWER_THERMAL_TJMAX,
	RSC_POWER_THERMAL_DTS,
	RSC_POWER_THERMAL_PLN,
	RSC_POWER_THERMAL_PTM,
	RSC_POWER_THERMAL_TM1,
	RSC_POWER_THERMAL_TM2,
	RSC_POWER_THERMAL_UNITS,
	RSC_POWER_THERMAL_POWER,
	RSC_POWER_THERMAL_ENERGY,
	RSC_POWER_THERMAL_WINDOW,
	RSC_POWER_THERMAL_WATT,
	RSC_POWER_THERMAL_JOULE,
	RSC_POWER_THERMAL_SECOND,
	RSC_POWER_THERMAL_TDP,
	RSC_POWER_THERMAL_MIN,
	RSC_POWER_THERMAL_MAX,
	RSC_POWER_THERMAL_PPT,
	RSC_POWER_THERMAL_TPL,
	RSC_POWER_THERMAL_EDC,
	RSC_POWER_THERMAL_TDC,
	RSC_POWER_THERMAL_POINT,
	RSC_THERMAL_POINT_THRESHOLD,
	RSC_THERMAL_POINT_LIMIT,
	RSC_THERMAL_POINT_THRESHOLD_1,
	RSC_THERMAL_POINT_THRESHOLD_2,
	RSC_THERMAL_POINT_TRIP_LIMIT,
	RSC_THERMAL_POINT_HTC_LIMIT,
	RSC_THERMAL_POINT_HTC_HYST,
	RSC_POWER_LABEL_ODCM,
	RSC_POWER_LABEL_PWM,
	RSC_POWER_LABEL_BIAS,
	RSC_POWER_LABEL_EPP,
	RSC_POWER_LABEL_TJ,
	RSC_POWER_LABEL_DTS,
	RSC_POWER_LABEL_PLN,
	RSC_POWER_LABEL_PTM,
	RSC_POWER_LABEL_TM1,
	RSC_POWER_LABEL_TM2,
	RSC_POWER_LABEL_TTP,
	RSC_POWER_LABEL_HTC,
	RSC_POWER_LABEL_TDP,
	RSC_POWER_LABEL_MIN,
	RSC_POWER_LABEL_MAX,
	RSC_POWER_LABEL_PPT,
	RSC_POWER_LABEL_PL1,
	RSC_POWER_LABEL_PL2,
	RSC_POWER_LABEL_EDC,
	RSC_POWER_LABEL_TDC,
	RSC_POWER_LABEL_PKG,
	RSC_POWER_LABEL_CORE,
	RSC_POWER_LABEL_UNCORE,
	RSC_POWER_LABEL_DRAM,
	RSC_POWER_LABEL_PLATFORM,
	RSC_KERNEL_TITLE,
	RSC_KERNEL_TOTAL_RAM,
	RSC_KERNEL_SHARED_RAM,
	RSC_KERNEL_FREE_RAM,
	RSC_KERNEL_BUFFER_RAM,
	RSC_KERNEL_TOTAL_HIGH,
	RSC_KERNEL_FREE_HIGH,
	RSC_KERNEL_GOVERNOR,
	RSC_KERNEL_FREQ_DRIVER,
	RSC_KERNEL_IDLE_DRIVER,
	RSC_KERNEL_RELEASE,
	RSC_KERNEL_VERSION,
	RSC_KERNEL_MACHINE,
	RSC_KERNEL_MEMORY,
	RSC_KERNEL_STATE,
	RSC_KERNEL_POWER,
	RSC_KERNEL_LATENCY,
	RSC_KERNEL_RESIDENCY,
	RSC_KERNEL_LIMIT,
	RSC_TOPOLOGY_TITLE,
	RSC_TOPOLOGY_HDR_PKG,
	RSC_TOPOLOGY_HDR_SMT,
	RSC_TOPOLOGY_HDR_CACHE,
	RSC_TOPOLOGY_HDR_WRBAK,
	RSC_TOPOLOGY_HDR_INCL,
	RSC_TOPOLOGY_HDR_EMPTY,
	RSC_TOPOLOGY_SUB_ITEM1,
	RSC_TOPOLOGY_SUB_ITEM3,
	RSC_TOPOLOGY_SUB_ITEM4,
	RSC_TOPOLOGY_SUB_ITEM5,
	RSC_TOPOLOGY_SUB_ITEM6,
	RSC_TOPOLOGY_ALT_ITEM1,
	RSC_TOPOLOGY_ALT_ITEM2,
	RSC_TOPOLOGY_ALT_ITEM3,
	RSC_TOPOLOGY_BSP_COMM,
	RSC_MEM_CTRL_TITLE,
	RSC_MEM_CTRL_UNIT_MHZ,
	RSC_MEM_CTRL_UNIT_MTS,
	RSC_MEM_CTRL_UNIT_MBS,
	RSC_MEM_CTRL_MTY_CELL,
	RSC_MEM_CTRL_CHANNEL,
	RSC_MEM_CTRL_SUBSECT1_0,
	RSC_MEM_CTRL_SUBSECT1_1,
	RSC_MEM_CTRL_SUBSECT1_2,
	RSC_MEM_CTRL_SINGLE_CHA_0,
	RSC_MEM_CTRL_SINGLE_CHA_1,
	RSC_MEM_CTRL_SINGLE_CHA_2,
	RSC_MEM_CTRL_DUAL_CHA_0,
	RSC_MEM_CTRL_DUAL_CHA_1,
	RSC_MEM_CTRL_DUAL_CHA_2,
	RSC_MEM_CTRL_TRIPLE_CHA_0,
	RSC_MEM_CTRL_TRIPLE_CHA_1,
	RSC_MEM_CTRL_TRIPLE_CHA_2,
	RSC_MEM_CTRL_QUAD_CHA_0,
	RSC_MEM_CTRL_QUAD_CHA_1,
	RSC_MEM_CTRL_QUAD_CHA_2,
	RSC_MEM_CTRL_SIX_CHA_0,
	RSC_MEM_CTRL_SIX_CHA_1,
	RSC_MEM_CTRL_SIX_CHA_2,
	RSC_MEM_CTRL_EIGHT_CHA_0,
	RSC_MEM_CTRL_EIGHT_CHA_1,
	RSC_MEM_CTRL_EIGHT_CHA_2,
	RSC_MEM_CTRL_DISABLED_0,
	RSC_MEM_CTRL_DISABLED_1,
	RSC_MEM_CTRL_DISABLED_2,
	RSC_MEM_CTRL_BUS_RATE_0,
	RSC_MEM_CTRL_BUS_RATE_1,
	RSC_MEM_CTRL_BUS_SPEED_0,
	RSC_MEM_CTRL_BUS_SPEED_1,
	RSC_MEM_CTRL_DRAM_DDR2_0,
	RSC_MEM_CTRL_DRAM_DDR3_0,
	RSC_MEM_CTRL_DRAM_DDR4_0,
	RSC_MEM_CTRL_DRAM_DDR5_0,
	RSC_MEM_CTRL_DRAM_SPEED_0,
	RSC_MEM_CTRL_DRAM_SPEED_1,
	RSC_MEM_CTRL_SUBSECT2_0,
	RSC_MEM_CTRL_SUBSECT2_1,
	RSC_MEM_CTRL_SUBSECT2_2,
	RSC_MEM_CTRL_SUBSECT2_3,
	RSC_MEM_CTRL_SUBSECT2_4,
	RSC_MEM_CTRL_SUBSECT2_5,
	RSC_MEM_CTRL_DIMM_SLOT,
	RSC_MEM_CTRL_DIMM_BANK,
	RSC_MEM_CTRL_DIMM_RANK,
	RSC_MEM_CTRL_DIMM_ROW,
	RSC_MEM_CTRL_DIMM_COLUMN0,
	RSC_MEM_CTRL_DIMM_COLUMN1,
	RSC_MEM_CTRL_DIMM_SIZE_0,
	RSC_MEM_CTRL_DIMM_SIZE_1,
	RSC_MEM_CTRL_DIMM_SIZE_2,
	RSC_MEM_CTRL_DIMM_SIZE_3,
	RSC_DDR3_CL,
	RSC_DDR3_RCD,
	RSC_DDR3_RP,
	RSC_DDR3_RAS,
	RSC_DDR3_RRD,
	RSC_DDR3_RFC,
	RSC_DDR3_WR,
	RSC_DDR3_RTP,
	RSC_DDR3_WTP,
	RSC_DDR3_FAW,
	RSC_DDR3_B2B,
	RSC_DDR3_CWL,
	RSC_DDR3_CMD,
	RSC_DDR3_REFI,
	RSC_DDR3_DDWRTRD,
	RSC_DDR3_DRWRTRD,
	RSC_DDR3_SRWRTRD,
	RSC_DDR3_DDRDTWR,
	RSC_DDR3_DRRDTWR,
	RSC_DDR3_SRRDTWR,
	RSC_DDR3_DDRDTRD,
	RSC_DDR3_DRRDTRD,
	RSC_DDR3_SRRDTRD,
	RSC_DDR3_DDWRTWR,
	RSC_DDR3_DRWRTWR,
	RSC_DDR3_SRWRTWR,
	RSC_DDR3_CKE,
	RSC_DDR3_ECC,
	RSC_DDR4_CL,
	RSC_DDR4_RCD,
	RSC_DDR4_RP,
	RSC_DDR4_RAS,
	RSC_DDR4_RRD,
	RSC_DDR4_RFC,
	RSC_DDR4_WR,
	RSC_DDR4_RTP,
	RSC_DDR4_WTP,
	RSC_DDR4_FAW,
	RSC_DDR4_B2B,
	RSC_DDR4_CWL,
	RSC_DDR4_CMD,
	RSC_DDR4_REFI,
	RSC_DDR4_RDRD_SCL,
	RSC_DDR4_RDRD_SC,
	RSC_DDR4_RDRD_SD,
	RSC_DDR4_RDRD_DD,
	RSC_DDR4_RDWR_SCL,
	RSC_DDR4_RDWR_SC,
	RSC_DDR4_RDWR_SD,
	RSC_DDR4_RDWR_DD,
	RSC_DDR4_WRRD_SCL,
	RSC_DDR4_WRRD_SC,
	RSC_DDR4_WRRD_SD,
	RSC_DDR4_WRRD_DD,
	RSC_DDR4_WRWR_SCL,
	RSC_DDR4_WRWR_SC,
	RSC_DDR4_WRWR_SD,
	RSC_DDR4_WRWR_DD,
	RSC_DDR4_RRD_S,
	RSC_DDR4_RRD_L,
	RSC_DDR4_CKE,
	RSC_DDR4_ECC,
	RSC_DDR4_ZEN_CL,
	RSC_DDR4_ZEN_RCD_R,
	RSC_DDR4_ZEN_RCD_W,
	RSC_DDR4_ZEN_RP,
	RSC_DDR4_ZEN_RAS,
	RSC_DDR4_ZEN_RC,
	RSC_DDR4_ZEN_FAW,
	RSC_DDR4_ZEN_WTR_S,
	RSC_DDR4_ZEN_WTR_L,
	RSC_DDR4_ZEN_WR,
	RSC_DDR4_ZEN_RDRD_SCL,
	RSC_DDR4_ZEN_WRWR_SCL,
	RSC_DDR4_ZEN_CWL,
	RSC_DDR4_ZEN_RTP,
	RSC_DDR4_ZEN_RDWR,
	RSC_DDR4_ZEN_WRRD,
	RSC_DDR4_ZEN_WRWR_SC,
	RSC_DDR4_ZEN_WRWR_SD,
	RSC_DDR4_ZEN_WRWR_DD,
	RSC_DDR4_ZEN_RDRD_SC,
	RSC_DDR4_ZEN_RDRD_SD,
	RSC_DDR4_ZEN_RDRD_DD,
	RSC_DDR4_ZEN_RTR_DLR,
	RSC_DDR4_ZEN_WTW_DLR,
	RSC_DDR4_ZEN_WTR_DLR,
	RSC_DDR4_ZEN_RRD_DLR,
	RSC_DDR4_ZEN_REFI,
	RSC_DDR4_ZEN_RFC1,
	RSC_DDR4_ZEN_RFC2,
	RSC_DDR4_ZEN_RFC4,
	RSC_DDR4_ZEN_RCPB,
	RSC_DDR4_ZEN_RPPB,
	RSC_DDR4_ZEN_BGS,
	RSC_DDR4_ZEN_BGS_ALT,
	RSC_DDR4_ZEN_BAN,
	RSC_DDR4_ZEN_RCPAGE,
	RSC_DDR4_ZEN_CKE,
	RSC_DDR4_ZEN_CMD,
	RSC_DDR4_ZEN_GDM,
	RSC_DDR4_ZEN_ECC,
	RSC_DDR4_ZEN_MRD,
	RSC_DDR4_ZEN_MOD,
	RSC_DDR4_ZEN_MRD_PDA,
	RSC_DDR4_ZEN_MOD_PDA,
	RSC_DDR4_ZEN_STAG,
	RSC_DDR4_ZEN_PDM,
	RSC_DDR4_ZEN_PHYWRD,
	RSC_DDR4_ZEN_PHYWRL,
	RSC_DDR4_ZEN_PHYRDL,
	RSC_DDR4_ZEN_RDDATA,
	RSC_DDR4_ZEN_WRMPR,
	RSC_DDR4_ZEN_PHY,
	RSC_DDR3_CL_COMM,
	RSC_DDR3_RCD_COMM,
	RSC_DDR3_RP_COMM,
	RSC_DDR3_RAS_COMM,
	RSC_DDR3_RRD_COMM,
	RSC_DDR3_RFC_COMM,
	RSC_DDR3_WR_COMM,
	RSC_DDR3_RTP_COMM,
	RSC_DDR3_WTP_COMM,
	RSC_DDR3_FAW_COMM,
	RSC_DDR3_B2B_COMM,
	RSC_DDR3_CWL_COMM,
	RSC_DDR3_CMD_COMM,
	RSC_DDR3_REFI_COMM,
	RSC_DDR3_DDWRTRD_COMM,
	RSC_DDR3_DRWRTRD_COMM,
	RSC_DDR3_SRWRTRD_COMM,
	RSC_DDR3_DDRDTWR_COMM,
	RSC_DDR3_DRRDTWR_COMM,
	RSC_DDR3_SRRDTWR_COMM,
	RSC_DDR3_DDRDTRD_COMM,
	RSC_DDR3_DRRDTRD_COMM,
	RSC_DDR3_SRRDTRD_COMM,
	RSC_DDR3_DDWRTWR_COMM,
	RSC_DDR3_DRWRTWR_COMM,
	RSC_DDR3_SRWRTWR_COMM,
	RSC_DDR3_CKE_COMM,
	RSC_DDR3_ECC_COMM,
	RSC_DDR4_RDRD_SCL_COMM,
	RSC_DDR4_RDRD_SC_COMM,
	RSC_DDR4_RDRD_SD_COMM,
	RSC_DDR4_RDRD_DD_COMM,
	RSC_DDR4_RDWR_SCL_COMM,
	RSC_DDR4_RDWR_SC_COMM,
	RSC_DDR4_RDWR_SD_COMM,
	RSC_DDR4_RDWR_DD_COMM,
	RSC_DDR4_WRRD_SCL_COMM,
	RSC_DDR4_WRRD_SC_COMM,
	RSC_DDR4_WRRD_SD_COMM,
	RSC_DDR4_WRRD_DD_COMM,
	RSC_DDR4_WRWR_SCL_COMM,
	RSC_DDR4_WRWR_SC_COMM,
	RSC_DDR4_WRWR_SD_COMM,
	RSC_DDR4_WRWR_DD_COMM,
	RSC_DDR4_RRD_S_COMM,
	RSC_DDR4_RRD_L_COMM,
	RSC_DDR4_ZEN_RCD_R_COMM,
	RSC_DDR4_ZEN_RCD_W_COMM,
	RSC_DDR4_ZEN_RC_COMM,
	RSC_DDR4_ZEN_WTR_S_COMM,
	RSC_DDR4_ZEN_WTR_L_COMM,
	RSC_DDR4_ZEN_RDRD_SCL_COMM,
	RSC_DDR4_ZEN_WRWR_SCL_COMM,
	RSC_DDR4_ZEN_RTP_COMM,
	RSC_DDR4_ZEN_RDWR_COMM,
	RSC_DDR4_ZEN_WRRD_COMM,
	RSC_DDR4_ZEN_WRWR_SC_COMM,
	RSC_DDR4_ZEN_WRWR_SD_COMM,
	RSC_DDR4_ZEN_WRWR_DD_COMM,
	RSC_DDR4_ZEN_RDRD_SC_COMM,
	RSC_DDR4_ZEN_RDRD_SD_COMM,
	RSC_DDR4_ZEN_RDRD_DD_COMM,
	RSC_DDR4_ZEN_RTR_DLR_COMM,
	RSC_DDR4_ZEN_WTW_DLR_COMM,
	RSC_DDR4_ZEN_WTR_DLR_COMM,
	RSC_DDR4_ZEN_RRD_DLR_COMM,
	RSC_DDR4_ZEN_RFC1_COMM,
	RSC_DDR4_ZEN_RFC2_COMM,
	RSC_DDR4_ZEN_RFC4_COMM,
	RSC_DDR4_ZEN_RCPB_COMM,
	RSC_DDR4_ZEN_RPPB_COMM,
	RSC_DDR4_ZEN_BGS_COMM,
	RSC_DDR4_ZEN_BGS_ALT_COMM,
	RSC_DDR4_ZEN_BAN_COMM,
	RSC_DDR4_ZEN_RCPAGE_COMM,
	RSC_DDR4_ZEN_GDM_COMM,
	RSC_DDR4_ZEN_MRD_COMM,
	RSC_DDR4_ZEN_MOD_COMM,
	RSC_DDR4_ZEN_MRD_PDA_COMM,
	RSC_DDR4_ZEN_MOD_PDA_COMM,
	RSC_DDR4_ZEN_STAG_COMM,
	RSC_DDR4_ZEN_PDM_COMM,
	RSC_DDR4_ZEN_PHYWRD_COMM,
	RSC_DDR4_ZEN_PHYWRL_COMM,
	RSC_DDR4_ZEN_PHYRDL_COMM,
	RSC_DDR4_ZEN_RDDATA_COMM,
	RSC_DDR4_ZEN_WRMPR_COMM,
	RSC_TASKS_SORTBY_STATE,
	RSC_TASKS_SORTBY_RTIME,
	RSC_TASKS_SORTBY_UTIME,
	RSC_TASKS_SORTBY_STIME,
	RSC_TASKS_SORTBY_PID,
	RSC_TASKS_SORTBY_COMM,
	RSC_MENU_ITEM_MENU,
	RSC_MENU_ITEM_VIEW,
	RSC_MENU_ITEM_WINDOW,
	RSC_MENU_ITEM_SETTINGS,
	RSC_MENU_ITEM_SMBIOS,
	RSC_MENU_ITEM_KERNEL,
	RSC_MENU_ITEM_HOTPLUG,
	RSC_MENU_ITEM_TOOLS,
	RSC_MENU_ITEM_THEME,
	RSC_MENU_ITEM_ABOUT,
	RSC_MENU_ITEM_HELP,
	RSC_MENU_ITEM_KEYS,
	RSC_MENU_ITEM_LANG,
	RSC_MENU_ITEM_QUIT,
	RSC_MENU_ITEM_DASHBOARD,
	RSC_MENU_ITEM_FREQUENCY,
	RSC_MENU_ITEM_INST_CYCLES,
	RSC_MENU_ITEM_CORE_CYCLES,
	RSC_MENU_ITEM_IDLE_STATES,
	RSC_MENU_ITEM_PKG_CYCLES,
	RSC_MENU_ITEM_TASKS_MON,
	RSC_MENU_ITEM_SYS_INTER,
	RSC_MENU_ITEM_SENSORS,
	RSC_MENU_ITEM_VOLTAGE,
	RSC_MENU_ITEM_POWER,
	RSC_MENU_ITEM_SLICE_CTRS,
	RSC_MENU_ITEM_CUSTOM,
	RSC_MENU_ITEM_PROCESSOR,
	RSC_MENU_ITEM_TOPOLOGY,
	RSC_MENU_ITEM_FEATURES,
	RSC_MENU_ITEM_ISA_EXT,
	RSC_MENU_ITEM_TECH,
	RSC_MENU_ITEM_PERF_MON,
	RSC_MENU_ITEM_POW_THERM,
	RSC_MENU_ITEM_CPUID,
	RSC_MENU_ITEM_SYS_REGS,
	RSC_MENU_ITEM_MEM_CTRL,
	RSC_SETTINGS_TITLE,
	RSC_SETTINGS_DAEMON,
	RSC_SETTINGS_INTERVAL,
	RSC_SETTINGS_SYS_TICK,
	RSC_SETTINGS_POLL_WAIT,
	RSC_SETTINGS_RING_WAIT,
	RSC_SETTINGS_CHILD_WAIT,
	RSC_SETTINGS_SLICE_WAIT,
	RSC_SETTINGS_RECORDER,
	RSC_SETTINGS_AUTO_CLOCK,
	RSC_SETTINGS_EXPERIMENTAL,
	RSC_SETTINGS_CPU_HOTPLUG,
	RSC_SETTINGS_PCI_ENABLED,
	RSC_SETTINGS_HSMP_ENABLED,
	RSC_SETTINGS_NMI_REGISTERED,
	RSC_SETTINGS_CPUIDLE_REGISTERED,
	RSC_SETTINGS_CPUFREQ_REGISTERED,
	RSC_SETTINGS_GOVERNOR_REGISTERED,
	RSC_SETTINGS_CS_REGISTERED,
	RSC_SETTINGS_THERMAL_SCOPE,
	RSC_SETTINGS_VOLTAGE_SCOPE,
	RSC_SETTINGS_POWER_SCOPE,
	RSC_SETTINGS_IDLE_ROUTE,
	RSC_SETTINGS_ROUTE_TITLE,
	RSC_SETTINGS_ROUTE_DFLT,
	RSC_SETTINGS_ROUTE_IO,
	RSC_SETTINGS_ROUTE_HALT,
	RSC_SETTINGS_ROUTE_MWAIT,
	RSC_HELP_TITLE,
	RSC_HELP_KEY_ESCAPE,
	RSC_HELP_KEY_SHIFT_TAB,
	RSC_HELP_KEY_TAB,
	RSC_HELP_KEY_UP,
	RSC_HELP_KEY_LEFT_RIGHT,
	RSC_HELP_KEY_DOWN,
	RSC_HELP_KEY_END,
	RSC_HELP_KEY_HOME,
	RSC_HELP_KEY_ENTER,
	RSC_HELP_KEY_PAGE_UP,
	RSC_HELP_KEY_PAGE_DOWN,
	RSC_HELP_KEY_MINUS,
	RSC_HELP_KEY_PLUS,
	RSC_HELP_BLANK,
	RSC_HELP_KEY_MENU,
	RSC_HELP_MENU,
	RSC_HELP_CLOSE_WINDOW,
	RSC_HELP_PREV_WINDOW,
	RSC_HELP_NEXT_WINDOW,
	RSC_HELP_KEY_SHIFT_GR1,
	RSC_HELP_KEY_SHIFT_GR2,
	RSC_HELP_MOVE_WINDOW,
	RSC_HELP_KEY_ALT_GR3,
	RSC_HELP_SIZE_WINDOW,
	RSC_HELP_MOVE_SELECT,
	RSC_HELP_LAST_CELL,
	RSC_HELP_FIRST_CELL,
	RSC_HELP_TRIGGER_SELECT,
	RSC_HELP_PREV_PAGE,
	RSC_HELP_NEXT_PAGE,
	RSC_HELP_SCROLL_DOWN,
	RSC_HELP_SCROLL_UP,
	RSC_ADV_HELP_TITLE,
	RSC_ADV_HELP_SECT_FREQ,
	RSC_ADV_HELP_ITEM_AVG,
	RSC_ADV_HELP_SECT_TASK,
	RSC_ADV_HELP_ITEM_ORDER,
	RSC_ADV_HELP_ITEM_RST,
	RSC_ADV_HELP_ITEM_SEL,
	RSC_ADV_HELP_ITEM_REV,
	RSC_ADV_HELP_ITEM_HIDE,
	RSC_ADV_HELP_SECT_ANY,
	RSC_ADV_HELP_ITEM_POWER,
	RSC_ADV_HELP_ITEM_TOP,
	RSC_ADV_HELP_ITEM_UPD,
	RSC_ADV_HELP_ITEM_START,
	RSC_ADV_HELP_ITEM_STOP,
	RSC_ADV_HELP_ITEM_TOOLS,
	RSC_ADV_HELP_ITEM_GO_UP,
	RSC_ADV_HELP_ITEM_GO_DW,
	RSC_ADV_HELP_ITEM_TERMINAL,
	RSC_ADV_HELP_ITEM_PRT_SCR,
	RSC_ADV_HELP_ITEM_REC_SCR,
	RSC_ADV_HELP_ITEM_FAHR_CELS,
	RSC_ADV_HELP_ITEM_SYSGATE,
	RSC_ADV_HELP_ITEM_PROC_EVENT,
	RSC_ADV_HELP_ITEM_SECRET,
	RSC_TURBO_CLOCK_TITLE,
	RSC_RATIO_CLOCK_TITLE,
	RSC_UNCORE_CLOCK_TITLE,
	RSC_SELECT_CPU_TITLE,
	RSC_SELECT_FREQ_TITLE,
	RSC_BOX_DISABLE_COND0,
	RSC_BOX_DISABLE_COND1,
	RSC_BOX_ENABLE_COND0,
	RSC_BOX_ENABLE_COND1,
	RSC_BOX_INTERVAL_TITLE,
	RSC_BOX_INTERVAL_STEP1,
	RSC_BOX_INTERVAL_STEP2,
	RSC_BOX_INTERVAL_STEP3,
	RSC_BOX_INTERVAL_STEP4,
	RSC_BOX_INTERVAL_STEP5,
	RSC_BOX_INTERVAL_STEP6,
	RSC_BOX_INTERVAL_STEP7,
	RSC_BOX_INTERVAL_STEP8,
	RSC_BOX_INTERVAL_STEP9,
	RSC_BOX_INTERVAL_STEP10,
	RSC_BOX_AUTO_CLOCK_TITLE,
	RSC_BOX_MODE_TITLE,
	RSC_BOX_MODE_DESC,
	RSC_BOX_DCU_L1_TITLE,
	RSC_BOX_DCU_L1_IP_TITLE,
	RSC_BOX_DCU_L2_TITLE,
	RSC_BOX_DCU_L2_CL_TITLE,
	RSC_BOX_EIST_TITLE,
	RSC_BOX_EIST_DESC,
	RSC_BOX_C1E_TITLE,
	RSC_BOX_C1E_DESC,
	RSC_BOX_TURBO_TITLE,
	RSC_BOX_TURBO_DESC,
	RSC_BOX_C1A_TITLE,
	RSC_BOX_C1A_DESC,
	RSC_BOX_C3A_TITLE,
	RSC_BOX_C3A_DESC,
	RSC_BOX_C1U_TITLE,
	RSC_BOX_C1U_DESC,
	RSC_BOX_C2U_TITLE,
	RSC_BOX_C2U_DESC,
	RSC_BOX_C3U_TITLE,
	RSC_BOX_C3U_DESC,
	RSC_BOX_C6D_DESC,
	RSC_BOX_MC6_TITLE,
	RSC_BOX_MC6_DESC,
	RSC_BOX_CC6_TITLE,
	RSC_BOX_C6D_TITLE,
	RSC_BOX_CC6_DESC,
	RSC_BOX_PC6_TITLE,
	RSC_BOX_PC6_DESC,
	RSC_BOX_HWP_TITLE,
	RSC_BOX_HWP_DESC,
	RSC_BOX_HDC_TITLE,
	RSC_BOX_HDC_DESC,
	RSC_BOX_EEO_TITLE,
	RSC_BOX_EEO_DESC,
	RSC_BOX_R2H_TITLE,
	RSC_BOX_R2H_DESC,
	RSC_BOX_WDT_TITLE,
	RSC_BOX_WDT_DESC,
	RSC_BOX_BLANK_DESC,
	RSC_BOX_NOMINAL_MODE_COND0,
	RSC_BOX_NOMINAL_MODE_COND1,
	RSC_BOX_EXPERIMENT_MODE_COND0,
	RSC_BOX_EXPERIMENT_MODE_COND1,
	RSC_BOX_INTERRUPT_TITLE,
	RSC_BOX_CPU_IDLE_TITLE,
	RSC_BOX_CPU_FREQ_TITLE,
	RSC_BOX_GOVERNOR_TITLE,
	RSC_BOX_CLOCK_SOURCE_TITLE,
	RSC_BOX_OPS_REGISTER_COND0,
	RSC_BOX_OPS_REGISTER_COND1,
	RSC_BOX_OPS_UNREGISTER_COND0,
	RSC_BOX_OPS_UNREGISTER_COND1,
	RSC_BOX_EVENT_TITLE,
	RSC_BOX_EVENT_THERMAL_SENSOR,
	RSC_BOX_EVENT_PROCHOT_AGENT,
	RSC_BOX_EVENT_CRITICAL_TEMP,
	RSC_BOX_EVENT_THERM_THRESHOLD,
	RSC_BOX_EVENT_POWER_LIMIT,
	RSC_BOX_EVENT_CURRENT_LIMIT,
	RSC_BOX_EVENT_CROSS_DOM_LIMIT,
	RSC_BOX_STATE_UNSPECIFIED,
	RSC_BOX_STATE_C8,
	RSC_BOX_STATE_C7,
	RSC_BOX_STATE_C6,
	RSC_BOX_STATE_C4,
	RSC_BOX_STATE_C3,
	RSC_BOX_PKG_STATE_LIMIT_TITLE,
	RSC_BOX_PKG_STATE_LIMIT_C10,
	RSC_BOX_PKG_STATE_LIMIT_C9,
	RSC_BOX_PKG_STATE_LIMIT_C8,
	RSC_BOX_PKG_STATE_LIMIT_C7S,
	RSC_BOX_PKG_STATE_LIMIT_C7,
	RSC_BOX_PKG_STATE_LIMIT_C6R,
	RSC_BOX_PKG_STATE_LIMIT_C6,
	RSC_BOX_PKG_STATE_LIMIT_C4,
	RSC_BOX_PKG_STATE_LIMIT_C3,
	RSC_BOX_PKG_STATE_LIMIT_C2,
	RSC_BOX_PKG_STATE_LIMIT_C1,
	RSC_BOX_PKG_STATE_LIMIT_C0,
	RSC_BOX_IO_MWAIT_TITLE,
	RSC_BOX_IO_MWAIT_DESC,
	RSC_BOX_MWAIT_MAX_STATE_TITLE,
	RSC_BOX_ODCM_TITLE,
	RSC_BOX_ODCM_DESC,
	RSC_BOX_EXT_DUTY_CYCLE_TITLE,
	RSC_BOX_DUTY_CYCLE_TITLE,
	RSC_BOX_DUTY_CYCLE_RESERVED,
	RSC_BOX_DUTY_CYCLE_PCT1,
	RSC_BOX_DUTY_CYCLE_PCT2,
	RSC_BOX_DUTY_CYCLE_PCT3,
	RSC_BOX_DUTY_CYCLE_PCT4,
	RSC_BOX_DUTY_CYCLE_PCT5,
	RSC_BOX_DUTY_CYCLE_PCT6,
	RSC_BOX_DUTY_CYCLE_PCT7,
	RSC_BOX_EXT_DUTY_CYCLE_PCT1,
	RSC_BOX_EXT_DUTY_CYCLE_PCT2,
	RSC_BOX_EXT_DUTY_CYCLE_PCT3,
	RSC_BOX_EXT_DUTY_CYCLE_PCT4,
	RSC_BOX_EXT_DUTY_CYCLE_PCT5,
	RSC_BOX_EXT_DUTY_CYCLE_PCT6,
	RSC_BOX_EXT_DUTY_CYCLE_PCT7,
	RSC_BOX_EXT_DUTY_CYCLE_PCT8,
	RSC_BOX_EXT_DUTY_CYCLE_PCT9,
	RSC_BOX_EXT_DUTY_CYCLE_PCT10,
	RSC_BOX_EXT_DUTY_CYCLE_PCT11,
	RSC_BOX_EXT_DUTY_CYCLE_PCT12,
	RSC_BOX_EXT_DUTY_CYCLE_PCT13,
	RSC_BOX_EXT_DUTY_CYCLE_PCT14,
	RSC_BOX_POWER_POLICY_TITLE,
	RSC_BOX_POWER_POLICY_LOW,
	RSC_BOX_POWER_POLICY_1,
	RSC_BOX_POWER_POLICY_2,
	RSC_BOX_POWER_POLICY_3,
	RSC_BOX_POWER_POLICY_4,
	RSC_BOX_POWER_POLICY_5,
	RSC_BOX_POWER_POLICY_6,
	RSC_BOX_POWER_POLICY_7,
	RSC_BOX_POWER_POLICY_8,
	RSC_BOX_POWER_POLICY_9,
	RSC_BOX_POWER_POLICY_10,
	RSC_BOX_POWER_POLICY_11,
	RSC_BOX_POWER_POLICY_12,
	RSC_BOX_POWER_POLICY_13,
	RSC_BOX_POWER_POLICY_14,
	RSC_BOX_POWER_POLICY_HIGH,
	RSC_BOX_HWP_POLICY_MIN,
	RSC_BOX_HWP_POLICY_020,
	RSC_BOX_HWP_POLICY_040,
	RSC_BOX_HWP_POLICY_060,
	RSC_BOX_HWP_POLICY_MED,
	RSC_BOX_HWP_POLICY_0A0,
	RSC_BOX_HWP_POLICY_PWR,
	RSC_BOX_HWP_POLICY_0E0,
	RSC_BOX_HWP_POLICY_MAX,
	RSC_BOX_CFG_TDP_TITLE,
	RSC_BOX_CFG_TDP_DESC,
	RSC_BOX_CFG_TDP_BLANK,
	RSC_BOX_CFG_TDP_LVL0,
	RSC_BOX_CFG_TDP_LVL1,
	RSC_BOX_CFG_TDP_LVL2,
	RSC_BOX_TDP_PKG_TITLE,
	RSC_BOX_TDP_CORES_TITLE,
	RSC_BOX_TDP_UNCORE_TITLE,
	RSC_BOX_TDP_RAM_TITLE,
	RSC_BOX_TDP_PLATFORM_TITLE,
	RSC_BOX_PL1_DESC,
	RSC_BOX_PL2_DESC,
	RSC_BOX_PWR_OFFSET_00,
	RSC_BOX_PWR_OFFSET_01,
	RSC_BOX_PWR_OFFSET_02,
	RSC_BOX_PWR_OFFSET_03,
	RSC_BOX_PWR_OFFSET_04,
	RSC_BOX_PWR_OFFSET_05,
	RSC_BOX_PWR_OFFSET_06,
	RSC_BOX_PWR_OFFSET_07,
	RSC_BOX_PWR_OFFSET_08,
	RSC_BOX_PWR_OFFSET_09,
	RSC_BOX_PWR_OFFSET_10,
	RSC_BOX_PWR_OFFSET_11,
	RSC_BOX_PWR_OFFSET_12,
	RSC_BOX_PWR_OFFSET_13,
	RSC_BOX_CLAMPING_OFF_COND0,
	RSC_BOX_CLAMPING_OFF_COND1,
	RSC_BOX_CLAMPING_ON_COND0,
	RSC_BOX_CLAMPING_ON_COND1,
	RSC_BOX_TDC_TITLE,
	RSC_BOX_TDC_DESC,
	RSC_BOX_AMP_OFFSET_00,
	RSC_BOX_AMP_OFFSET_01,
	RSC_BOX_AMP_OFFSET_02,
	RSC_BOX_AMP_OFFSET_03,
	RSC_BOX_AMP_OFFSET_04,
	RSC_BOX_AMP_OFFSET_05,
	RSC_BOX_AMP_OFFSET_06,
	RSC_BOX_AMP_OFFSET_07,
	RSC_BOX_AMP_OFFSET_08,
	RSC_BOX_AMP_OFFSET_09,
	RSC_BOX_AMP_OFFSET_10,
	RSC_BOX_AMP_OFFSET_11,
	RSC_BOX_AMP_OFFSET_12,
	RSC_BOX_AMP_OFFSET_13,
	RSC_BOX_TOOLS_TITLE,
	RSC_BOX_TOOLS_STOP_BURN,
	RSC_BOX_TOOLS_ATOMIC_BURN,
	RSC_BOX_TOOLS_CRC32_BURN,
	RSC_BOX_TOOLS_CONIC_BURN,
	RSC_BOX_TOOLS_RANDOM_CPU,
	RSC_BOX_TOOLS_ROUND_ROBIN_CPU,
	RSC_BOX_TOOLS_USER_CPU,
	RSC_BOX_CONIC_TITLE,
	RSC_BOX_CONIC_ITEM_1,
	RSC_BOX_CONIC_ITEM_2,
	RSC_BOX_CONIC_ITEM_3,
	RSC_BOX_CONIC_ITEM_4,
	RSC_BOX_CONIC_ITEM_5,
	RSC_BOX_CONIC_ITEM_6,
	RSC_BOX_LANG_TITLE,
	RSC_BOX_LANG_ENGLISH,
	RSC_BOX_LANG_FRENCH,
	RSC_BOX_LANG_BLANK,
	RSC_BOX_THEME_TITLE,
	RSC_BOX_THEME_BLANK,
	RSC_BOX_SCOPE_THERMAL_TITLE,
	RSC_BOX_SCOPE_VOLTAGE_TITLE,
	RSC_BOX_SCOPE_POWER_TITLE,
	RSC_BOX_SCOPE_NONE,
	RSC_BOX_SCOPE_THREAD,
	RSC_BOX_SCOPE_CORE,
	RSC_BOX_SCOPE_PACKAGE,
	RSC_ERROR_CMD_SYNTAX,
	RSC_ERROR_SHARED_MEM,
	RSC_ERROR_SYS_CALL,
	RSC_ERROR_UNIMPLEMENTED,
	RSC_ERROR_EXPERIMENTAL,
	RSC_ERROR_TURBO_PREREQ,
	RSC_ERROR_UNCORE_PREREQ,
	RSC_ERROR_PSTATE_NOT_FOUND,
	RSC_BOX_IDLE_LIMIT_TITLE,
	RSC_BOX_IDLE_LIMIT_RESET,
	RSC_BOX_RECORDER_TITLE,
	RSC_SMBIOS_TITLE,
	RSC_MECH_IBRS,
	RSC_MECH_IBPB,
	RSC_MECH_STIBP,
	RSC_MECH_SSBD,
	RSC_MECH_L1D_FLUSH,
	RSC_MECH_MD_CLEAR,
	RSC_MECH_RDCL_NO,
	RSC_MECH_IBRS_ALL,
	RSC_MECH_RSBA,
	RSC_MECH_L1DFL_VMENTRY_NO,
	RSC_MECH_SSB_NO,
	RSC_MECH_MDS_NO,
	RSC_MECH_PSCHANGE_MC_NO,
	RSC_MECH_TAA_NO,
	RSC_MECH_STLB,
	RSC_MECH_FUSA,
	RSC_MECH_RSM_CPL0,
	RSC_MECH_SPLA,
	RSC_MECH_SNOOP_FILTER,
	RSC_MECH_PSFD,
	RSC_MECH_IBRS_ALWAYS_ON,
	RSC_MECH_IBRS_PREFERRED,
	RSC_MECH_IBRS_SAME_MODE,
	RSC_MECH_SSBD_VIRTSPECCTRL,
	RSC_MECH_SSBD_NOT_REQUIRED,
	RSC_CF0,
	RSC_CF1,
	RSC_CF2,
	RSC_CF3,
	RSC_CF4,
	RSC_CF5,
	RSC_COPY0,
	RSC_COPY1,
	RSC_COPY2,
	RSC_CREATE_SELECT_AUTO_TURBO,
	RSC_CREATE_SELECT_FREQ_TURBO,
	RSC_CREATE_SELECT_FREQ_TGT,
	RSC_CREATE_SELECT_FREQ_HWP_TGT,
	RSC_CREATE_SELECT_FREQ_HWP_MAX,
	RSC_CREATE_SELECT_FREQ_HWP_MIN,
	RSC_CREATE_SELECT_FREQ_MAX,
	RSC_CREATE_SELECT_FREQ_MIN,
	RSC_CREATE_SELECT_FREQ_OFFLINE,
	RSC_POPUP_DRIVER_TITLE,
	RSC_EXIT_TITLE,
	RSC_EXIT_HEADER,
	RSC_EXIT_CONFIRM,
	RSC_EXIT_FOOTER
};

typedef struct {
	ATTRIBUTE	*Attr[THM_CNT];
	ASCII		*Code[LOC_CNT];
	const int	Size[LOC_CNT];
} RESOURCE_ST;

extern RESOURCE_ST Resource[];

#define ATTR() Attr[GET_THEME()]

#define CODE() Code[GET_LOCALE()]

#define RSC(_ID) (Resource[RSC_##_ID])

#define RSZ(_ID) (RSC(_ID).Size[GET_LOCALE()])
