#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PanelTextSettings; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_GET_DEFAULTPANELTEXTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA41F840)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_UPDATELOCALIZATIONFONTASSET_OFFSET UNITYSDK_OFFSET(0xA41F990)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_GETCACHEDFONTASSET_OFFSET UNITYSDK_OFFSET(0xA41FE30)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41FE40)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA41FE50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelTextSettings_TypeDefinitionIndex = 30663;

	class PanelTextSettings : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::PanelTextSettings* s_DefaultPanelTextSettings; // 0x0
		Il2CppObject* EditorGUIUtilityLoad; // 0x8
		Il2CppObject* GetCurrentLanguage; // 0x10
		::System::String* s_DefaultEditorPanelTextSettingPath; // 0x18

		::UnityEngine::UIElements::PanelTextSettings* get_defaultPanelTextSettings()
		{
			return (return (::UnityEngine::UIElements::PanelTextSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_GET_DEFAULTPANELTEXTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void UpdateLocalizationFontAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_UPDATELOCALIZATIONFONTASSET_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAsset(::UnityEngine::Font* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_GETCACHEDFONTASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

