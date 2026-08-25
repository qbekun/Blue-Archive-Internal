#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailListRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MAILLISTNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7ECD0)
#define MAILLISTNETWORKTASK_GET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7ECE0)
#define MAILLISTNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7ECF0)
#define MAILLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F7ED00)
#define MAILLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7ED10)
#define MAILLISTNETWORKTASK_SET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7EDA0)
#define MAILLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7EDB0)
#define MAILLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7F150)
#define MAILLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F160)

	inline static constexpr unsigned int MailListNetworkTask_TypeDefinitionIndex = 2598;

	class MailListNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailListRequest* _Request_k__BackingField; // 0x40
		::System::Boolean _ResetScroll_k__BackingField; // 0x48

		::MX::NetworkProtocol::MailListRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::MailListRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_GET_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::MailListRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailListRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ResetScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_SET_RESETSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

