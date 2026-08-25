#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTRESETGLOBALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC78030)
#define ACCOUNTRESETGLOBALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC78040)
#define ACCOUNTRESETGLOBALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC78050)
#define ACCOUNTRESETGLOBALNETWORKTASK_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xC780E0)
#define ACCOUNTRESETGLOBALNETWORKTASK_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xC780F0)
#define ACCOUNTRESETGLOBALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC78100)
#define ACCOUNTRESETGLOBALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC78110)

	inline static constexpr unsigned int AccountResetGlobalNetworkTask_TypeDefinitionIndex = 9036;

	class AccountResetGlobalNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _EnterTicket_k__BackingField; // 0x40

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_SET_ENTERTICKET_OFFSET))(str, nullptr);
		}

		::System::String* get_EnterTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTRESETGLOBALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

