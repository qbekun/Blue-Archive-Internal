#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_HASPHASECOMPLETE_OFFSET UNITYSDK_OFFSET(0xFEEE10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ISEROSIONPHASESTART_OFFSET UNITYSDK_OFFSET(0xFEEE20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_CONQUEREDTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEE30)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_EROSIONREMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEE40)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_CONQUEREDTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEE50)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_HASPHASECOMPLETE_OFFSET UNITYSDK_OFFSET(0xFEEE60)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_EROSIONREMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0xFEEE70)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ISSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xFEEE80)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ISEROSIONPHASESTART_OFFSET UNITYSDK_OFFSET(0xFEEE90)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEEA0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ALLTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEEB0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ALLTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEEC0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ISSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xFEEED0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestStepSummary_TypeDefinitionIndex = 12541;

	class ConquestStepSummary : public Il2CppObject
	{
	public:
		::System::Int64 _ConqueredTileCount_k__BackingField; // 0x10
		::System::Int64 _AllTileCount_k__BackingField; // 0x18
		::System::Int64 _ErosionRemainingCount_k__BackingField; // 0x20
		::System::Boolean _HasPhaseComplete_k__BackingField; // 0x28
		::System::Boolean _IsErosionPhaseStart_k__BackingField; // 0x29
		::System::Boolean _IsStepOpen_k__BackingField; // 0x2A

		::System::Boolean get_HasPhaseComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_HASPHASECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_IsErosionPhaseStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ISEROSIONPHASESTART_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConqueredTileCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_CONQUEREDTILECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ErosionRemainingCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_EROSIONREMAININGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConqueredTileCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_CONQUEREDTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasPhaseComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_HASPHASECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ErosionRemainingCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_EROSIONREMAININGCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStepOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ISSTEPOPEN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsErosionPhaseStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ISEROSIONPHASESTART_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_AllTileCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_GET_ALLTILECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AllTileCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ALLTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsStepOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTEPSUMMARY_SET_ISSTEPOPEN_OFFSET))(arg, nullptr);
		}

	};
}

