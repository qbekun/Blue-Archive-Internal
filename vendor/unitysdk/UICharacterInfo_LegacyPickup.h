#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICharacterInfo;
class UIPickGachaSlot;
class MXButton;
class UILabel;
class UITexture;
class EventDelegate;
class CharacterObject;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UICHARACTERINFO_LEGACYPICKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA85810)
#define UICHARACTERINFO_LEGACYPICKUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA85820)

	inline static constexpr unsigned int UICharacterInfo_LegacyPickup_TypeDefinitionIndex = 7907;

	class UICharacterInfo_LegacyPickup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* EmptyObject; // 0x18
		UICharacterInfo* characterInfo; // 0x20
		UIPickGachaSlot* secretStoneSet; // 0x28
		MXButton* characterDetailButton_characterCard; // 0x30
		MXButton* characterDetailButton; // 0x38
		UILabel* ceilingPointNameLabel; // 0x40
		UILabel* ceilingPointLabel; // 0x48
		UITexture* ceilingPointIcon; // 0x50
		UILabel* ceilingPointDescription; // 0x58
		::UnityEngine::GameObject* firstGetBonusDisplay; // 0x60
		EventDelegate* OnClickCharacterDetailButton; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_LEGACYPICKUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2, EventDelegate* arg3)
		{
			((::System::Void(*)(CharacterObject*, ::MX::Data::Excel::ShopRecruitExcel*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERINFO_LEGACYPICKUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

