#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERWEAPONTRANSCENDENCERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F23D20)

	inline static constexpr unsigned int CharacterWeaponTranscendenceResponseMessage_TypeDefinitionIndex = 2154;

	class CharacterWeaponTranscendenceResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERWEAPONTRANSCENDENCERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

