#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UISprite;

#define UIMULTIFLOORRAIDBOSSINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26A2240)
#define UIMULTIFLOORRAIDBOSSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A2750)

	inline static constexpr unsigned int UIMultiFloorRaidBossInfo_TypeDefinitionIndex = 6845;

	class UIMultiFloorRaidBossInfo : public Il2CppObject
	{
	public:
		UITexture* BossPortrait; // 0x18
		UILabel* NameLabel; // 0x20
		UISprite* TopographyIcon; // 0x28
		UISprite* ArmorTypeBG; // 0x30
		UILabel* ArmorTypeLabel; // 0x38
		UISprite* BulletTypeBG; // 0x40
		UILabel* BulletTypeLabel; // 0x48

		::System::Void Initialize(::System::String* str, ::System::String* str2, ::System::String* str3, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDBOSSINFO_INITIALIZE_OFFSET))(str, str2, str3, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDBOSSINFO_.CTOR_OFFSET))(nullptr);
		}

	};

