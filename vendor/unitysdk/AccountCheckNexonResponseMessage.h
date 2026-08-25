#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTCHECKNEXONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC76BC0)

	inline static constexpr unsigned int AccountCheckNexonResponseMessage_TypeDefinitionIndex = 9028;

	class AccountCheckNexonResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

