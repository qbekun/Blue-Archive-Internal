#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterSkillLevelUpdateResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F22990)
#define CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F229A0)
#define CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F225D0)

	inline static constexpr unsigned int CharacterSkillLevelUpdateResponseMessage_TypeDefinitionIndex = 2144;

	class CharacterSkillLevelUpdateResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CharacterSkillLevelUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPDATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

