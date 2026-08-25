#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WorldRaidLobbyResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define WORLDRAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB16A0)
#define WORLDRAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FB1960)

	inline static constexpr unsigned int WorldRaidLobbyResponseMessage_TypeDefinitionIndex = 2899;

	class WorldRaidLobbyResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WorldRaidLobbyResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::WorldRaidLobbyResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::WorldRaidLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::WorldRaidLobbyResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::WorldRaidLobbyResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

