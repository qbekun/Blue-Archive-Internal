#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDSEASONREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F92160)
#define RAIDSEASONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F92170)
#define RAIDSEASONREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F921B0)

	inline static constexpr unsigned int RaidSeasonRewardResponseMessage_TypeDefinitionIndex = 2724;

	class RaidSeasonRewardResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

	};

