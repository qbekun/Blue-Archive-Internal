#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class InfCodes; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class InfTree; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_RESET_OFFSET UNITYSDK_OFFSET(0x8D1710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_INFLATE_FLUSH_OFFSET UNITYSDK_OFFSET(0x8D1790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D1900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_SYNC_POINT_OFFSET UNITYSDK_OFFSET(0x8D1AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_FREE_OFFSET UNITYSDK_OFFSET(0x8D1AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x8D1B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_PROC_OFFSET UNITYSDK_OFFSET(0x8D1BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8D3920)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int InfBlocks_TypeDefinitionIndex = 21579;

	class InfBlocks : public Il2CppObject
	{
	public:
		::System::Int32 MANY; // 0x0
		::Il2CppArray<::System::Object*>* inflate_mask; // 0x0
		::Il2CppArray<::System::Object*>* border; // 0x8
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0
		::System::Int32 TYPE; // 0x0
		::System::Int32 LENS; // 0x0
		::System::Int32 STORED; // 0x0
		::System::Int32 TABLE; // 0x0
		::System::Int32 BTREE; // 0x0
		::System::Int32 DTREE; // 0x0
		::System::Int32 CODES; // 0x0
		::System::Int32 DRY; // 0x0
		::System::Int32 DONE; // 0x0
		::System::Int32 BAD; // 0x0
		::System::Int32 mode; // 0x10
		::System::Int32 left; // 0x14
		::System::Int32 table; // 0x18
		::System::Int32 index; // 0x1C
		::Il2CppArray<::System::Object*>* blens; // 0x20
		::Il2CppArray<::System::Object*>* bb; // 0x28
		::Il2CppArray<::System::Object*>* tb; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes* codes; // 0x38
		::System::Int32 last; // 0x40
		::System::Int32 bitk; // 0x44
		::System::Int32 bitb; // 0x48
		::Il2CppArray<::System::Object*>* hufts; // 0x50
		::Il2CppArray<::System::Object*>* window; // 0x58
		::System::Int32 end; // 0x60
		::System::Int32 read; // 0x64
		::System::Int32 write; // 0x68
		::System::Object* checkfn; // 0x70
		::System::Int64 check; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree* inftree; // 0x80

		::System::Void reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_RESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 inflate_flush(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_INFLATE_FLUSH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 sync_point()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_SYNC_POINT_OFFSET))(nullptr);
		}

		::System::Void free(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void set_dictionary(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_SET_DICTIONARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 proc(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_PROC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFBLOCKS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

