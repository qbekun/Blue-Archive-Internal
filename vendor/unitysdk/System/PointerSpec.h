#pragma once
#include "../unitysdk.h"

#define SYSTEM_POINTERSPEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C81D0)
#define SYSTEM_POINTERSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x93C81F0)
#define SYSTEM_POINTERSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x93C8240)
#define SYSTEM_POINTERSPEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93C8270)

namespace System
{
	inline static constexpr unsigned int PointerSpec_TypeDefinitionIndex = 24007;

	class PointerSpec : public Il2CppObject
	{
	public:
		::System::Int32 pointer_level; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* Resolve(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_RESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_APPEND_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_POINTERSPEC_TOSTRING_OFFSET))(nullptr);
		}

	};
}

