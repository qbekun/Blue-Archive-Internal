#pragma once
#include "unitysdk.h"

namespace BoardGame { class UIEventConcentrationClear; }

#define <>C__DISPLAYCLASS31_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0DBD0)
#define <>C__DISPLAYCLASS31_1__CO_UPDATE_B__5_OFFSET UNITYSDK_OFFSET(0xE0DBE0)
#define <>C__DISPLAYCLASS31_1__CO_UPDATE_B__6_OFFSET UNITYSDK_OFFSET(0xE0DC90)

	inline static constexpr unsigned int <>c__DisplayClass31_1_TypeDefinitionIndex = 10279;

	class <>c__DisplayClass31_1 : public Il2CppObject
	{
	public:
		::System::Boolean isClearAniEnded; // 0x10
		::System::Action* __9__6; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Co_Update_b__5(::BoardGame::UIEventConcentrationClear* arg)
		{
			((::System::Void(*)(::BoardGame::UIEventConcentrationClear*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_1__CO_UPDATE_B__5_OFFSET))(arg, nullptr);
		}

		::System::Void _Co_Update_b__6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_1__CO_UPDATE_B__6_OFFSET))(nullptr);
		}

	};

