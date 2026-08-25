#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERGEARTIERUPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F207D0)

	inline static constexpr unsigned int CharacterGearTierUpResponseMessage_TypeDefinitionIndex = 2131;

	class CharacterGearTierUpResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARTIERUPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

