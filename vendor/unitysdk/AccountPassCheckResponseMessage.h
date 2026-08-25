#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTPASSCHECKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F062F0)

	inline static constexpr unsigned int AccountPassCheckResponseMessage_TypeDefinitionIndex = 1972;

	class AccountPassCheckResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

