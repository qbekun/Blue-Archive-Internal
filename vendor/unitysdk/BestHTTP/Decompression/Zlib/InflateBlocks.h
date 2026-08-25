#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class InflateCodes; }
namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }
namespace BestHTTP::Decompression::Zlib { class InfTree; }

#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E0BE0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_FREE_OFFSET UNITYSDK_OFFSET(0x8E0EB0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_RESET_OFFSET UNITYSDK_OFFSET(0x8E0E10)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_SYNCPOINT_OFFSET UNITYSDK_OFFSET(0x8E0FB0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_FLUSH_OFFSET UNITYSDK_OFFSET(0x8E0FC0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E1180)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8E1210)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_PROCESS_OFFSET UNITYSDK_OFFSET(0x8E1250)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InflateBlocks_TypeDefinitionIndex = 23370;

	class InflateBlocks : public Il2CppObject
	{
	public:
		::System::Int32 MANY; // 0x0
		::Il2CppArray<::System::Object*>* border; // 0x0
		InflateBlockMode* mode; // 0x10
		::System::Int32 left; // 0x14
		::System::Int32 table; // 0x18
		::System::Int32 index; // 0x1C
		::Il2CppArray<::System::Object*>* blens; // 0x20
		::Il2CppArray<::System::Object*>* bb; // 0x28
		::Il2CppArray<::System::Object*>* tb; // 0x30
		::BestHTTP::Decompression::Zlib::InflateCodes* codes; // 0x38
		::System::Int32 last; // 0x40
		::BestHTTP::Decompression::Zlib::ZlibCodec* _codec; // 0x48
		::System::Int32 bitk; // 0x50
		::System::Int32 bitb; // 0x54
		::Il2CppArray<::System::Object*>* hufts; // 0x58
		::Il2CppArray<::System::Object*>* window; // 0x60
		::System::Int32 end; // 0x68
		::System::Int32 readAt; // 0x6C
		::System::Int32 writeAt; // 0x70
		::System::Object* checkfn; // 0x78
		::System::UInt32 check; // 0x80
		::BestHTTP::Decompression::Zlib::InfTree* inftree; // 0x88

		::System::Void .ctor(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_FREE_OFFSET))(nullptr);
		}

		::System::UInt32 Reset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_RESET_OFFSET))(nullptr);
		}

		::System::Int32 SyncPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_SYNCPOINT_OFFSET))(nullptr);
		}

		::System::Int32 Flush(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_FLUSH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetDictionary(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_SETDICTIONARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Process(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATEBLOCKS_PROCESS_OFFSET))(arg, nullptr);
		}

	};
}

