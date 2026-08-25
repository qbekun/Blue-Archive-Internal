#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_ADDPADDING_OFFSET UNITYSDK_OFFSET(0x697960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_GET_PADDINGNAME_OFFSET UNITYSDK_OFFSET(0x6979D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x697A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_INIT_OFFSET UNITYSDK_OFFSET(0x697A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_PADCOUNT_OFFSET UNITYSDK_OFFSET(0x697A20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings
{
	inline static constexpr unsigned int TbcPadding_TypeDefinitionIndex = 22384;

	class TbcPadding : public Il2CppObject
	{
	public:
		::System::Int32 AddPadding(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_ADDPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_PaddingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_GET_PADDINGNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 PadCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_TBCPADDING_PADCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

