#pragma once
#include "unitysdk.h"

class UIMiniGameShootingHpBar;
class UIMiniGameShootingDamageFloater;
class UIMiniGameShootingGeasSelect;
class UIMiniGameShootingResult;
class UIMiniGameShootingPause;
class UIMinigameShooting;

#define <>C__DISPLAYCLASS85_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14794E0)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x14794F0)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1479500)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__2_OFFSET UNITYSDK_OFFSET(0x1479510)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__3_OFFSET UNITYSDK_OFFSET(0x1479520)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__4_OFFSET UNITYSDK_OFFSET(0x1479530)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__5_OFFSET UNITYSDK_OFFSET(0x1479540)
#define <>C__DISPLAYCLASS85_0__COSTARTGAME_B__6_OFFSET UNITYSDK_OFFSET(0x1479550)

	inline static constexpr unsigned int <>c__DisplayClass85_0_TypeDefinitionIndex = 15152;

	class <>c__DisplayClass85_0 : public Il2CppObject
	{
	public:
		::System::Boolean fadeOut; // 0x10
		::System::Int32 uiLoading; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoStartGame_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__0_OFFSET))(nullptr);
		}

		::System::Void _CoStartGame_b__1(UIMiniGameShootingHpBar* arg)
		{
			((::System::Void(*)(UIMiniGameShootingHpBar*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _CoStartGame_b__2(UIMiniGameShootingDamageFloater* arg)
		{
			((::System::Void(*)(UIMiniGameShootingDamageFloater*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__2_OFFSET))(arg, nullptr);
		}

		::System::Void _CoStartGame_b__3(UIMiniGameShootingGeasSelect* arg)
		{
			((::System::Void(*)(UIMiniGameShootingGeasSelect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__3_OFFSET))(arg, nullptr);
		}

		::System::Void _CoStartGame_b__4(UIMiniGameShootingResult* arg)
		{
			((::System::Void(*)(UIMiniGameShootingResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__4_OFFSET))(arg, nullptr);
		}

		::System::Void _CoStartGame_b__5(UIMiniGameShootingPause* arg)
		{
			((::System::Void(*)(UIMiniGameShootingPause*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__5_OFFSET))(arg, nullptr);
		}

		::System::Void _CoStartGame_b__6(UIMinigameShooting* arg)
		{
			((::System::Void(*)(UIMinigameShooting*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_0__COSTARTGAME_B__6_OFFSET))(arg, nullptr);
		}

	};

