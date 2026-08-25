#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F75030)
#define EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F75040)
#define EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F75050)
#define EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F75060)
#define EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F75070)

	inline static constexpr unsigned int EventContentSubStageResultResponseMessage_TypeDefinitionIndex = 2537;

	class EventContentSubStageResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x20
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x28

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

