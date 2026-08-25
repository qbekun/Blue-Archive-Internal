#pragma once
#include "unitysdk.h"

#define VALUESANDNAMES_.CTOR_OFFSET UNITYSDK_OFFSET(0x939C270)

	inline static constexpr unsigned int ValuesAndNames_TypeDefinitionIndex = 23929;

	class ValuesAndNames : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Values; // 0x10
		::Il2CppArray<::System::Object*>* Names; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESANDNAMES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

