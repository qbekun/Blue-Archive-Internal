#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define <>C__DISPLAYCLASS304_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0AB0)
#define <>C__DISPLAYCLASS304_0__RESTART_B__0_OFFSET UNITYSDK_OFFSET(0x1DB0AC0)

	inline static constexpr unsigned int <>c__DisplayClass304_0_TypeDefinitionIndex = 20422;

	class <>c__DisplayClass304_0 : public Il2CppObject
	{
	public:
		::MX::MinigameRhythm::MinigameRhythmLogicManager* __4__this; // 0x10
		::System::Boolean loadUI; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS304_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Restart_b__0(UIMinigameRhythmBattle* arg)
		{
			((::System::Void(*)(UIMinigameRhythmBattle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS304_0__RESTART_B__0_OFFSET))(arg, nullptr);
		}

	};

