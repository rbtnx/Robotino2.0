///////////////////////////////////////////////////////////////////////////////
// irSensorsServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_irSensors = 0x3F000000;
#define SRVNAME_IRSENSORS "irSensors"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_irSensorsCupdateIrSensors = {0x5d28b13f,0xf115,0x42c2,{0xb2,0x85,0x78,0x48,0x32,0x1a,0xf1,0x3c}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_updateIrSensorsParameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _updateIrSensorsParameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} updateIrSensorsParameter, *PupdateIrSensorsParameter;

typedef struct _updateIrSensorsInputs
{
	SHORT irInputData[9];
} updateIrSensorsInputs, *PupdateIrSensorsInputs;

typedef struct _updateIrSensorsOutputs
{
	double irDistance[9];
} updateIrSensorsOutputs, *PupdateIrSensorsOutputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_updateIrSensorsInputs 0
#define ADI_updateIrSensorsOutputs 1
///</AutoGeneratedContent>