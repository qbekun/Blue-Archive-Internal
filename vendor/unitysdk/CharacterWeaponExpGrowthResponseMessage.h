#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERWEAPONEXPGROWTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F23740)

	inline static constexpr unsigned int CharacterWeaponExpGrowthResponseMessage_TypeDefinitionIndex = 2151;

	class CharacterWeaponExpGrowthResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONEXPGROWTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

