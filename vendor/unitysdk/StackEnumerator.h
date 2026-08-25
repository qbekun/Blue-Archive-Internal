#pragma once
#include "unitysdk.h"

#define STACKENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D0A70)
#define STACKENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x92D0D20)
#define STACKENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92D0D30)
#define STACKENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92D0E70)
#define STACKENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x92D0F10)

	inline static constexpr unsigned int StackEnumerator_TypeDefinitionIndex = 25081;

	class StackEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::Stack* _stack; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _currentElement; // 0x20

		::System::Void .ctor(::System::Collections::Stack* arg)
		{
			((::System::Void(*)(::System::Collections::Stack*, ::PVOID))((::PBYTE)hIl2Cpp + STACKENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

