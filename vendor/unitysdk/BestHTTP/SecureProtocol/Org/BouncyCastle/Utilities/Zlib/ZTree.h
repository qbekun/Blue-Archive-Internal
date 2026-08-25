#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class StaticTree; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class Deflate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_GEN_BITLEN_OFFSET UNITYSDK_OFFSET(0x92FFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x930580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_BI_REVERSE_OFFSET UNITYSDK_OFFSET(0x930590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9305C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_BUILD_TREE_OFFSET UNITYSDK_OFFSET(0x9308C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_GEN_CODES_OFFSET UNITYSDK_OFFSET(0x930E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_D_CODE_OFFSET UNITYSDK_OFFSET(0x931180)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int ZTree_TypeDefinitionIndex = 21590;

	class ZTree : public Il2CppObject
	{
	public:
		::System::Int32 MAX_BITS; // 0x0
		::System::Int32 BL_CODES; // 0x0
		::System::Int32 D_CODES; // 0x0
		::System::Int32 LITERALS; // 0x0
		::System::Int32 LENGTH_CODES; // 0x0
		::System::Int32 L_CODES; // 0x0
		::System::Int32 HEAP_SIZE; // 0x0
		::System::Int32 MAX_BL_BITS; // 0x0
		::System::Int32 END_BLOCK; // 0x0
		::System::Int32 REP_3_6; // 0x0
		::System::Int32 REPZ_3_10; // 0x0
		::System::Int32 REPZ_11_138; // 0x0
		::Il2CppArray<::System::Object*>* extra_lbits; // 0x0
		::Il2CppArray<::System::Object*>* extra_dbits; // 0x8
		::Il2CppArray<::System::Object*>* extra_blbits; // 0x10
		::Il2CppArray<::System::Object*>* bl_order; // 0x18
		::System::Int32 Buf_size; // 0x0
		::System::Int32 DIST_CODE_LEN; // 0x0
		::Il2CppArray<::System::Object*>* _dist_code; // 0x20
		::Il2CppArray<::System::Object*>* _length_code; // 0x28
		::Il2CppArray<::System::Object*>* base_length; // 0x30
		::Il2CppArray<::System::Object*>* base_dist; // 0x38
		::Il2CppArray<::System::Object*>* dyn_tree; // 0x10
		::System::Int32 max_code; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* stat_desc; // 0x20

		::System::Void gen_bitlen(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_GEN_BITLEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 bi_reverse(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_BI_REVERSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void build_tree(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_BUILD_TREE_OFFSET))(arg, nullptr);
		}

		::System::Void gen_codes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_GEN_CODES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 d_code(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZTREE_D_CODE_OFFSET))(arg, nullptr);
		}

	};
}

