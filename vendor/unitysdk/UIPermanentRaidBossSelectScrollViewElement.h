#pragma once
#include "unitysdk.h"

class UIGrid;
class UITexture;
class UILabel;
class UISprite;
class UIWidget;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace FlatData { class RaidBossGroupType; }

#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26D64F0)
#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_ONSELECTBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D6C40)
#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26D6D00)
#define UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D6E40)

	inline static constexpr unsigned int UIPermanentRaidBossSelectScrollViewElement_TypeDefinitionIndex = 7031;

	class UIPermanentRaidBossSelectScrollViewElement : public ::System::Xml::XmlComplianceUtil
	{
	public:
		UIGrid* bossGroupTabGrid; // 0x28
		Il2CppObject* bossGroupTabIcons; // 0x30
		UITexture* bossPortrait; // 0x38
		UILabel* bossName; // 0x40
		UILabel* bossNickName; // 0x48
		UISprite* bossArmorTypePanel; // 0x50
		UILabel* bossArmorType; // 0x58
		UISprite* bossSubArmorTypePanel; // 0x60
		UILabel* bossSubArmorType; // 0x68
		UIWidget* bossSubArmorRootWidget; // 0x70
		::UnityEngine::GameObject* currentBossObject; // 0x78
		MXButton* selectButton; // 0x80
		::UnityEngine::GameObject* lockObject; // 0x88
		::FlatData::RaidBossGroupType* _bossGroupType; // 0x90
		::System::Boolean _isLocked; // 0x94

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_ONSELECTBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSSELECTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

