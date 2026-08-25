#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTCREATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F01300)

	inline static constexpr unsigned int AccountCreateResponseMessage_TypeDefinitionIndex = 1951;

	class AccountCreateResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

