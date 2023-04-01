#pragma once
/******************************************************************************/
/* File   : ServiceIpduM.hpp                                                  */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceIpduM_ServiceNvM_Types.hpp"
#include "CfgServiceIpduM.hpp"
#include "ServiceIpduM_core.hpp"
#include "infServiceIpduM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceIpduM:
      INTERFACES_EXPORTED_SERVICEIPDUM
      public abstract_module
   ,  public class_ServiceIpduM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceIpduM_Up;
      infServicePduRClient_Lo infServicePduRClient_ServiceIpduM_Lo;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEIPDUM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEIPDUM_CONST,       SERVICEIPDUM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEIPDUM_CONFIG_DATA, SERVICEIPDUM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEIPDUM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEIPDUM_CODE) MainFunction   (void);
      SERVICEIPDUM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceIpduM, SERVICEIPDUM_VAR) ServiceIpduM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

