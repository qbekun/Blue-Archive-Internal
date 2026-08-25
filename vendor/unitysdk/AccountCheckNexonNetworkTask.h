#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTCHECKNEXONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC76BE0)
#define ACCOUNTCHECKNEXONNETWORKTASK_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xC77200)
#define ACCOUNTCHECKNEXONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC77210)
#define ACCOUNTCHECKNEXONNETWORKTASK_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0xC77220)
#define ACCOUNTCHECKNEXONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC77230)
#define ACCOUNTCHECKNEXONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC772C0)
#define ACCOUNTCHECKNEXONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC772D0)

	inline static constexpr unsigned int AccountCheckNexonNetworkTask_TypeDefinitionIndex = 9033;

	class AccountCheckNexonNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _EnterTicket_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* get_EnterTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_SET_ENTERTICKET_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCHECKNEXONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

