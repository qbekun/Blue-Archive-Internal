#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPCONTROLSTREAM_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9B961D0)
#define SYSTEM_NET_FTPCONTROLSTREAM_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9B96280)
#define SYSTEM_NET_FTPCONTROLSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B96320)
#define SYSTEM_NET_FTPCONTROLSTREAM_ABORTCONNECT_OFFSET UNITYSDK_OFFSET(0x9B963B0)
#define SYSTEM_NET_FTPCONTROLSTREAM_ACCEPTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B96460)
#define SYSTEM_NET_FTPCONTROLSTREAM_CONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B96910)
#define SYSTEM_NET_FTPCONTROLSTREAM_SSLHANDSHAKECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B96AF0)
#define SYSTEM_NET_FTPCONTROLSTREAM_QUEUEORCREATEFTPDATASTREAM_OFFSET UNITYSDK_OFFSET(0x9B96CF0)
#define SYSTEM_NET_FTPCONTROLSTREAM_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x9B974A0)
#define SYSTEM_NET_FTPCONTROLSTREAM_PIPELINECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B97620)
#define SYSTEM_NET_FTPCONTROLSTREAM_BUILDCOMMANDSLIST_OFFSET UNITYSDK_OFFSET(0x9B994D0)
#define SYSTEM_NET_FTPCONTROLSTREAM_QUEUEORCREATEDATACONECTION_OFFSET UNITYSDK_OFFSET(0x9B981B0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETPATHINFO_OFFSET UNITYSDK_OFFSET(0x9B9A970)
#define SYSTEM_NET_FTPCONTROLSTREAM_FORMATADDRESS_OFFSET UNITYSDK_OFFSET(0x9B9B4B0)
#define SYSTEM_NET_FTPCONTROLSTREAM_FORMATADDRESSV6_OFFSET UNITYSDK_OFFSET(0x9B9B5D0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B9B6E0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x9B9B6F0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9B9B700)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_BANNERMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B9B710)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_WELCOMEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B9B740)
#define SYSTEM_NET_FTPCONTROLSTREAM_GET_EXITMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B9B770)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETCONTENTLENGTHFROM213RESPONSE_OFFSET UNITYSDK_OFFSET(0x9B98F50)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETLASTMODIFIEDFROM213RESPONSE_OFFSET UNITYSDK_OFFSET(0x9B99080)
#define SYSTEM_NET_FTPCONTROLSTREAM_TRYUPDATERESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9B98BD0)
#define SYSTEM_NET_FTPCONTROLSTREAM_TRYUPDATECONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B98AE0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETLOGINDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9B99430)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETPORTV4_OFFSET UNITYSDK_OFFSET(0x9B9AFC0)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETPORTV6_OFFSET UNITYSDK_OFFSET(0x9B9B190)
#define SYSTEM_NET_FTPCONTROLSTREAM_CREATEFTPLISTENERSOCKET_OFFSET UNITYSDK_OFFSET(0x9B9AB60)
#define SYSTEM_NET_FTPCONTROLSTREAM_GETPORTCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x9B9ADB0)
#define SYSTEM_NET_FTPCONTROLSTREAM_FORMATFTPCOMMAND_OFFSET UNITYSDK_OFFSET(0x9B9A830)
#define SYSTEM_NET_FTPCONTROLSTREAM_CREATEFTPDATASOCKET_OFFSET UNITYSDK_OFFSET(0x9B9B330)
#define SYSTEM_NET_FTPCONTROLSTREAM_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x9B9B7A0)
#define SYSTEM_NET_FTPCONTROLSTREAM_ISFTPDATASTREAMWRITEABLE_OFFSET UNITYSDK_OFFSET(0x9B97110)
#define SYSTEM_NET_FTPCONTROLSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B9BC30)

namespace System::Net
{
	inline static constexpr unsigned int FtpControlStream_TypeDefinitionIndex = 29658;

	class FtpControlStream : public Il2CppObject
	{
	public:
		::System::Net::Sockets::Socket* _dataSocket; // 0x88
		::System::Net::IPEndPoint* _passiveEndPoint; // 0x90
		::System::Net::TlsStream* _tlsStream; // 0x98
		::System::Text::StringBuilder* _bannerMessage; // 0xA0
		::System::Text::StringBuilder* _welcomeMessage; // 0xA8
		::System::Text::StringBuilder* _exitMessage; // 0xB0
		::System::WeakReference* _credentials; // 0xB8
		::System::String* _currentTypeSetting; // 0xC0
		::System::Int64 _contentLength; // 0xC8
		::System::DateTime* _lastModified; // 0xD0
		::System::Boolean _dataHandshakeStarted; // 0xD8
		::System::String* _loginDirectory; // 0xE0
		::System::String* _establishedServerDirectory; // 0xE8
		::System::String* _requestedServerDirectory; // 0xF0
		::System::Uri* _responseUri; // 0xF8
		::System::Net::FtpLoginState* _loginState; // 0x100
		::System::Net::FtpStatusCode* StatusCode; // 0x104
		::System::String* StatusLine; // 0x108
		::System::AsyncCallback* s_acceptCallbackDelegate; // 0x0
		::System::AsyncCallback* s_connectCallbackDelegate; // 0x8
		::System::AsyncCallback* s_SSLHandshakeCallback; // 0x10

		::System::Net::NetworkCredential* get_Credentials()
		{
			return (return (::System::Net::NetworkCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::System::Net::NetworkCredential* arg)
		{
			((::System::Void(*)(::System::Net::NetworkCredential*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Sockets::TcpClient* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::TcpClient*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AbortConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_ABORTCONNECT_OFFSET))(nullptr);
		}

		::System::Void AcceptCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_ACCEPTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_CONNECTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SSLHandshakeCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_SSLHANDSHAKECALLBACK_OFFSET))(arg, nullptr);
		}

		PipelineInstruction* QueueOrCreateFtpDataStream(::System::IO::Stream&* arg)
		{
			return (return (PipelineInstruction*(*)(::System::IO::Stream&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_QUEUEORCREATEFTPDATASTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_CLEARSTATE_OFFSET))(nullptr);
		}

		PipelineInstruction* PipelineCallback(PipelineEntry* arg, ::System::Net::ResponseDescription* arg, ::System::Boolean arg, ::System::IO::Stream&* arg)
		{
			return (return (PipelineInstruction*(*)(PipelineEntry*, ::System::Net::ResponseDescription*, ::System::Boolean, ::System::IO::Stream&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_PIPELINECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildCommandsList(::System::Net::WebRequest* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Net::WebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_BUILDCOMMANDSLIST_OFFSET))(arg, nullptr);
		}

		PipelineInstruction* QueueOrCreateDataConection(PipelineEntry* arg, ::System::Net::ResponseDescription* arg, ::System::Boolean arg, ::System::IO::Stream&* arg, bool&* arg)
		{
			return (return (PipelineInstruction*(*)(PipelineEntry*, ::System::Net::ResponseDescription*, ::System::Boolean, ::System::IO::Stream&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_QUEUEORCREATEDATACONECTION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetPathInfo(GetPathOption* arg, ::System::Uri* arg, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(GetPathOption*, ::System::Uri*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETPATHINFO_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* FormatAddress(::System::Net::IPAddress* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Net::IPAddress*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_FORMATADDRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* FormatAddressV6(::System::Net::IPAddress* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Net::IPAddress*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_FORMATADDRESSV6_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastModified()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_LASTMODIFIED_OFFSET))(nullptr);
		}

		::System::Uri* get_ResponseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_RESPONSEURI_OFFSET))(nullptr);
		}

		::System::String* get_BannerMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_BANNERMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_WelcomeMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_WELCOMEMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_ExitMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GET_EXITMESSAGE_OFFSET))(nullptr);
		}

		::System::Int64 GetContentLengthFrom213Response(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETCONTENTLENGTHFROM213RESPONSE_OFFSET))(str, nullptr);
		}

		::System::DateTime* GetLastModifiedFrom213Response(::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETLASTMODIFIEDFROM213RESPONSE_OFFSET))(str, nullptr);
		}

		::System::Void TryUpdateResponseUri(::System::String* str, ::System::Net::FtpWebRequest* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::FtpWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_TRYUPDATERESPONSEURI_OFFSET))(str, arg, nullptr);
		}

		::System::Void TryUpdateContentLength(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_TRYUPDATECONTENTLENGTH_OFFSET))(str, nullptr);
		}

		::System::String* GetLoginDirectory(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETLOGINDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Int32 GetPortV4(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETPORTV4_OFFSET))(str, nullptr);
		}

		::System::Int32 GetPortV6(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETPORTV6_OFFSET))(str, nullptr);
		}

		::System::Void CreateFtpListenerSocket(::System::Net::FtpWebRequest* arg)
		{
			((::System::Void(*)(::System::Net::FtpWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_CREATEFTPLISTENERSOCKET_OFFSET))(arg, nullptr);
		}

		::System::String* GetPortCommandLine(::System::Net::FtpWebRequest* arg)
		{
			return (return (::System::String*(*)(::System::Net::FtpWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_GETPORTCOMMANDLINE_OFFSET))(arg, nullptr);
		}

		::System::String* FormatFtpCommand(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_FORMATFTPCOMMAND_OFFSET))(str, str, nullptr);
		}

		::System::Net::Sockets::Socket* CreateFtpDataSocket(::System::Net::FtpWebRequest* arg, ::System::Net::Sockets::Socket* arg)
		{
			return (return (::System::Net::Sockets::Socket*(*)(::System::Net::FtpWebRequest*, ::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_CREATEFTPDATASOCKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckValid(::System::Net::ResponseDescription* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::ResponseDescription*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_CHECKVALID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Net::TriState* IsFtpDataStreamWriteable()
		{
			return (return (::System::Net::TriState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_ISFTPDATASTREAMWRITEABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPCONTROLSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

