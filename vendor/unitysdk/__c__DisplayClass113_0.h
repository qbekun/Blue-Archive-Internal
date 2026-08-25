#pragma once
#include "unitysdk.h"

namespace MX::Data { class MiniGameDefenseStageInfo; }
class UIVictory;

#define <>C__DISPLAYCLASS113_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB05E0)
#define <>C__DISPLAYCLASS113_0__ONCLICKSHOWRESULT_B__1_OFFSET UNITYSDK_OFFSET(0xBBA2C0)

	inline static constexpr unsigned int <>c__DisplayClass113_0_TypeDefinitionIndex = 8591;

	class <>c__DisplayClass113_0 : public Il2CppObject
	{
	public:
		::MX::Data::MiniGameDefenseStageInfo* defenseStageInfo; // 0x10
		UIVictory* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS113_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickShowResult_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS113_0__ONCLICKSHOWRESULT_B__1_OFFSET))(nullptr);
		}

	};

