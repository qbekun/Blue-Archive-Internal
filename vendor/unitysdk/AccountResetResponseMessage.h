#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTRESETRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC78010)

	inline static constexpr unsigned int AccountResetResponseMessage_TypeDefinitionIndex = 9034;

	class AccountResetResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

