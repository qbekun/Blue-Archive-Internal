#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAFERELOCATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F12AA0)

	inline static constexpr unsigned int CafeRelocateResponseMessage_TypeDefinitionIndex = 2039;

	class CafeRelocateResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERELOCATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

