#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETDIGESTALGNAME_OFFSET UNITYSDK_OFFSET(0x9442E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x942C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETNONCRITICALEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x944410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_CREATEDIGESTINSTANCE_OFFSET UNITYSDK_OFFSET(0x944500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x944580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETDIGESTLENGTH_OFFSET UNITYSDK_OFFSET(0x93EAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETSIGNATURETIMESTAMPS_OFFSET UNITYSDK_OFFSET(0x9460B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x93ED90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETCRITICALEXTENSIONOIDS_OFFSET UNITYSDK_OFFSET(0x946C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x946D70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TspUtil_TypeDefinitionIndex = 21649;

	class TspUtil : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* EmptySet; // 0x0
		::System::Collections::IList* EmptyList; // 0x8
		::System::Collections::IDictionary* digestLengths; // 0x10
		::System::Collections::IDictionary* digestNames; // 0x18

		::System::String* GetDigestAlgName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETDIGESTALGNAME_OFFSET))(str, nullptr);
		}

		::System::Void ValidateCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_VALIDATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETNONCRITICALEXTENSIONOIDS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreateDigestInstance(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_CREATEDIGESTINSTANCE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestLength(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETDIGESTLENGTH_OFFSET))(str, nullptr);
		}

		::System::Collections::ICollection* GetSignatureTimestamps(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETSIGNATURETIMESTAMPS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetExtensionOids(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::System::Collections::IList*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETEXTENSIONOIDS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_GETCRITICALEXTENSIONOIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

