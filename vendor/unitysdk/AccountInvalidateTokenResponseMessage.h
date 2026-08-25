#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTINVALIDATETOKENRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F02830)

	inline static constexpr unsigned int AccountInvalidateTokenResponseMessage_TypeDefinitionIndex = 1959;

	class AccountInvalidateTokenResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

