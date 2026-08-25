#pragma once
#include "unitysdk.h"

#define SINGLEOBJECTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A24E0)
#define SINGLEOBJECTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99A2520)
#define SINGLEOBJECTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99A2580)
#define SINGLEOBJECTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x99A25A0)

	inline static constexpr unsigned int SingleObjectEnumerator_TypeDefinitionIndex = 27771;

	class SingleObjectEnumerator : public Il2CppObject
	{
	public:
		::System::Object* loneValue; // 0x10
		::System::Int32 position; // 0x18

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SINGLEOBJECTENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEOBJECTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEOBJECTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLEOBJECTENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

