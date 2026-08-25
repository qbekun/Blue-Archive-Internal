#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTGETTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F02210)
#define ACCOUNTGETTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F022A0)
#define ACCOUNTGETTUTORIALNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F02590)
#define ACCOUNTGETTUTORIALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F025A0)
#define ACCOUNTGETTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F025B0)

	inline static constexpr unsigned int AccountGetTutorialNetworkTask_TypeDefinitionIndex = 1958;

	class AccountGetTutorialNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTGETTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTGETTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTGETTUTORIALNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTGETTUTORIALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTGETTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

