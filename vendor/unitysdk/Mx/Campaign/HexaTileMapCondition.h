#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileMapConditionType; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_TURN_OFFSET UNITYSDK_OFFSET(0x14383B0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_UNITID_OFFSET UNITYSDK_OFFSET(0x14383C0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_UNITID_OFFSET UNITYSDK_OFFSET(0x14383D0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_2_OFFSET UNITYSDK_OFFSET(0x14383E0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_TURN_OFFSET UNITYSDK_OFFSET(0x1438430)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1438440)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_1_OFFSET UNITYSDK_OFFSET(0x1438460)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x14384B0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_3_OFFSET UNITYSDK_OFFSET(0x14384C0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_COMMANDLIST_OFFSET UNITYSDK_OFFSET(0x1438580)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1438590)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_COMMANDLIST_OFFSET UNITYSDK_OFFSET(0x14385A0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x14385B0)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x1438630)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1438870)
#define MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_0_OFFSET UNITYSDK_OFFSET(0x1438880)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileMapCondition_TypeDefinitionIndex = 14895;

	class HexaTileMapCondition : public Il2CppObject
	{
	public:
		::System::Int64 Id; // 0x10
		::MX::Campaign::HexaTileMapConditionType* _ConditionType_k__BackingField; // 0x18
		::System::Int64 _Turn_k__BackingField; // 0x20
		::System::Int64 _UnitId_k__BackingField; // 0x28
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x30
		Il2CppObject* _CommandList_k__BackingField; // 0x40

		::System::Int64 get_Turn()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_TURN_OFFSET))(nullptr);
		}

		::System::Void set_UnitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_UNITID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UnitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_UNITID_OFFSET))(nullptr);
		}

		::System::Boolean _Check_b__22_2(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_2_OFFSET))(arg, nullptr);
		}

		::System::Void set_Turn(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_TURN_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Boolean _Check_b__22_1(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_1_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapConditionType* get_ConditionType()
		{
			return ((::MX::Campaign::HexaTileMapConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean _Check_b__22_3(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_3_OFFSET))(arg, nullptr);
		}

		::System::Void set_CommandList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_COMMANDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CommandList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_GET_COMMANDLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_CHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ConditionType(::MX::Campaign::HexaTileMapConditionType* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION_SET_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Check_b__22_0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPCONDITION__CHECK_B__22_0_OFFSET))(arg, nullptr);
		}

	};
}

