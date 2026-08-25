#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_ADDPADDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_PADCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_GET_PADDINGNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings
{
	inline static constexpr unsigned int IBlockCipherPadding_TypeDefinitionIndex = 22379;

	class IBlockCipherPadding : public Il2CppObject
	{
	public:
		::System::Int32 AddPadding(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_ADDPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 PadCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_PADCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_PaddingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_IBLOCKCIPHERPADDING_GET_PADDINGNAME_OFFSET))(nullptr);
		}

	};
}

