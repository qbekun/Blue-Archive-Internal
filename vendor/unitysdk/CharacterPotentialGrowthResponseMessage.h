#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterPotentialGrowthResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F21190)
#define CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F211A0)
#define CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F211E0)

	inline static constexpr unsigned int CharacterPotentialGrowthResponseMessage_TypeDefinitionIndex = 2135;

	class CharacterPotentialGrowthResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterPotentialGrowthResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CharacterPotentialGrowthResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CharacterPotentialGrowthResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CharacterPotentialGrowthResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CharacterPotentialGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CharacterPotentialGrowthResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterPotentialGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERPOTENTIALGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

