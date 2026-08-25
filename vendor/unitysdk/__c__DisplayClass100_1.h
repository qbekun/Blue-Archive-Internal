#pragma once
#include "unitysdk.h"

class CharacterObject;

#define <>C__DISPLAYCLASS100_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x23848B0)
#define <>C__DISPLAYCLASS100_1__ASSISTFORMATIONCHECK_B__3_OFFSET UNITYSDK_OFFSET(0x23848C0)

	inline static constexpr unsigned int <>c__DisplayClass100_1_TypeDefinitionIndex = 5120;

	class <>c__DisplayClass100_1 : public Il2CppObject
	{
	public:
		CharacterObject* characterCard; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS100_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AssistFormationCheck_b__3(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS100_1__ASSISTFORMATIONCHECK_B__3_OFFSET))(arg, nullptr);
		}

	};

