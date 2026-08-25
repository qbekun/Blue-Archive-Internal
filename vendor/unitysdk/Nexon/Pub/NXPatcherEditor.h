#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatcherConfig; }
namespace Nexon::Pub { class NXPatcherVersion; }
namespace Nexon::Pub { class NXPatcherDownloader; }
namespace Nexon::Pub { class BuildStatus; }
namespace Nexon::Pub { class PatchStatus; }
namespace Nexon::Pub { class DownloadInformation; }
namespace UnityEngine { class GameObject; }
namespace Nexon::Pub { class NXPatcherThreadExecutor; }
namespace UnityEngine { class AssetBundleManifest&; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundle&; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace Nexon::Pub { class Response; }
namespace Nexon::Pub { class Error; }

#define NEXON_PUB_NXPATCHEREDITOR_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x954DFE0)
#define NEXON_PUB_NXPATCHEREDITOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x954E020)
#define NEXON_PUB_NXPATCHEREDITOR_INIT_OFFSET UNITYSDK_OFFSET(0x954E1A0)
#define NEXON_PUB_NXPATCHEREDITOR_INIT_OFFSET UNITYSDK_OFFSET(0x954E810)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKBUILD_OFFSET UNITYSDK_OFFSET(0x954E850)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954EA20)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954F010)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954F130)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954F2B0)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954F430)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x954EB40)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954FD00)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954FF40)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954FE10)
#define NEXON_PUB_NXPATCHEREDITOR_VALIDATERESOURCE_OFFSET UNITYSDK_OFFSET(0x9550030)
#define NEXON_PUB_NXPATCHEREDITOR_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9550190)
#define NEXON_PUB_NXPATCHEREDITOR_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9550650)
#define NEXON_PUB_NXPATCHEREDITOR_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x954E580)
#define NEXON_PUB_NXPATCHEREDITOR_REMOVEALLPATCH_OFFSET UNITYSDK_OFFSET(0x9550660)
#define NEXON_PUB_NXPATCHEREDITOR_GETFILELIST_OFFSET UNITYSDK_OFFSET(0x95506B0)
#define NEXON_PUB_NXPATCHEREDITOR_SETFILELIST_OFFSET UNITYSDK_OFFSET(0x95506E0)
#define NEXON_PUB_NXPATCHEREDITOR_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x9550710)
#define NEXON_PUB_NXPATCHEREDITOR_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x9550830)
#define NEXON_PUB_NXPATCHEREDITOR_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x9550880)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x95508C0)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x9550910)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x9550960)
#define NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET UNITYSDK_OFFSET(0x95509B0)
#define NEXON_PUB_NXPATCHEREDITOR_MOVETOMARKET_OFFSET UNITYSDK_OFFSET(0x9550A00)
#define NEXON_PUB_NXPATCHEREDITOR_GETASSETBUNDLEMANIFEST_OFFSET UNITYSDK_OFFSET(0x9550A50)
#define NEXON_PUB_NXPATCHEREDITOR_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x9550AA0)
#define NEXON_PUB_NXPATCHEREDITOR_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x9550AF0)
#define NEXON_PUB_NXPATCHEREDITOR_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x9550B40)
#define NEXON_PUB_NXPATCHEREDITOR_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x9550B90)
#define NEXON_PUB_NXPATCHEREDITOR_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x9550BE0)
#define NEXON_PUB_NXPATCHEREDITOR_CALLVERSIONCHECKAPI_OFFSET UNITYSDK_OFFSET(0x954E780)
#define NEXON_PUB_NXPATCHEREDITOR_MAKEDOWNLOADGROUP_OFFSET UNITYSDK_OFFSET(0x9550C50)
#define NEXON_PUB_NXPATCHEREDITOR_ISDOWNLOADING_OFFSET UNITYSDK_OFFSET(0x954E560)
#define NEXON_PUB_NXPATCHEREDITOR_ONCALLVERSIONCHECKAPICOMPLETEFORINIT_OFFSET UNITYSDK_OFFSET(0x9550F60)
#define NEXON_PUB_NXPATCHEREDITOR_ONCALLVERSIONCHECKAPICOMPLETEFORCHECKPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x95515B0)
#define NEXON_PUB_NXPATCHEREDITOR_ONCHECKPATCHVERSIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9551800)
#define NEXON_PUB_NXPATCHEREDITOR_ONINITRESULT_OFFSET UNITYSDK_OFFSET(0x95514A0)
#define NEXON_PUB_NXPATCHEREDITOR_ONCHECKBUILDRESULT_OFFSET UNITYSDK_OFFSET(0x954E900)
#define NEXON_PUB_NXPATCHEREDITOR_ONCHECKRESOURCEPROGRESS_OFFSET UNITYSDK_OFFSET(0x9551950)
#define NEXON_PUB_NXPATCHEREDITOR_ONCHECKRESOURCERESULT_OFFSET UNITYSDK_OFFSET(0x954F770)
#define NEXON_PUB_NXPATCHEREDITOR_ONDOWNLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x9551A70)
#define NEXON_PUB_NXPATCHEREDITOR_ONFILEDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x9551BA0)
#define NEXON_PUB_NXPATCHEREDITOR_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9551CD0)
#define NEXON_PUB_NXPATCHEREDITOR_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9550460)
#define NEXON_PUB_NXPATCHEREDITOR_ONVALIDATERESOURCERESULT_OFFSET UNITYSDK_OFFSET(0x9550090)
#define NEXON_PUB_NXPATCHEREDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9552890)
#define NEXON_PUB_NXPATCHEREDITOR__ONCALLVERSIONCHECKAPICOMPLETEFORINIT_B__55_0_OFFSET UNITYSDK_OFFSET(0x95528A0)
#define NEXON_PUB_NXPATCHEREDITOR__ONCALLVERSIONCHECKAPICOMPLETEFORCHECKPATCHVERSION_B__56_0_OFFSET UNITYSDK_OFFSET(0x95528C0)
#define NEXON_PUB_NXPATCHEREDITOR__ONDOWNLOADPROGRESS_B__62_0_OFFSET UNITYSDK_OFFSET(0x95529D0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherEditor_TypeDefinitionIndex = 37448;

	class NXPatcherEditor : public Il2CppObject
	{
	public:
		::System::String* VERSION_CHECK_URL; // 0x0
		::System::String* NEW_VERSION_CHECK_URL; // 0x0
		::System::Boolean _isSdkInit; // 0x18
		::System::Boolean _isCheckResourceInProgress; // 0x19
		::System::String* _buildVersion; // 0x20
		::System::Int32 _buildNumber; // 0x28
		Il2CppObject* _patchVersionCheckGroup; // 0x30
		::Nexon::Pub::NXPatcherConfig* _config; // 0x0
		::Nexon::Pub::NXPatcherVersion* _version; // 0x38
		::Nexon::Pub::NXPatcherDownloader* _downloader; // 0x40
		::Nexon::Pub::BuildStatus* _buildStatus; // 0x48
		::Nexon::Pub::PatchStatus* _patchStatus; // 0x50
		::Nexon::Pub::DownloadInformation* _downloadInfo; // 0x58
		::UnityEngine::GameObject* _threadExecutorObject; // 0x60
		::Nexon::Pub::NXPatcherThreadExecutor* _threadExecutor; // 0x68
		::System::String* NXPatcher; // 0x0

		::Nexon::Pub::NXPatcherConfig* get_Config()
		{
			return (return (::Nexon::Pub::NXPatcherConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GET_CONFIG_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_INIT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void CheckBuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKBUILD_OFFSET))(nullptr);
		}

		::System::Void CheckResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(nullptr);
		}

		::System::Void CheckResource(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void CheckResource(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPatchVersion(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckPatchVersion(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKPATCHVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateResource(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_VALIDATERESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void StartDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_STARTDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void ResumeDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_RESUMEDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void StopDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_STOPDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void RemoveAllPatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_REMOVEALLPATCH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFileList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GETFILELIST_OFFSET))(nullptr);
		}

		::System::Void SetFileList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_SETFILELIST_OFFSET))(arg, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetConfig(::Nexon::Pub::NXPatcherConfig* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_SETCONFIG_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::NXPatcherConfig* GetConfig()
		{
			return (return (::Nexon::Pub::NXPatcherConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GETCONFIG_OFFSET))(nullptr);
		}

		::System::Void CheckVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET))(nullptr);
		}

		::System::Void CheckVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET))(str, nullptr);
		}

		::System::Void CheckVersion(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CHECKVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void MoveToMarket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_MOVETOMARKET_OFFSET))(nullptr);
		}

		::System::Void GetAssetBundleManifest(::UnityEngine::AssetBundleManifest&* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundleManifest&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GETASSETBUNDLEMANIFEST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AssetBundle* LoadAssetBundleFromFile(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_LOADASSETBUNDLEFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAssetBundleFromFile(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_LOADASSETBUNDLEFROMFILE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFromFile(::System::String* str, ::UnityEngine::AssetBundle&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AssetBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_LOADFROMFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetAssetBundle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_GETASSETBUNDLE_OFFSET))(str, nullptr);
		}

		::System::Void RegisterForWiFiConnectedNotification(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_REGISTERFORWIFICONNECTEDNOTIFICATION_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CallVersionCheckAPI(Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_CALLVERSIONCHECKAPI_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MakeDownloadGroup(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_MAKEDOWNLOADGROUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDownloading()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ISDOWNLOADING_OFFSET))(nullptr);
		}

		::System::Void OnCallVersionCheckAPICompleteForInit(::UnityEngine::Networking::UnityWebRequest* arg, ::Nexon::Pub::Response* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::Nexon::Pub::Response*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCALLVERSIONCHECKAPICOMPLETEFORINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCallVersionCheckAPICompleteForCheckPatchVersion(::UnityEngine::Networking::UnityWebRequest* arg, ::Nexon::Pub::Response* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::Nexon::Pub::Response*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCALLVERSIONCHECKAPICOMPLETEFORCHECKPATCHVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCheckPatchVersionComplete(::Nexon::Pub::PatchStatus* arg, ::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::PatchStatus*, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCHECKPATCHVERSIONCOMPLETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnInitResult(::System::Boolean arg, ::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::System::Boolean, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONINITRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCheckBuildResult(::Nexon::Pub::BuildStatus* arg, ::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::BuildStatus*, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCHECKBUILDRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCheckResourceProgress(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCHECKRESOURCEPROGRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCheckResourceResult(::Nexon::Pub::PatchStatus* arg, ::Nexon::Pub::DownloadInformation* arg, ::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::PatchStatus*, ::Nexon::Pub::DownloadInformation*, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCHECKRESOURCERESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDownloadProgress(::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONDOWNLOADPROGRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnFileDownloaded(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONFILEDOWNLOADED_OFFSET))(str, str, nullptr);
		}

		::System::Void OnComplete(::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void OnComplete(Il2CppObject* arg, ::System::Int32 arg, ::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONCOMPLETE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnValidateResourceResult(::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_ONVALIDATERESOURCERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnCallVersionCheckAPICompleteForInit_b__55_0(::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR__ONCALLVERSIONCHECKAPICOMPLETEFORINIT_B__55_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnCallVersionCheckAPICompleteForCheckPatchVersion_b__56_0(::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR__ONCALLVERSIONCHECKAPICOMPLETEFORCHECKPATCHVERSION_B__56_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnDownloadProgress_b__62_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHEREDITOR__ONDOWNLOADPROGRESS_B__62_0_OFFSET))(nullptr);
		}

	};
}

