#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_CONQUEREDTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEF50)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEF60)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_CONQUEREDTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEF70)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_ISSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xFEEF80)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_ISSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xFEEF90)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_ALLTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEFA0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_ALLTILECOUNT_OFFSET UNITYSDK_OFFSET(0xFEEFB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestMainStoryStepSummary_TypeDefinitionIndex = 12543;

	class ConquestMainStoryStepSummary : public Il2CppObject
	{
	public:
		::System::Int64 _ConqueredTileCount_k__BackingField; // 0x10
		::System::Int64 _AllTileCount_k__BackingField; // 0x18
		::System::Boolean _IsStepOpen_k__BackingField; // 0x20

		::System::Int64 get_ConqueredTileCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_CONQUEREDTILECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConqueredTileCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_CONQUEREDTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsStepOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_ISSTEPOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsStepOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_ISSTEPOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void set_AllTileCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_SET_ALLTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AllTileCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSTEPSUMMARY_GET_ALLTILECOUNT_OFFSET))(nullptr);
		}

	};
}

