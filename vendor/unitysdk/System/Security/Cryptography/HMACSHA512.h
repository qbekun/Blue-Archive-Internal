#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_.CTOR_OFFSET UNITYSDK_OFFSET(0x91939E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x9193AF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x9193B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_SET_PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x9193B10)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA512_TypeDefinitionIndex = 24343;

	class HMACSHA512 : public Il2CppObject
	{
	public:
		::System::Boolean m_useLegacyBlockSize; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_ProduceLegacyHmacValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_PRODUCELEGACYHMACVALUES_OFFSET))(nullptr);
		}

		::System::Void set_ProduceLegacyHmacValues(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_SET_PRODUCELEGACYHMACVALUES_OFFSET))(arg, nullptr);
		}

	};
}

