#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UIElements { class PanelTextSettings; }
namespace UnityEngine::UIElements::UIR { class TextCoreSettings; }

#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_COMPUTETEXTSCALING_OFFSET UNITYSDK_OFFSET(0xA421630)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_MEASUREVISUALELEMENTTEXTSIZE_OFFSET UNITYSDK_OFFSET(0xA421780)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA420E40)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA421D90)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONT_OFFSET UNITYSDK_OFFSET(0xA422000)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONT_OFFSET UNITYSDK_OFFSET(0xA4220D0)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_ISFONTASSIGNED_OFFSET UNITYSDK_OFFSET(0xA421CD0)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_ISFONTASSIGNED_OFFSET UNITYSDK_OFFSET(0xA422270)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTSETTINGSFROM_OFFSET UNITYSDK_OFFSET(0xA421F20)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTSETTINGSFROM_OFFSET UNITYSDK_OFFSET(0xA420D70)
#define UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTCORESETTINGSFORELEMENT_OFFSET UNITYSDK_OFFSET(0xA4222E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextUtilities_TypeDefinitionIndex = 30667;

	class TextUtilities : public Il2CppObject
	{
	public:
		::System::Single ComputeTextScaling(::UnityEngine::Matrix4x4* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Matrix4x4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_COMPUTETEXTSCALING_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* MeasureVisualElementTextSize(::UnityEngine::UIElements::VisualElement* arg, ::System::String* str, ::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg, ::UnityEngine::UIElements::ITextHandle* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::VisualElement*, ::System::String*, ::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::UnityEngine::UIElements::ITextHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_MEASUREVISUALELEMENTTEXTSIZE_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* GetFontAsset(TextParams* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONTASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* GetFontAsset(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONTASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Font* GetFont(TextParams* arg)
		{
			return (return (::UnityEngine::Font*(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Font* GetFont(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::Font*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETFONT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFontAssigned(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_ISFONTASSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFontAssigned(TextParams* arg)
		{
			return (return (::System::Boolean(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_ISFONTASSIGNED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::PanelTextSettings* GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::PanelTextSettings*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTSETTINGSFROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::PanelTextSettings* GetTextSettingsFrom(TextParams* arg)
		{
			return (return (::UnityEngine::UIElements::PanelTextSettings*(*)(TextParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTSETTINGSFROM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::TextCoreSettings* GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::TextCoreSettings*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUTILITIES_GETTEXTCORESETTINGSFORELEMENT_OFFSET))(arg, nullptr);
		}

	};
}

