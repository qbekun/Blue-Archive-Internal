#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedDataStreamGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class BerSequenceGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Generator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define CMSSIGNEDDATAOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x7A5D70)
#define CMSSIGNEDDATAOUTPUTSTREAM_WRITETOGENERATOR_OFFSET UNITYSDK_OFFSET(0x7A5DA0)
#define CMSSIGNEDDATAOUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x7A5E10)
#define CMSSIGNEDDATAOUTPUTSTREAM_DOCLOSE_OFFSET UNITYSDK_OFFSET(0x7A5E40)
#define CMSSIGNEDDATAOUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x7A7890)
#define CMSSIGNEDDATAOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A4BB0)

	inline static constexpr unsigned int CmsSignedDataOutputStream_TypeDefinitionIndex = 22703;

	class CmsSignedDataOutputStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer; // 0x30
		::System::IO::Stream* _out; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentOID; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sigGen; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen; // 0x58

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteToGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Generator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Generator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_WRITETOGENERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void DoClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_DOCLOSE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* arg, ::System::IO::Stream* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator*, ::System::IO::Stream*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + CMSSIGNEDDATAOUTPUTSTREAM_.CTOR_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

	};

