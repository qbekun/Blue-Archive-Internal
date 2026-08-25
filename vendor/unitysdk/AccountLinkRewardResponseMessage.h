#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTLINKREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F02D00)

	inline static constexpr unsigned int AccountLinkRewardResponseMessage_TypeDefinitionIndex = 1962;

	class AccountLinkRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLINKREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

