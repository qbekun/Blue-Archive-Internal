#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_ISRECEIVEDCHARACTERREWARD_OFFSET UNITYSDK_OFFSET(0xFFDB70)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFDB80)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_ISSTAGEALLCLEAR_OFFSET UNITYSDK_OFFSET(0xFFDB90)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_ISSTAGEALLCLEAR_OFFSET UNITYSDK_OFFSET(0xFFDBA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_ISRECEIVEDCHARACTERREWARD_OFFSET UNITYSDK_OFFSET(0xFFDBB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFDBC0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFDBD0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentPermanentDB_TypeDefinitionIndex = 12613;

	class EventContentPermanentDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Boolean _IsStageAllClear_k__BackingField; // 0x18
		::System::Boolean _IsReceivedCharacterReward_k__BackingField; // 0x19

		::System::Boolean get_IsReceivedCharacterReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_ISRECEIVEDCHARACTERREWARD_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsStageAllClear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_ISSTAGEALLCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsStageAllClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_ISSTAGEALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void set_IsReceivedCharacterReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_SET_ISRECEIVEDCHARACTERREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTPERMANENTDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

