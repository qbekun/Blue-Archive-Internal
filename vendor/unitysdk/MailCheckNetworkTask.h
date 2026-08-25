#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MAILCHECKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E810)
#define MAILCHECKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7E820)
#define MAILCHECKNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F7E8B0)
#define MAILCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7E8C0)
#define MAILCHECKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7EA50)

	inline static constexpr unsigned int MailCheckNetworkTask_TypeDefinitionIndex = 2596;

	class MailCheckNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILCHECKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILCHECKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILCHECKNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MAILCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILCHECKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

