#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidLobbyResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F870)
#define RAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8FBD0)

	inline static constexpr unsigned int RaidLobbyResponseMessage_TypeDefinitionIndex = 2707;

	class RaidLobbyResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidLobbyResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidLobbyResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidLobbyResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidLobbyResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

