#pragma once
#include "unitysdk.h"

class CharacterDetailData;
class UICharacterDetail;

#define <>C__DISPLAYCLASS58_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xA91130)
#define <>C__DISPLAYCLASS58_1__ONCLICKNOTICESTUDENTBUTTON_B__1_OFFSET UNITYSDK_OFFSET(0xA91140)

	inline static constexpr unsigned int <>c__DisplayClass58_1_TypeDefinitionIndex = 7931;

	class <>c__DisplayClass58_1 : public Il2CppObject
	{
	public:
		CharacterDetailData* detailList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS58_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickNoticeStudentButton_b__1(UICharacterDetail* arg)
		{
			((::System::Void(*)(UICharacterDetail*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS58_1__ONCLICKNOTICESTUDENTBUTTON_B__1_OFFSET))(arg, nullptr);
		}

	};

