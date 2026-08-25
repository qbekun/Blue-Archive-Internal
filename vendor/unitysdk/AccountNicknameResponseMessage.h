#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTNICKNAMERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F05BC0)

	inline static constexpr unsigned int AccountNicknameResponseMessage_TypeDefinitionIndex = 1969;

	class AccountNicknameResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

