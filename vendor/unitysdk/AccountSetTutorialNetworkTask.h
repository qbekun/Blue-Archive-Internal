#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTSETTUTORIALNETWORKTASK_SET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0x1F083E0)
#define ACCOUNTSETTUTORIALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F083F0)
#define ACCOUNTSETTUTORIALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F08400)
#define ACCOUNTSETTUTORIALNETWORKTASK_GET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0x1F08410)
#define ACCOUNTSETTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F08420)
#define ACCOUNTSETTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F08430)
#define ACCOUNTSETTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F085C0)

	inline static constexpr unsigned int AccountSetTutorialNetworkTask_TypeDefinitionIndex = 1986;

	class AccountSetTutorialNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _TutorialIds_k__BackingField; // 0x40

		::System::Void set_TutorialIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_SET_TUTORIALIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_TutorialIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_GET_TUTORIALIDS_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

