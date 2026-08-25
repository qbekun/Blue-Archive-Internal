#pragma once
#include "unitysdk.h"

class BossAppearState;
class WorldRaidZoneBalloonAnimationState;

#define <>C__DISPLAYCLASS53_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0BB70)
#define <>C__DISPLAYCLASS53_1__CHECKAPPEARSTATE_B__2_OFFSET UNITYSDK_OFFSET(0xC0DA00)
#define <>C__DISPLAYCLASS53_1__CHECKAPPEARSTATE_B__3_OFFSET UNITYSDK_OFFSET(0xC0DA70)

	inline static constexpr unsigned int <>c__DisplayClass53_1_TypeDefinitionIndex = 8812;

	class <>c__DisplayClass53_1 : public Il2CppObject
	{
	public:
		BossAppearState* state; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAppearState_b__2(WorldRaidZoneBalloonAnimationState* arg)
		{
			return ((::System::Boolean(*)(WorldRaidZoneBalloonAnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_1__CHECKAPPEARSTATE_B__2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAppearState_b__3(WorldRaidZoneBalloonAnimationState* arg)
		{
			return ((::System::Boolean(*)(WorldRaidZoneBalloonAnimationState*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_1__CHECKAPPEARSTATE_B__3_OFFSET))(arg, nullptr);
		}

	};

