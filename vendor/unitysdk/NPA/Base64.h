#pragma once
#include "../unitysdk.h"

#define NPA_BASE64_ENCODE_OFFSET UNITYSDK_OFFSET(0x9BBCD50)
#define NPA_BASE64_ENCODE_OFFSET UNITYSDK_OFFSET(0x9BBCE20)
#define NPA_BASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x9BBCE70)
#define NPA_BASE64_ENCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9BBCDD0)

namespace NPA
{
	inline static constexpr unsigned int Base64_TypeDefinitionIndex = 25525;

	class Base64 : public Il2CppObject
	{
	public:
		::System::String* Encode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_BASE64_ENCODE_OFFSET))(str, nullptr);
		}

		::System::String* Encode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_BASE64_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::String* Decode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_BASE64_DECODE_OFFSET))(str, nullptr);
		}

		::System::String* EncodeInternal(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_BASE64_ENCODEINTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

