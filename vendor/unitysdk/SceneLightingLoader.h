#pragma once
#include "unitysdk.h"

class EnvColorSettings;
namespace UnityEngine { class Color; }
class FogSettings;
namespace UnityEngine { class Material; }
namespace UnityEngine::SceneManagement { class Scene; }

#define SCENELIGHTINGLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D7100)
#define SCENELIGHTINGLOADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D7250)
#define SCENELIGHTINGLOADER_RELEASEFOGSETTINGSHANDLE_OFFSET UNITYSDK_OFFSET(0x20D7650)
#define SCENELIGHTINGLOADER_APPLYSHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0x20D76F0)
#define SCENELIGHTINGLOADER_RELEASEENVCOLORSHANDLE_OFFSET UNITYSDK_OFFSET(0x20D7710)
#define SCENELIGHTINGLOADER_SETENVCOLORSTODEFAULT_OFFSET UNITYSDK_OFFSET(0x20D77B0)
#define SCENELIGHTINGLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D7890)
#define SCENELIGHTINGLOADER_SETSHADOWCOLORTODEFAULT_OFFSET UNITYSDK_OFFSET(0x20D78A0)
#define SCENELIGHTINGLOADER_REFRESHSCENEVALUENODES_OFFSET UNITYSDK_OFFSET(0x20D7950)
#define SCENELIGHTINGLOADER_SETFOGSETTINGSTODEFAULT_OFFSET UNITYSDK_OFFSET(0x20D7C00)
#define SCENELIGHTINGLOADER_ONACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x20D7CC0)
#define SCENELIGHTINGLOADER_APPLYFOGSETTINGS_OFFSET UNITYSDK_OFFSET(0x20D7D20)
#define SCENELIGHTINGLOADER_UNREGISTERCALLBACKSFROMSCENEMANAGER_OFFSET UNITYSDK_OFFSET(0x20D7D80)
#define SCENELIGHTINGLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D7E10)
#define SCENELIGHTINGLOADER_RELEASESHADOWCOLORHANDLE_OFFSET UNITYSDK_OFFSET(0x20D7FF0)
#define SCENELIGHTINGLOADER_APPLYENVCOLORS_OFFSET UNITYSDK_OFFSET(0x20D8090)
#define SCENELIGHTINGLOADER_REGISTERCALLBACKSTOSCENEMANAGER_OFFSET UNITYSDK_OFFSET(0x20D80F0)
#define SCENELIGHTINGLOADER_APPLYSKYBOX_OFFSET UNITYSDK_OFFSET(0x20D8180)

	inline static constexpr unsigned int SceneLightingLoader_TypeDefinitionIndex = 3732;

	class SceneLightingLoader : public Il2CppObject
	{
	public:
		EnvColorSettings* defaultEnvColors; // 0x0
		::UnityEngine::Color* defaultShadowColor; // 0x30
		FogSettings* defaultFogSettings; // 0x40
		::System::Boolean useSkybox; // 0x18
		::UnityEngine::Material* skyboxMaterial; // 0x20
		::System::Boolean useEnvColors; // 0x28
		EnvColorSettings* envColors; // 0x2C
		::System::Boolean useShadowColor; // 0x5C
		::UnityEngine::Color* shadowColor; // 0x60
		::System::Boolean changeFog; // 0x70
		FogSettings* fogSettings; // 0x74
		Il2CppObject* SkyboxStack; // 0x60
		Il2CppObject* EnvColorStack; // 0x68
		Il2CppObject* ShadowColorStack; // 0x70
		Il2CppObject* FogStack; // 0x78
		::System::Object* skyboxHandle; // 0x90
		::System::Object* envColorHandle; // 0x98
		::System::Object* shadowColorHandle; // 0xA0
		::System::Object* fogHandle; // 0xA8
		::System::Object* sceneSkyboxHandle; // 0x80
		::System::Object* sceneEnvColorHandle; // 0x88
		::System::Object* sceneShadowColorHandle; // 0x90
		::System::Object* sceneFogHandle; // 0x98

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseFogSettingsHandle(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_RELEASEFOGSETTINGSHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyShadowColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_APPLYSHADOWCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseEnvColorsHandle(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_RELEASEENVCOLORSHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnvColorsToDefault(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_SETENVCOLORSTODEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetShadowColorToDefault(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_SETSHADOWCOLORTODEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSceneValueNodes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_REFRESHSCENEVALUENODES_OFFSET))(nullptr);
		}

		::System::Void SetFogSettingsToDefault(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_SETFOGSETTINGSTODEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnActiveSceneChanged(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::Scene* arg2)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_ONACTIVESCENECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyFogSettings(FogSettings* arg)
		{
			((::System::Void(*)(FogSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_APPLYFOGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterCallbacksFromSceneManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_UNREGISTERCALLBACKSFROMSCENEMANAGER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ReleaseShadowColorHandle(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_RELEASESHADOWCOLORHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyEnvColors(EnvColorSettings* arg)
		{
			((::System::Void(*)(EnvColorSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_APPLYENVCOLORS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbacksToSceneManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_REGISTERCALLBACKSTOSCENEMANAGER_OFFSET))(nullptr);
		}

		::System::Void ApplySkybox(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADER_APPLYSKYBOX_OFFSET))(arg, nullptr);
		}

	};

