#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANCHECKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F26190)

	inline static constexpr unsigned int ClanCheckResponseMessage_TypeDefinitionIndex = 2170;

	class ClanCheckResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHECKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

