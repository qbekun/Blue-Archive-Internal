#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }

#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_HUFT_BUILD_OFFSET UNITYSDK_OFFSET(0x8E53A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E6060)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_DYNAMIC_OFFSET UNITYSDK_OFFSET(0x8E6070)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INITWORKAREA_OFFSET UNITYSDK_OFFSET(0x8E6320)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E6510)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_BITS_OFFSET UNITYSDK_OFFSET(0x8E6750)
#define BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_FIXED_OFFSET UNITYSDK_OFFSET(0x8E6880)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int InfTree_TypeDefinitionIndex = 23375;

	class InfTree : public Il2CppObject
	{
	public:
		::System::Int32 MANY; // 0x0
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0
		::System::Int32 fixed_bl; // 0x0
		::System::Int32 fixed_bd; // 0x0
		::Il2CppArray<::System::Object*>* fixed_tl; // 0x0
		::Il2CppArray<::System::Object*>* fixed_td; // 0x8
		::Il2CppArray<::System::Object*>* cplens; // 0x10
		::Il2CppArray<::System::Object*>* cplext; // 0x18
		::Il2CppArray<::System::Object*>* cpdist; // 0x20
		::Il2CppArray<::System::Object*>* cpdext; // 0x28
		::System::Int32 BMAX; // 0x0
		::Il2CppArray<::System::Object*>* hn; // 0x10
		::Il2CppArray<::System::Object*>* v; // 0x18
		::Il2CppArray<::System::Object*>* c; // 0x20
		::Il2CppArray<::System::Object*>* r; // 0x28
		::Il2CppArray<::System::Object*>* u; // 0x30
		::Il2CppArray<::System::Object*>* x; // 0x38

		::System::Int32 huft_build(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_HUFT_BUILD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 inflate_trees_dynamic(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::Decompression::Zlib::ZlibCodec* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::Decompression::Zlib::ZlibCodec*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_DYNAMIC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void initWorkArea(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INITWORKAREA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 inflate_trees_bits(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::Decompression::Zlib::ZlibCodec* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::Decompression::Zlib::ZlibCodec*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_BITS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 inflate_trees_fixed(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::Decompression::Zlib::ZlibCodec* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::Decompression::Zlib::ZlibCodec*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_INFTREE_INFLATE_TREES_FIXED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

