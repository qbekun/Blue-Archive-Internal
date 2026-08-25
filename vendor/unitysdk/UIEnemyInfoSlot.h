#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UITexture;
class UISprite;
class EnemyElementInfo;

#define UIENEMYINFOSLOT_INITLIAZE_OFFSET UNITYSDK_OFFSET(0x23F5070)
#define UIENEMYINFOSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F52D0)

	inline static constexpr unsigned int UIEnemyInfoSlot_TypeDefinitionIndex = 5426;

	class UIEnemyInfoSlot : public Il2CppObject
	{
	public:
		UILabel* NameLabel; // 0x18
		::UnityEngine::GameObject* BossIcon; // 0x20
		::UnityEngine::GameObject* EliteIcon; // 0x28
		UITexture* Texture; // 0x30
		UITexture* SquadTypeTexure; // 0x38
		UISprite* BulletTypeBG; // 0x40
		UILabel* BulletType; // 0x48
		UISprite* ArmorTypeBG; // 0x50
		UILabel* ArmorType; // 0x58

		::System::Void Initliaze(EnemyElementInfo* arg)
		{
			((::System::Void(*)(EnemyElementInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOSLOT_INITLIAZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

