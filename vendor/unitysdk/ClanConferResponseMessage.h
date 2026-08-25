#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ClanConferResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANCONFERRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F26A10)
#define CLANCONFERRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F26670)

	inline static constexpr unsigned int ClanConferResponseMessage_TypeDefinitionIndex = 2173;

	class ClanConferResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ClanConferResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ClanConferResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ClanConferResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ClanConferResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ClanConferResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

