#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace MX::AssetBundles { class LoadedSceneHandle; }

#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISCLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1446530)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISCLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1446580)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISCLEARACCOUNTCACHE_OFFSET UNITYSDK_OFFSET(0x14465D0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISCLEARACCOUNTCACHE_OFFSET UNITYSDK_OFFSET(0x1446620)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEEDITORLOADER_OFFSET UNITYSDK_OFFSET(0x1446670)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEEDITORLOADER_OFFSET UNITYSDK_OFFSET(0x14466C0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEDOWNLOADASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1446710)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEDOWNLOADASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1446760)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEWORKRESOURCES_OFFSET UNITYSDK_OFFSET(0x14467B0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEWORKRESOURCES_OFFSET UNITYSDK_OFFSET(0x1446800)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISLOWMEMORYDEVICE_OFFSET UNITYSDK_OFFSET(0x1446850)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISLOWMEMORYDEVICE_OFFSET UNITYSDK_OFFSET(0x14468A0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GET_INTIALIZED_OFFSET UNITYSDK_OFFSET(0x14468F0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SET_INTIALIZED_OFFSET UNITYSDK_OFFSET(0x1446940)
#define MX_ASSETBUNDLES_RESOURCESERVICE_INITALIZE_OFFSET UNITYSDK_OFFSET(0x1446990)
#define MX_ASSETBUNDLES_RESOURCESERVICE_ADDPROLOGKEY_OFFSET UNITYSDK_OFFSET(0x1446C30)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCUNITASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASSETASYNCMX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADMANUALLYRELEASEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCWITHKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADFORPRELOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CLEARPRELOADTABLE_OFFSET UNITYSDK_OFFSET(0x1446C40)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEALLUI_OFFSET UNITYSDK_OFFSET(0x1446CF0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_REGISTEBATTLEIGNORERELEASEASSETS_OFFSET UNITYSDK_OFFSET(0x1446D90)
#define MX_ASSETBUNDLES_RESOURCESERVICE_REMOVEBATTLEIGNORERELEASEASSETS_OFFSET UNITYSDK_OFFSET(0x1446F80)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GETKEYFROMASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1447070)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEBUNDLES_OFFSET UNITYSDK_OFFSET(0x1447110)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEFORPATCHCHANGED_OFFSET UNITYSDK_OFFSET(0x1445F80)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1447160)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEHANDLESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x14473F0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASERECURSIVE_OFFSET UNITYSDK_OFFSET(0x14477E0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CO_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x1445F20)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CLEARADDRESSLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1447920)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1447AA0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1447D30)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CLEARADDRESSLOADEDSCENEHANDLES_OFFSET UNITYSDK_OFFSET(0x1447E10)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GETFOLDERSIZE_OFFSET UNITYSDK_OFFSET(0x1448330)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_ASSETBUNDLES_RESOURCESERVICE_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1448430)
#define MX_ASSETBUNDLES_RESOURCESERVICE_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1448150)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SHOWFAILEDLOADASSETERRORPOPUP_OFFSET UNITYSDK_OFFSET(0x1448620)
#define MX_ASSETBUNDLES_RESOURCESERVICE_STARTCACHEPROLOGKEY_OFFSET UNITYSDK_OFFSET(0x1448800)
#define MX_ASSETBUNDLES_RESOURCESERVICE_ENDCACHEPROLOGKEY_OFFSET UNITYSDK_OFFSET(0x1448810)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SHOWFAILEDLOADMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x1448820)
#define MX_ASSETBUNDLES_RESOURCESERVICE_SETHIGHBACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1448B10)
#define MX_ASSETBUNDLES_RESOURCESERVICE_INITCONTAINS_OFFSET UNITYSDK_OFFSET(0x1448B20)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x14491D0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_GETLOCALIZEADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x1447CB0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_ADDIGNOREREMOVETOASTICON_OFFSET UNITYSDK_OFFSET(0x1449280)
#define MX_ASSETBUNDLES_RESOURCESERVICE_CLEARIGNOREREMOVETOASTICONLIST_OFFSET UNITYSDK_OFFSET(0x14493E0)
#define MX_ASSETBUNDLES_RESOURCESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14495F0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int ResourceService_TypeDefinitionIndex = 14975;

	class ResourceService : public Il2CppObject
	{
	public:
		::System::String* AddressablePath; // 0x0
		Il2CppObject* addressSceneLoadedHandles; // 0x0
		Il2CppObject* HandleTable; // 0x8
		Il2CppObject* ReleaseOnlyPatchChanagedTable; // 0x10
		Il2CppObject* PreloadTable; // 0x18
		::System::Boolean isWillClearAssetDataAll; // 0x20
		::System::Boolean isWillClearCache; // 0x21
		Il2CppObject* keyTable; // 0x28
		Il2CppObject* ignoreRemoveToastIconPath; // 0x30
		::System::Boolean _IsClearAccountCache_k__BackingField; // 0x38
		Il2CppObject* ignoreReleaseAssets; // 0x40
		::System::Boolean HasCampaign; // 0x48
		::System::Boolean initializedAddressables; // 0x49
		::System::Boolean _UseEditorLoader_k__BackingField; // 0x4A
		::System::Boolean _UseDownloadAssetBundles_k__BackingField; // 0x4B
		::System::Boolean _UseWorkResources_k__BackingField; // 0x4C
		::System::Boolean _IsLowMemoryDevice_k__BackingField; // 0x4D
		::System::Boolean _Intialized_k__BackingField; // 0x4E

		::System::Boolean get_IsClearCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISCLEARCACHE_OFFSET))(nullptr);
		}

		::System::Void set_IsClearCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISCLEARCACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClearAccountCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISCLEARACCOUNTCACHE_OFFSET))(nullptr);
		}

		::System::Void set_IsClearAccountCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISCLEARACCOUNTCACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseEditorLoader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEEDITORLOADER_OFFSET))(nullptr);
		}

		::System::Void set_UseEditorLoader(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEEDITORLOADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDownloadAssetBundles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEDOWNLOADASSETBUNDLES_OFFSET))(nullptr);
		}

		::System::Void set_UseDownloadAssetBundles(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEDOWNLOADASSETBUNDLES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseWorkResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_USEWORKRESOURCES_OFFSET))(nullptr);
		}

		::System::Void set_UseWorkResources(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_USEWORKRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLowMemoryDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_ISLOWMEMORYDEVICE_OFFSET))(nullptr);
		}

		::System::Void set_IsLowMemoryDevice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_ISLOWMEMORYDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Intialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GET_INTIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Intialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SET_INTIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Initalize(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_INITALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddPrologKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_ADDPROLOGKEY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadAll(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADALL_OFFSET))(str, nullptr);
		}

		Il2CppObject* Load(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOAD_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadSync(::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADSYNC_OFFSET))(str, str2, nullptr);
		}

		::System::Collections::IEnumerator* LoadAsyncCoroutine(::System::String* str, Il2CppObject* arg, ::System::String* str2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCCOROUTINE_OFFSET))(str, arg, str2, nullptr);
		}

		Il2CppObject* LoadAsyncUniTask(::System::String* str, ::System::String* str2, ::System::Threading::CancellationToken* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCUNITASK_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void LoadAssetAsyncMX(::UnityEngine::AddressableAssets::AssetReference* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AssetReference*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASSETASYNCMX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LoadManuallyReleasedAsync(::System::String* str, Il2CppObject* arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADMANUALLYRELEASEDASYNC_OFFSET))(str, arg, str2, nullptr);
		}

		::System::Void LoadAsync(::System::String* str, Il2CppObject* arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNC_OFFSET))(str, arg, str2, nullptr);
		}

		::System::Void LoadInternal(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADINTERNAL_OFFSET))(str, arg, arg2, str2, nullptr);
		}

		::System::Void LoadAsyncWithKey(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASYNCWITHKEY_OFFSET))(str, arg, arg2, str2, nullptr);
		}

		::System::Void LoadForPreload(::System::String* str, Il2CppObject* arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADFORPRELOAD_OFFSET))(str, arg, str2, nullptr);
		}

		::System::Void ClearPreloadTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CLEARPRELOADTABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ReleaseAllUI(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEALLUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisteBattleIgnoreReleaseAssets(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_REGISTEBATTLEIGNORERELEASEASSETS_OFFSET))(str, nullptr);
		}

		::System::Void RemoveBattleIgnoreReleaseAssets(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_REMOVEBATTLEIGNORERELEASEASSETS_OFFSET))(str, nullptr);
		}

		::System::String* GetKeyFromAssetReference(::UnityEngine::AddressableAssets::AssetReference* arg)
		{
			return ((::System::String*(*)(::UnityEngine::AddressableAssets::AssetReference*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GETKEYFROMASSETREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseBundles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEBUNDLES_OFFSET))(nullptr);
		}

		::System::Void ReleaseForPatchChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEFORPATCHCHANGED_OFFSET))(nullptr);
		}

		::System::Void ReleaseInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseHandlesRecursive(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASEHANDLESRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseRecursive(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASERECURSIVE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* co_ReleaseAll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CO_RELEASEALL_OFFSET))(nullptr);
		}

		::System::Void ClearAddressLoadedHandle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CLEARADDRESSLOADEDHANDLE_OFFSET))(str, nullptr);
		}

		::System::Void Release(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASE_OFFSET))(str, nullptr);
		}

		::System::Void Release(::UnityEngine::AddressableAssets::AssetReference* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AssetReference*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAddressLoadedSceneHandles(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CLEARADDRESSLOADEDSCENEHANDLES_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetFolderSize(::System::IO::DirectoryInfo* arg)
		{
			return ((::System::Int64(*)(::System::IO::DirectoryInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GETFOLDERSIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::String* str, ::System::Action* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADASSETSASYNC_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void LoadComplete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSceneAsync(::System::String* str, ::UnityEngine::SceneManagement::LoadSceneMode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneMode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_LOADSCENEASYNC_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void UnLoadSceneAsync(::MX::AssetBundles::LoadedSceneHandle* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::AssetBundles::LoadedSceneHandle*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_UNLOADSCENEASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowFailedLoadAssetErrorPopup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SHOWFAILEDLOADASSETERRORPOPUP_OFFSET))(str, nullptr);
		}

		::System::Void StartCachePrologKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_STARTCACHEPROLOGKEY_OFFSET))(nullptr);
		}

		::System::Void EndCachePrologKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_ENDCACHEPROLOGKEY_OFFSET))(nullptr);
		}

		::System::Void ShowFailedLoadMessagePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SHOWFAILEDLOADMESSAGEPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetHighBackgroundLoadingPriority(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_SETHIGHBACKGROUNDLOADINGPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void InitContains()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_INITCONTAINS_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::String* GetLocalizeAddressKey(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_GETLOCALIZEADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::Void AddIgnoreRemoveToastIcon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_ADDIGNOREREMOVETOASTICON_OFFSET))(str, nullptr);
		}

		::System::Void ClearIgnoreRemoveToastIconList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_CLEARIGNOREREMOVETOASTICONLIST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCESERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

