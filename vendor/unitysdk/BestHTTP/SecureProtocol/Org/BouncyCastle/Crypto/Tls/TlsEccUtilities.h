#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECDomainParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ADDSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET UNITYSDK_OFFSET(0x6259A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ADDSUPPORTEDPOINTFORMATSEXTENSION_OFFSET UNITYSDK_OFFSET(0x625B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET UNITYSDK_OFFSET(0x625CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETSUPPORTEDPOINTFORMATSEXTENSION_OFFSET UNITYSDK_OFFSET(0x625EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CREATESUPPORTEDELLIPTICCURVESEXTENSION_OFFSET UNITYSDK_OFFSET(0x625AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CREATESUPPORTEDPOINTFORMATSEXTENSION_OFFSET UNITYSDK_OFFSET(0x625C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET UNITYSDK_OFFSET(0x625D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READSUPPORTEDPOINTFORMATSEXTENSION_OFFSET UNITYSDK_OFFSET(0x625F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETNAMEOFNAMEDCURVE_OFFSET UNITYSDK_OFFSET(0x626040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETPARAMETERSFORNAMEDCURVE_OFFSET UNITYSDK_OFFSET(0x6261B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_HASANYSUPPORTEDNAMEDCURVES_OFFSET UNITYSDK_OFFSET(0x626300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CONTAINSECCCIPHERSUITES_OFFSET UNITYSDK_OFFSET(0x626380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISECCCIPHERSUITE_OFFSET UNITYSDK_OFFSET(0x6265A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_AREONSAMECURVE_OFFSET UNITYSDK_OFFSET(0x626630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISSUPPORTEDNAMEDCURVE_OFFSET UNITYSDK_OFFSET(0x626140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISCOMPRESSIONPREFERRED_OFFSET UNITYSDK_OFFSET(0x626650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x6266A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECPOINT_OFFSET UNITYSDK_OFFSET(0x6266C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x626820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x626880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECPOINT_OFFSET UNITYSDK_OFFSET(0x626940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x626A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CALCULATEECDHBASICAGREEMENT_OFFSET UNITYSDK_OFFSET(0x626BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEECKEYPAIR_OFFSET UNITYSDK_OFFSET(0x626C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEEPHEMERALCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x626D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEEPHEMERALSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x626F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_VALIDATEECPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x627990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECEXPONENT_OFFSET UNITYSDK_OFFSET(0x6279A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x627B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECPARAMETER_OFFSET UNITYSDK_OFFSET(0x627A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECPARAMETERS_OFFSET UNITYSDK_OFFSET(0x627B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CHECKNAMEDCURVE_OFFSET UNITYSDK_OFFSET(0x628380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECEXPONENT_OFFSET UNITYSDK_OFFSET(0x628420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x628560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECFIELDELEMENT_OFFSET UNITYSDK_OFFSET(0x6285E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECPARAMETER_OFFSET UNITYSDK_OFFSET(0x6284F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEEXPLICITECPARAMETERS_OFFSET UNITYSDK_OFFSET(0x627200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECPOINT_OFFSET UNITYSDK_OFFSET(0x626EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITENAMEDECPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6278D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x628680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x628690)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsEccUtilities_TypeDefinitionIndex = 22201;

	class TlsEccUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CurveNames; // 0x0

		::System::Void AddSupportedEllipticCurvesExtension(::System::Collections::IDictionary* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ADDSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSupportedPointFormatsExtension(::System::Collections::IDictionary* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ADDSUPPORTEDPOINTFORMATSEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSupportedEllipticCurvesExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSupportedPointFormatsExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETSUPPORTEDPOINTFORMATSEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSupportedEllipticCurvesExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CREATESUPPORTEDELLIPTICCURVESEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSupportedPointFormatsExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CREATESUPPORTEDPOINTFORMATSEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadSupportedEllipticCurvesExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READSUPPORTEDELLIPTICCURVESEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadSupportedPointFormatsExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READSUPPORTEDPOINTFORMATSEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameOfNamedCurve(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETNAMEOFNAMEDCURVE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GETPARAMETERSFORNAMEDCURVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAnySupportedNamedCurves()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_HASANYSUPPORTEDNAMEDCURVES_OFFSET))(nullptr);
		}

		::System::Boolean ContainsEccCipherSuites(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CONTAINSECCCIPHERSUITES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEccCipherSuite(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISECCCIPHERSUITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreOnSameCurve(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_AREONSAMECURVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSupportedNamedCurve(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISSUPPORTEDNAMEDCURVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCompressionPreferred(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_ISCOMPRESSIONPREFERRED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeECFieldElement(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECFIELDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeECPoint(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECPOINT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeECPublicKey(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_SERIALIZEECPUBLICKEY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* DeserializeECFieldElement(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECFIELDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* DeserializeECPublicKey(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_DESERIALIZEECPUBLICKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateECDHBasicAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CALCULATEECDHBASICAGREEMENT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEECKEYPAIR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEEPHEMERALCLIENTKEYEXCHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralServerKeyExchange(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_GENERATEEPHEMERALSERVERKEYEXCHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_VALIDATEECPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadECExponent(::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECEXPONENT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadECFieldElement(::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECFIELDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadECParameter(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECPARAMETER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ReadECParameters(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_READECPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckNamedCurve(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_CHECKNAMEDCURVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteECExponent(::System::Int32 arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECEXPONENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteECFieldElement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECFIELDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteECFieldElement(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECFIELDELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteECParameter(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteExplicitECParameters(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEEXPLICITECPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteECPoint(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITEECPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteNamedECParameters(::System::Int32 arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_WRITENAMEDECPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECCUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

