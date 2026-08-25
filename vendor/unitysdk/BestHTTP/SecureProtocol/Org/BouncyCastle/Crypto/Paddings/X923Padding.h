#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x697AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_PADCOUNT_OFFSET UNITYSDK_OFFSET(0x697AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_INIT_OFFSET UNITYSDK_OFFSET(0x697B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_ADDPADDING_OFFSET UNITYSDK_OFFSET(0x697B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_GET_PADDINGNAME_OFFSET UNITYSDK_OFFSET(0x697C00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings
{
	inline static constexpr unsigned int X923Padding_TypeDefinitionIndex = 22385;

	class X923Padding : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 PadCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_PADCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddPadding(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_ADDPADDING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_PaddingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_X923PADDING_GET_PADDINGNAME_OFFSET))(nullptr);
		}

	};
}

