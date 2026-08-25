#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }
namespace BestHTTP::Decompression::Zlib { class InflateBlocks; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }

#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_GET_HANDLERFC1950HEADERBYTES_OFFSET UNITYSDK_OFFSET(0x8E4390)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SET_HANDLERFC1950HEADERBYTES_OFFSET UNITYSDK_OFFSET(0x8E43A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E43B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E43C0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x8E43E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_END_OFFSET UNITYSDK_OFFSET(0x8E44F0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8E4530)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_INFLATE_OFFSET UNITYSDK_OFFSET(0x8E46A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8E4F50)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x8E50E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SYNCPOINT_OFFSET UNITYSDK_OFFSET(0x8E52E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E5310)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InflateManager_TypeDefinitionIndex = 23374;

	class InflateManager : public Il2CppObject
	{
	public:
		::System::Int32 PRESET_DICT; // 0x0
		::System::Int32 Z_DEFLATED; // 0x0
		InflateManagerMode* mode; // 0x10
		::BestHTTP::Decompression::Zlib::ZlibCodec* _codec; // 0x18
		::System::Int32 method; // 0x20
		::System::UInt32 computedCheck; // 0x24
		::System::UInt32 expectedCheck; // 0x28
		::System::Int32 marker; // 0x2C
		::System::Boolean _handleRfc1950HeaderBytes; // 0x30
		::System::Int32 wbits; // 0x34
		::BestHTTP::Decompression::Zlib::InflateBlocks* blocks; // 0x38
		::Il2CppArray<::System::Object*>* mark; // 0x0

		::System::Boolean get_HandleRfc1950HeaderBytes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_GET_HANDLERFC1950HEADERBYTES_OFFSET))(nullptr);
		}

		::System::Void set_HandleRfc1950HeaderBytes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SET_HANDLERFC1950HEADERBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Reset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 End()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_END_OFFSET))(nullptr);
		}

		::System::Int32 Initialize(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Inflate(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_INFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SetDictionary(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SETDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sync()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SYNC_OFFSET))(nullptr);
		}

		::System::Int32 SyncPoint(::BestHTTP::Decompression::Zlib::ZlibCodec* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_SYNCPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

