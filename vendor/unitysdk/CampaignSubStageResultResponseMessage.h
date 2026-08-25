#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F1C840)
#define CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F1C850)
#define CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C860)
#define CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F1C8B0)
#define CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F1C8C0)

	inline static constexpr unsigned int CampaignSubStageResultResponseMessage_TypeDefinitionIndex = 2105;

	class CampaignSubStageResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x20
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x28

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

	};

