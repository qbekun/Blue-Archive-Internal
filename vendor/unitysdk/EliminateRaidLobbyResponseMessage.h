#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidLobbyResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5D210)
#define ELIMINATERAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CF50)

	inline static constexpr unsigned int EliminateRaidLobbyResponseMessage_TypeDefinitionIndex = 2371;

	class EliminateRaidLobbyResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidLobbyResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EliminateRaidLobbyResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidLobbyResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidLobbyResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

