#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::WebSocket::Frames { class WebSocketFrameTypes; }
namespace BestHTTP::WebSocket { class WebSocket; }

#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4F4560)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4F4570)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x4F4580)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_DATAASTEXT_OFFSET UNITYSDK_OFFSET(0x4F4590)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_HASMASK_OFFSET UNITYSDK_OFFSET(0x4F45A0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_HEADER_OFFSET UNITYSDK_OFFSET(0x4F45B0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x4F45C0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_READ_OFFSET UNITYSDK_OFFSET(0x4F4620)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_RELEASEDATA_OFFSET UNITYSDK_OFFSET(0x4F4C10)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x4F4C80)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_ASSEMBLE_OFFSET UNITYSDK_OFFSET(0x4F4C90)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_DATA_OFFSET UNITYSDK_OFFSET(0x4F50C0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x4F50D0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_DECODEWITHEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x4F50E0)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4F5350)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_HASMASK_OFFSET UNITYSDK_OFFSET(0x4F5360)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x4F5370)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x4F5380)
#define BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_DATAASTEXT_OFFSET UNITYSDK_OFFSET(0x4F5390)

namespace BestHTTP::WebSocket::Frames
{
	inline static constexpr unsigned int WebSocketFrameReader_TypeDefinitionIndex = 21335;

	class WebSocketFrameReader : public Il2CppObject
	{
	public:
		::System::Byte _Header_k__BackingField; // 0x10
		::System::Boolean _IsFinal_k__BackingField; // 0x11
		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* _Type_k__BackingField; // 0x12
		::System::Boolean _HasMask_k__BackingField; // 0x13
		::System::UInt64 _Length_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _Data_k__BackingField; // 0x20
		::System::String* _DataAsText_k__BackingField; // 0x28

		::System::UInt64 get_Length()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_LENGTH_OFFSET))(nullptr);
		}

		::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* get_Type()
		{
			return (return (::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Header(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_HEADER_OFFSET))(arg, nullptr);
		}

		::System::String* get_DataAsText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_DATAASTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasMask()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_HASMASK_OFFSET))(nullptr);
		}

		::System::Byte get_Header()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_HEADER_OFFSET))(nullptr);
		}

		::System::Byte ReadByte(::System::IO::Stream* arg)
		{
			return (return (::System::Byte(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_READBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_READ_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_RELEASEDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFinal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_ISFINAL_OFFSET))(nullptr);
		}

		::System::Void Assemble(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_ASSEMBLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Data(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::BestHTTP::WebSocket::Frames::WebSocketFrameTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::Frames::WebSocketFrameTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void DecodeWithExtensions(::BestHTTP::WebSocket::WebSocket* arg)
		{
			((::System::Void(*)(::BestHTTP::WebSocket::WebSocket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_DECODEWITHEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Length(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasMask(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_HASMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFinal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_ISFINAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_DataAsText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_FRAMES_WEBSOCKETFRAMEREADER_SET_DATAASTEXT_OFFSET))(str, nullptr);
		}

	};
}

