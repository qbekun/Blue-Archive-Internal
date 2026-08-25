#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZOutputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class BerSequenceGenerator; }

#define CMSCOMPRESSEDOUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x790A00)
#define CMSCOMPRESSEDOUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x790A30)
#define CMSCOMPRESSEDOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x790AE0)
#define CMSCOMPRESSEDOUTPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x790980)

	inline static constexpr unsigned int CmsCompressedOutputStream_TypeDefinitionIndex = 22677;

	class CmsCompressedOutputStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* _out; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _cGen; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen; // 0x48

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + CMSCOMPRESSEDOUTPUTSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMSCOMPRESSEDOUTPUTSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CMSCOMPRESSEDOUTPUTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + CMSCOMPRESSEDOUTPUTSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

