#pragma once
#include "unitysdk.h"

class MGSBossHpBar;
class MGSCharacterHpBar;
namespace MX::MinigameShooting { class Character; }

#define UIMINIGAMESHOOTINGHPBAR_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2065060)
#define UIMINIGAMESHOOTINGHPBAR_CLEARBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x20650D0)
#define UIMINIGAMESHOOTINGHPBAR_CREATECHARACTERHP_OFFSET UNITYSDK_OFFSET(0x2065150)
#define UIMINIGAMESHOOTINGHPBAR_UNLOADHPBAR_OFFSET UNITYSDK_OFFSET(0x205ECD0)
#define UIMINIGAMESHOOTINGHPBAR_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2065240)
#define UIMINIGAMESHOOTINGHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x2065460)
#define UIMINIGAMESHOOTINGHPBAR_SETBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x20654E0)
#define UIMINIGAMESHOOTINGHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2065570)

	inline static constexpr unsigned int UIMiniGameShootingHpBar_TypeDefinitionIndex = 3412;

	class UIMiniGameShootingHpBar : public Il2CppObject
	{
	public:
		MGSBossHpBar* BossHpBar; // 0xD8
		MGSCharacterHpBar* HPBar; // 0xE0
		Il2CppObject* characterHpBars; // 0xE8
		Il2CppObject* characterHpBarPool; // 0xF0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearBossHpBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_CLEARBOSSHPBAR_OFFSET))(nullptr);
		}

		MGSCharacterHpBar* CreateCharacterHp(::MX::MinigameShooting::Character* arg)
		{
			return ((MGSCharacterHpBar*(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_CREATECHARACTERHP_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadHpBar(MGSCharacterHpBar* arg)
		{
			((::System::Void(*)(MGSCharacterHpBar*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_UNLOADHPBAR_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_AWAKE_OFFSET))(nullptr);
		}

		MGSBossHpBar* SetBossHpBar(::MX::MinigameShooting::Character* arg)
		{
			return ((MGSBossHpBar*(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_SETBOSSHPBAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

