#pragma once
#include "unitysdk.h"

class UISprite;
class FloatingUIPositionComponent;
class UIMiniGameShootingHpBar;
namespace MX::MinigameShooting { class Character; }

#define MGSCHARACTERHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x205EC20)
#define MGSCHARACTERHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205ED50)
#define MGSCHARACTERHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x205EF30)
#define MGSCHARACTERHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x205EF80)

	inline static constexpr unsigned int MGSCharacterHpBar_TypeDefinitionIndex = 3388;

	class MGSCharacterHpBar : public Il2CppObject
	{
	public:
		UISprite* ForeGroundPlayer; // 0x30
		UISprite* ForeGroundEnemy; // 0x38
		FloatingUIPositionComponent* floatingUI; // 0x40

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSCHARACTERHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIMiniGameShootingHpBar* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(UIMiniGameShootingHpBar*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MGSCHARACTERHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSCHARACTERHPBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSCHARACTERHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

