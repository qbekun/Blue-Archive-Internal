#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_WRITESRPPARAMETER_OFFSET UNITYSDK_OFFSET(0x65DFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x65E7C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_ISSRPCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x65E7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_READSRPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65E7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_GETSRPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65E9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_READSRPPARAMETER_OFFSET UNITYSDK_OFFSET(0x65E230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_ADDSRPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65EB90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_CREATESRPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65EC70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSrpUtilities_TypeDefinitionIndex = 22238;

	class TlsSrpUtilities : public Il2CppObject
	{
	public:
		::System::Void WriteSrpParameter(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_WRITESRPPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSrpCipherSuite(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_ISSRPCIPHERSUITE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadSrpExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_READSRPEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSrpExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_GETSRPEXTENSION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadSrpParameter(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_READSRPPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void AddSrpExtension(::System::Collections::IDictionary* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_ADDSRPEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSrpExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPUTILITIES_CREATESRPEXTENSION_OFFSET))(arg, nullptr);
		}

	};
}

