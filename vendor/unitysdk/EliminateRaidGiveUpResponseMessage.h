#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidGiveUpResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDGIVEUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5C9F0)
#define ELIMINATERAIDGIVEUPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C6A0)

	inline static constexpr unsigned int EliminateRaidGiveUpResponseMessage_TypeDefinitionIndex = 2368;

	class EliminateRaidGiveUpResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidGiveUpResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EliminateRaidGiveUpResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidGiveUpResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidGiveUpResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidGiveUpResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGIVEUPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

