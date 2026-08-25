#pragma once
#include "unitysdk.h"

#define ARRAYSUBSETENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B309E0)
#define ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B312A0)
#define ARRAYSUBSETENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B312C0)
#define ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B312D0)

	inline static constexpr unsigned int ArraySubsetEnumerator_TypeDefinitionIndex = 29388;

	class ArraySubsetEnumerator : public Il2CppObject
	{
	public:
		::System::Array* _array; // 0x10
		::System::Int32 _total; // 0x18
		::System::Int32 _current; // 0x1C

		::System::Void .ctor(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYSUBSETENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYSUBSETENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYSUBSETENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYSUBSETENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

