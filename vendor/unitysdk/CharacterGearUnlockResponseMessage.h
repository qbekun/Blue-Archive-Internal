#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERGEARUNLOCKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F20A90)

	inline static constexpr unsigned int CharacterGearUnlockResponseMessage_TypeDefinitionIndex = 2132;

	class CharacterGearUnlockResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERGEARUNLOCKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

