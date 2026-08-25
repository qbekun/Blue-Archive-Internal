#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstStrategyExcel; }
namespace FlatData { class CurrencyTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONSTSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2AF00)
#define FLATDATA_CONSTSTRATEGYEXCEL_GETROOTASCONSTSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0xD2AF10)
#define FLATDATA_CONSTSTRATEGYEXCEL_GETROOTASCONSTSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0xD2AF70)
#define FLATDATA_CONSTSTRATEGYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD2AFD0)
#define FLATDATA_CONSTSTRATEGYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2AC20)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPBOUNDARYOFFSET_OFFSET UNITYSDK_OFFSET(0xD2AFF0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPBOUNDARYOFFSET_OFFSET UNITYSDK_OFFSET(0xD2B040)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPSTARTCAMERAOFFSET_OFFSET UNITYSDK_OFFSET(0xD2B0C0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPSTARTCAMERAOFFSET_OFFSET UNITYSDK_OFFSET(0xD2B110)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD2B190)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD2B1E0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD2B260)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD2B2B0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD2B330)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD2B380)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD2B400)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD2B450)
#define FLATDATA_CONSTSTRATEGYEXCEL_HEALCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2B4D0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2B530)
#define FLATDATA_CONSTSTRATEGYEXCEL_HEALCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2B570)
#define FLATDATA_CONSTSTRATEGYEXCEL_GETHEALCOSTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD2B600)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CANHEALHPRATE_OFFSET UNITYSDK_OFFSET(0xD2B620)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CANHEALHPRATE_OFFSET UNITYSDK_OFFSET(0xD2B670)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD2B6F0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD2B740)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_ADVENTUREECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B7C0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_ADVENTUREECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B810)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_RAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B890)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_RAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B8E0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_DEFAULTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B960)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_DEFAULTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2B9B0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_EVENTCONTENTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BA30)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_EVENTCONTENTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BA80)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TIMEATTACKDUNGEONECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BB00)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TIMEATTACKDUNGEONECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BB50)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_WORLDRAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BBD0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_WORLDRAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BC20)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPCLEARTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xD2BCA0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPCLEARTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xD2BCF0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPFRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xD2BD70)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPFRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xD2BDC0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CONQUESTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BE40)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_CONQUESTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BE90)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_STORYECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BF10)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_STORYECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BF60)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0xD2BFE0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C030)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTH_OFFSET UNITYSDK_OFFSET(0xD2C0B0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTH_OFFSET UNITYSDK_OFFSET(0xD2C100)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET UNITYSDK_OFFSET(0xD2C180)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET UNITYSDK_OFFSET(0xD2C1D0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C250)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C2A0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C320)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C370)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C3F0)
#define FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C440)
#define FLATDATA_CONSTSTRATEGYEXCEL_CREATECONSTSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0xD2C4C0)
#define FLATDATA_CONSTSTRATEGYEXCEL_STARTCONSTSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0xD2CE30)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDHEXAMAPBOUNDARYOFFSET_OFFSET UNITYSDK_OFFSET(0xD2CDB0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDHEXAMAPSTARTCAMERAOFFSET_OFFSET UNITYSDK_OFFSET(0xD2CD80)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD2CD50)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD2CD20)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD2CCF0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDHEALCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD2CCC0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDHEALCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2CC90)
#define FLATDATA_CONSTSTRATEGYEXCEL_CREATEHEALCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2CE50)
#define FLATDATA_CONSTSTRATEGYEXCEL_STARTHEALCOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2CEE0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDCANHEALHPRATE_OFFSET UNITYSDK_OFFSET(0xD2CC60)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD2C930)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDADVENTUREECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CC30)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDRAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CC00)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDDEFAULTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CBD0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDEVENTCONTENTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CBA0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDTIMEATTACKDUNGEONECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CB70)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDWORLDRAIDECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CB40)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDTACTICSKIPCLEARTIMESECONDS_OFFSET UNITYSDK_OFFSET(0xD2CB10)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDTACTICSKIPFRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xD2CAE0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDCONQUESTECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CAB0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDSTORYECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CA80)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0xD2CA50)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETNAMEMAXLENGTH_OFFSET UNITYSDK_OFFSET(0xD2CA20)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET UNITYSDK_OFFSET(0xD2C9F0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C9C0)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C990)
#define FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD2C960)
#define FLATDATA_CONSTSTRATEGYEXCEL_ENDCONSTSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0xD2CDE0)

namespace FlatData
{
	inline static constexpr unsigned int ConstStrategyExcel_TypeDefinitionIndex = 9237;

	class ConstStrategyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstStrategyExcel* GetRootAsConstStrategyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GETROOTASCONSTSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstStrategyExcel* GetRootAsConstStrategyExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstStrategyExcel* arg2)
		{
			return ((::FlatData::ConstStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstStrategyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GETROOTASCONSTSTRATEGYEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstStrategyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstStrategyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_hexaMapBoundaryOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPBOUNDARYOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_HexaMapBoundaryOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPBOUNDARYOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_hexaMapStartCameraOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPSTARTCAMERAOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_HexaMapStartCameraOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEXAMAPSTARTCAMERAOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_healCostType()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTTYPE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_HealCostType()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 healCostAmount(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_HEALCOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HealCostAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_HEALCOSTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 HealCostAmount(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_HEALCOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetHealCostAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GETHEALCOSTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_canHealHpRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CANHEALHPRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_CanHealHpRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CANHEALHPRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_playTimeLimitInSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayTimeLimitInSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_adventureEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_ADVENTUREECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_AdventureEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_ADVENTUREECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_raidEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_RAIDECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_RAIDECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_defaultEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_DEFAULTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_DEFAULTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_eventContentEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_EVENTCONTENTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_EventContentEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_EVENTCONTENTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_timeAttackDungeonEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TIMEATTACKDUNGEONECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TimeAttackDungeonEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TIMEATTACKDUNGEONECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_worldRaidEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_WORLDRAIDECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_WorldRaidEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_WORLDRAIDECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_tacticSkipClearTimeSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPCLEARTIMESECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_TacticSkipClearTimeSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPCLEARTIMESECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_tacticSkipFramePerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPFRAMEPERSECOND_OFFSET))(nullptr);
		}

		::System::Int32 get_TacticSkipFramePerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_TACTICSKIPFRAMEPERSECOND_OFFSET))(nullptr);
		}

		::System::Int32 get_conquestEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CONQUESTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ConquestEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_CONQUESTECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_storyEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_STORYECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StoryEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_STORYECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetNameMaxLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetNameMaxLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetNameMaxLengthKr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetNameMaxLengthKr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetSelectStageMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetSelectStageMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetMaxSweepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetMaxSweepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_multiSweepPresetSelectParcelMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MultiSweepPresetSelectParcelMaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_GET_MULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::FlatData::CurrencyTypes* arg7, ::FlatBuffers::VectorOffset* arg8, ::System::Int32 arg9, ::System::Int64 arg10, ::System::Int32 arg11, ::System::Int32 arg12, ::System::Int32 arg13, ::System::Int32 arg14, ::System::Int32 arg15, ::System::Int32 arg16, ::System::Int32 arg17, ::System::Int32 arg18, ::System::Int32 arg19, ::System::Int32 arg20, ::System::Int32 arg21, ::System::Int32 arg22, ::System::Int32 arg23, ::System::Int32 arg24, ::System::Int32 arg25, ::System::Int32 arg26)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::FlatData::CurrencyTypes*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_CREATECONSTSTRATEGYEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, nullptr);
		}

		::System::Void StartConstStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_STARTCONSTSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddHexaMapBoundaryOffset(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDHEXAMAPBOUNDARYOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHexaMapStartCameraOffset(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDHEXAMAPSTARTCAMERAOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHealCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyTypes* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDHEALCOSTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHealCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDHEALCOSTAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHealCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_CREATEHEALCOSTAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartHealCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_STARTHEALCOSTAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCanHealHpRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDCANHEALHPRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAdventureEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDADVENTUREECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRaidEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDRAIDECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDefaultEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDDEFAULTECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEventContentEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDEVENTCONTENTECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTimeAttackDungeonEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDTIMEATTACKDUNGEONECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddWorldRaidEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDWORLDRAIDECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTacticSkipClearTimeSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDTACTICSKIPCLEARTIMESECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTacticSkipFramePerSecond(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDTACTICSKIPFRAMEPERSECOND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDCONQUESTECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStoryEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDSTORYECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetNameMaxLength(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETNAMEMAXLENGTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetNameMaxLengthKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETNAMEMAXLENGTHKR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetSelectStageMaxCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETSELECTSTAGEMAXCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetMaxSweepCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETMAXSWEEPCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiSweepPresetSelectParcelMaxCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ADDMULTISWEEPPRESETSELECTPARCELMAXCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTSTRATEGYEXCEL_ENDCONSTSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

