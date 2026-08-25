#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Extensions { class BufferPoolMemoryStream; }
namespace BestHTTP::Decompression::Zlib { class DeflateStream; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::WebSocket { class WebSocketResponse; }
namespace BestHTTP::WebSocket::Frames { class WebSocketFrame; }

#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_CLIENTNOCONTEXTTAKEOVER_OFFSET UNITYSDK_OFFSET(0x4F53A0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_CLIENTNOCONTEXTTAKEOVER_OFFSET UNITYSDK_OFFSET(0x4F53B0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_SERVERNOCONTEXTTAKEOVER_OFFSET UNITYSDK_OFFSET(0x4F53C0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_SERVERNOCONTEXTTAKEOVER_OFFSET UNITYSDK_OFFSET(0x4F53D0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_CLIENTMAXWINDOWBITS_OFFSET UNITYSDK_OFFSET(0x4F53E0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_CLIENTMAXWINDOWBITS_OFFSET UNITYSDK_OFFSET(0x4F53F0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_SERVERMAXWINDOWBITS_OFFSET UNITYSDK_OFFSET(0x4F5400)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_SERVERMAXWINDOWBITS_OFFSET UNITYSDK_OFFSET(0x4F5410)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x4F5420)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x4F5430)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_MINIMUMDATALEGTHTOCOMPRESS_OFFSET UNITYSDK_OFFSET(0x4F5440)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_MINIMUMDATALEGTHTOCOMPRESS_OFFSET UNITYSDK_OFFSET(0x4F5450)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F5460)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F5490)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_ADDNEGOTIATION_OFFSET UNITYSDK_OFFSET(0x4F54F0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_PARSENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x4F56A0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GETFRAMEHEADER_OFFSET UNITYSDK_OFFSET(0x4F5A80)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x4F5AC0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_DECODE_OFFSET UNITYSDK_OFFSET(0x4F5E90)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_COMPRESS_OFFSET UNITYSDK_OFFSET(0x4F5B50)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x4F5EB0)
#define BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4F6200)

namespace BestHTTP::WebSocket::Extensions
{
	inline static constexpr unsigned int PerMessageCompression_TypeDefinitionIndex = 21338;

	class PerMessageCompression : public Il2CppObject
	{
	public:
		::System::Int32 MinDataLengthToCompressDefault; // 0x0
		::Il2CppArray<::System::Object*>* Trailer; // 0x0
		::System::Boolean _ClientNoContextTakeover_k__BackingField; // 0x10
		::System::Boolean _ServerNoContextTakeover_k__BackingField; // 0x11
		::System::Int32 _ClientMaxWindowBits_k__BackingField; // 0x14
		::System::Int32 _ServerMaxWindowBits_k__BackingField; // 0x18
		::BestHTTP::Decompression::Zlib::CompressionLevel* _Level_k__BackingField; // 0x1C
		::System::Int32 _MinimumDataLegthToCompress_k__BackingField; // 0x20
		::BestHTTP::Extensions::BufferPoolMemoryStream* compressorOutputStream; // 0x28
		::BestHTTP::Decompression::Zlib::DeflateStream* compressorDeflateStream; // 0x30
		::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorInputStream; // 0x38
		::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorOutputStream; // 0x40
		::BestHTTP::Decompression::Zlib::DeflateStream* decompressorDeflateStream; // 0x48

		::System::Boolean get_ClientNoContextTakeover()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_CLIENTNOCONTEXTTAKEOVER_OFFSET))(nullptr);
		}

		::System::Void set_ClientNoContextTakeover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_CLIENTNOCONTEXTTAKEOVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ServerNoContextTakeover()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_SERVERNOCONTEXTTAKEOVER_OFFSET))(nullptr);
		}

		::System::Void set_ServerNoContextTakeover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_SERVERNOCONTEXTTAKEOVER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClientMaxWindowBits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_CLIENTMAXWINDOWBITS_OFFSET))(nullptr);
		}

		::System::Void set_ClientMaxWindowBits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_CLIENTMAXWINDOWBITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ServerMaxWindowBits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_SERVERMAXWINDOWBITS_OFFSET))(nullptr);
		}

		::System::Void set_ServerMaxWindowBits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_SERVERMAXWINDOWBITS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::CompressionLevel* get_Level()
		{
			return (return (::BestHTTP::Decompression::Zlib::CompressionLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::BestHTTP::Decompression::Zlib::CompressionLevel* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MinimumDataLegthToCompress()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GET_MINIMUMDATALEGTHTOCOMPRESS_OFFSET))(nullptr);
		}

		::System::Void set_MinimumDataLegthToCompress(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_SET_MINIMUMDATALEGTHTOCOMPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddNegotiation(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_ADDNEGOTIATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseNegotiation(::BestHTTP::WebSocket::WebSocketResponse* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::WebSocket::WebSocketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_PARSENEGOTIATION_OFFSET))(arg, nullptr);
		}

		::System::Byte GetFrameHeader(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_GETFRAMEHEADER_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::BestHTTP::WebSocket::Frames::WebSocketFrame* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::WebSocket::Frames::WebSocketFrame*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_ENCODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Compress(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_COMPRESS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decompress(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_DECOMPRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_WEBSOCKET_EXTENSIONS_PERMESSAGECOMPRESSION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

