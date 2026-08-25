#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::Connections::HTTP2 { class HPACKEncoder; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsManager; }
namespace BestHTTP::Connections { class HTTPConnection; }
namespace BestHTTP { class ShutdownTypes; }
namespace BestHTTP::Connections { class KeepAliveHeader; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsRegistry; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Settings; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Stream; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x914310)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x914320)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_CANPROCESSMULTIPLE_OFFSET UNITYSDK_OFFSET(0x914330)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0x9143B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_LATENCY_OFFSET UNITYSDK_OFFSET(0x9143C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9143D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9143E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_MAXGOAWAYWAITTIME_OFFSET UNITYSDK_OFFSET(0x9143F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x914510)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9149D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_RUNHANDLER_OFFSET UNITYSDK_OFFSET(0x914BA0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_ONREMOTESETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x9196B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_READTHREAD_OFFSET UNITYSDK_OFFSET(0x9196D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_TRYTOCLEANUP_OFFSET UNITYSDK_OFFSET(0x91A050)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_CALCULATELATENCY_OFFSET UNITYSDK_OFFSET(0x919FB0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_FINDSTREAMBYID_OFFSET UNITYSDK_OFFSET(0x918740)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x91A130)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_SHUTDOWNTYPE_OFFSET UNITYSDK_OFFSET(0x91A140)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x91A150)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91A1B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91A200)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x91A210)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91A220)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2Handler_TypeDefinitionIndex = 23459;

	class HTTP2Handler : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MAGIC; // 0x0
		::System::UInt32 MaxValueFor31Bits; // 0x0
		::System::Double _Latency_k__BackingField; // 0x10
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x18
		::System::DateTime* lastPingSent; // 0x20
		::System::TimeSpan* pingFrequency; // 0x28
		::System::Int32 RTTBufferCapacity; // 0x8
		Il2CppObject* rtts; // 0x30
		::System::Boolean isRunning; // 0x38
		::System::Threading::AutoResetEvent* newFrameSignal; // 0x40
		Il2CppObject* requestQueue; // 0x48
		Il2CppObject* clientInitiatedStreams; // 0x50
		::BestHTTP::Connections::HTTP2::HPACKEncoder* HPACKEncoder; // 0x58
		Il2CppObject* newFrames; // 0x60
		Il2CppObject* outgoingFrames; // 0x68
		::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* settings; // 0x70
		::System::UInt32 remoteWindow; // 0x78
		::System::DateTime* lastInteraction; // 0x80
		::System::DateTime* goAwaySentAt; // 0x88
		::BestHTTP::Connections::HTTPConnection* conn; // 0x90
		::System::Int32 threadExitCount; // 0x98
		::System::Int64 LastStreamId; // 0xA0
		::BestHTTP::ShutdownTypes* _ShutdownType_k__BackingField; // 0xA8

		::System::Boolean get_HasCustomRequestProcessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_HASCUSTOMREQUESTPROCESSOR_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::KeepAliveHeader* get_KeepAlive()
		{
			return (return (::BestHTTP::Connections::KeepAliveHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_KEEPALIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanProcessMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_CANPROCESSMULTIPLE_OFFSET))(nullptr);
		}

		::System::Double get_Latency()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_LATENCY_OFFSET))(nullptr);
		}

		::System::Void set_Latency(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_LATENCY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_MaxGoAwayWaitTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_MAXGOAWAYWAITTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTPConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTPConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void RunHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_RUNHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnRemoteSettingChanged(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg, ::BestHTTP::Connections::HTTP2::HTTP2Settings* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::BestHTTP::Connections::HTTP2::HTTP2Settings*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_ONREMOTESETTINGCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_READTHREAD_OFFSET))(nullptr);
		}

		::System::Void TryToCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_TRYTOCLEANUP_OFFSET))(nullptr);
		}

		::System::Double CalculateLatency()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_CALCULATELATENCY_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2Stream* FindStreamById(::System::UInt32 arg)
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2Stream*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_FINDSTREAMBYID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::ShutdownTypes* get_ShutdownType()
		{
			return (return (::BestHTTP::ShutdownTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_GET_SHUTDOWNTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShutdownType(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SET_SHUTDOWNTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown(::BestHTTP::ShutdownTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::ShutdownTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_SHUTDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2HANDLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

