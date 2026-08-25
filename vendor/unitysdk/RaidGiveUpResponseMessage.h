#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidGiveUpResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDGIVEUPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8EB10)
#define RAIDGIVEUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8EE00)

	inline static constexpr unsigned int RaidGiveUpResponseMessage_TypeDefinitionIndex = 2701;

	class RaidGiveUpResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidGiveUpResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidGiveUpResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidGiveUpResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidGiveUpResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidGiveUpResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGIVEUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

