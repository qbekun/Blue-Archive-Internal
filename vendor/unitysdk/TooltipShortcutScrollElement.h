#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UILabel;
namespace UnityEngine { class GameObject; }
class TooltipShortcutStarsDisplay;
class UIOpenerBase;

#define TOOLTIPSHORTCUTSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2747A00)
#define TOOLTIPSHORTCUTSCROLLELEMENT_SETSTAGE_OFFSET UNITYSDK_OFFSET(0x274A9B0)
#define TOOLTIPSHORTCUTSCROLLELEMENT_GET_TOOLTIPSHORTCUTSTARSDISPLAY_OFFSET UNITYSDK_OFFSET(0x274AAD0)
#define TOOLTIPSHORTCUTSCROLLELEMENT_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x2747A30)
#define TOOLTIPSHORTCUTSCROLLELEMENT_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0x274B4B0)
#define TOOLTIPSHORTCUTSCROLLELEMENT_SETPLACE_OFFSET UNITYSDK_OFFSET(0x274AB40)
#define TOOLTIPSHORTCUTSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x274B5E0)
#define TOOLTIPSHORTCUTSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x274B620)

	inline static constexpr unsigned int TooltipShortcutScrollElement_TypeDefinitionIndex = 7239;

	class TooltipShortcutScrollElement : public ::System::Xml::Serialization::XmlArrayItemAttribute
	{
	public:
		ButtonActivator* shortcutButton; // 0x28
		UILabel* placeLabel; // 0x30
		UILabel* stageTypeLabel; // 0x38
		UILabel* stageNameLabel; // 0x40
		::UnityEngine::GameObject* placeRoot; // 0x48
		::UnityEngine::GameObject* stageRoot; // 0x50
		TooltipShortcutStarsDisplay* _tooltipShortcutStarsDisplay; // 0x58
		UIOpenerBase* tooltipInfo; // 0x60
		::System::Boolean isContentsLock; // 0x68

		::System::Void SetData(UIOpenerBase* arg)
		{
			((::System::Void(*)(UIOpenerBase*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetStage(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_SETSTAGE_OFFSET))(str, str2, arg, nullptr);
		}

		TooltipShortcutStarsDisplay* get_tooltipShortcutStarsDisplay()
		{
			return ((TooltipShortcutStarsDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_GET_TOOLTIPSHORTCUTSTARSDISPLAY_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_SETDATAINTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void SetPlace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_SETPLACE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

