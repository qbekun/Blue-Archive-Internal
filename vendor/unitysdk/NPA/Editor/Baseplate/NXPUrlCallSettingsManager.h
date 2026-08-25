#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Baseplate { class NXPUrlCallSettingsManager; }
namespace NPA::Promotion { class NXPToyUrlCallSettings; }

#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3E120)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C3E1A0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_GETURLCALLSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C3E3C0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWURLCALLSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C3E9B0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWURLCALLSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C3EBA0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWWEBVIEW_OFFSET UNITYSDK_OFFSET(0x9C3ECA0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_LAUNCHBROWSER_OFFSET UNITYSDK_OFFSET(0x9C3EDF0)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_EXECUTEERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x9C3E730)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_ADDTOCACHE_OFFSET UNITYSDK_OFFSET(0x9C3F170)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_FINDFROMCACHE_OFFSET UNITYSDK_OFFSET(0x9C3EB20)
#define NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3F300)

namespace NPA::Editor::Baseplate
{
	inline static constexpr unsigned int NXPUrlCallSettingsManager_TypeDefinitionIndex = 26815;

	class NXPUrlCallSettingsManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Baseplate::NXPUrlCallSettingsManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* cachedUrlCallSettings; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Baseplate::NXPUrlCallSettingsManager* getInstance()
		{
			return (return (::NPA::Editor::Baseplate::NXPUrlCallSettingsManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void GetUrlCallSettings(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_GETURLCALLSETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowUrlCallSettings(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWURLCALLSETTINGS_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowUrlCallSettings(::NPA::Promotion::NXPToyUrlCallSettings* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyUrlCallSettings*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWURLCALLSETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowWebView(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_SHOWWEBVIEW_OFFSET))(str, arg, nullptr);
		}

		::System::Void LaunchBrowser(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_LAUNCHBROWSER_OFFSET))(str, arg, nullptr);
		}

		::System::Void ExecuteErrorHandler(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_EXECUTEERRORHANDLER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddToCache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_ADDTOCACHE_OFFSET))(arg, nullptr);
		}

		::NPA::Promotion::NXPToyUrlCallSettings* FindFromCache(::System::String* str)
		{
			return (return (::NPA::Promotion::NXPToyUrlCallSettings*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_FINDFROMCACHE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASEPLATE_NXPURLCALLSETTINGSMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

