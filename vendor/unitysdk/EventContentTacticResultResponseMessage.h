#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F75A90)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F75AA0)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F75B00)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_TACTICRANK_OFFSET UNITYSDK_OFFSET(0x1F75B10)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F75B20)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1F75B30)
#define EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_TACTICRANK_OFFSET UNITYSDK_OFFSET(0x1F75B40)

	inline static constexpr unsigned int EventContentTacticResultResponseMessage_TypeDefinitionIndex = 2540;

	class EventContentTacticResultResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _TacticRank_k__BackingField; // 0x20
		Il2CppObject* _Rewards_k__BackingField; // 0x28
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x30

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TacticRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_TACTICRANK_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_TacticRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTRESPONSEMESSAGE_SET_TACTICRANK_OFFSET))(arg, nullptr);
		}

	};

