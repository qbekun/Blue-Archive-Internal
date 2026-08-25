#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTCREATENETWORKTASK_GET_OSTYPE_OFFSET UNITYSDK_OFFSET(0x1F01320)
#define ACCOUNTCREATENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F013A0)
#define ACCOUNTCREATENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F015C0)
#define ACCOUNTCREATENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F015D0)
#define ACCOUNTCREATENETWORKTASK_GET_OSVERSION_OFFSET UNITYSDK_OFFSET(0x1F01660)
#define ACCOUNTCREATENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F01710)
#define ACCOUNTCREATENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F01720)

	inline static constexpr unsigned int AccountCreateNetworkTask_TypeDefinitionIndex = 1953;

	class AccountCreateNetworkTask : public Il2CppObject
	{
	public:
		::System::String* get_OSType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_GET_OSTYPE_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::String* get_OSVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_GET_OSVERSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCREATENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

