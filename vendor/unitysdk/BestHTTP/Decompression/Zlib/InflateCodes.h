#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class InflateBlocks; }
namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }

#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E0E00)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_INFLATEFAST_OFFSET UNITYSDK_OFFSET(0x8E3420)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_INIT_OFFSET UNITYSDK_OFFSET(0x8E2770)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_PROCESS_OFFSET UNITYSDK_OFFSET(0x8E27E0)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InflateCodes_TypeDefinitionIndex = 23372;

	class InflateCodes : public Il2CppObject
	{
	public:
		::System::Int32 START; // 0x0
		::System::Int32 LEN; // 0x0
		::System::Int32 LENEXT; // 0x0
		::System::Int32 DIST; // 0x0
		::System::Int32 DISTEXT; // 0x0
		::System::Int32 COPY; // 0x0
		::System::Int32 LIT; // 0x0
		::System::Int32 WASH; // 0x0
		::System::Int32 END; // 0x0
		::System::Int32 BADCODE; // 0x0
		::System::Int32 mode; // 0x10
		::System::Int32 len; // 0x14
		::Il2CppArray<::System::Object*>* tree; // 0x18
		::System::Int32 tree_index; // 0x20
		::System::Int32 need; // 0x24
		::System::Int32 lit; // 0x28
		::System::Int32 bitsToGet; // 0x2C
		::System::Int32 dist; // 0x30
		::System::Byte lbits; // 0x34
		::System::Byte dbits; // 0x35
		::Il2CppArray<::System::Object*>* ltree; // 0x38
		::System::Int32 ltree_index; // 0x40
		::Il2CppArray<::System::Object*>* dtree; // 0x48
		::System::Int32 dtree_index; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 InflateFast(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::BestHTTP::Decompression::Zlib::InflateBlocks* arg, ::BestHTTP::Decompression::Zlib::ZlibCodec* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::BestHTTP::Decompression::Zlib::InflateBlocks*, ::BestHTTP::Decompression::Zlib::ZlibCodec*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_INFLATEFAST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Process(::BestHTTP::Decompression::Zlib::InflateBlocks* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::InflateBlocks*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFLATECODES_PROCESS_OFFSET))(arg, arg, nullptr);
		}

	};
}

