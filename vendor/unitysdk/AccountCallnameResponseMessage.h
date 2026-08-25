#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTCALLNAMERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F00BD0)

	inline static constexpr unsigned int AccountCallnameResponseMessage_TypeDefinitionIndex = 1948;

	class AccountCallnameResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

