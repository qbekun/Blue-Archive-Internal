#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class CipherKeyGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x792500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x792550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x792630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_SETBERENCODERECIPIENTS_OFFSET UNITYSDK_OFFSET(0x792640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x792650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7926D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x792D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x793750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x793820)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedDataStreamGenerator_TypeDefinitionIndex = 22684;

	class CmsEnvelopedDataStreamGenerator : public Il2CppObject
	{
	public:
		::System::Object* _originatorInfo; // 0x28
		::System::Object* _unprotectedAttributes; // 0x30
		::System::Int32 _bufferSize; // 0x38
		::System::Boolean _berEncodeRecipientSet; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetBufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBerEncodeRecipients(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_SETBERENCODERECIPIENTS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_GET_VERSION_OFFSET))(nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

