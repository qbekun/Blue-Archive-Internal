#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailListSemiPermanentRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define MAILLISTSEMIPERMANENTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7F470)
#define MAILLISTSEMIPERMANENTNETWORKTASK_SET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7F500)
#define MAILLISTSEMIPERMANENTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F7F510)
#define MAILLISTSEMIPERMANENTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7F520)
#define MAILLISTSEMIPERMANENTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7F8A0)
#define MAILLISTSEMIPERMANENTNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7F8B0)
#define MAILLISTSEMIPERMANENTNETWORKTASK_GET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7F8C0)
#define MAILLISTSEMIPERMANENTNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7F8D0)
#define MAILLISTSEMIPERMANENTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F8E0)

	inline static constexpr unsigned int MailListSemiPermanentNetworkTask_TypeDefinitionIndex = 2601;

	class MailListSemiPermanentNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailListSemiPermanentRequest* _Request_k__BackingField; // 0x40
		::System::Boolean _ResetScroll_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ResetScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_SET_RESETSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::MailListSemiPermanentRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailListSemiPermanentRequest*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_GET_RESETSCROLL_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MailListSemiPermanentRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::MailListSemiPermanentRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

