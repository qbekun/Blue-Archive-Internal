#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
namespace UnityEngine { class Vector2; }
class InteractiveWorldRaidCarrierSkillInfoTooltipInfo;
class InteractiveWorldRaidSkillDescription;

#define UIINTERACTIVEWORLDRAIDSKILLPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x262F8D0)
#define UIINTERACTIVEWORLDRAIDSKILLPARCEL_ONCLICKPOPUPTOOLTIP_OFFSET UNITYSDK_OFFSET(0x262F910)
#define UIINTERACTIVEWORLDRAIDSKILLPARCEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x262FA30)
#define UIINTERACTIVEWORLDRAIDSKILLPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0x262FB70)

	inline static constexpr unsigned int UIInteractiveWorldRaidSkillParcel_TypeDefinitionIndex = 6563;

	class UIInteractiveWorldRaidSkillParcel : public ::System::Xml::XPath::XPathNamespaceScope
	{
	public:
		MXButton* descriptionButton; // 0x28
		::UnityEngine::GameObject* globalSkillWarningObject; // 0x30
		::UnityEngine::GameObject* highlightObjectForNewSkill; // 0x38
		::UnityEngine::GameObject* highlightObjectForUpgradeSkill; // 0x40
		UILabel* skillNameLabel; // 0x48
		::UnityEngine::GameObject* skillIconNormalRoot; // 0x50
		::UnityEngine::GameObject* skillIconExtensionRoot; // 0x58
		UITexture* skillIconTextureNormalBoss; // 0x60
		UITexture* skillIconTextureExtensionBoss; // 0x68
		::UnityEngine::Vector2* tooltipOffset; // 0x70
		InteractiveWorldRaidCarrierSkillInfoTooltipInfo* _iaWorldRaidSkillTooltipInfo; // 0x78
		Il2CppObject* _onClickPopupTooltipAction; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDSKILLPARCEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickPopupToolTip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDSKILLPARCEL_ONCLICKPOPUPTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDSKILLPARCEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(InteractiveWorldRaidSkillDescription* arg)
		{
			((::System::Void(*)(InteractiveWorldRaidSkillDescription*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDSKILLPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

	};

