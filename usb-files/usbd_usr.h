/**
  ******************************************************************************
  * @file    usbd_usr.h
  * @author  MCD Application Team
  * @version V1.1.0
  * @date    19-March-2012
  * @brief   Header file for usbd_usr.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */ 
/**
  *******************************************************************************
  * <h2><center>&copy; Portions COPYRIGHT 2012 Embest Tech. Co., Ltd.</center></h2>
  * @file    usbd_usr.h 
  * @author  CMP Team
  * @version V1.0.0
  * @date    28-December-2012
  * @brief   Header file for usbd_usr.c
  *          Modified to support the STM32F4DISCOVERY, STM32F4DIS-BB and 
  *          STM32F4DIS-LCD modules. 
  *******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, Embest SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
  * OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE CONTENT
  * OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING INFORMATION
  * CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_USR_H__
#define __USBD_USR_H__

/* Includes ------------------------------------------------------------------*/
#include "usbd_core.h"


/** @addtogroup USBD_USER
  * @{
  */

/** @addtogroup USBD_MSC_DEMO_USER_CALLBACKS
  * @{
  */

/** @defgroup USBD_USR
  * @brief This file is the Header file for usbd_usr.c
  * @{
  */ 


/** @defgroup USBD_USR_Exported_Types
  * @{
  */ 

extern  USBD_Usr_cb_TypeDef USR_cb;
extern  USBD_Usr_cb_TypeDef USR_FS_cb;
extern  USBD_Usr_cb_TypeDef USR_HS_cb;



/**
  * @}
  */ 



/** @defgroup USBD_USR_Exported_Defines
  * @{
  */ 

/**
  * @}
  */ 

/** @defgroup USBD_USR_Exported_Macros
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup USBD_USR_Exported_Variables
  * @{
  */ 

void     USBD_USR_Init(void);
void     USBD_USR_DeviceReset (uint8_t speed);
void     USBD_USR_DeviceConfigured (void);
void     USBD_USR_DeviceSuspended(void);
void     USBD_USR_DeviceResumed(void);

void     USBD_USR_DeviceConnected(void);
void     USBD_USR_DeviceDisconnected(void); 

void     USBD_USR_FS_Init(void);
void     USBD_USR_FS_DeviceReset (uint8_t speed);
void     USBD_USR_FS_DeviceConfigured (void);
void     USBD_USR_FS_DeviceSuspended(void);
void     USBD_USR_FS_DeviceResumed(void);

void     USBD_USR_FS_DeviceConnected(void);
void     USBD_USR_FS_DeviceDisconnected(void);  

void     USBD_USR_HS_Init(void);
void     USBD_USR_HS_DeviceReset (uint8_t speed);
void     USBD_USR_HS_DeviceConfigured (void);
void     USBD_USR_HS_DeviceSuspended(void);
void     USBD_USR_HS_DeviceResumed(void);

void     USBD_USR_HS_DeviceConnected(void);
void     USBD_USR_HS_DeviceDisconnected(void);  

/**
  * @}
  */ 

/** @defgroup USBD_USR_Exported_FunctionsPrototype
  * @{
  */ 
/**
  * @}
  */ 

#endif /*__USBD_USR_H__*/

/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */ 

/******* Portions COPYRIGHT 2012 Embest Tech. Co., Ltd.*****END OF FILE****/




