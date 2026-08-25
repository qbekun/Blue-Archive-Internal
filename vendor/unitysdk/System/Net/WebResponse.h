#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DAA0)
#define SYSTEM_NET_WEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DAB0)
#define SYSTEM_NET_WEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A4DAC0)
#define SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A4DAF0)
#define SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A4DB00)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A4DB10)
#define SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A4DB70)
#define SYSTEM_NET_WEBRESPONSE_GET_ISFROMCACHE_OFFSET UNITYSDK_OFFSET(0x9A4DC20)
#define SYSTEM_NET_WEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9A4DC30)
#define SYSTEM_NET_WEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9A4DC60)
#define SYSTEM_NET_WEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A4DC90)

namespace System::Net
{
	inline static constexpr unsigned int WebResponse_TypeDefinitionIndex = 29707;

	class WebResponse : public Il2CppObject
	{
	public:
		::System::Boolean m_IsFromCache; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFromCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_ISFROMCACHE_OFFSET))(nullptr);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GETRESPONSESTREAM_OFFSET))(nullptr);
		}

		::System::Uri* get_ResponseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_RESPONSEURI_OFFSET))(nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSE_GET_HEADERS_OFFSET))(nullptr);
		}

	};
}

