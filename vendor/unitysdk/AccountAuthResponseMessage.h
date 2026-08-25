#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTAUTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE830)

	inline static constexpr unsigned int AccountAuthResponseMessage_TypeDefinitionIndex = 1943;

	class AccountAuthResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

