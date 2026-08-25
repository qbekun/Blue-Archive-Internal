#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COMMANDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B93420)
#define SYSTEM_NET_COMMANDSTREAM_ABORT_OFFSET UNITYSDK_OFFSET(0x9B93560)
#define SYSTEM_NET_COMMANDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B938C0)
#define SYSTEM_NET_COMMANDSTREAM_INVOKEREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B93A70)
#define SYSTEM_NET_COMMANDSTREAM_GET_RECOVERABLEFAILURE_OFFSET UNITYSDK_OFFSET(0x9B93B00)
#define SYSTEM_NET_COMMANDSTREAM_MARKASRECOVERABLEFAILURE_OFFSET UNITYSDK_OFFSET(0x9B93B10)
#define SYSTEM_NET_COMMANDSTREAM_SUBMITREQUEST_OFFSET UNITYSDK_OFFSET(0x9B93B20)
#define SYSTEM_NET_COMMANDSTREAM_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x9B94340)
#define SYSTEM_NET_COMMANDSTREAM_BUILDCOMMANDSLIST_OFFSET UNITYSDK_OFFSET(0x9B943E0)
#define SYSTEM_NET_COMMANDSTREAM_GENERATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B943F0)
#define SYSTEM_NET_COMMANDSTREAM_GENERATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B94580)
#define SYSTEM_NET_COMMANDSTREAM_INITCOMMANDPIPELINE_OFFSET UNITYSDK_OFFSET(0x9B93C10)
#define SYSTEM_NET_COMMANDSTREAM_CHECKCONTINUEPIPELINE_OFFSET UNITYSDK_OFFSET(0x9B94690)
#define SYSTEM_NET_COMMANDSTREAM_CONTINUECOMMANDPIPELINE_OFFSET UNITYSDK_OFFSET(0x9B93CC0)
#define SYSTEM_NET_COMMANDSTREAM_POSTSENDCOMMANDPROCESSING_OFFSET UNITYSDK_OFFSET(0x9B94780)
#define SYSTEM_NET_COMMANDSTREAM_POSTREADCOMMANDPROCESSING_OFFSET UNITYSDK_OFFSET(0x9B94CA0)
#define SYSTEM_NET_COMMANDSTREAM_PIPELINECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B94F00)
#define SYSTEM_NET_COMMANDSTREAM_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B94F10)
#define SYSTEM_NET_COMMANDSTREAM_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B95AB0)
#define SYSTEM_NET_COMMANDSTREAM_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9B95DE0)
#define SYSTEM_NET_COMMANDSTREAM_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x9B95DF0)
#define SYSTEM_NET_COMMANDSTREAM_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x9B95E40)
#define SYSTEM_NET_COMMANDSTREAM_RECEIVECOMMANDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9B948F0)
#define SYSTEM_NET_COMMANDSTREAM_RECEIVECOMMANDRESPONSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9B95370)
#define SYSTEM_NET_COMMANDSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B95F60)

namespace System::Net
{
	inline static constexpr unsigned int CommandStream_TypeDefinitionIndex = 29652;

	class CommandStream : public Il2CppObject
	{
	public:
		::System::AsyncCallback* s_writeCallbackDelegate; // 0x0
		::System::AsyncCallback* s_readCallbackDelegate; // 0x8
		::System::Boolean _recoverableFailure; // 0x38
		::System::Net::WebRequest* _request; // 0x40
		::System::Boolean _isAsync; // 0x48
		::System::Boolean _aborted; // 0x49
		::Il2CppArray<::System::Object*>* _commands; // 0x50
		::System::Int32 _index; // 0x58
		::System::Boolean _doRead; // 0x5C
		::System::Boolean _doSend; // 0x5D
		::System::Net::ResponseDescription* _currentResponseDescription; // 0x60
		::System::String* _abortReason; // 0x68
		::System::String* _buffer; // 0x70
		::System::Text::Encoding* _encoding; // 0x78
		::System::Text::Decoder* _decoder; // 0x80

		::System::Void .ctor(::System::Net::Sockets::TcpClient* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::TcpClient*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Abort(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_ABORT_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeRequestCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_INVOKEREQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RecoverableFailure()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_GET_RECOVERABLEFAILURE_OFFSET))(nullptr);
		}

		::System::Void MarkAsRecoverableFailure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_MARKASRECOVERABLEFAILURE_OFFSET))(nullptr);
		}

		::System::IO::Stream* SubmitRequest(::System::Net::WebRequest* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Net::WebRequest*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_SUBMITREQUEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_CLEARSTATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildCommandsList(::System::Net::WebRequest* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Net::WebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_BUILDCOMMANDSLIST_OFFSET))(arg, nullptr);
		}

		::System::Exception* GenerateException(::System::String* str, ::System::Net::WebExceptionStatus* arg, ::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Net::WebExceptionStatus*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_GENERATEEXCEPTION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* GenerateException(::System::Net::FtpStatusCode* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Net::FtpStatusCode*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_GENERATEEXCEPTION_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InitCommandPipeline(::System::Net::WebRequest* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::WebRequest*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_INITCOMMANDPIPELINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckContinuePipeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_CHECKCONTINUEPIPELINE_OFFSET))(nullptr);
		}

		::System::IO::Stream* ContinueCommandPipeline()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_CONTINUECOMMANDPIPELINE_OFFSET))(nullptr);
		}

		::System::Boolean PostSendCommandProcessing(::System::IO::Stream&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Stream&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_POSTSENDCOMMANDPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::Boolean PostReadCommandProcessing(::System::IO::Stream&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Stream&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_POSTREADCOMMANDPROCESSING_OFFSET))(arg, nullptr);
		}

		PipelineInstruction* PipelineCallback(PipelineEntry* arg, ::System::Net::ResponseDescription* arg, ::System::Boolean arg, ::System::IO::Stream&* arg)
		{
			return (return (PipelineInstruction*(*)(PipelineEntry*, ::System::Net::ResponseDescription*, ::System::Boolean, ::System::IO::Stream&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_PIPELINECALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_READCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void WriteCallback(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_WRITECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_GET_ENCODING_OFFSET))(nullptr);
		}

		::System::Void set_Encoding(::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_SET_ENCODING_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckValid(::System::Net::ResponseDescription* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::ResponseDescription*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_CHECKVALID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Net::ResponseDescription* ReceiveCommandResponse()
		{
			return (return (::System::Net::ResponseDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_RECEIVECOMMANDRESPONSE_OFFSET))(nullptr);
		}

		::System::Void ReceiveCommandResponseCallback(::System::Net::ReceiveState* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::ReceiveState*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_RECEIVECOMMANDRESPONSECALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMMANDSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

