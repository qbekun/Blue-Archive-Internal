#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANCREATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F26C60)

	inline static constexpr unsigned int ClanCreateResponseMessage_TypeDefinitionIndex = 2176;

	class ClanCreateResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

