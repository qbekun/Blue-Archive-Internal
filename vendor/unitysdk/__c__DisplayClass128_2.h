#pragma once
#include "unitysdk.h"

class SupportPosition;
class CharacterObject;

#define <>C__DISPLAYCLASS128_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F27A0)
#define <>C__DISPLAYCLASS128_2__SETSELECTBUFFCHARACTER_B__3_OFFSET UNITYSDK_OFFSET(0x24F8720)

	inline static constexpr unsigned int <>c__DisplayClass128_2_TypeDefinitionIndex = 6052;

	class <>c__DisplayClass128_2 : public Il2CppObject
	{
	public:
		SupportPosition* supportPosition; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS128_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetSelectBuffCharacter_b__3(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS128_2__SETSELECTBUFFCHARACTER_B__3_OFFSET))(arg, nullptr);
		}

	};

