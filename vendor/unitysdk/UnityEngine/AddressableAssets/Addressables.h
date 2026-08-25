#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IInstanceProvider; }
namespace UnityEngine { class LogType; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class SceneInstance; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class IResourceLocator; }

#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_M_ADDRESSABLES_OFFSET UNITYSDK_OFFSET(0x9DF8540)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x9DF8590)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9DF8660)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INSTANCEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9DF8710)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RESOLVEINTERNALID_OFFSET UNITYSDK_OFFSET(0x9DF87E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0x9DF88B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_SET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0x9DF89B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9DF8AD0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_SET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9DF8BD0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_STREAMINGASSETSSUBFOLDER_OFFSET UNITYSDK_OFFSET(0x9DF8CF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x9DF8E10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_PLAYERBUILDDATAPATH_OFFSET UNITYSDK_OFFSET(0x9DF9050)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RUNTIMEPATH_OFFSET UNITYSDK_OFFSET(0x9DF9200)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RESOURCELOCATORS_OFFSET UNITYSDK_OFFSET(0x9DF93B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INTERNALSAFESERIALIZATIONLOG_OFFSET UNITYSDK_OFFSET(0x9DF9480)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INTERNALSAFESERIALIZATIONLOGFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF9740)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOG_OFFSET UNITYSDK_OFFSET(0x9DF9A40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF9B60)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x9DF4C90)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF9C90)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGERROR_OFFSET UNITYSDK_OFFSET(0x9DF4410)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DF9DC0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DF9FA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF4930)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DFA070)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA0C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA260)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOG_OFFSET UNITYSDK_OFFSET(0x9DFA410)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOGASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA470)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOGASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA7B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INITIALIZATIONOPERATION_OFFSET UNITYSDK_OFFSET(0x9DFA8B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONS_OFFSET UNITYSDK_OFFSET(0x9DFA8C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA930)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET UNITYSDK_OFFSET(0x9DFABF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONS_OFFSET UNITYSDK_OFFSET(0x9DFACF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET UNITYSDK_OFFSET(0x9DFAD50)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x9DFB000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9DFB140)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9DFB340)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9DFB440)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x9DFB560)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFB5C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFB760)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFB850)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFC7E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9DFC8D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFC930)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFCD40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFCF70)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD330)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD430)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD780)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFDDA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE3E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE4C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE5A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE6A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE7A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE8A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFE9A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFEAA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFEC90)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFEEE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFF0D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFF320)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x9DFF4E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF570)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFED30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFEF60)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF170)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF3B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFEB60)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x9DFFFE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E00180)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00060)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00200)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E00770)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E008F0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E00A80)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00C10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00FA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E01200)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E007E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00960)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00AF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CHECKFORCATALOGUPDATES_OFFSET UNITYSDK_OFFSET(0x9E01420)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UPDATECATALOGS_OFFSET UNITYSDK_OFFSET(0x9E01690)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UPDATECATALOGS_OFFSET UNITYSDK_OFFSET(0x9E01A30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_ADDRESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x9E01B30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_REMOVERESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x9E01D40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARRESOURCELOCATORS_OFFSET UNITYSDK_OFFSET(0x9E01EE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEANBUNDLECACHE_OFFSET UNITYSDK_OFFSET(0x9E02060)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E02710)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int Addressables_TypeDefinitionIndex = 36161;

	class Addressables : public Il2CppObject
	{
	public:
		::System::Boolean reinitializeAddressables; // 0x0
		::UnityEngine::AddressableAssets::AddressablesImpl* m_AddressablesInstance; // 0x8
		::System::String* kAddressablesRuntimeDataPath; // 0x0
		::System::String* k_AddressablesLogConditional; // 0x0
		::System::String* kAddressablesRuntimeBuildLogPath; // 0x0
		::System::String* LibraryPath; // 0x10

		::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables()
		{
			return (return (::UnityEngine::AddressableAssets::AddressablesImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_M_ADDRESSABLES_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RESOURCEMANAGER_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance()
		{
			return (return (::UnityEngine::AddressableAssets::AddressablesImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INSTANCEPROVIDER_OFFSET))(nullptr);
		}

		::System::String* ResolveInternalId(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RESOLVEINTERNALID_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_InternalIdTransformFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INTERNALIDTRANSFORMFUNC_OFFSET))(nullptr);
		}

		::System::Void set_InternalIdTransformFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_SET_INTERNALIDTRANSFORMFUNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WebRequestOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_WEBREQUESTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_WebRequestOverride(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_SET_WEBREQUESTOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::String* get_StreamingAssetsSubFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_STREAMINGASSETSSUBFOLDER_OFFSET))(nullptr);
		}

		::System::String* get_BuildPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_BUILDPATH_OFFSET))(nullptr);
		}

		::System::String* get_PlayerBuildDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_PLAYERBUILDDATAPATH_OFFSET))(nullptr);
		}

		::System::String* get_RuntimePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RUNTIMEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_ResourceLocators()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_RESOURCELOCATORS_OFFSET))(nullptr);
		}

		::System::Void InternalSafeSerializationLog(::System::String* str, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INTERNALSAFESERIALIZATIONLOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void InternalSafeSerializationLogFormat(::System::String* str, ::UnityEngine::LogType* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::LogType*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INTERNALSAFESERIALIZATIONLOGFORMAT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOG_OFFSET))(str, nullptr);
		}

		::System::Void LogFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogWarning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGWARNING_OFFSET))(str, nullptr);
		}

		::System::Void LogWarningFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGWARNINGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGERROR_OFFSET))(str, nullptr);
		}

		::System::Void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void LogErrorFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOGERRORFORMAT_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Initialize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* InitializeAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZEASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* InitializeAsync(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INITIALIZEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadContentCatalog(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOG_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* LoadContentCatalogAsync(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOGASYNC_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* LoadContentCatalogAsync(::System::String* str, ::System::Boolean arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADCONTENTCATALOGASYNC_OFFSET))(str, arg, str, nullptr);
		}

		Il2CppObject* get_InitializationOperation()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GET_INITIALIZATIONOPERATION_OFFSET))(nullptr);
		}

		Il2CppObject* LoadAsset(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadAsset(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadAssetAsync(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadResourceLocations(Il2CppObject* arg, MergeMode* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, MergeMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsAsync(Il2CppObject* arg, MergeMode* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, MergeMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsAsync(::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, MergeMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocations(::System::Object* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsAsync(::System::Object* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADRESOURCELOCATIONSASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssets(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssets(Il2CppObject* arg, Il2CppObject* arg, MergeMode* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, MergeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(Il2CppObject* arg, Il2CppObject* arg, MergeMode* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, MergeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Collections::IEnumerable* arg, Il2CppObject* arg, MergeMode* arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, Il2CppObject*, MergeMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(Il2CppObject* arg, Il2CppObject* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Collections::IEnumerable* arg, Il2CppObject* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, Il2CppObject*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssets(::System::Object* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Object* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Object* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseInstance(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseInstance(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_RELEASEINSTANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSize(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(::System::Collections::IEnumerable* arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_GETDOWNLOADSIZEASYNC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependencies(::System::Object* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(Il2CppObject* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(Il2CppObject*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::System::Collections::IEnumerable*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearDependencyCacheAsync(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDependencyCacheAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDependencyCacheAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDependencyCacheAsync(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDependencyCacheAsync(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(str, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(::System::Collections::IEnumerable* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARDEPENDENCYCACHEASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::System::Object* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::System::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::System::Object* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadScene(::System::Object* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadSceneAsync(::System::Object* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_LOADSCENEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadScene(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnloadScene(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnloadScene(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadScene(Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UNLOADSCENEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CheckForCatalogUpdates(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CHECKFORCATALOGUPDATES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* UpdateCatalogs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UPDATECATALOGS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UpdateCatalogs(::System::Boolean arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_UPDATECATALOGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_ADDRESOURCELOCATOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_REMOVERESOURCELOCATOR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearResourceLocators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEARRESOURCELOCATORS_OFFSET))(nullptr);
		}

		Il2CppObject* CleanBundleCache(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_CLEANBUNDLECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

