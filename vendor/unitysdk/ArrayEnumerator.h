#pragma once
#include "unitysdk.h"

#define ARRAYENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x938D590)
#define ARRAYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x938D5E0)
#define ARRAYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x938D600)
#define ARRAYENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x938D610)
#define ARRAYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x938D620)

	inline static constexpr unsigned int ArrayEnumerator_TypeDefinitionIndex = 23899;

	class ArrayEnumerator : public Il2CppObject
	{
	public:
		::System::Array* _array; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _endIndex; // 0x1C

		::System::Void .ctor(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

