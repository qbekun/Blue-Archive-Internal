#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBOPERATION_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x9A84860)
#define SYSTEM_NET_WEBOPERATION_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x9A84870)
#define SYSTEM_NET_WEBOPERATION_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x9A84880)
#define SYSTEM_NET_WEBOPERATION_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A84890)
#define SYSTEM_NET_WEBOPERATION_SET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A848A0)
#define SYSTEM_NET_WEBOPERATION_GET_WRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x9A848B0)
#define SYSTEM_NET_WEBOPERATION_GET_ISNTLMCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9A848C0)
#define SYSTEM_NET_WEBOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A848D0)
#define SYSTEM_NET_WEBOPERATION_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x9A84AA0)
#define SYSTEM_NET_WEBOPERATION_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x9A84AF0)
#define SYSTEM_NET_WEBOPERATION_ABORT_OFFSET UNITYSDK_OFFSET(0x9A84B50)
#define SYSTEM_NET_WEBOPERATION_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A84D30)
#define SYSTEM_NET_WEBOPERATION_SETCANCELED_OFFSET UNITYSDK_OFFSET(0x9A84C70)
#define SYSTEM_NET_WEBOPERATION_SETERROR_OFFSET UNITYSDK_OFFSET(0x9A85180)
#define SYSTEM_NET_WEBOPERATION_SETDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A84BA0)
#define SYSTEM_NET_WEBOPERATION_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A85220)
#define SYSTEM_NET_WEBOPERATION_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A85340)
#define SYSTEM_NET_WEBOPERATION_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A85390)
#define SYSTEM_NET_WEBOPERATION_THROWIFCLOSEDORDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A85460)
#define SYSTEM_NET_WEBOPERATION_THROWIFCLOSEDORDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A854B0)
#define SYSTEM_NET_WEBOPERATION_CHECKTHROWDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A852E0)
#define SYSTEM_NET_WEBOPERATION_REGISTERREQUEST_OFFSET UNITYSDK_OFFSET(0x9A85590)
#define SYSTEM_NET_WEBOPERATION_SETPRIORITYREQUEST_OFFSET UNITYSDK_OFFSET(0x9A85880)
#define SYSTEM_NET_WEBOPERATION_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A85A50)
#define SYSTEM_NET_WEBOPERATION_GETREQUESTSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A85B40)
#define SYSTEM_NET_WEBOPERATION_GET_WRITESTREAM_OFFSET UNITYSDK_OFFSET(0x9A85B90)
#define SYSTEM_NET_WEBOPERATION_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9A85BF0)
#define SYSTEM_NET_WEBOPERATION_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x9A85C40)
#define SYSTEM_NET_WEBOPERATION_RUN_OFFSET UNITYSDK_OFFSET(0x9A85C50)
#define SYSTEM_NET_WEBOPERATION_COMPLETEREQUESTWRITTEN_OFFSET UNITYSDK_OFFSET(0x9A85D10)
#define SYSTEM_NET_WEBOPERATION_FINISH_OFFSET UNITYSDK_OFFSET(0x9A84E00)
#define SYSTEM_NET_WEBOPERATION__REGISTERREQUEST_B__48_0_OFFSET UNITYSDK_OFFSET(0x9A85D80)

namespace System::Net
{
	inline static constexpr unsigned int WebOperation_TypeDefinitionIndex = 29816;

	class WebOperation : public Il2CppObject
	{
	public:
		::System::Net::HttpWebRequest* _Request_k__BackingField; // 0x10
		::System::Net::WebConnection* _Connection_k__BackingField; // 0x18
		::System::Net::ServicePoint* _ServicePoint_k__BackingField; // 0x20
		::System::Net::BufferOffsetSize* _WriteBuffer_k__BackingField; // 0x28
		::System::Boolean _IsNtlmChallenge_k__BackingField; // 0x30
		::System::Threading::CancellationTokenSource* cts; // 0x38
		Il2CppObject* requestTask; // 0x40
		Il2CppObject* requestWrittenTask; // 0x48
		Il2CppObject* responseTask; // 0x50
		Il2CppObject* finishedTask; // 0x58
		::System::Net::WebRequestStream* writeStream; // 0x60
		::System::Net::WebResponseStream* responseStream; // 0x68
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* disposedInfo; // 0x70
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* closedInfo; // 0x78
		::System::Net::WebOperation* priorityRequest; // 0x80
		::System::Int32 requestSent; // 0x88
		::System::Int32 finished; // 0x8C

		::System::Net::HttpWebRequest* get_Request()
		{
			return (return (::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Net::WebConnection* get_Connection()
		{
			return (return (::System::Net::WebConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_CONNECTION_OFFSET))(nullptr);
		}

		::System::Void set_Connection(::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_SERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Void set_ServicePoint(::System::Net::ServicePoint* arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SET_SERVICEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Net::BufferOffsetSize* get_WriteBuffer()
		{
			return (return (::System::Net::BufferOffsetSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_WRITEBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNtlmChallenge()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_ISNTLMCHALLENGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::HttpWebRequest* arg, ::System::Net::BufferOffsetSize* arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Net::HttpWebRequest*, ::System::Net::BufferOffsetSize*, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_Aborted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_ABORTED_OFFSET))(nullptr);
		}

		::System::Boolean get_Closed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_CLOSED_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_ABORT_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetCanceled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SETCANCELED_OFFSET))(nullptr);
		}

		::System::Void SetError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SETERROR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SetDisposed(::System::Runtime::ExceptionServices::ExceptionDispatchInfo&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SETDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckDisposed(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_CHECKDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_THROWIFDISPOSED_OFFSET))(nullptr);
		}

		::System::Void ThrowIfDisposed(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_THROWIFDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfClosedOrDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_THROWIFCLOSEDORDISPOSED_OFFSET))(nullptr);
		}

		::System::Void ThrowIfClosedOrDisposed(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_THROWIFCLOSEDORDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* CheckThrowDisposed(::System::Boolean arg, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo&* arg)
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::System::Boolean, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_CHECKTHROWDISPOSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterRequest(::System::Net::ServicePoint* arg, ::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_REGISTERREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPriorityRequest(::System::Net::WebOperation* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_SETPRIORITYREQUEST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRequestStream()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GETREQUESTSTREAM_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequestStreamInternal()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GETREQUESTSTREAMINTERNAL_OFFSET))(nullptr);
		}

		::System::Net::WebRequestStream* get_WriteStream()
		{
			return (return (::System::Net::WebRequestStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_WRITESTREAM_OFFSET))(nullptr);
		}

		Il2CppObject* GetResponseStream()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GETRESPONSESTREAM_OFFSET))(nullptr);
		}

		Il2CppObject* get_Finished()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_GET_FINISHED_OFFSET))(nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_RUN_OFFSET))(nullptr);
		}

		::System::Void CompleteRequestWritten(::System::Net::WebRequestStream* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Net::WebRequestStream*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_COMPLETEREQUESTWRITTEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finish(::System::Boolean arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION_FINISH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _RegisterRequest_b__48_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBOPERATION__REGISTERREQUEST_B__48_0_OFFSET))(nullptr);
		}

	};
}

