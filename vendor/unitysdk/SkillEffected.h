#pragma once
#include "unitysdk.h"

#define SKILLEFFECTED_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D40)

	inline static constexpr unsigned int SkillEffected_TypeDefinitionIndex = 9879;

	class SkillEffected : public Il2CppObject
	{
	public:
		::System::Boolean IsEffected; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLEFFECTED_.CTOR_OFFSET))(arg, nullptr);
		}

	};

