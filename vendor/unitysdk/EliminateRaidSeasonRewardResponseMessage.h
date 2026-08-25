#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E5A0)
#define ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F5E840)
#define ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F5E850)

	inline static constexpr unsigned int EliminateRaidSeasonRewardResponseMessage_TypeDefinitionIndex = 2380;

	class EliminateRaidSeasonRewardResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSEASONREWARDRESPONSEMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

	};

