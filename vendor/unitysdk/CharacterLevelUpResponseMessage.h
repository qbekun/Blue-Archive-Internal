#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterExpGrowthResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERLEVELUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1F700)
#define CHARACTERLEVELUPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F310)
#define CHARACTERLEVELUPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1F710)

	inline static constexpr unsigned int CharacterLevelUpResponseMessage_TypeDefinitionIndex = 2123;

	class CharacterLevelUpResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterExpGrowthResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CharacterExpGrowthResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CharacterExpGrowthResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLEVELUPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CharacterExpGrowthResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CharacterExpGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLEVELUPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CharacterExpGrowthResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterExpGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLEVELUPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

