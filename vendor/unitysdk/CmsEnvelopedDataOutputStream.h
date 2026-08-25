#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO { class CipherStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class BerSequenceGenerator; }

#define CMSENVELOPEDDATAOUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x7938F0)
#define CMSENVELOPEDDATAOUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x793920)
#define CMSENVELOPEDDATAOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x793B20)
#define CMSENVELOPEDDATAOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7936C0)

	inline static constexpr unsigned int CmsEnvelopedDataOutputStream_TypeDefinitionIndex = 22683;

	class CmsEnvelopedDataOutputStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* _outer; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::CipherStream* _out; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _cGen; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _envGen; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen; // 0x50

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDDATAOUTPUTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDDATAOUTPUTSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDDATAOUTPUTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::CipherStream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::CipherStream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + CMSENVELOPEDDATAOUTPUTSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

