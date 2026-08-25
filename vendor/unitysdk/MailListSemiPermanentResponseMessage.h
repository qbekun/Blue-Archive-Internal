#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailListSemiPermanentResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7FB90)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7FBA0)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7FBB0)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_ISLOG_OFFSET UNITYSDK_OFFSET(0x1F7FBC0)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_ISLOG_OFFSET UNITYSDK_OFFSET(0x1F7FBD0)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7FBE0)
#define MAILLISTSEMIPERMANENTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F850)

	inline static constexpr unsigned int MailListSemiPermanentResponseMessage_TypeDefinitionIndex = 2602;

	class MailListSemiPermanentResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailListSemiPermanentResponse* _Response_k__BackingField; // 0x20
		::System::Boolean _IsLog_k__BackingField; // 0x28
		::System::Boolean _ResetScroll_k__BackingField; // 0x29

		::MX::NetworkProtocol::MailListSemiPermanentResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::MailListSemiPermanentResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::MailListSemiPermanentResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailListSemiPermanentResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void set_IsLog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_ISLOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_GET_ISLOG_OFFSET))(nullptr);
		}

		::System::Void set_ResetScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_SET_RESETSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::MailListSemiPermanentResponse* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::MailListSemiPermanentResponse*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTSEMIPERMANENTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

