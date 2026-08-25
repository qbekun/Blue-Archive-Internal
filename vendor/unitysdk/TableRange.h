#pragma once
#include "unitysdk.h"

#define TABLERANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9124770)

	inline static constexpr unsigned int TableRange_TypeDefinitionIndex = 23599;

	class TableRange : public Il2CppObject
	{
	public:
		::System::Int32 Start; // 0x10
		::System::Int32 End; // 0x14
		::System::Int32 Count; // 0x18
		::System::Int32 IndexStart; // 0x1C
		::System::Int32 IndexEnd; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TABLERANGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

