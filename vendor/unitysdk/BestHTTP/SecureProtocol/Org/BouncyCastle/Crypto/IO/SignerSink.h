#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C2C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_WRITE_OFFSET UNITYSDK_OFFSET(0x6C2CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_GET_SIGNER_OFFSET UNITYSDK_OFFSET(0x6C2D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x6C2D80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO
{
	inline static constexpr unsigned int SignerSink_TypeDefinitionIndex = 22448;

	class SignerSink : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* mSigner; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* get_Signer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_GET_SIGNER_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_IO_SIGNERSINK_WRITEBYTE_OFFSET))(arg, nullptr);
		}

	};
}

