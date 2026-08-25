#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidSearchResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDSEARCHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F91E70)
#define RAIDSEARCHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F92150)

	inline static constexpr unsigned int RaidSearchResponseMessage_TypeDefinitionIndex = 2723;

	class RaidSearchResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidSearchResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidSearchResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidSearchResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidSearchResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidSearchResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

