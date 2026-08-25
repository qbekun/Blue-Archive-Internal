#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_.CTOR_OFFSET UNITYSDK_OFFSET(0x91937D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_.CTOR_OFFSET UNITYSDK_OFFSET(0x9193830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x9193940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x9193950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_SET_PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x9193960)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA384_TypeDefinitionIndex = 24342;

	class HMACSHA384 : public Il2CppObject
	{
	public:
		::System::Boolean m_useLegacyBlockSize; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_ProduceLegacyHmacValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_GET_PRODUCELEGACYHMACVALUES_OFFSET))(nullptr);
		}

		::System::Void set_ProduceLegacyHmacValues(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA384_SET_PRODUCELEGACYHMACVALUES_OFFSET))(arg, nullptr);
		}

	};
}

