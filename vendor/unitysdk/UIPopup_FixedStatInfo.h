#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class Animation; }
namespace MX::Data { class MinigameDefenseFixedStatExcelInfo; }

#define UIPOPUP_FIXEDSTATINFO_SETUI_OFFSET UNITYSDK_OFFSET(0xB8A6C0)
#define UIPOPUP_FIXEDSTATINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xB8AC20)
#define UIPOPUP_FIXEDSTATINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB8AD60)
#define UIPOPUP_FIXEDSTATINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF60)

	inline static constexpr unsigned int UIPopup_FixedStatInfo_TypeDefinitionIndex = 547;

	class UIPopup_FixedStatInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* okButton; // 0xE0
		UILabel* characterCardLevelLabel; // 0xE8
		UILabel* characterCardStarGradeLabel; // 0xF0
		UILabel* characterCardWeaponGradeLabel; // 0xF8
		Il2CppObject* equipTierLabels; // 0x100
		Il2CppObject* skillLevelLabels; // 0x108
		Il2CppObject* skillLevelMaxSprites; // 0x110
		::System::Boolean hasWeapon; // 0x118
		::UnityEngine::Animation* WeaponMountedAnim; // 0x120
		::System::String* weaponMountedClip; // 0x0

		::System::Void SetUI(::MX::Data::MinigameDefenseFixedStatExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MinigameDefenseFixedStatExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FIXEDSTATINFO_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FIXEDSTATINFO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FIXEDSTATINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FIXEDSTATINFO_.CTOR_OFFSET))(nullptr);
		}

	};

