#pragma once
#include "unitysdk.h"

#define HEBREWVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9265610)

	inline static constexpr unsigned int HebrewValue_TypeDefinitionIndex = 24968;

	class HebrewValue : public Il2CppObject
	{
	public:
		HebrewToken* token; // 0x10
		::System::Int16 value; // 0x12

		::System::Void .ctor(HebrewToken* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(HebrewToken*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + HEBREWVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

