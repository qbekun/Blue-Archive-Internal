#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARRAYSPEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C7FF0)
#define SYSTEM_ARRAYSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x93C8020)
#define SYSTEM_ARRAYSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x93C80B0)
#define SYSTEM_ARRAYSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93C8150)

namespace System
{
	inline static constexpr unsigned int ArraySpec_TypeDefinitionIndex = 24006;

	class ArraySpec : public Il2CppObject
	{
	public:
		::System::Int32 dimensions; // 0x10
		::System::Boolean bound; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* Resolve(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_RESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_APPEND_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSPEC_TOSTRING_OFFSET))(nullptr);
		}

	};
}

