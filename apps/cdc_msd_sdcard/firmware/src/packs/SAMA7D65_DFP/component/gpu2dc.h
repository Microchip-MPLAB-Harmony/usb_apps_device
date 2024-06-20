/*
 * Component description for GPU2DC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version  */
#ifndef _SAMA7D6_GPU2DC_COMPONENT_H_
#define _SAMA7D6_GPU2DC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GPU2DC                                       */
/* ************************************************************************** */

/* -------- GPU2DC_AQHiClockControl : (GPU2DC Offset: 0x00) (R/W 32) Clock Control Register -------- */
#define GPU2DC_AQHiClockControl_RESETVALUE    _UINT32_(0x70900)                                    /*  (GPU2DC_AQHiClockControl) Clock Control Register  Reset Value */

#define GPU2DC_AQHiClockControl_CLK2D_DIS_Pos _UINT32_(1)                                          /* (GPU2DC_AQHiClockControl) Software Core Clock Disable Position */
#define GPU2DC_AQHiClockControl_CLK2D_DIS_Msk (_UINT32_(0x1) << GPU2DC_AQHiClockControl_CLK2D_DIS_Pos) /* (GPU2DC_AQHiClockControl) Software Core Clock Disable Mask */
#define GPU2DC_AQHiClockControl_CLK2D_DIS(value) (GPU2DC_AQHiClockControl_CLK2D_DIS_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_CLK2D_DIS_Pos)) /* Assigment of value for CLK2D_DIS in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_CLK2D_DIS_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) Clock is enabled.  */
#define   GPU2DC_AQHiClockControl_CLK2D_DIS_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) Clock is disabled.  */
#define GPU2DC_AQHiClockControl_CLK2D_DIS_0   (GPU2DC_AQHiClockControl_CLK2D_DIS_0_Val << GPU2DC_AQHiClockControl_CLK2D_DIS_Pos) /* (GPU2DC_AQHiClockControl) Clock is enabled. Position  */
#define GPU2DC_AQHiClockControl_CLK2D_DIS_1   (GPU2DC_AQHiClockControl_CLK2D_DIS_1_Val << GPU2DC_AQHiClockControl_CLK2D_DIS_Pos) /* (GPU2DC_AQHiClockControl) Clock is disabled. Position  */
#define GPU2DC_AQHiClockControl_FSCALE_VAL_Pos _UINT32_(2)                                          /* (GPU2DC_AQHiClockControl) Core Clock Frequency Scale Factor Position */
#define GPU2DC_AQHiClockControl_FSCALE_VAL_Msk (_UINT32_(0x7F) << GPU2DC_AQHiClockControl_FSCALE_VAL_Pos) /* (GPU2DC_AQHiClockControl) Core Clock Frequency Scale Factor Mask */
#define GPU2DC_AQHiClockControl_FSCALE_VAL(value) (GPU2DC_AQHiClockControl_FSCALE_VAL_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_FSCALE_VAL_Pos)) /* Assigment of value for FSCALE_VAL in the GPU2DC_AQHiClockControl register */
#define GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Pos _UINT32_(9)                                          /* (GPU2DC_AQHiClockControl) Core Clock Scaling Enable Position */
#define GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Msk (_UINT32_(0x1) << GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Pos) /* (GPU2DC_AQHiClockControl) Core Clock Scaling Enable Mask */
#define GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD(value) (GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Pos)) /* Assigment of value for FSCALE_CMD_LOAD in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) Clock scaling disabled.  */
#define   GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) Clock scaling enabled.  */
#define GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_0 (GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_0_Val << GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Pos) /* (GPU2DC_AQHiClockControl) Clock scaling disabled. Position  */
#define GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_1 (GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_1_Val << GPU2DC_AQHiClockControl_FSCALE_CMD_LOAD_Pos) /* (GPU2DC_AQHiClockControl) Clock scaling enabled. Position  */
#define GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Pos _UINT32_(10)                                         /* (GPU2DC_AQHiClockControl)  Position */
#define GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Msk (_UINT32_(0x1) << GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Pos) /* (GPU2DC_AQHiClockControl)  Mask */
#define GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING(value) (GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Pos)) /* Assigment of value for DISABLE_RAM_CLOCK_GATING in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) Functional clock gating is enabled for GPU2DC memories.  */
#define   GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) Functional clock gating is disabled for GPU2DC memories.  */
#define GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_0 (GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_0_Val << GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Pos) /* (GPU2DC_AQHiClockControl) Functional clock gating is enabled for GPU2DC memories. Position  */
#define GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_1 (GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_1_Val << GPU2DC_AQHiClockControl_DISABLE_RAM_CLOCK_GATING_Pos) /* (GPU2DC_AQHiClockControl) Functional clock gating is disabled for GPU2DC memories. Position  */
#define GPU2DC_AQHiClockControl_SOFT_RESET_Pos _UINT32_(12)                                         /* (GPU2DC_AQHiClockControl) GPU2DC Software Reset Position */
#define GPU2DC_AQHiClockControl_SOFT_RESET_Msk (_UINT32_(0x1) << GPU2DC_AQHiClockControl_SOFT_RESET_Pos) /* (GPU2DC_AQHiClockControl) GPU2DC Software Reset Mask */
#define GPU2DC_AQHiClockControl_SOFT_RESET(value) (GPU2DC_AQHiClockControl_SOFT_RESET_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_SOFT_RESET_Pos)) /* Assigment of value for SOFT_RESET in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_SOFT_RESET_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) Releases the soft reset.  */
#define   GPU2DC_AQHiClockControl_SOFT_RESET_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) Soft resets the module.  */
#define GPU2DC_AQHiClockControl_SOFT_RESET_0  (GPU2DC_AQHiClockControl_SOFT_RESET_0_Val << GPU2DC_AQHiClockControl_SOFT_RESET_Pos) /* (GPU2DC_AQHiClockControl) Releases the soft reset. Position  */
#define GPU2DC_AQHiClockControl_SOFT_RESET_1  (GPU2DC_AQHiClockControl_SOFT_RESET_1_Val << GPU2DC_AQHiClockControl_SOFT_RESET_Pos) /* (GPU2DC_AQHiClockControl) Soft resets the module. Position  */
#define GPU2DC_AQHiClockControl_IDLE3_D_Pos   _UINT32_(16)                                         /* (GPU2DC_AQHiClockControl) 3D Pipe Idle Position */
#define GPU2DC_AQHiClockControl_IDLE3_D_Msk   (_UINT32_(0x1) << GPU2DC_AQHiClockControl_IDLE3_D_Pos) /* (GPU2DC_AQHiClockControl) 3D Pipe Idle Mask */
#define GPU2DC_AQHiClockControl_IDLE3_D(value) (GPU2DC_AQHiClockControl_IDLE3_D_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_IDLE3_D_Pos)) /* Assigment of value for IDLE3_D in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_IDLE3_D_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) Not applicable, always read as '1'.  */
#define   GPU2DC_AQHiClockControl_IDLE3_D_NOT_PRESENT_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) IDLE 3D pipe is not present  */
#define GPU2DC_AQHiClockControl_IDLE3_D_0     (GPU2DC_AQHiClockControl_IDLE3_D_0_Val << GPU2DC_AQHiClockControl_IDLE3_D_Pos) /* (GPU2DC_AQHiClockControl) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiClockControl_IDLE3_D_NOT_PRESENT (GPU2DC_AQHiClockControl_IDLE3_D_NOT_PRESENT_Val << GPU2DC_AQHiClockControl_IDLE3_D_Pos) /* (GPU2DC_AQHiClockControl) IDLE 3D pipe is not present Position  */
#define GPU2DC_AQHiClockControl_IDLE2_D_Pos   _UINT32_(17)                                         /* (GPU2DC_AQHiClockControl) 2D Pipe Idle Position */
#define GPU2DC_AQHiClockControl_IDLE2_D_Msk   (_UINT32_(0x1) << GPU2DC_AQHiClockControl_IDLE2_D_Pos) /* (GPU2DC_AQHiClockControl) 2D Pipe Idle Mask */
#define GPU2DC_AQHiClockControl_IDLE2_D(value) (GPU2DC_AQHiClockControl_IDLE2_D_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_IDLE2_D_Pos)) /* Assigment of value for IDLE2_D in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_IDLE2_D_ACTIVE_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) 2D pipe is active.  */
#define   GPU2DC_AQHiClockControl_IDLE2_D_IDLE_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) 2D pipe is idle.  */
#define GPU2DC_AQHiClockControl_IDLE2_D_ACTIVE (GPU2DC_AQHiClockControl_IDLE2_D_ACTIVE_Val << GPU2DC_AQHiClockControl_IDLE2_D_Pos) /* (GPU2DC_AQHiClockControl) 2D pipe is active. Position  */
#define GPU2DC_AQHiClockControl_IDLE2_D_IDLE  (GPU2DC_AQHiClockControl_IDLE2_D_IDLE_Val << GPU2DC_AQHiClockControl_IDLE2_D_Pos) /* (GPU2DC_AQHiClockControl) 2D pipe is idle. Position  */
#define GPU2DC_AQHiClockControl_IDLE_VG_Pos   _UINT32_(18)                                         /* (GPU2DC_AQHiClockControl) VG Pipe Idle Position */
#define GPU2DC_AQHiClockControl_IDLE_VG_Msk   (_UINT32_(0x1) << GPU2DC_AQHiClockControl_IDLE_VG_Pos) /* (GPU2DC_AQHiClockControl) VG Pipe Idle Mask */
#define GPU2DC_AQHiClockControl_IDLE_VG(value) (GPU2DC_AQHiClockControl_IDLE_VG_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_IDLE_VG_Pos)) /* Assigment of value for IDLE_VG in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_IDLE_VG_FALSE_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) VG pipe is not idle.  */
#define   GPU2DC_AQHiClockControl_IDLE_VG_TRUE_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) VG pipe is idle  */
#define GPU2DC_AQHiClockControl_IDLE_VG_FALSE (GPU2DC_AQHiClockControl_IDLE_VG_FALSE_Val << GPU2DC_AQHiClockControl_IDLE_VG_Pos) /* (GPU2DC_AQHiClockControl) VG pipe is not idle. Position  */
#define GPU2DC_AQHiClockControl_IDLE_VG_TRUE  (GPU2DC_AQHiClockControl_IDLE_VG_TRUE_Val << GPU2DC_AQHiClockControl_IDLE_VG_Pos) /* (GPU2DC_AQHiClockControl) VG pipe is idle Position  */
#define GPU2DC_AQHiClockControl_ISOLATE_GPU_Pos _UINT32_(19)                                         /* (GPU2DC_AQHiClockControl) Isolate GPU Position */
#define GPU2DC_AQHiClockControl_ISOLATE_GPU_Msk (_UINT32_(0x1) << GPU2DC_AQHiClockControl_ISOLATE_GPU_Pos) /* (GPU2DC_AQHiClockControl) Isolate GPU Mask */
#define GPU2DC_AQHiClockControl_ISOLATE_GPU(value) (GPU2DC_AQHiClockControl_ISOLATE_GPU_Msk & (_UINT32_(value) << GPU2DC_AQHiClockControl_ISOLATE_GPU_Pos)) /* Assigment of value for ISOLATE_GPU in the GPU2DC_AQHiClockControl register */
#define   GPU2DC_AQHiClockControl_ISOLATE_GPU_FALSE_Val _UINT32_(0x0)                                        /* (GPU2DC_AQHiClockControl) GPU2DC isolation is not active.  */
#define   GPU2DC_AQHiClockControl_ISOLATE_GPU_TRUE_Val _UINT32_(0x1)                                        /* (GPU2DC_AQHiClockControl) AXI interface is disabled and GPU2DC isolated.  */
#define GPU2DC_AQHiClockControl_ISOLATE_GPU_FALSE (GPU2DC_AQHiClockControl_ISOLATE_GPU_FALSE_Val << GPU2DC_AQHiClockControl_ISOLATE_GPU_Pos) /* (GPU2DC_AQHiClockControl) GPU2DC isolation is not active. Position  */
#define GPU2DC_AQHiClockControl_ISOLATE_GPU_TRUE (GPU2DC_AQHiClockControl_ISOLATE_GPU_TRUE_Val << GPU2DC_AQHiClockControl_ISOLATE_GPU_Pos) /* (GPU2DC_AQHiClockControl) AXI interface is disabled and GPU2DC isolated. Position  */
#define GPU2DC_AQHiClockControl_Msk           _UINT32_(0x000F17FE)                                 /* (GPU2DC_AQHiClockControl) Register Mask  */


/* -------- GPU2DC_AQHiIdle : (GPU2DC Offset: 0x04) ( R/ 32) Idle Status Register -------- */
#define GPU2DC_AQHiIdle_RESETVALUE            _UINT32_(0x7FFFFFFF)                                 /*  (GPU2DC_AQHiIdle) Idle Status Register  Reset Value */

#define GPU2DC_AQHiIdle_IDLE_FE_Pos           _UINT32_(0)                                          /* (GPU2DC_AQHiIdle) Fetch Engine Idle Position */
#define GPU2DC_AQHiIdle_IDLE_FE_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_FE_Pos)       /* (GPU2DC_AQHiIdle) Fetch Engine Idle Mask */
#define GPU2DC_AQHiIdle_IDLE_FE(value)        (GPU2DC_AQHiIdle_IDLE_FE_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_FE_Pos)) /* Assigment of value for IDLE_FE in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_FE_ACTIVE_Val  _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Fetch engine is active.  */
#define   GPU2DC_AQHiIdle_IDLE_FE_IDLE_Val    _UINT32_(0x1)                                        /* (GPU2DC_AQHiIdle) Fetch engine is idle.  */
#define GPU2DC_AQHiIdle_IDLE_FE_ACTIVE        (GPU2DC_AQHiIdle_IDLE_FE_ACTIVE_Val << GPU2DC_AQHiIdle_IDLE_FE_Pos) /* (GPU2DC_AQHiIdle) Fetch engine is active. Position  */
#define GPU2DC_AQHiIdle_IDLE_FE_IDLE          (GPU2DC_AQHiIdle_IDLE_FE_IDLE_Val << GPU2DC_AQHiIdle_IDLE_FE_Pos) /* (GPU2DC_AQHiIdle) Fetch engine is idle. Position  */
#define GPU2DC_AQHiIdle_IDLE_DE_Pos           _UINT32_(1)                                          /* (GPU2DC_AQHiIdle) Draw Engine Idle Position */
#define GPU2DC_AQHiIdle_IDLE_DE_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_DE_Pos)       /* (GPU2DC_AQHiIdle) Draw Engine Idle Mask */
#define GPU2DC_AQHiIdle_IDLE_DE(value)        (GPU2DC_AQHiIdle_IDLE_DE_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_DE_Pos)) /* Assigment of value for IDLE_DE in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_DE_ACTIVE_Val  _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Draw engine is active.  */
#define   GPU2DC_AQHiIdle_IDLE_DE_IDLE_Val    _UINT32_(0x1)                                        /* (GPU2DC_AQHiIdle) Draw engine is idle.  */
#define GPU2DC_AQHiIdle_IDLE_DE_ACTIVE        (GPU2DC_AQHiIdle_IDLE_DE_ACTIVE_Val << GPU2DC_AQHiIdle_IDLE_DE_Pos) /* (GPU2DC_AQHiIdle) Draw engine is active. Position  */
#define GPU2DC_AQHiIdle_IDLE_DE_IDLE          (GPU2DC_AQHiIdle_IDLE_DE_IDLE_Val << GPU2DC_AQHiIdle_IDLE_DE_Pos) /* (GPU2DC_AQHiIdle) Draw engine is idle. Position  */
#define GPU2DC_AQHiIdle_IDLE_PE_Pos           _UINT32_(2)                                          /* (GPU2DC_AQHiIdle) Pixel Engine Idle Position */
#define GPU2DC_AQHiIdle_IDLE_PE_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_PE_Pos)       /* (GPU2DC_AQHiIdle) Pixel Engine Idle Mask */
#define GPU2DC_AQHiIdle_IDLE_PE(value)        (GPU2DC_AQHiIdle_IDLE_PE_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_PE_Pos)) /* Assigment of value for IDLE_PE in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_PE_ACTIVE_Val  _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Pixel engine is active.  */
#define   GPU2DC_AQHiIdle_IDLE_PE_IDLE_Val    _UINT32_(0x1)                                        /* (GPU2DC_AQHiIdle) Pixel engine is idle.  */
#define GPU2DC_AQHiIdle_IDLE_PE_ACTIVE        (GPU2DC_AQHiIdle_IDLE_PE_ACTIVE_Val << GPU2DC_AQHiIdle_IDLE_PE_Pos) /* (GPU2DC_AQHiIdle) Pixel engine is active. Position  */
#define GPU2DC_AQHiIdle_IDLE_PE_IDLE          (GPU2DC_AQHiIdle_IDLE_PE_IDLE_Val << GPU2DC_AQHiIdle_IDLE_PE_Pos) /* (GPU2DC_AQHiIdle) Pixel engine is idle. Position  */
#define GPU2DC_AQHiIdle_IDLE_SH_Pos           _UINT32_(3)                                          /* (GPU2DC_AQHiIdle) Shader Engine Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_SH_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_SH_Pos)       /* (GPU2DC_AQHiIdle) Shader Engine Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_SH(value)        (GPU2DC_AQHiIdle_IDLE_SH_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_SH_Pos)) /* Assigment of value for IDLE_SH in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_SH_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_SH_0             (GPU2DC_AQHiIdle_IDLE_SH_0_Val << GPU2DC_AQHiIdle_IDLE_SH_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_PA_Pos           _UINT32_(4)                                          /* (GPU2DC_AQHiIdle) Primitive Assembly Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_PA_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_PA_Pos)       /* (GPU2DC_AQHiIdle) Primitive Assembly Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_PA(value)        (GPU2DC_AQHiIdle_IDLE_PA_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_PA_Pos)) /* Assigment of value for IDLE_PA in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_PA_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_PA_0             (GPU2DC_AQHiIdle_IDLE_PA_0_Val << GPU2DC_AQHiIdle_IDLE_PA_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_SE_Pos           _UINT32_(5)                                          /* (GPU2DC_AQHiIdle) Setup Engine Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_SE_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_SE_Pos)       /* (GPU2DC_AQHiIdle) Setup Engine Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_SE(value)        (GPU2DC_AQHiIdle_IDLE_SE_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_SE_Pos)) /* Assigment of value for IDLE_SE in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_SE_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_SE_0             (GPU2DC_AQHiIdle_IDLE_SE_0_Val << GPU2DC_AQHiIdle_IDLE_SE_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_RA_Pos           _UINT32_(6)                                          /* (GPU2DC_AQHiIdle) Raster Engine Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_RA_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_RA_Pos)       /* (GPU2DC_AQHiIdle) Raster Engine Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_RA(value)        (GPU2DC_AQHiIdle_IDLE_RA_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_RA_Pos)) /* Assigment of value for IDLE_RA in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_RA_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_RA_0             (GPU2DC_AQHiIdle_IDLE_RA_0_Val << GPU2DC_AQHiIdle_IDLE_RA_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_TX_Pos           _UINT32_(7)                                          /* (GPU2DC_AQHiIdle) Texture Engine Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_TX_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_TX_Pos)       /* (GPU2DC_AQHiIdle) Texture Engine Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_TX(value)        (GPU2DC_AQHiIdle_IDLE_TX_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_TX_Pos)) /* Assigment of value for IDLE_TX in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_TX_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_TX_0             (GPU2DC_AQHiIdle_IDLE_TX_0_Val << GPU2DC_AQHiIdle_IDLE_TX_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_VG_Pos           _UINT32_(8)                                          /* (GPU2DC_AQHiIdle) Vector Graphics Engine Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_VG_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_VG_Pos)       /* (GPU2DC_AQHiIdle) Vector Graphics Engine Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_VG(value)        (GPU2DC_AQHiIdle_IDLE_VG_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_VG_Pos)) /* Assigment of value for IDLE_VG in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_VG_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_VG_0             (GPU2DC_AQHiIdle_IDLE_VG_0_Val << GPU2DC_AQHiIdle_IDLE_VG_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_IM_Pos           _UINT32_(9)                                          /* (GPU2DC_AQHiIdle) IM Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_IM_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_IM_Pos)       /* (GPU2DC_AQHiIdle) IM Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_IM(value)        (GPU2DC_AQHiIdle_IDLE_IM_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_IM_Pos)) /* Assigment of value for IDLE_IM in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_IM_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_IM_0             (GPU2DC_AQHiIdle_IDLE_IM_0_Val << GPU2DC_AQHiIdle_IDLE_IM_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_FP_Pos           _UINT32_(10)                                         /* (GPU2DC_AQHiIdle) FP Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_FP_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_FP_Pos)       /* (GPU2DC_AQHiIdle) FP Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_FP(value)        (GPU2DC_AQHiIdle_IDLE_FP_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_FP_Pos)) /* Assigment of value for IDLE_FP in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_FP_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_FP_0             (GPU2DC_AQHiIdle_IDLE_FP_0_Val << GPU2DC_AQHiIdle_IDLE_FP_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_IDLE_TS_Pos           _UINT32_(11)                                         /* (GPU2DC_AQHiIdle) TS Not Present Position */
#define GPU2DC_AQHiIdle_IDLE_TS_Msk           (_UINT32_(0x1) << GPU2DC_AQHiIdle_IDLE_TS_Pos)       /* (GPU2DC_AQHiIdle) TS Not Present Mask */
#define GPU2DC_AQHiIdle_IDLE_TS(value)        (GPU2DC_AQHiIdle_IDLE_TS_Msk & (_UINT32_(value) << GPU2DC_AQHiIdle_IDLE_TS_Pos)) /* Assigment of value for IDLE_TS in the GPU2DC_AQHiIdle register */
#define   GPU2DC_AQHiIdle_IDLE_TS_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'.  */
#define GPU2DC_AQHiIdle_IDLE_TS_0             (GPU2DC_AQHiIdle_IDLE_TS_0_Val << GPU2DC_AQHiIdle_IDLE_TS_Pos) /* (GPU2DC_AQHiIdle) Not applicable, always read as '1'. Position  */
#define GPU2DC_AQHiIdle_Msk                   _UINT32_(0x00000FFF)                                 /* (GPU2DC_AQHiIdle) Register Mask  */


/* -------- GPU2DC_AQAxiConfig : (GPU2DC Offset: 0x08) (R/W 32) AXI Configuration Register -------- */
#define GPU2DC_AQAxiConfig_RESETVALUE         _UINT32_(0x2200)                                     /*  (GPU2DC_AQAxiConfig) AXI Configuration Register  Reset Value */

#define GPU2DC_AQAxiConfig_AWCACHE_Pos        _UINT32_(8)                                          /* (GPU2DC_AQAxiConfig) Set AWCACHE Value Position */
#define GPU2DC_AQAxiConfig_AWCACHE_Msk        (_UINT32_(0x1) << GPU2DC_AQAxiConfig_AWCACHE_Pos)    /* (GPU2DC_AQAxiConfig) Set AWCACHE Value Mask */
#define GPU2DC_AQAxiConfig_AWCACHE(value)     (GPU2DC_AQAxiConfig_AWCACHE_Msk & (_UINT32_(value) << GPU2DC_AQAxiConfig_AWCACHE_Pos)) /* Assigment of value for AWCACHE in the GPU2DC_AQAxiConfig register */
#define   GPU2DC_AQAxiConfig_AWCACHE_0_Val    _UINT32_(0x0)                                        /* (GPU2DC_AQAxiConfig) Non-bufferable bit.  */
#define   GPU2DC_AQAxiConfig_AWCACHE_1_Val    _UINT32_(0x1)                                        /* (GPU2DC_AQAxiConfig) Bufferable bit  */
#define GPU2DC_AQAxiConfig_AWCACHE_0          (GPU2DC_AQAxiConfig_AWCACHE_0_Val << GPU2DC_AQAxiConfig_AWCACHE_Pos) /* (GPU2DC_AQAxiConfig) Non-bufferable bit. Position  */
#define GPU2DC_AQAxiConfig_AWCACHE_1          (GPU2DC_AQAxiConfig_AWCACHE_1_Val << GPU2DC_AQAxiConfig_AWCACHE_Pos) /* (GPU2DC_AQAxiConfig) Bufferable bit Position  */
#define GPU2DC_AQAxiConfig_Msk                _UINT32_(0x00000100)                                 /* (GPU2DC_AQAxiConfig) Register Mask  */


/* -------- GPU2DC_AQAxiStatus : (GPU2DC Offset: 0x0C) ( R/ 32) AXI Status Register -------- */
#define GPU2DC_AQAxiStatus_RESETVALUE         _UINT32_(0x00)                                       /*  (GPU2DC_AQAxiStatus) AXI Status Register  Reset Value */

#define GPU2DC_AQAxiStatus_WR_ERR_ID_Pos      _UINT32_(0)                                          /* (GPU2DC_AQAxiStatus) WriteID Caused Illegal Accesses Position */
#define GPU2DC_AQAxiStatus_WR_ERR_ID_Msk      (_UINT32_(0xF) << GPU2DC_AQAxiStatus_WR_ERR_ID_Pos)  /* (GPU2DC_AQAxiStatus) WriteID Caused Illegal Accesses Mask */
#define GPU2DC_AQAxiStatus_WR_ERR_ID(value)   (GPU2DC_AQAxiStatus_WR_ERR_ID_Msk & (_UINT32_(value) << GPU2DC_AQAxiStatus_WR_ERR_ID_Pos)) /* Assigment of value for WR_ERR_ID in the GPU2DC_AQAxiStatus register */
#define GPU2DC_AQAxiStatus_RD_ERR_ID_Pos      _UINT32_(4)                                          /* (GPU2DC_AQAxiStatus) ReadID Caused Illegal Accesses Position */
#define GPU2DC_AQAxiStatus_RD_ERR_ID_Msk      (_UINT32_(0xF) << GPU2DC_AQAxiStatus_RD_ERR_ID_Pos)  /* (GPU2DC_AQAxiStatus) ReadID Caused Illegal Accesses Mask */
#define GPU2DC_AQAxiStatus_RD_ERR_ID(value)   (GPU2DC_AQAxiStatus_RD_ERR_ID_Msk & (_UINT32_(value) << GPU2DC_AQAxiStatus_RD_ERR_ID_Pos)) /* Assigment of value for RD_ERR_ID in the GPU2DC_AQAxiStatus register */
#define GPU2DC_AQAxiStatus_DET_WR_ERR_Pos     _UINT32_(8)                                          /* (GPU2DC_AQAxiStatus) Detect Write Error Position */
#define GPU2DC_AQAxiStatus_DET_WR_ERR_Msk     (_UINT32_(0x1) << GPU2DC_AQAxiStatus_DET_WR_ERR_Pos) /* (GPU2DC_AQAxiStatus) Detect Write Error Mask */
#define GPU2DC_AQAxiStatus_DET_WR_ERR(value)  (GPU2DC_AQAxiStatus_DET_WR_ERR_Msk & (_UINT32_(value) << GPU2DC_AQAxiStatus_DET_WR_ERR_Pos)) /* Assigment of value for DET_WR_ERR in the GPU2DC_AQAxiStatus register */
#define   GPU2DC_AQAxiStatus_DET_WR_ERR_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQAxiStatus) No error.  */
#define   GPU2DC_AQAxiStatus_DET_WR_ERR_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQAxiStatus) Error detected on write.  */
#define GPU2DC_AQAxiStatus_DET_WR_ERR_0       (GPU2DC_AQAxiStatus_DET_WR_ERR_0_Val << GPU2DC_AQAxiStatus_DET_WR_ERR_Pos) /* (GPU2DC_AQAxiStatus) No error. Position  */
#define GPU2DC_AQAxiStatus_DET_WR_ERR_1       (GPU2DC_AQAxiStatus_DET_WR_ERR_1_Val << GPU2DC_AQAxiStatus_DET_WR_ERR_Pos) /* (GPU2DC_AQAxiStatus) Error detected on write. Position  */
#define GPU2DC_AQAxiStatus_DET_RD_ERR_Pos     _UINT32_(9)                                          /* (GPU2DC_AQAxiStatus) Detect Read Error Position */
#define GPU2DC_AQAxiStatus_DET_RD_ERR_Msk     (_UINT32_(0x1) << GPU2DC_AQAxiStatus_DET_RD_ERR_Pos) /* (GPU2DC_AQAxiStatus) Detect Read Error Mask */
#define GPU2DC_AQAxiStatus_DET_RD_ERR(value)  (GPU2DC_AQAxiStatus_DET_RD_ERR_Msk & (_UINT32_(value) << GPU2DC_AQAxiStatus_DET_RD_ERR_Pos)) /* Assigment of value for DET_RD_ERR in the GPU2DC_AQAxiStatus register */
#define   GPU2DC_AQAxiStatus_DET_RD_ERR_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQAxiStatus) No error.  */
#define   GPU2DC_AQAxiStatus_DET_RD_ERR_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQAxiStatus) Error detected on read.  */
#define GPU2DC_AQAxiStatus_DET_RD_ERR_0       (GPU2DC_AQAxiStatus_DET_RD_ERR_0_Val << GPU2DC_AQAxiStatus_DET_RD_ERR_Pos) /* (GPU2DC_AQAxiStatus) No error. Position  */
#define GPU2DC_AQAxiStatus_DET_RD_ERR_1       (GPU2DC_AQAxiStatus_DET_RD_ERR_1_Val << GPU2DC_AQAxiStatus_DET_RD_ERR_Pos) /* (GPU2DC_AQAxiStatus) Error detected on read. Position  */
#define GPU2DC_AQAxiStatus_Msk                _UINT32_(0x000003FF)                                 /* (GPU2DC_AQAxiStatus) Register Mask  */


/* -------- GPU2DC_AQIntrAcknowledge : (GPU2DC Offset: 0x10) ( R/ 32) Interrupt Acknowledge Register -------- */
#define GPU2DC_AQIntrAcknowledge_RESETVALUE   _UINT32_(0x00)                                       /*  (GPU2DC_AQIntrAcknowledge) Interrupt Acknowledge Register  Reset Value */

#define GPU2DC_AQIntrAcknowledge_INTR_VEC_Pos _UINT32_(0)                                          /* (GPU2DC_AQIntrAcknowledge) Event ID from ID28 to ID0 Position */
#define GPU2DC_AQIntrAcknowledge_INTR_VEC_Msk (_UINT32_(0x1FFFFFFF) << GPU2DC_AQIntrAcknowledge_INTR_VEC_Pos) /* (GPU2DC_AQIntrAcknowledge) Event ID from ID28 to ID0 Mask */
#define GPU2DC_AQIntrAcknowledge_INTR_VEC(value) (GPU2DC_AQIntrAcknowledge_INTR_VEC_Msk & (_UINT32_(value) << GPU2DC_AQIntrAcknowledge_INTR_VEC_Pos)) /* Assigment of value for INTR_VEC in the GPU2DC_AQIntrAcknowledge register */
#define   GPU2DC_AQIntrAcknowledge_INTR_VEC_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQIntrAcknowledge) Event IDx is not active.  */
#define   GPU2DC_AQIntrAcknowledge_INTR_VEC_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQIntrAcknowledge) Event IDx is active  */
#define GPU2DC_AQIntrAcknowledge_INTR_VEC_0   (GPU2DC_AQIntrAcknowledge_INTR_VEC_0_Val << GPU2DC_AQIntrAcknowledge_INTR_VEC_Pos) /* (GPU2DC_AQIntrAcknowledge) Event IDx is not active. Position  */
#define GPU2DC_AQIntrAcknowledge_INTR_VEC_1   (GPU2DC_AQIntrAcknowledge_INTR_VEC_1_Val << GPU2DC_AQIntrAcknowledge_INTR_VEC_Pos) /* (GPU2DC_AQIntrAcknowledge) Event IDx is active Position  */
#define GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Pos _UINT32_(30)                                         /* (GPU2DC_AQIntrAcknowledge)  Position */
#define GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Msk (_UINT32_(0x1) << GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge)  Mask */
#define GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION(value) (GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Msk & (_UINT32_(value) << GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Pos)) /* Assigment of value for MMU_EXCEPTION in the GPU2DC_AQIntrAcknowledge register */
#define   GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQIntrAcknowledge) No MMU exception.  */
#define   GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQIntrAcknowledge) MMU exception.  */
#define GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_0 (GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_0_Val << GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge) No MMU exception. Position  */
#define GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_1 (GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_1_Val << GPU2DC_AQIntrAcknowledge_MMU_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge) MMU exception. Position  */
#define GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Pos _UINT32_(31)                                         /* (GPU2DC_AQIntrAcknowledge)  Position */
#define GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Msk (_UINT32_(0x1) << GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge)  Mask */
#define GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION(value) (GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Msk & (_UINT32_(value) << GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Pos)) /* Assigment of value for AXI_EXCEPTION in the GPU2DC_AQIntrAcknowledge register */
#define   GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQIntrAcknowledge) No AXI exception.  */
#define   GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQIntrAcknowledge) AXI exception.  */
#define GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_0 (GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_0_Val << GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge) No AXI exception. Position  */
#define GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_1 (GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_1_Val << GPU2DC_AQIntrAcknowledge_AXI_EXCEPTION_Pos) /* (GPU2DC_AQIntrAcknowledge) AXI exception. Position  */
#define GPU2DC_AQIntrAcknowledge_Msk          _UINT32_(0xDFFFFFFF)                                 /* (GPU2DC_AQIntrAcknowledge) Register Mask  */


/* -------- GPU2DC_AQIntrEnbl : (GPU2DC Offset: 0x14) (R/W 32) Interrupt Enable Register -------- */
#define GPU2DC_AQIntrEnbl_RESETVALUE          _UINT32_(0x00)                                       /*  (GPU2DC_AQIntrEnbl) Interrupt Enable Register  Reset Value */

#define GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Pos   _UINT32_(0)                                          /* (GPU2DC_AQIntrEnbl)  Position */
#define GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Msk   (_UINT32_(0x1FFFFFFF) << GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Pos) /* (GPU2DC_AQIntrEnbl)  Mask */
#define GPU2DC_AQIntrEnbl_INTR_ENBL_VEC(value) (GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Msk & (_UINT32_(value) << GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Pos)) /* Assigment of value for INTR_ENBL_VEC in the GPU2DC_AQIntrEnbl register */
#define   GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQIntrEnbl) Disables the interrupt for the corresponding event.  */
#define   GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQIntrEnbl) Enables the interrupt for the corresponding event.  */
#define GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_0     (GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_0_Val << GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Pos) /* (GPU2DC_AQIntrEnbl) Disables the interrupt for the corresponding event. Position  */
#define GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_1     (GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_1_Val << GPU2DC_AQIntrEnbl_INTR_ENBL_VEC_Pos) /* (GPU2DC_AQIntrEnbl) Enables the interrupt for the corresponding event. Position  */
#define GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL_Pos _UINT32_(30)                                         /* (GPU2DC_AQIntrEnbl) Interrupt Enable for an MMU Exception Position */
#define GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL_Msk (_UINT32_(0x1) << GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL_Pos) /* (GPU2DC_AQIntrEnbl) Interrupt Enable for an MMU Exception Mask */
#define GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL(value) (GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL_Msk & (_UINT32_(value) << GPU2DC_AQIntrEnbl_MMU_EXCEPTION_INTR_ENBL_Pos)) /* Assigment of value for MMU_EXCEPTION_INTR_ENBL in the GPU2DC_AQIntrEnbl register */
#define GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL_Pos _UINT32_(31)                                         /* (GPU2DC_AQIntrEnbl) Interrupt Enable for an AXI Exception Position */
#define GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL_Msk (_UINT32_(0x1) << GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL_Pos) /* (GPU2DC_AQIntrEnbl) Interrupt Enable for an AXI Exception Mask */
#define GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL(value) (GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL_Msk & (_UINT32_(value) << GPU2DC_AQIntrEnbl_AXI_EXCEPTION_INTR_ENBL_Pos)) /* Assigment of value for AXI_EXCEPTION_INTR_ENBL in the GPU2DC_AQIntrEnbl register */
#define GPU2DC_AQIntrEnbl_Msk                 _UINT32_(0xDFFFFFFF)                                 /* (GPU2DC_AQIntrEnbl) Register Mask  */


/* -------- GPU2DC_gcProductId : (GPU2DC Offset: 0xA8) ( R/ 32) Identification Register -------- */
#define GPU2DC_gcProductId_RESETVALUE         _UINT32_(0x5203)                                     /*  (GPU2DC_gcProductId) Identification Register  Reset Value */

#define GPU2DC_gcProductId_GRADE_LEVEL_Pos    _UINT32_(0)                                          /* (GPU2DC_gcProductId)  Position */
#define GPU2DC_gcProductId_GRADE_LEVEL_Msk    (_UINT32_(0xF) << GPU2DC_gcProductId_GRADE_LEVEL_Pos) /* (GPU2DC_gcProductId)  Mask */
#define GPU2DC_gcProductId_GRADE_LEVEL(value) (GPU2DC_gcProductId_GRADE_LEVEL_Msk & (_UINT32_(value) << GPU2DC_gcProductId_GRADE_LEVEL_Pos)) /* Assigment of value for GRADE_LEVEL in the GPU2DC_gcProductId register */
#define GPU2DC_gcProductId_NUM_Pos            _UINT32_(4)                                          /* (GPU2DC_gcProductId) Number Position */
#define GPU2DC_gcProductId_NUM_Msk            (_UINT32_(0xFFFFF) << GPU2DC_gcProductId_NUM_Pos)    /* (GPU2DC_gcProductId) Number Mask */
#define GPU2DC_gcProductId_NUM(value)         (GPU2DC_gcProductId_NUM_Msk & (_UINT32_(value) << GPU2DC_gcProductId_NUM_Pos)) /* Assigment of value for NUM in the GPU2DC_gcProductId register */
#define GPU2DC_gcProductId_TYPE_Pos           _UINT32_(24)                                         /* (GPU2DC_gcProductId)  Position */
#define GPU2DC_gcProductId_TYPE_Msk           (_UINT32_(0xF) << GPU2DC_gcProductId_TYPE_Pos)       /* (GPU2DC_gcProductId)  Mask */
#define GPU2DC_gcProductId_TYPE(value)        (GPU2DC_gcProductId_TYPE_Msk & (_UINT32_(value) << GPU2DC_gcProductId_TYPE_Pos)) /* Assigment of value for TYPE in the GPU2DC_gcProductId register */
#define   GPU2DC_gcProductId_TYPE_0_Val       _UINT32_(0x0)                                        /* (GPU2DC_gcProductId) 2D and 3D graphics cores.  */
#define GPU2DC_gcProductId_TYPE_0             (GPU2DC_gcProductId_TYPE_0_Val << GPU2DC_gcProductId_TYPE_Pos) /* (GPU2DC_gcProductId) 2D and 3D graphics cores. Position  */
#define GPU2DC_gcProductId_Msk                _UINT32_(0x0FFFFFFF)                                 /* (GPU2DC_gcProductId) Register Mask  */


/* -------- GPU2DC_gcModulePowerControls : (GPU2DC Offset: 0x100) (R/W 32) Module Power Control Register -------- */
#define GPU2DC_gcModulePowerControls_RESETVALUE _UINT32_(0x140020)                                   /*  (GPU2DC_gcModulePowerControls) Module Power Control Register  Reset Value */

#define GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Pos _UINT32_(0)                                          /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating Enable Position */
#define GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Msk (_UINT32_(0x1) << GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating Enable Mask */
#define GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING(value) (GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Msk & (_UINT32_(value) << GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Pos)) /* Assigment of value for ENABLE_MODULE_CLOCK_GATING in the GPU2DC_gcModulePowerControls register */
#define   GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_0_Val _UINT32_(0x0)                                        /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating.  */
#define   GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_1_Val _UINT32_(0x1)                                        /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating.  */
#define GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_0 (GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_0_Val << GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating. Position  */
#define GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_1 (GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_1_Val << GPU2DC_gcModulePowerControls_ENABLE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating. Position  */
#define GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Pos _UINT32_(1)                                          /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating for Stall Condition Disable Position */
#define GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Msk (_UINT32_(0x1) << GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating for Stall Condition Disable Mask */
#define GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING(value) (GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Msk & (_UINT32_(value) << GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Pos)) /* Assigment of value for DISABLE_STALL_MODULE_CLOCK_GATING in the GPU2DC_gcModulePowerControls register */
#define   GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_0_Val _UINT32_(0x0)                                        /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating for stall condition.  */
#define   GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_1_Val _UINT32_(0x1)                                        /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating for stall condition.  */
#define GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_0 (GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_0_Val << GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating for stall condition. Position  */
#define GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_1 (GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_1_Val << GPU2DC_gcModulePowerControls_DISABLE_STALL_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating for stall condition. Position  */
#define GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Pos _UINT32_(2)                                          /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating for Starve/Idle Condition Disable Position */
#define GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Msk (_UINT32_(0x1) << GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Module Level Clock Gating for Starve/Idle Condition Disable Mask */
#define GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING(value) (GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Msk & (_UINT32_(value) << GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Pos)) /* Assigment of value for DISABLE_STARVE_MODULE_CLOCK_GATING in the GPU2DC_gcModulePowerControls register */
#define   GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_0_Val _UINT32_(0x0)                                        /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating for starve/idle condition.  */
#define   GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_1_Val _UINT32_(0x1)                                        /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating for starve/idle condition.  */
#define GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_0 (GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_0_Val << GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Disables module-level clock gating for starve/idle condition. Position  */
#define GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_1 (GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_1_Val << GPU2DC_gcModulePowerControls_DISABLE_STARVE_MODULE_CLOCK_GATING_Pos) /* (GPU2DC_gcModulePowerControls) Enables module-level clock gating for starve/idle condition. Position  */
#define GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER_Pos _UINT32_(16)                                         /* (GPU2DC_gcModulePowerControls)  Position */
#define GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER_Msk (_UINT32_(0xFFFF) << GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER_Pos) /* (GPU2DC_gcModulePowerControls)  Mask */
#define GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER(value) (GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER_Msk & (_UINT32_(value) << GPU2DC_gcModulePowerControls_TURN_OFF_COUNTER_Pos)) /* Assigment of value for TURN_OFF_COUNTER in the GPU2DC_gcModulePowerControls register */
#define GPU2DC_gcModulePowerControls_Msk      _UINT32_(0xFFFF0007)                                 /* (GPU2DC_gcModulePowerControls) Register Mask  */


/* -------- GPU2DC_gcregMMUControl : (GPU2DC Offset: 0x18C) ( /W 32) MMU Control Register -------- */
#define GPU2DC_gcregMMUControl_RESETVALUE     _UINT32_(0x00)                                       /*  (GPU2DC_gcregMMUControl) MMU Control Register  Reset Value */

#define GPU2DC_gcregMMUControl_ENABLE_Pos     _UINT32_(0)                                          /* (GPU2DC_gcregMMUControl) MMU Enable Position */
#define GPU2DC_gcregMMUControl_ENABLE_Msk     (_UINT32_(0x1) << GPU2DC_gcregMMUControl_ENABLE_Pos) /* (GPU2DC_gcregMMUControl) MMU Enable Mask */
#define GPU2DC_gcregMMUControl_ENABLE(value)  (GPU2DC_gcregMMUControl_ENABLE_Msk & (_UINT32_(value) << GPU2DC_gcregMMUControl_ENABLE_Pos)) /* Assigment of value for ENABLE in the GPU2DC_gcregMMUControl register */
#define   GPU2DC_gcregMMUControl_ENABLE_0_Val _UINT32_(0x0)                                        /* (GPU2DC_gcregMMUControl) No change in functionality. MMU remains as is.  */
#define   GPU2DC_gcregMMUControl_ENABLE_1_Val _UINT32_(0x1)                                        /* (GPU2DC_gcregMMUControl) Enables the MMU. For security reasons, once the MMU has been enabled, it can be disabled only after a system reset.  */
#define GPU2DC_gcregMMUControl_ENABLE_0       (GPU2DC_gcregMMUControl_ENABLE_0_Val << GPU2DC_gcregMMUControl_ENABLE_Pos) /* (GPU2DC_gcregMMUControl) No change in functionality. MMU remains as is. Position  */
#define GPU2DC_gcregMMUControl_ENABLE_1       (GPU2DC_gcregMMUControl_ENABLE_1_Val << GPU2DC_gcregMMUControl_ENABLE_Pos) /* (GPU2DC_gcregMMUControl) Enables the MMU. For security reasons, once the MMU has been enabled, it can be disabled only after a system reset. Position  */
#define GPU2DC_gcregMMUControl_Msk            _UINT32_(0x00000001)                                 /* (GPU2DC_gcregMMUControl) Register Mask  */


/* -------- GPU2DC_AQMemoryDebug : (GPU2DC Offset: 0x414) (R/W 32) Memory Debug Register -------- */
#define GPU2DC_AQMemoryDebug_RESETVALUE       _UINT32_(0x3C000000)                                 /*  (GPU2DC_AQMemoryDebug) Memory Debug Register  Reset Value */

#define GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS_Pos _UINT32_(0)                                          /* (GPU2DC_AQMemoryDebug) Maximum Number of Pending Read Transactions Allowed Position */
#define GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS_Msk (_UINT32_(0xFF) << GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS_Pos) /* (GPU2DC_AQMemoryDebug) Maximum Number of Pending Read Transactions Allowed Mask */
#define GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS(value) (GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS_Msk & (_UINT32_(value) << GPU2DC_AQMemoryDebug_MAX_OUTSTANDING_READS_Pos)) /* Assigment of value for MAX_OUTSTANDING_READS in the GPU2DC_AQMemoryDebug register */
#define GPU2DC_AQMemoryDebug_Msk              _UINT32_(0x000000FF)                                 /* (GPU2DC_AQMemoryDebug) Register Mask  */


/* -------- GPU2DC_AQCmdBufferAddr : (GPU2DC Offset: 0x654) ( /W 32) Command Buffer Base Address Register -------- */
#define GPU2DC_AQCmdBufferAddr_RESETVALUE     _UINT32_(0x00)                                       /*  (GPU2DC_AQCmdBufferAddr) Command Buffer Base Address Register  Reset Value */

#define GPU2DC_AQCmdBufferAddr_ADDRESS_Pos    _UINT32_(0)                                          /* (GPU2DC_AQCmdBufferAddr) Base Address for the Command Buffer Position */
#define GPU2DC_AQCmdBufferAddr_ADDRESS_Msk    (_UINT32_(0x7FFFFFFF) << GPU2DC_AQCmdBufferAddr_ADDRESS_Pos) /* (GPU2DC_AQCmdBufferAddr) Base Address for the Command Buffer Mask */
#define GPU2DC_AQCmdBufferAddr_ADDRESS(value) (GPU2DC_AQCmdBufferAddr_ADDRESS_Msk & (_UINT32_(value) << GPU2DC_AQCmdBufferAddr_ADDRESS_Pos)) /* Assigment of value for ADDRESS in the GPU2DC_AQCmdBufferAddr register */
#define GPU2DC_AQCmdBufferAddr_TYPE_Pos       _UINT32_(31)                                         /* (GPU2DC_AQCmdBufferAddr) Type Position */
#define GPU2DC_AQCmdBufferAddr_TYPE_Msk       (_UINT32_(0x1) << GPU2DC_AQCmdBufferAddr_TYPE_Pos)   /* (GPU2DC_AQCmdBufferAddr) Type Mask */
#define GPU2DC_AQCmdBufferAddr_TYPE(value)    (GPU2DC_AQCmdBufferAddr_TYPE_Msk & (_UINT32_(value) << GPU2DC_AQCmdBufferAddr_TYPE_Pos)) /* Assigment of value for TYPE in the GPU2DC_AQCmdBufferAddr register */
#define   GPU2DC_AQCmdBufferAddr_TYPE_0_Val   _UINT32_(0x0)                                        /* (GPU2DC_AQCmdBufferAddr) System.  */
#define   GPU2DC_AQCmdBufferAddr_TYPE_1_Val   _UINT32_(0x1)                                        /* (GPU2DC_AQCmdBufferAddr) Virtual system.  */
#define GPU2DC_AQCmdBufferAddr_TYPE_0         (GPU2DC_AQCmdBufferAddr_TYPE_0_Val << GPU2DC_AQCmdBufferAddr_TYPE_Pos) /* (GPU2DC_AQCmdBufferAddr) System. Position  */
#define GPU2DC_AQCmdBufferAddr_TYPE_1         (GPU2DC_AQCmdBufferAddr_TYPE_1_Val << GPU2DC_AQCmdBufferAddr_TYPE_Pos) /* (GPU2DC_AQCmdBufferAddr) Virtual system. Position  */
#define GPU2DC_AQCmdBufferAddr_Msk            _UINT32_(0xFFFFFFFF)                                 /* (GPU2DC_AQCmdBufferAddr) Register Mask  */


/* -------- GPU2DC_AQCmdBufferCtrl : (GPU2DC Offset: 0x658) ( /W 32) Command Buffer Base Control Register -------- */
#define GPU2DC_AQCmdBufferCtrl_RESETVALUE     _UINT32_(0x00)                                       /*  (GPU2DC_AQCmdBufferCtrl) Command Buffer Base Control Register  Reset Value */

#define GPU2DC_AQCmdBufferCtrl_PREFETCH_Pos   _UINT32_(0)                                          /* (GPU2DC_AQCmdBufferCtrl)  Position */
#define GPU2DC_AQCmdBufferCtrl_PREFETCH_Msk   (_UINT32_(0xFFFF) << GPU2DC_AQCmdBufferCtrl_PREFETCH_Pos) /* (GPU2DC_AQCmdBufferCtrl)  Mask */
#define GPU2DC_AQCmdBufferCtrl_PREFETCH(value) (GPU2DC_AQCmdBufferCtrl_PREFETCH_Msk & (_UINT32_(value) << GPU2DC_AQCmdBufferCtrl_PREFETCH_Pos)) /* Assigment of value for PREFETCH in the GPU2DC_AQCmdBufferCtrl register */
#define GPU2DC_AQCmdBufferCtrl_ENABLE_Pos     _UINT32_(16)                                         /* (GPU2DC_AQCmdBufferCtrl) Command Parser Enable Position */
#define GPU2DC_AQCmdBufferCtrl_ENABLE_Msk     (_UINT32_(0x1) << GPU2DC_AQCmdBufferCtrl_ENABLE_Pos) /* (GPU2DC_AQCmdBufferCtrl) Command Parser Enable Mask */
#define GPU2DC_AQCmdBufferCtrl_ENABLE(value)  (GPU2DC_AQCmdBufferCtrl_ENABLE_Msk & (_UINT32_(value) << GPU2DC_AQCmdBufferCtrl_ENABLE_Pos)) /* Assigment of value for ENABLE in the GPU2DC_AQCmdBufferCtrl register */
#define   GPU2DC_AQCmdBufferCtrl_ENABLE_0_Val _UINT32_(0x0)                                        /* (GPU2DC_AQCmdBufferCtrl) Disables the command parser.  */
#define   GPU2DC_AQCmdBufferCtrl_ENABLE_1_Val _UINT32_(0x1)                                        /* (GPU2DC_AQCmdBufferCtrl) Enables the command parser.  */
#define GPU2DC_AQCmdBufferCtrl_ENABLE_0       (GPU2DC_AQCmdBufferCtrl_ENABLE_0_Val << GPU2DC_AQCmdBufferCtrl_ENABLE_Pos) /* (GPU2DC_AQCmdBufferCtrl) Disables the command parser. Position  */
#define GPU2DC_AQCmdBufferCtrl_ENABLE_1       (GPU2DC_AQCmdBufferCtrl_ENABLE_1_Val << GPU2DC_AQCmdBufferCtrl_ENABLE_Pos) /* (GPU2DC_AQCmdBufferCtrl) Enables the command parser. Position  */
#define GPU2DC_AQCmdBufferCtrl_Msk            _UINT32_(0x0001FFFF)                                 /* (GPU2DC_AQCmdBufferCtrl) Register Mask  */


/* -------- GPU2DC_AQFEDebugCurCmdAdr : (GPU2DC Offset: 0x664) ( R/ 32) Fetch Engine Debug Current Command Address Register -------- */
#define GPU2DC_AQFEDebugCurCmdAdr_RESETVALUE  _UINT32_(0x00)                                       /*  (GPU2DC_AQFEDebugCurCmdAdr) Fetch Engine Debug Current Command Address Register  Reset Value */

#define GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR_Pos _UINT32_(3)                                          /* (GPU2DC_AQFEDebugCurCmdAdr) Current Command Address Position */
#define GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR_Msk (_UINT32_(0x1FFFFFFF) << GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR_Pos) /* (GPU2DC_AQFEDebugCurCmdAdr) Current Command Address Mask */
#define GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR(value) (GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR_Msk & (_UINT32_(value) << GPU2DC_AQFEDebugCurCmdAdr_CUR_CMD_ADR_Pos)) /* Assigment of value for CUR_CMD_ADR in the GPU2DC_AQFEDebugCurCmdAdr register */
#define GPU2DC_AQFEDebugCurCmdAdr_Msk         _UINT32_(0xFFFFFFF8)                                 /* (GPU2DC_AQFEDebugCurCmdAdr) Register Mask  */


/** \brief GPU2DC register offsets definitions */
#define GPU2DC_AQHiClockControl_REG_OFST _UINT32_(0x00)      /* (GPU2DC_AQHiClockControl) Clock Control Register Offset */
#define GPU2DC_AQHiIdle_REG_OFST       _UINT32_(0x04)      /* (GPU2DC_AQHiIdle) Idle Status Register Offset */
#define GPU2DC_AQAxiConfig_REG_OFST    _UINT32_(0x08)      /* (GPU2DC_AQAxiConfig) AXI Configuration Register Offset */
#define GPU2DC_AQAxiStatus_REG_OFST    _UINT32_(0x0C)      /* (GPU2DC_AQAxiStatus) AXI Status Register Offset */
#define GPU2DC_AQIntrAcknowledge_REG_OFST _UINT32_(0x10)      /* (GPU2DC_AQIntrAcknowledge) Interrupt Acknowledge Register Offset */
#define GPU2DC_AQIntrEnbl_REG_OFST     _UINT32_(0x14)      /* (GPU2DC_AQIntrEnbl) Interrupt Enable Register Offset */
#define GPU2DC_gcProductId_REG_OFST    _UINT32_(0xA8)      /* (GPU2DC_gcProductId) Identification Register Offset */
#define GPU2DC_gcModulePowerControls_REG_OFST _UINT32_(0x100)     /* (GPU2DC_gcModulePowerControls) Module Power Control Register Offset */
#define GPU2DC_gcregMMUControl_REG_OFST _UINT32_(0x18C)     /* (GPU2DC_gcregMMUControl) MMU Control Register Offset */
#define GPU2DC_AQMemoryDebug_REG_OFST  _UINT32_(0x414)     /* (GPU2DC_AQMemoryDebug) Memory Debug Register Offset */
#define GPU2DC_AQCmdBufferAddr_REG_OFST _UINT32_(0x654)     /* (GPU2DC_AQCmdBufferAddr) Command Buffer Base Address Register Offset */
#define GPU2DC_AQCmdBufferCtrl_REG_OFST _UINT32_(0x658)     /* (GPU2DC_AQCmdBufferCtrl) Command Buffer Base Control Register Offset */
#define GPU2DC_AQFEDebugCurCmdAdr_REG_OFST _UINT32_(0x664)     /* (GPU2DC_AQFEDebugCurCmdAdr) Fetch Engine Debug Current Command Address Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPU2DC register API structure */
typedef struct
{  /* GPU 2D Controller */
  __IO  uint32_t                       GPU2DC_AQHiClockControl; /**< Offset: 0x00 (R/W  32) Clock Control Register */
  __I   uint32_t                       GPU2DC_AQHiIdle;    /**< Offset: 0x04 (R/   32) Idle Status Register */
  __IO  uint32_t                       GPU2DC_AQAxiConfig; /**< Offset: 0x08 (R/W  32) AXI Configuration Register */
  __I   uint32_t                       GPU2DC_AQAxiStatus; /**< Offset: 0x0C (R/   32) AXI Status Register */
  __I   uint32_t                       GPU2DC_AQIntrAcknowledge; /**< Offset: 0x10 (R/   32) Interrupt Acknowledge Register */
  __IO  uint32_t                       GPU2DC_AQIntrEnbl;  /**< Offset: 0x14 (R/W  32) Interrupt Enable Register */
  __I   uint8_t                        Reserved1[0x90];
  __I   uint32_t                       GPU2DC_gcProductId; /**< Offset: 0xA8 (R/   32) Identification Register */
  __I   uint8_t                        Reserved2[0x54];
  __IO  uint32_t                       GPU2DC_gcModulePowerControls; /**< Offset: 0x100 (R/W  32) Module Power Control Register */
  __I   uint8_t                        Reserved3[0x88];
  __O   uint32_t                       GPU2DC_gcregMMUControl; /**< Offset: 0x18C ( /W  32) MMU Control Register */
  __I   uint8_t                        Reserved4[0x284];
  __IO  uint32_t                       GPU2DC_AQMemoryDebug; /**< Offset: 0x414 (R/W  32) Memory Debug Register */
  __I   uint8_t                        Reserved5[0x23C];
  __O   uint32_t                       GPU2DC_AQCmdBufferAddr; /**< Offset: 0x654 ( /W  32) Command Buffer Base Address Register */
  __O   uint32_t                       GPU2DC_AQCmdBufferCtrl; /**< Offset: 0x658 ( /W  32) Command Buffer Base Control Register */
  __I   uint8_t                        Reserved6[0x08];
  __I   uint32_t                       GPU2DC_AQFEDebugCurCmdAdr; /**< Offset: 0x664 (R/   32) Fetch Engine Debug Current Command Address Register */
} gpu2dc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_GPU2DC_COMPONENT_H_ */
