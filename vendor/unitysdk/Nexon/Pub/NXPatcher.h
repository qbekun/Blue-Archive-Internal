#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class INXPatcher; }
namespace Nexon::Pub { class NXPatcherConfig; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundle&; }
namespace UnityEngine { class AssetBundleManifest&; }

#define NEXON_PUB_NXPATCHER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1EA2590)
#define NEXON_PUB_NXPATCHER_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1EA29C0)
#define NEXON_PUB_NXPATCHER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1EA2A60)
#define NEXON_PUB_NXPATCHER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1EA2B00)
#define NEXON_PUB_NXPATCHER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x1EA2BA0)
#define NEXON_PUB_NXPATCHER_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1EA2C40)
#define NEXON_PUB_NXPATCHER_REMOVEALLPATCH_OFFSET UNITYSDK_OFFSET(0x1EA2CF0)
#define NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1EA2D90)
#define NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1EA2E30)
#define NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1EA2EE0)
#define NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1EA2F90)
#define NEXON_PUB_NXPATCHER_MOVETOMARKET_OFFSET UNITYSDK_OFFSET(0x1EA3040)
#define NEXON_PUB_NXPATCHER_GETFILELIST_OFFSET UNITYSDK_OFFSET(0x1EA30E0)
#define NEXON_PUB_NXPATCHER_SETFILELIST_OFFSET UNITYSDK_OFFSET(0x1EA3180)
#define NEXON_PUB_NXPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x1EA3250)
#define NEXON_PUB_NXPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x1EA3480)
#define NEXON_PUB_NXPATCHER_CHECKBUILD_OFFSET UNITYSDK_OFFSET(0x1EA3540)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA35E0)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA3680)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA3730)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA37E0)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA3890)
#define NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA3940)
#define NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x1EA39F0)
#define NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x1EA3AA0)
#define NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x1EA3B50)
#define NEXON_PUB_NXPATCHER_VALIDATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA3C00)
#define NEXON_PUB_NXPATCHER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1EA3CB0)
#define NEXON_PUB_NXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1EA3F70)
#define NEXON_PUB_NXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1EA4020)
#define NEXON_PUB_NXPATCHER_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1EA40D0)
#define NEXON_PUB_NXPATCHER_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1EA4180)
#define NEXON_PUB_NXPATCHER_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x1EA4230)
#define NEXON_PUB_NXPATCHER_GETASSETBUNDLEMANIFEST_OFFSET UNITYSDK_OFFSET(0x1EA4390)
#define NEXON_PUB_NXPATCHER_CHECKSETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EA26B0)
#define NEXON_PUB_NXPATCHER_CHECKSETHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA3370)
#define NEXON_PUB_NXPATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EA27E0)
#define NEXON_PUB_NXPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4440)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcher_TypeDefinitionIndex = 21229;

	class NXPatcher : public Il2CppObject
	{
	public:
		::Nexon::Pub::INXPatcher* Instance; // 0x0

		::System::Void SetConfig(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_SETCONFIG_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::NXPatcherConfig* GetConfig()
		{
			return (return (::Nexon::Pub::NXPatcherConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETCONFIG_OFFSET))(nullptr);
		}

		::System::Void StartDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_STARTDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void ResumeDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_RESUMEDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void StopDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_STOPDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void RegisterForWiFiConnectedNotification(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveAllPatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_REMOVEALLPATCH_OFFSET))(nullptr);
		}

		::System::Void CheckVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET))(nullptr);
		}

		::System::Void CheckVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET))(str, nullptr);
		}

		::System::Void CheckVersion(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void MoveToMarket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_MOVETOMARKET_OFFSET))(nullptr);
		}

		Il2CppObject* GetFileList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETFILELIST_OFFSET))(nullptr);
		}

		::System::Void SetFileList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_SETFILELIST_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_INIT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void CheckBuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKBUILD_OFFSET))(nullptr);
		}

		::System::Void CheckResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(nullptr);
		}

		::System::Void CheckResource(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void CheckResource(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPatchVersion(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKPATCHVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateResource(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_VALIDATERESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_UNLOAD_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundle* LoadAssetBundleFromFile(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAssetBundleFromFile(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_LOADASSETBUNDLEFROMFILE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFromFile(::System::String* str, ::UnityEngine::AssetBundle&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AssetBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_LOADFROMFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetAssetBundle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETASSETBUNDLE_OFFSET))(str, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Void GetAssetBundleManifest(::UnityEngine::AssetBundleManifest&* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundleManifest&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETASSETBUNDLEMANIFEST_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSetDelegate(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKSETDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSetHandler(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_CHECKSETHANDLER_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::INXPatcher* GetInstance()
		{
			return (return (::Nexon::Pub::INXPatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHER_.CTOR_OFFSET))(nullptr);
		}

	};
}

