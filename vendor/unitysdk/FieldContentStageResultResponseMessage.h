#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1D1CFE0)
#define FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1D1CFF0)
#define FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1D1D000)
#define FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D010)
#define FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1D1D060)

	inline static constexpr unsigned int FieldContentStageResultResponseMessage_TypeDefinitionIndex = 1658;

	class FieldContentStageResultResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x20
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x28

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_GET_REWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTSTAGERESULTRESPONSEMESSAGE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

	};

