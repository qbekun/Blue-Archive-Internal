#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class StaticTree; }
namespace BestHTTP::Decompression::Zlib { class DeflateManager; }

#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_GEN_CODES_OFFSET UNITYSDK_OFFSET(0x8E9D30)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_GEN_BITLEN_OFFSET UNITYSDK_OFFSET(0x8E9FE0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EA430)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_BUILD_TREE_OFFSET UNITYSDK_OFFSET(0x8EA440)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_DISTANCECODE_OFFSET UNITYSDK_OFFSET(0x8EA9E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_BI_REVERSE_OFFSET UNITYSDK_OFFSET(0x8E9FB0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8EAA90)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int ZTree_TypeDefinitionIndex = 23390;

	class ZTree : public Il2CppObject
	{
	public:
		::System::Int32 HEAP_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* ExtraLengthBits; // 0x8
		::Il2CppArray<::System::Object*>* ExtraDistanceBits; // 0x10
		::Il2CppArray<::System::Object*>* extra_blbits; // 0x18
		::Il2CppArray<::System::Object*>* bl_order; // 0x20
		::System::Int32 Buf_size; // 0x0
		::Il2CppArray<::System::Object*>* _dist_code; // 0x28
		::Il2CppArray<::System::Object*>* LengthCode; // 0x30
		::Il2CppArray<::System::Object*>* LengthBase; // 0x38
		::Il2CppArray<::System::Object*>* DistanceBase; // 0x40
		::Il2CppArray<::System::Object*>* dyn_tree; // 0x10
		::System::Int32 max_code; // 0x18
		::BestHTTP::Decompression::Zlib::StaticTree* staticTree; // 0x20

		::System::Void gen_codes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_GEN_CODES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void gen_bitlen(::BestHTTP::Decompression::Zlib::DeflateManager* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::DeflateManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_GEN_BITLEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void build_tree(::BestHTTP::Decompression::Zlib::DeflateManager* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::DeflateManager*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_BUILD_TREE_OFFSET))(arg, nullptr);
		}

		::System::Int32 DistanceCode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_DISTANCECODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 bi_reverse(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_BI_REVERSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZTREE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

