#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F88400)
#define NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F88410)
#define NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F884A0)
#define NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F884B0)
#define NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F884C0)

	inline static constexpr unsigned int NotificationEventContentReddotNetworkTask_TypeDefinitionIndex = 2659;

	class NotificationEventContentReddotNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

