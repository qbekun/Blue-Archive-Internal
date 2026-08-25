#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterBatchSkillLevelUpdateResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EC10)
#define CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1EF10)
#define CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1EF20)

	inline static constexpr unsigned int CharacterBatchSkillLevelUpdateResponseMessage_TypeDefinitionIndex = 2120;

	class CharacterBatchSkillLevelUpdateResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterBatchSkillLevelUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERBATCHSKILLLEVELUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

