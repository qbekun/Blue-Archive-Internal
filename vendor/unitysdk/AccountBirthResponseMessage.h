#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTBIRTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC764E0)

	inline static constexpr unsigned int AccountBirthResponseMessage_TypeDefinitionIndex = 9025;

	class AccountBirthResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

