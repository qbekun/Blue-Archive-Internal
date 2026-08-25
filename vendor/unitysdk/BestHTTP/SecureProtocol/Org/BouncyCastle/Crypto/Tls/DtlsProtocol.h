#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class DtlsRecordLayer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_VALIDATESELECTEDCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x6076B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_GENERATESUPPLEMENTALDATA_OFFSET UNITYSDK_OFFSET(0x606220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_APPLYMAXFRAGMENTLENGTHEXTENSION_OFFSET UNITYSDK_OFFSET(0x605FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_PROCESSFINISHED_OFFSET UNITYSDK_OFFSET(0x6089C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_GENERATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x6062A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x607A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_EVALUATEMAXFRAGMENTLENGTHEXTENSION_OFFSET UNITYSDK_OFFSET(0x6077D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsProtocol_TypeDefinitionIndex = 22117;

	class DtlsProtocol : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mSecureRandom; // 0x10

		::System::Void ValidateSelectedCipherSuite(::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_VALIDATESELECTEDCIPHERSUITE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSupplementalData(::System::Collections::IList* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_GENERATESUPPLEMENTALDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyMaxFragmentLengthExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_APPLYMAXFRAGMENTLENGTHEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessFinished(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_PROCESSFINISHED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_GENERATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int16 EvaluateMaxFragmentLengthExtension(::System::Boolean arg, ::System::Collections::IDictionary* arg, ::System::Collections::IDictionary* arg, ::System::Byte arg)
		{
			return (return (::System::Int16(*)(::System::Boolean, ::System::Collections::IDictionary*, ::System::Collections::IDictionary*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSPROTOCOL_EVALUATEMAXFRAGMENTLENGTHEXTENSION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

