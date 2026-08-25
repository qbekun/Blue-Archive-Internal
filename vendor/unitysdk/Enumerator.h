#pragma once
#include "unitysdk.h"

#define ENUMERATOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1040240)
#define ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1040250)
#define ENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x10401D0)
#define ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1040260)
#define ENUMERATOR_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1040390)

	inline static constexpr unsigned int Enumerator_TypeDefinitionIndex = 12858;

	class Enumerator : public Il2CppObject
	{
	public:
		Il2CppObject* _input; // 0x10
		Il2CppObject* _separators; // 0x20
		::System::Int32 _wordPos; // 0x30
		Il2CppObject* _Current_k__BackingField; // 0x38

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATOR_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERATOR_CONTAINS_OFFSET))(arg, nullptr);
		}

	};

