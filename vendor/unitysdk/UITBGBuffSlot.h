#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Color; }
namespace MX::TableBoard { class ITBGItemEffectDB; }
class UIPopup_TBGTooltip;
namespace UnityEngine { class Texture; }

#define UITBGBUFFSLOT__ONCLICKITEM_B__13_0_OFFSET UNITYSDK_OFFSET(0xB46520)
#define UITBGBUFFSLOT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB46580)
#define UITBGBUFFSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB465A0)
#define UITBGBUFFSLOT__REFRESH_B__12_0_OFFSET UNITYSDK_OFFSET(0xB465B0)
#define UITBGBUFFSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB465E0)
#define UITBGBUFFSLOT_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xB46700)
#define UITBGBUFFSLOT_REFRESH_OFFSET UNITYSDK_OFFSET(0xB467E0)
#define UITBGBUFFSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB46FF0)

	inline static constexpr unsigned int UITBGBuffSlot_TypeDefinitionIndex = 8357;

	class UITBGBuffSlot : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		UITexture* Icon; // 0x20
		::UnityEngine::GameObject* CountObject; // 0x28
		UILabel* CountLabel; // 0x30
		::UnityEngine::GameObject* StackObject; // 0x38
		UILabel* StackLabel; // 0x40
		::UnityEngine::Color* stackDefaultColor; // 0x48
		::UnityEngine::Color* stackMaxColor; // 0x58
		::MX::TableBoard::ITBGItemEffectDB* itemEffectDB; // 0x68

		::System::Void _OnClickItem_b__13_0(UIPopup_TBGTooltip* arg)
		{
			((::System::Void(*)(UIPopup_TBGTooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT__ONCLICKITEM_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Refresh_b__12_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT__REFRESH_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_ONCLICKITEM_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::TableBoard::ITBGItemEffectDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::ITBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

