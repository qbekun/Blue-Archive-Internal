#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine::UI { class Selectable; }

#define TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xA120E60)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0xA1224B0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0xA122960)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0xA121F80)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0xA122CC0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA1220C0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0xA1223D0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0xA122010)
#define TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xA122D60)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0xA122560)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA122E30)
#define TMPRO_TMP_DEFAULTCONTROLS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1237C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_DefaultControls_TypeDefinitionIndex = 33648;

	class TMP_DefaultControls : public Il2CppObject
	{
	public:
		::System::Single kWidth; // 0x0
		::System::Single kThickHeight; // 0x0
		::System::Single kThinHeight; // 0x0
		::UnityEngine::Vector2* s_TextElementSize; // 0x0
		::UnityEngine::Vector2* s_ThickElementSize; // 0x8
		::UnityEngine::Vector2* s_ThinElementSize; // 0x10
		::UnityEngine::Color* s_DefaultSelectableColor; // 0x18
		::UnityEngine::Color* s_TextColor; // 0x28

		::UnityEngine::GameObject* CreateDropdown(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultTextValues(::TMPro::TMP_Text* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Text*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateButton(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateUIElementRoot(::System::String* str, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::GameObject* CreateText(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateScrollbar(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetParentAndAlign(::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* CreateUIObject(::System::String* str, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetLayerRecursively(::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateInputField(Resources* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Resources*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

