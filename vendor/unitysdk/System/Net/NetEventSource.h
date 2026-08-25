#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET UNITYSDK_OFFSET(0x9B8D640)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET UNITYSDK_OFFSET(0x9B8DD20)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET UNITYSDK_OFFSET(0x9B8E2A0)
#define SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET UNITYSDK_OFFSET(0x9B8DC90)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET UNITYSDK_OFFSET(0x9B8E480)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET UNITYSDK_OFFSET(0x9B8E700)
#define SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET UNITYSDK_OFFSET(0x9B8E670)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET UNITYSDK_OFFSET(0x9B8C3E0)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET UNITYSDK_OFFSET(0x9B8C5D0)
#define SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET UNITYSDK_OFFSET(0x9B8E8B0)
#define SYSTEM_NET_NETEVENTSOURCE_ERROR_OFFSET UNITYSDK_OFFSET(0x9B8E950)
#define SYSTEM_NET_NETEVENTSOURCE_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B8EB00)
#define SYSTEM_NET_NETEVENTSOURCE_FAIL_OFFSET UNITYSDK_OFFSET(0x9B8B970)
#define SYSTEM_NET_NETEVENTSOURCE_CRITICALFAILURE_OFFSET UNITYSDK_OFFSET(0x9B8EBA0)
#define SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET UNITYSDK_OFFSET(0x9B8EC30)
#define SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET UNITYSDK_OFFSET(0x9B8EDD0)
#define SYSTEM_NET_NETEVENTSOURCE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9B8C360)
#define SYSTEM_NET_NETEVENTSOURCE_IDOF_OFFSET UNITYSDK_OFFSET(0x9B8D830)
#define SYSTEM_NET_NETEVENTSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B8F0E0)
#define SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET UNITYSDK_OFFSET(0x9B8DED0)
#define SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET UNITYSDK_OFFSET(0x9B8D900)
#define SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_OFFSET UNITYSDK_OFFSET(0x9B8EE70)
#define SYSTEM_NET_NETEVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F100)
#define SYSTEM_NET_NETEVENTSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B8F110)

namespace System::Net
{
	inline static constexpr unsigned int NetEventSource_TypeDefinitionIndex = 29640;

	class NetEventSource : public Il2CppObject
	{
	public:
		::System::Net::NetEventSource* Log; // 0x0

		::System::Void Enter(::System::Object* arg, ::System::FormattableString* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Enter(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Enter(::System::Object* arg, ::System::Object* arg, ::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void Enter(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ENTER_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Exit(::System::Object* arg, ::System::FormattableString* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Exit(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Exit(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_EXIT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Info(::System::Object* arg, ::System::FormattableString* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::FormattableString*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Info(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Info(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_INFO_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Error(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ERROR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ErrorMessage(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ERRORMESSAGE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Fail(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FAIL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void CriticalFailure(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_CRITICALFAILURE_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Associate(::System::Object* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void Associate(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_ASSOCIATE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Boolean get_IsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::String* IdOf(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_IDOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Object* Format(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::String* Format(::System::FormattableString* arg)
		{
			return (return (::System::String*(*)(::System::FormattableString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteEvent(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_WRITEEVENT_OFFSET))(arg, str, str, str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

