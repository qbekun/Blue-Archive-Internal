#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsDHVerifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPublicKeyParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READDHPARAMETER_OFFSET UNITYSDK_OFFSET(0x622BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x623F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x623FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x624150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_WRITEDHPARAMETER_OFFSET UNITYSDK_OFFSET(0x624210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEDHKEYPAIR_OFFSET UNITYSDK_OFFSET(0x624280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEEPHEMERALSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x622640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x624450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_RECEIVEDHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x622AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CONTAINSDHECIPHERSUITES_OFFSET UNITYSDK_OFFSET(0x624880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_FROMHEX_OFFSET UNITYSDK_OFFSET(0x624AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETPARAMETERSFORDHEGROUP_OFFSET UNITYSDK_OFFSET(0x624B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x624C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CREATENEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x624C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CREATENEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x624D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ADDNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x624D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CALCULATEDHBASICAGREEMENT_OFFSET UNITYSDK_OFFSET(0x623EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x624100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READDHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6247E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ADDNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET UNITYSDK_OFFSET(0x624EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ISDHECIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x624970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_WRITEDHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x624340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_FROMSAFEP_OFFSET UNITYSDK_OFFSET(0x624700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEEPHEMERALCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x623A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ARECOMPATIBLEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x625020)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsDHUtilities_TypeDefinitionIndex = 22197;

	class TlsDHUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two; // 0x0
		::System::String* draft_ffdhe2432_p; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe2432; // 0x10
		::System::String* draft_ffdhe3072_p; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe3072; // 0x20
		::System::String* draft_ffdhe4096_p; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe4096; // 0x30
		::System::String* draft_ffdhe6144_p; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe6144; // 0x40
		::System::String* draft_ffdhe8192_p; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe8192; // 0x50

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadDHParameter(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READDHPARAMETER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadNegotiatedDheGroupsClientExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Int16 GetNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::System::Int16(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteDHParameter(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_WRITEDHPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateDHKeyPair(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEDHKEYPAIR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* GenerateEphemeralServerKeyExchange(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEEPHEMERALSERVERKEYEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReceiveDHParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_RECEIVEDHPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsDheCipherSuites(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CONTAINSDHECIPHERSUITES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_FROMHEX_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetParametersForDHEGroup(::System::Int16 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GETPARAMETERSFORDHEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateNegotiatedDheGroupsClientExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CREATENEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateNegotiatedDheGroupsServerExtension(::System::Byte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CREATENEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void AddNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ADDNEGOTIATEDDHEGROUPSCLIENTEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateDHBasicAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_CALCULATEDHBASICAGREEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte ReadNegotiatedDheGroupsServerExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Byte(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReadDHParameters(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_READDHPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void AddNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ADDNEGOTIATEDDHEGROUPSSERVEREXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDheCipherSuite(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ISDHECIPHERSUITE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteDHParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_WRITEDHPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromSafeP(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_FROMSAFEP_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* GenerateEphemeralClientKeyExchange(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_GENERATEEPHEMERALCLIENTKEYEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AreCompatibleParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHUTILITIES_ARECOMPATIBLEPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

	};
}

