#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MAILLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F100)
#define MAILLISTRESPONSEMESSAGE_GET_ISLOG_OFFSET UNITYSDK_OFFSET(0x1F7F410)
#define MAILLISTRESPONSEMESSAGE_SET_ISLOG_OFFSET UNITYSDK_OFFSET(0x1F7F420)
#define MAILLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7F430)
#define MAILLISTRESPONSEMESSAGE_GET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7F440)
#define MAILLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7F450)
#define MAILLISTRESPONSEMESSAGE_SET_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x1F7F460)

	inline static constexpr unsigned int MailListResponseMessage_TypeDefinitionIndex = 2599;

	class MailListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailListResponse* _Response_k__BackingField; // 0x20
		::System::Boolean _IsLog_k__BackingField; // 0x28
		::System::Boolean _ResetScroll_k__BackingField; // 0x29

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::MailListResponse* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::MailListResponse*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_IsLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_GET_ISLOG_OFFSET))(nullptr);
		}

		::System::Void set_IsLog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_SET_ISLOG_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::MailListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::MailListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_GET_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::MailListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MailListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ResetScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILLISTRESPONSEMESSAGE_SET_RESETSCROLL_OFFSET))(arg, nullptr);
		}

	};

