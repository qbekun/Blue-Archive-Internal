#pragma once
#include "unitysdk.h"

class UIEnemyInfoAdvantageSingleLine;
class BulletArmorDamageInfo;

#define UIBULLETARMORDAMAGEFACTORTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x274D090)
#define UIBULLETARMORDAMAGEFACTORTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274D0D0)

	inline static constexpr unsigned int UIBulletArmorDamageFactorTooltip_TypeDefinitionIndex = 7248;

	class UIBulletArmorDamageFactorTooltip : public ::UnityEngine::InputSystem::LowLevel::MouseState
	{
	public:
		UIEnemyInfoAdvantageSingleLine* bulletArmorTable; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBULLETARMORDAMAGEFACTORTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(BulletArmorDamageInfo* arg)
		{
			((::System::Void(*)(BulletArmorDamageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBULLETARMORDAMAGEFACTORTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

