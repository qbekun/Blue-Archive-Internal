#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA5250)
#define SYSTEM_NET_FTPWEBRESPONSE_UPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x9BA3790)
#define SYSTEM_NET_FTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9BA5C60)
#define SYSTEM_NET_FTPWEBRESPONSE_SETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9BA51B0)
#define SYSTEM_NET_FTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9BA5D80)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9BA5F80)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9BA60D0)
#define SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9BA60E0)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebResponse_TypeDefinitionIndex = 29669;

	class FtpWebResponse : public Il2CppObject
	{
	public:
		::System::IO::Stream* _responseStream; // 0x20
		::System::Int64 _contentLength; // 0x28
		::System::Uri* _responseUri; // 0x30
		::System::Net::FtpStatusCode* _statusCode; // 0x38
		::System::String* _statusLine; // 0x40
		::System::Net::WebHeaderCollection* _ftpRequestHeaders; // 0x48
		::System::DateTime* _lastModified; // 0x50
		::System::String* _bannerMessage; // 0x58
		::System::String* _welcomeMessage; // 0x60
		::System::String* _exitMessage; // 0x68

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int64 arg, ::System::Uri* arg, ::System::Net::FtpStatusCode* arg, ::System::String* str, ::System::DateTime* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::System::Uri*, ::System::Net::FtpStatusCode*, ::System::String*, ::System::DateTime*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, str, arg, str, str, str, nullptr);
		}

		::System::Void UpdateStatus(::System::Net::FtpStatusCode* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Net::FtpStatusCode*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_UPDATESTATUS_OFFSET))(arg, str, str, nullptr);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(nullptr);
		}

		::System::Void SetResponseStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_SETRESPONSESTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_CLOSE_OFFSET))(nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Uri* get_ResponseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(nullptr);
		}

		::System::Net::FtpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::FtpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(nullptr);
		}

	};
}

