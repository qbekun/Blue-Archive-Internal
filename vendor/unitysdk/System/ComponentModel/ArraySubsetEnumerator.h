#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4AC40)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B4AC80)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B4ACA0)
#define SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B4ACB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArraySubsetEnumerator_TypeDefinitionIndex = 29484;

	class ArraySubsetEnumerator : public Il2CppObject
	{
	public:
		::System::Array* array; // 0x10
		::System::Int32 total; // 0x18
		::System::Int32 current; // 0x1C

		::System::Void .ctor(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

