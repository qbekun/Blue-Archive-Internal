#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8DA0)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B94EE0)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA3770)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B96870)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8DC0)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B944D0)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8F30)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8E70)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA9030)
#define SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA9130)
#define SYSTEM_NET_WEBEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9BA9160)
#define SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9BA9190)
#define SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9BA91B0)
#define SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x9BA91C0)

namespace System::Net
{
	inline static constexpr unsigned int WebException_TypeDefinitionIndex = 29695;

	class WebException : public Il2CppObject
	{
	public:
		::System::Net::WebExceptionStatus* m_Status; // 0x90
		::System::Net::WebResponse* m_Response; // 0x98
		::System::Net::WebExceptionInternalStatus* m_InternalStatus; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Net::WebExceptionStatus* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::WebExceptionStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Net::WebExceptionStatus* arg, ::System::Net::WebExceptionInternalStatus* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::WebExceptionStatus*, ::System::Net::WebExceptionInternalStatus*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Net::WebExceptionStatus* arg, ::System::Net::WebResponse* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus*, ::System::Net::WebResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Exception* arg, ::System::Net::WebExceptionStatus* arg, ::System::Net::WebResponse* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus*, ::System::Net::WebResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Net::WebExceptionStatus* arg, ::System::Net::WebResponse* arg, ::System::Net::WebExceptionInternalStatus* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus*, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Exception* arg, ::System::Net::WebExceptionStatus* arg, ::System::Net::WebResponse* arg, ::System::Net::WebExceptionInternalStatus* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::System::Net::WebExceptionStatus*, ::System::Net::WebResponse*, ::System::Net::WebExceptionInternalStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebExceptionStatus* get_Status()
		{
			return (return (::System::Net::WebExceptionStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Net::WebResponse* get_Response()
		{
			return (return (::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBEXCEPTION_GET_RESPONSE_OFFSET))(nullptr);
		}

	};
}

