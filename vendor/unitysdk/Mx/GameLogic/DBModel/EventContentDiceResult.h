#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xFFD9C0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xFFD9D0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xFFD9E0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFD9F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_MOVEAMOUNT_OFFSET UNITYSDK_OFFSET(0xFFDA00)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_MOVEAMOUNT_OFFSET UNITYSDK_OFFSET(0xFFDA10)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xFFDA20)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentDiceResult_TypeDefinitionIndex = 12610;

	class EventContentDiceResult : public Il2CppObject
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Int32 _MoveAmount_k__BackingField; // 0x14
		Il2CppObject* _Rewards_k__BackingField; // 0x18

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_INDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MoveAmount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_MOVEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MoveAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_GET_MOVEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTDICERESULT_SET_REWARDS_OFFSET))(arg, nullptr);
		}

	};
}

