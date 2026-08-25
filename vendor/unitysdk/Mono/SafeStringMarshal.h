#pragma once
#include "../unitysdk.h"

#define MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_ICALL_OFFSET UNITYSDK_OFFSET(0x9121850)
#define MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_OFFSET UNITYSDK_OFFSET(0x9121860)
#define MONO_SAFESTRINGMARSHAL_GFREE_OFFSET UNITYSDK_OFFSET(0x9121880)
#define MONO_SAFESTRINGMARSHAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91215F0)
#define MONO_SAFESTRINGMARSHAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9121890)
#define MONO_SAFESTRINGMARSHAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9121900)

namespace Mono
{
	inline static constexpr unsigned int SafeStringMarshal_TypeDefinitionIndex = 23591;

	class SafeStringMarshal : public Il2CppObject
	{
	public:
		::System::String* str; // 0x10
		::System::Int32 marshaled_string; // 0x18

		::System::Int32 StringToUtf8_icall(::System::String&* arg)
		{
			return (return (::System::Int32(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_ICALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 StringToUtf8(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_OFFSET))(str, nullptr);
		}

		::System::Void GFree(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_GFREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_DISPOSE_OFFSET))(nullptr);
		}

	};
}

