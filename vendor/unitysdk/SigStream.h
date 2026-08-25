#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define SIGSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x6159F0)
#define SIGSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x615A90)
#define SIGSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6159B0)

	inline static constexpr unsigned int SigStream_TypeDefinitionIndex = 22170;

	class SigStream : public ::TriInspector::TriDropdownList`1
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* s; // 0x30

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SIGSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SIGSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::PVOID))((::PBYTE)hIl2Cpp + SIGSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

	};

