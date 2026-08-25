#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class InfBlocks; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D1AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_INFLATE_FAST_OFFSET UNITYSDK_OFFSET(0x8D3A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_PROC_OFFSET UNITYSDK_OFFSET(0x8D2E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8D4980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_FREE_OFFSET UNITYSDK_OFFSET(0x8D1780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_INIT_OFFSET UNITYSDK_OFFSET(0x8D2DA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int InfCodes_TypeDefinitionIndex = 21580;

	class InfCodes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* inflate_mask; // 0x0
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0
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
		::System::Int32 get; // 0x2C
		::System::Int32 dist; // 0x30
		::System::Byte lbits; // 0x34
		::System::Byte dbits; // 0x35
		::Il2CppArray<::System::Object*>* ltree; // 0x38
		::System::Int32 ltree_index; // 0x40
		::Il2CppArray<::System::Object*>* dtree; // 0x48
		::System::Int32 dtree_index; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 inflate_fast(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_INFLATE_FAST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 proc(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_PROC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void free(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void init(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFCODES_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

