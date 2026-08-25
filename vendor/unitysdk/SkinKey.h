#pragma once
#include "unitysdk.h"

#define SKINKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DE250)

	inline static constexpr unsigned int SkinKey_TypeDefinitionIndex = 35067;

	class SkinKey : public Il2CppObject
	{
	public:
		::System::Int32 slotIndex; // 0x10
		::System::String* name; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SKINKEY_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};

