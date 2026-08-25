#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FILEWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A61B50)
#define SYSTEM_NET_FILEWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A62EB0)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A630F0)
#define SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A63120)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A63280)
#define SYSTEM_NET_FILEWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9A63320)
#define SYSTEM_NET_FILEWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A632A0)
#define SYSTEM_NET_FILEWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A63340)
#define SYSTEM_NET_FILEWEBRESPONSE_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET UNITYSDK_OFFSET(0x9A633D0)
#define SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9A63580)

namespace System::Net
{
	inline static constexpr unsigned int FileWebResponse_TypeDefinitionIndex = 29744;

	class FileWebResponse : public Il2CppObject
	{
	public:
		::System::Boolean m_closed; // 0x20
		::System::Int64 m_contentLength; // 0x28
		::System::IO::FileAccess* m_fileAccess; // 0x30
		::System::Net::WebHeaderCollection* m_headers; // 0x38
		::System::IO::Stream* m_stream; // 0x40
		::System::Uri* m_uri; // 0x48

		::System::Void .ctor(::System::Net::FileWebRequest* arg, ::System::Uri* arg, ::System::IO::FileAccess* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::FileWebRequest*, ::System::Uri*, ::System::IO::FileAccess*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Uri* get_ResponseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GET_RESPONSEURI_OFFSET))(nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_CHECKDISPOSED_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void System.Net.ICloseEx.CloseEx(::System::Net::CloseExState* arg)
		{
			((::System::Void(*)(::System::Net::CloseExState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_SYSTEM.NET.ICLOSEEX.CLOSEEX_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(nullptr);
		}

	};
}

