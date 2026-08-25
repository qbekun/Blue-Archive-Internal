#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class BerOctetStringGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOutputStream; }

#define BUFFEREDBEROCTETSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x7CE020)
#define BUFFEREDBEROCTETSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x7CE160)
#define BUFFEREDBEROCTETSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x7CE1D0)
#define BUFFEREDBEROCTETSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7CDF70)

	inline static constexpr unsigned int BufferedBerOctetStream_TypeDefinitionIndex = 22770;

	class BufferedBerOctetStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::Il2CppArray<::System::Object*>* _buf; // 0x30
		::System::Int32 _off; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerOctetStringGenerator* _gen; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* _derOut; // 0x48

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDBEROCTETSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDBEROCTETSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDBEROCTETSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerOctetStringGenerator* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerOctetStringGenerator*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFEREDBEROCTETSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

