#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatcherConfig; }
namespace UnityEngine { class AssetBundleManifest&; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundle&; }

#define NEXON_PUB_INXPATCHER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_REMOVEALLPATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_MOVETOMARKET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_VALIDATERESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_GETFILELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_SETFILELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_GETASSETBUNDLEMANIFEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_INXPATCHER_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Nexon::Pub
{
	inline static constexpr unsigned int INXPatcher_TypeDefinitionIndex = 37537;

	class INXPatcher : public Il2CppObject
	{
	public:
		::System::Void SetConfig(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_SETCONFIG_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::NXPatcherConfig* GetConfig()
		{
			return (return (::Nexon::Pub::NXPatcherConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_GETCONFIG_OFFSET))(nullptr);
		}

		::System::Void StartDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_STARTDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void ResumeDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_RESUMEDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void StopDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_STOPDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void RemoveAllPatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_REMOVEALLPATCH_OFFSET))(nullptr);
		}

		::System::Void CheckVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET))(nullptr);
		}

		::System::Void CheckVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET))(str, nullptr);
		}

		::System::Void CheckVersion(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void MoveToMarket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_MOVETOMARKET_OFFSET))(nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_INIT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void CheckBuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKBUILD_OFFSET))(nullptr);
		}

		::System::Void CheckResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(nullptr);
		}

		::System::Void CheckResource(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void CheckResource(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPatchVersion(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_CHECKPATCHVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateResource(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_VALIDATERESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterForWiFiConnectedNotification(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetFileList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_GETFILELIST_OFFSET))(nullptr);
		}

		::System::Void SetFileList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_SETFILELIST_OFFSET))(arg, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Void GetAssetBundleManifest(::UnityEngine::AssetBundleManifest&* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundleManifest&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_GETASSETBUNDLEMANIFEST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AssetBundle* LoadAssetBundleFromFile(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAssetBundleFromFile(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFromFile(::System::String* str, ::UnityEngine::AssetBundle&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AssetBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_LOADFROMFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetAssetBundle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_INXPATCHER_GETASSETBUNDLE_OFFSET))(str, nullptr);
		}

	};
}

