#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_CRYPT_OFFSET UNITYSDK_OFFSET(0x995B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99A8A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_PARSEDEKALGNAME_OFFSET UNITYSDK_OFFSET(0x998110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_GETCIPHERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x99A760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A9F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int PemUtilities_TypeDefinitionIndex = 21696;

	class PemUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Crypt(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_CRYPT_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ParseDekAlgName(::System::String* str, PemBaseAlg&* arg, PemMode&* arg)
		{
			((::System::Void(*)(::System::String*, PemBaseAlg&*, PemMode&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_PARSEDEKALGNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::Il2CppArray<::System::Object*>* arg, PemBaseAlg* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::Il2CppArray<::System::Object*>*, PemBaseAlg*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_GETCIPHERPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

