#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentStageInfo; }
class UIVictory;
class UIEventStageResult;

#define <>C__DISPLAYCLASS113_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB4890)
#define <>C__DISPLAYCLASS113_3__ONCLICKSHOWRESULT_B__5_OFFSET UNITYSDK_OFFSET(0xBBA750)

	inline static constexpr unsigned int <>c__DisplayClass113_3_TypeDefinitionIndex = 8594;

	class <>c__DisplayClass113_3 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentStageInfo* eventContentStageInfo; // 0x10
		Il2CppObject* rewardList; // 0x18
		Il2CppObject* bonusRewardList; // 0x20
		Il2CppObject* debuffIdList; // 0x28
		Il2CppObject* bonusCharacterIdList; // 0x30
		UIVictory* __4__this; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS113_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickShowResult_b__5(UIEventStageResult* arg)
		{
			((::System::Void(*)(UIEventStageResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS113_3__ONCLICKSHOWRESULT_B__5_OFFSET))(arg, nullptr);
		}

	};

