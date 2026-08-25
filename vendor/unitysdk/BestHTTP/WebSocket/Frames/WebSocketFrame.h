#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket::Frames { class WebSocketFrameTypes; }
namespace BestHTTP::WebSocket { class WebSocket; }
namespace BestHTTP::WebSocket::Frames { class RawFrameData; }

#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4F35D0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x4F35E0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x4F35F0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x4F3600)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_HEADER_OFFSET UNITYSDK_OFFSET(0x4F3610)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x4F3620)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_DATA_OFFSET UNITYSDK_OFFSET(0x4F3630)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_DATA_OFFSET UNITYSDK_OFFSET(0x4F3640)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x4F3650)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_DATALENGTH_OFFSET UNITYSDK_OFFSET(0x4F3660)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_USEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x4F3670)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_USEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x4F3680)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F3690)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F38F0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F3950)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F3C30)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F39B0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_OFFSET UNITYSDK_OFFSET(0x4F3CA0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x4F4350)

namespace BestHTTP::WebSocket::Frames
{
	inline static constexpr unsigned int WebSocketFrame_TypeDefinitionIndex = 21334;

	class WebSocketFrame : public Il2CppObject
	{
	public:
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* _Type_k__BackingField; // 0x10
		::System::Boolean _IsFinal_k__BackingField; // 0x11
		::System::Byte _Header_k__BackingField; // 0x12
		::Il2CppArray<::System::Object*>* _Data_k__BackingField; // 0x18
		::System::Int32 _DataLength_k__BackingField; // 0x20
		::System::Boolean _UseExtensions_k__BackingField; // 0x24

		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* get_Type()
		{
			return (return (::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_ISFINAL_OFFSET))(nullptr);
		}

		::System::Void set_IsFinal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_ISFINAL_OFFSET))(arg, nullptr);
		}

		::System::Byte get_Header()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_HEADER_OFFSET))(nullptr);
		}

		::System::Void set_Header(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_HEADER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_DATALENGTH_OFFSET))(nullptr);
		}

		::System::Void set_DataLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_DATALENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseExtensions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_USEEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Void set_UseExtensions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_SET_USEEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::WebSocket::WebSocket* arg, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::Il2CppArray<::System::Object*>*, ::System::UInt64, ::System::UInt64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::WebSocket::Frames::RawFrameData* Get()
		{
			return (return (::BestHTTP::WebSocket::Frames::RawFrameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_GET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Fragment(::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAME_FRAGMENT_OFFSET))(arg, nullptr);
		}

	};
}

