#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define DIGSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x602B30)
#define DIGSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x602B00)
#define DIGSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x602BF0)

	inline static constexpr unsigned int DigStream_TypeDefinitionIndex = 22110;

	class DigStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* d; // 0x30

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DIGSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + DIGSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + DIGSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

	};

