#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidGetBestTeamResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5C2A0)
#define ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_GET_BOSSGROUPTORANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F5C2B0)
#define ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BF70)
#define ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_SET_BOSSGROUPTORANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F5C2C0)

	inline static constexpr unsigned int EliminateRaidGetBestTeamResponseMessage_TypeDefinitionIndex = 2365;

	class EliminateRaidGetBestTeamResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse* _Response_k__BackingField; // 0x20
		Il2CppObject* _BossGroupToRankingPoint_k__BackingField; // 0x28

		::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossGroupToRankingPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_GET_BOSSGROUPTORANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidGetBestTeamResponse*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_BossGroupToRankingPoint(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMRESPONSEMESSAGE_SET_BOSSGROUPTORANKINGPOINT_OFFSET))(arg, nullptr);
		}

	};

