#pragma once
#include "unitysdk.h"

class CharacterObject;
class UICharacterDetail;

#define <>C__DISPLAYCLASS127_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F12E0)
#define <>C__DISPLAYCLASS127_0__OPENCHARACTERDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0x24F8530)
#define <>C__DISPLAYCLASS127_0__OPENCHARACTERDETAIL_B__1_OFFSET UNITYSDK_OFFSET(0x24F8630)

	inline static constexpr unsigned int <>c__DisplayClass127_0_TypeDefinitionIndex = 6049;

	class <>c__DisplayClass127_0 : public Il2CppObject
	{
	public:
		Il2CppObject* detailCharacterList; // 0x10
		CharacterObject* charObj; // 0x18
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS127_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenCharacterDetail_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS127_0__OPENCHARACTERDETAIL_B__0_OFFSET))(nullptr);
		}

		::System::Void _OpenCharacterDetail_b__1(UICharacterDetail* arg)
		{
			((::System::Void(*)(UICharacterDetail*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS127_0__OPENCHARACTERDETAIL_B__1_OFFSET))(arg, nullptr);
		}

	};

