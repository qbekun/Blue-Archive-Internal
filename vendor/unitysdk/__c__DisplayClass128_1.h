#pragma once
#include "unitysdk.h"

class TeamPosition;
class CharacterObject;

#define <>C__DISPLAYCLASS128_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F2790)
#define <>C__DISPLAYCLASS128_1__SETSELECTBUFFCHARACTER_B__2_OFFSET UNITYSDK_OFFSET(0x24F86D0)

	inline static constexpr unsigned int <>c__DisplayClass128_1_TypeDefinitionIndex = 6051;

	class <>c__DisplayClass128_1 : public Il2CppObject
	{
	public:
		TeamPosition* teamPosition; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS128_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetSelectBuffCharacter_b__2(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS128_1__SETSELECTBUFFCHARACTER_B__2_OFFSET))(arg, nullptr);
		}

	};

