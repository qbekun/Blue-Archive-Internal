#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERGEARLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F20050)

	inline static constexpr unsigned int CharacterGearListResponseMessage_TypeDefinitionIndex = 2128;

	class CharacterGearListResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

