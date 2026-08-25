#pragma once
#include "unitysdk.h"

class CharacterDetailData;
class UICharacterDetail;

#define <>C__DISPLAYCLASS41_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA0FA0)
#define <>C__DISPLAYCLASS41_1__SHOWCHARACTERDETAIL_B__1_OFFSET UNITYSDK_OFFSET(0xAA0FB0)

	inline static constexpr unsigned int <>c__DisplayClass41_1_TypeDefinitionIndex = 7957;

	class <>c__DisplayClass41_1 : public Il2CppObject
	{
	public:
		CharacterDetailData* detailList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowCharacterDetail_b__1(UICharacterDetail* arg)
		{
			((::System::Void(*)(UICharacterDetail*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_1__SHOWCHARACTERDETAIL_B__1_OFFSET))(arg, nullptr);
		}

	};

