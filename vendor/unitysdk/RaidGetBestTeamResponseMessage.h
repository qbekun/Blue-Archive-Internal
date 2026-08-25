#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidGetBestTeamResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDGETBESTTEAMRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8E6D0)
#define RAIDGETBESTTEAMRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E380)

	inline static constexpr unsigned int RaidGetBestTeamResponseMessage_TypeDefinitionIndex = 2698;

	class RaidGetBestTeamResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidGetBestTeamResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::RaidGetBestTeamResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidGetBestTeamResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidGetBestTeamResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidGetBestTeamResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

