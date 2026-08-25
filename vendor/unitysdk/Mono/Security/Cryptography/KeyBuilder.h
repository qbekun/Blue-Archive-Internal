#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x9134D60)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET UNITYSDK_OFFSET(0x9134DE0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET UNITYSDK_OFFSET(0x9134EB0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_TypeDefinitionIndex = 23618;

	class KeyBuilder : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* rng; // 0x0

		::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Key(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* IV(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET))(arg, nullptr);
		}

	};
}

