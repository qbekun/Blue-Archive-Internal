#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ACCOUNTLOGINSYNCRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F032D0)

	inline static constexpr unsigned int AccountLoginSyncResponseMessage_TypeDefinitionIndex = 1965;

	class AccountLoginSyncResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

