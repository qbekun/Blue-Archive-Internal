#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2StreamStates; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsManager; }
namespace BestHTTP::Connections::HTTP2 { class HPACKEncoder; }
namespace BestHTTP::Connections::HTTP2 { class FramesAsStreamView; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Response; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Handler; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsRegistry; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Settings; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Stream; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_ID_OFFSET UNITYSDK_OFFSET(0x91B900)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x918D30)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_ASSIGNEDREQUEST_OFFSET UNITYSDK_OFFSET(0x91B910)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ABORT_OFFSET UNITYSDK_OFFSET(0x918B90)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ONREMOTESETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0x91BB20)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESS_OFFSET UNITYSDK_OFFSET(0x919230)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x9187D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_STATE_OFFSET UNITYSDK_OFFSET(0x91E540)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_ID_OFFSET UNITYSDK_OFFSET(0x91E550)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_HASFRAMETOSEND_OFFSET UNITYSDK_OFFSET(0x9194A0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESSSTATE_OFFSET UNITYSDK_OFFSET(0x91DF40)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_FINISHREQUEST_OFFSET UNITYSDK_OFFSET(0x91E7C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_ASSIGNEDREQUEST_OFFSET UNITYSDK_OFFSET(0x91EA60)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x91EA70)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_STATE_OFFSET UNITYSDK_OFFSET(0x91B920)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESSINCOMINGFRAMES_OFFSET UNITYSDK_OFFSET(0x91BEE0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_REMOVED_OFFSET UNITYSDK_OFFSET(0x919500)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ASSIGN_OFFSET UNITYSDK_OFFSET(0x918FC0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x91EA80)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2Stream_TypeDefinitionIndex = 23466;

	class HTTP2Stream : public Il2CppObject
	{
	public:
		::System::UInt32 _Id_k__BackingField; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* _state; // 0x14
		::System::DateTime* lastStateChangedAt; // 0x18
		::BestHTTP::HTTPRequest* _AssignedRequest_k__BackingField; // 0x20
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x28
		::System::Boolean isStreamedDownload; // 0x30
		::System::UInt32 downloaded; // 0x34
		UploadStreamInfo* uploadStreamInfo; // 0x38
		::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* settings; // 0x48
		::BestHTTP::Connections::HTTP2::HPACKEncoder* encoder; // 0x50
		Il2CppObject* outgoing; // 0x58
		Il2CppObject* incomingFrames; // 0x60
		::BestHTTP::Connections::HTTP2::FramesAsStreamView* headerView; // 0x68
		::BestHTTP::Connections::HTTP2::FramesAsStreamView* dataView; // 0x70
		::System::UInt32 localWindow; // 0x78
		::System::Int64 remoteWindow; // 0x80
		::System::UInt32 windowUpdateThreshold; // 0x88
		::System::UInt32 sentData; // 0x8C
		::System::Boolean isRSTFrameSent; // 0x90
		::System::Boolean isEndSTRReceived; // 0x91
		::BestHTTP::Connections::HTTP2::HTTP2Response* response; // 0x98
		::BestHTTP::Connections::HTTP2::HTTP2Handler* parent; // 0xA0

		::System::Void set_Id(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::BestHTTP::Connections::HTTP2::HTTP2Handler* arg, ::BestHTTP::Connections::HTTP2::HTTP2SettingsManager* arg, ::BestHTTP::Connections::HTTP2::HPACKEncoder* arg)
		{
			((::System::Void(*)(::System::UInt32, ::BestHTTP::Connections::HTTP2::HTTP2Handler*, ::BestHTTP::Connections::HTTP2::HTTP2SettingsManager*, ::BestHTTP::Connections::HTTP2::HPACKEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* get_AssignedRequest()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_ASSIGNEDREQUEST_OFFSET))(nullptr);
		}

		::System::Void Abort(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ABORT_OFFSET))(str, nullptr);
		}

		::System::Void OnRemoteSettingChanged(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg, ::BestHTTP::Connections::HTTP2::HTTP2Settings* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::BestHTTP::Connections::HTTP2::HTTP2Settings*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ONREMOTESETTINGCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Process(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ADDFRAME_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2StreamStates* get_State()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2StreamStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_STATE_OFFSET))(nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_HasFrameToSend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_HASFRAMETOSEND_OFFSET))(nullptr);
		}

		::System::Void ProcessState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESSSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRequest(::BestHTTP::Connections::HTTP2::HTTP2Stream* arg, ::BestHTTP::Connections::HTTP2::FramesAsStreamView* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Stream*, ::BestHTTP::Connections::HTTP2::FramesAsStreamView*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_FINISHREQUEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_AssignedRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_ASSIGNEDREQUEST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::Connections::HTTP2::HTTP2StreamStates* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2StreamStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessIncomingFrames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_PROCESSINCOMINGFRAMES_OFFSET))(arg, nullptr);
		}

		::System::Void Removed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_REMOVED_OFFSET))(nullptr);
		}

		::System::Void Assign(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_ASSIGN_OFFSET))(arg, nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2STREAM_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

