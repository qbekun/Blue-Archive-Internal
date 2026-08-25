#pragma once
#include "unitysdk.h"

#define UNDECLAREDNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99B95B0)

	inline static constexpr unsigned int UndeclaredNotation_TypeDefinitionIndex = 27801;

	class UndeclaredNotation : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 lineNo; // 0x18
		::System::Int32 linePos; // 0x1C
		UndeclaredNotation* next; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNDECLAREDNOTATION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};

