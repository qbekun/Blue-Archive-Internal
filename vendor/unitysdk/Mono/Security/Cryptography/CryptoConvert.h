#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET UNITYSDK_OFFSET(0x910CED0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x910CFE0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x910D080)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConvert_TypeDefinitionIndex = 35804;

	class CryptoConvert : public Il2CppObject
	{
	public:
		::System::String* ToHex(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET))(arg, nullptr);
		}

		::System::Byte FromHexChar(::System::Char arg)
		{
			return (return (::System::Byte(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromHex(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET))(str, nullptr);
		}

	};
}

