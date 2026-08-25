#pragma once
#include "unitysdk.h"

#define INTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7C60)

	inline static constexpr unsigned int Interaction_TypeDefinitionIndex = 9875;

	class Interaction : public Il2CppObject
	{
	public:
		::System::Int32 TriggerCount; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};

