#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_CRYPTO_FASTCRC_.CTOR_OFFSET UNITYSDK_OFFSET(0x107C8C0)
#define MX_CORE_CRYPTO_FASTCRC_GETCRC_OFFSET UNITYSDK_OFFSET(0x107CA60)
#define MX_CORE_CRYPTO_FASTCRC_GENERATE_OFFSET UNITYSDK_OFFSET(0x107C8F0)
#define MX_CORE_CRYPTO_FASTCRC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x107CB30)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int FastCRC_TypeDefinitionIndex = 12901;

	class FastCRC : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* crc_table; // 0x0
		::System::UInt32 POLYNOMIAL; // 0x10
		::System::UInt32 MASK; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_FASTCRC_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean GetCRC(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3, uint32_t&* arg4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_FASTCRC_GETCRC_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Generate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_FASTCRC_GENERATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_FASTCRC_.CCTOR_OFFSET))(nullptr);
		}

	};
}

