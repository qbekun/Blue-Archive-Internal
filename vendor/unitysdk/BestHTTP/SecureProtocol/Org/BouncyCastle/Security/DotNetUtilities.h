#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509CertificateStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricCipherKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DsaPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class RsaKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class RsaPrivateCrtKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class RsaPrivateKeyStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TOX509CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9A5000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TOX509CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9A5070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_FROMX509CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9A50F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9A5170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9A51E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9A5430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9A54A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9A5660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9A56D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9A5960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9A59D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETKEYPAIR_OFFSET UNITYSDK_OFFSET(0x9A5AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A5C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A5E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A5FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A61A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A6260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET UNITYSDK_OFFSET(0x9A6430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9A5C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9A6000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9A6290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CONVERTRSAPARAMETERSFIELD_OFFSET UNITYSDK_OFFSET(0x9A64F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CREATERSAPROVIDER_OFFSET UNITYSDK_OFFSET(0x9A5D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CREATERSAPROVIDER_OFFSET UNITYSDK_OFFSET(0x9A5F30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int DotNetUtilities_TypeDefinitionIndex = 21708;

	class DotNetUtilities : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TOX509CERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TOX509CERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_FROMX509CERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSA* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAKEYPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSAParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAKEYPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSA* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSAParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*(*)(::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETDSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAKEYPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSAParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAKEYPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSAParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETRSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_GETKEYPAIR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* ToRSA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSA_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ToRSAParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ToRSAParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAParameters* ToRSAParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* arg)
		{
			return (return (::System::Security::Cryptography::RSAParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_TORSAPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ConvertRSAParametersField(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CONVERTRSAPARAMETERSFIELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::Security::Cryptography::RSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CREATERSAPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters* arg, ::System::Security::Cryptography::CspParameters* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::System::Security::Cryptography::RSAParameters*, ::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_DOTNETUTILITIES_CREATERSAPROVIDER_OFFSET))(arg, arg, nullptr);
		}

	};
}

