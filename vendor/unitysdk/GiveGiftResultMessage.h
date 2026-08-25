#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define GIVEGIFTRESULTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2284030)

	inline static constexpr unsigned int GiveGiftResultMessage_TypeDefinitionIndex = 4670;

	class GiveGiftResultMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + GIVEGIFTRESULTMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

