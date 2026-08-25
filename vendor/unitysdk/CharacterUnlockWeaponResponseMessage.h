#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERUNLOCKWEAPONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F23190)

	inline static constexpr unsigned int CharacterUnlockWeaponResponseMessage_TypeDefinitionIndex = 2148;

	class CharacterUnlockWeaponResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERUNLOCKWEAPONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

