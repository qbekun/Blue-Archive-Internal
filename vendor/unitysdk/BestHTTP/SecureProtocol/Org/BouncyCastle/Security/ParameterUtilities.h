#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B0230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_ADDALGORITHM_OFFSET UNITYSDK_OFFSET(0x9B2AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_ADDBASICIVSIZEENTRIES_OFFSET UNITYSDK_OFFSET(0x9B2CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCANONICALALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x9B2E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET UNITYSDK_OFFSET(0x9B2F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET UNITYSDK_OFFSET(0x9B32C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET UNITYSDK_OFFSET(0x9B3330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET UNITYSDK_OFFSET(0x9B2FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCIPHERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9B33B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCIPHERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9B3420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GENERATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9B3A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GENERATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9B3A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_WITHRANDOM_OFFSET UNITYSDK_OFFSET(0x9B41A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEIVOCTETSTRING_OFFSET UNITYSDK_OFFSET(0x9B3F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEIV_OFFSET UNITYSDK_OFFSET(0x9B40F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_FINDBASICIVSIZE_OFFSET UNITYSDK_OFFSET(0x9B3840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	inline static constexpr unsigned int ParameterUtilities_TypeDefinitionIndex = 21716;

	class ParameterUtilities : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* algorithms; // 0x0
		::System::Collections::IDictionary* basicIVSizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddAlgorithm(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_ADDALGORITHM_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddBasicIVSizeEntries(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_ADDBASICIVSIZEENTRIES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCanonicalAlgorithmName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCANONICALALGORITHMNAME_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* CreateKeyParameter(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEKEYPARAMETER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCIPHERPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GETCIPHERPARAMETERS_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GENERATEPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateParameters(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_GENERATEPARAMETERS_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* WithRandom(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_WITHRANDOM_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* CreateIVOctetString(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEIVOCTETSTRING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateIV(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_CREATEIV_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindBasicIVSize(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_SECURITY_PARAMETERUTILITIES_FINDBASICIVSIZE_OFFSET))(str, nullptr);
		}

	};
}

