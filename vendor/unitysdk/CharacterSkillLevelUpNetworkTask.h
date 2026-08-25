#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterSkillLevelUpdateRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define CHARACTERSKILLLEVELUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F222B0)
#define CHARACTERSKILLLEVELUPNETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F22610)
#define CHARACTERSKILLLEVELUPNETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F22620)
#define CHARACTERSKILLLEVELUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F22630)
#define CHARACTERSKILLLEVELUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F226A0)
#define CHARACTERSKILLLEVELUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F226B0)
#define CHARACTERSKILLLEVELUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F22740)

	inline static constexpr unsigned int CharacterSkillLevelUpNetworkTask_TypeDefinitionIndex = 2143;

	class CharacterSkillLevelUpNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterSkillLevelUpdateRequest* _Req_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::NetworkProtocol::CharacterSkillLevelUpdateRequest* get_Req()
		{
			return ((::MX::NetworkProtocol::CharacterSkillLevelUpdateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::CharacterSkillLevelUpdateRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterSkillLevelUpdateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLEVELUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

