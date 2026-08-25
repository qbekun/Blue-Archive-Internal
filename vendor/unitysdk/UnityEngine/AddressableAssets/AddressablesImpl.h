#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IInstanceProvider; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ISceneProvider; }
namespace UnityEngine::ResourceManagement::Util { class IAllocationStrategy; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class IResourceLocator; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class ResourceLocationBase; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class SceneInstance; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }

#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_INSTANCEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9E02A10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_INSTANCEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9E02A20)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x9DF4890)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CATALOGREQUESTSTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E02AA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_CATALOGREQUESTSTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E02AB0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_SCENEOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E02AC0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_TRACKEDHANDLECOUNT_OFFSET UNITYSDK_OFFSET(0x9E02B00)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E02830)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASESCENEMANAGEROPERATION_OFFSET UNITYSDK_OFFSET(0x9E02B50)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0x9DF8990)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0x9DF8AA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9DF8BB0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9DF8CC0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CHAINOPERATION_OFFSET UNITYSDK_OFFSET(0x9E02BF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_SHOULDCHAINREQUEST_OFFSET UNITYSDK_OFFSET(0x9E02D70)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x9E02E30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_STREAMINGASSETSSUBFOLDER_OFFSET UNITYSDK_OFFSET(0x9DF8DE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x9DF8EE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_PLAYERBUILDDATAPATH_OFFSET UNITYSDK_OFFSET(0x9DF9190)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RUNTIMEPATH_OFFSET UNITYSDK_OFFSET(0x9DF9340)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOG_OFFSET UNITYSDK_OFFSET(0x9DF96F0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF99E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x9DF9650)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF9920)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGERROR_OFFSET UNITYSDK_OFFSET(0x9DF96A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DF9F10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DFA060)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x9DF9980)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RESOLVEINTERNALID_OFFSET UNITYSDK_OFFSET(0x9DF4530)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RESOURCELOCATORS_OFFSET UNITYSDK_OFFSET(0x9DF8430)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ADDRESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x9E01C20)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_REMOVERESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x9E01E10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARRESOURCELOCATORS_OFFSET UNITYSDK_OFFSET(0x9E02000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETRESOURCELOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E034D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETRESOURCELOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E03D10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9E04240)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA1A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA340)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATECATALOGLOCATIONWITHHASHDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E047C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_QUEUEEDITORUPDATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x9E04DE0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADCONTENTCATALOGASYNC_OFFSET UNITYSDK_OFFSET(0x9DFA570)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET UNITYSDK_OFFSET(0x9E04E00)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET UNITYSDK_OFFSET(0x9E04EB0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARTRACKHANDLES_OFFSET UNITYSDK_OFFSET(0x9E04EF0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E04F40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSASYNC_OFFSET UNITYSDK_OFFSET(0x9DFAA30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E05160)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSASYNC_OFFSET UNITYSDK_OFFSET(0x9DFAE50)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONHANDLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x9E05360)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONSCENEHANDLECOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E053E0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONHANDLECOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E05500)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET UNITYSDK_OFFSET(0x9DFB100)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E055D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E05710)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFB6B0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFB940)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E05850)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_WRAPASDOWNLOADLOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E05A30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GATHERDEPENDENCIESFROMLOCATIONS_OFFSET UNITYSDK_OFFSET(0x9E05B00)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFCA30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E06370)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFCE40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E06550)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD070)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEFORKEY_OFFSET UNITYSDK_OFFSET(0x9E06740)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E06E70)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONTYPELESSCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD510)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFD860)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFDE80)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9E06F20)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF830)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF900)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF990)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E06FB0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFFA60)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E07190)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DFF6D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9DFB210)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E07370)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00360)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E006A0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E00D30)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E010C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x9E012C0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATEUNLOADSCENEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E07520)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATEUNLOADSCENEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E07650)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INTERNALUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9E07780)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_EVALUATEKEY_OFFSET UNITYSDK_OFFSET(0x9E03C40)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CHECKFORCATALOGUPDATES_OFFSET UNITYSDK_OFFSET(0x9E01500)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CHECKFORCATALOGUPDATESWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E07880)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETLOCATORINFO_OFFSET UNITYSDK_OFFSET(0x9E080D0)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CATALOGSWITHAVAILABLEUPDATES_OFFSET UNITYSDK_OFFSET(0x9E08310)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UPDATECATALOGS_OFFSET UNITYSDK_OFFSET(0x9E01790)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E08D10)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E09010)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHE_OFFSET UNITYSDK_OFFSET(0x9E02150)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHE_OFFSET UNITYSDK_OFFSET(0x9E09280)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E09470)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHEWITHCHAIN_OFFSET UNITYSDK_OFFSET(0x9E09150)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__TRACKHANDLE_B__72_0_OFFSET UNITYSDK_OFFSET(0x9E09780)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONCOMPLETION_B__109_0_OFFSET UNITYSDK_OFFSET(0x9E09810)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONCOMPLETION_B__110_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONTYPELESSCOMPLETION_B__112_0_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AddressablesImpl_TypeDefinitionIndex = 36191;

	class AddressablesImpl : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager; // 0x10
		::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_InstanceProvider; // 0x18
		::System::Int32 m_CatalogRequestsTimeout; // 0x20
		::System::String* kCacheDataFolder; // 0x0
		::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* SceneProvider; // 0x28
		Il2CppObject* m_ResourceLocators; // 0x30
		Il2CppObject* m_InitializationOperation; // 0x38
		Il2CppObject* m_ActiveCheckUpdateOperation; // 0x58
		Il2CppObject* m_ActiveUpdateOperation; // 0x78
		Il2CppObject* m_OnHandleCompleteAction; // 0x98
		Il2CppObject* m_OnSceneHandleCompleteAction; // 0xA0
		Il2CppObject* m_OnHandleDestroyedAction; // 0xA8
		Il2CppObject* m_resultToHandle; // 0xB0
		Il2CppObject* m_SceneInstances; // 0xB8
		Il2CppObject* m_ActiveCleanBundleCacheOperation; // 0xC0
		::System::Boolean hasStartedInitialization; // 0xE0

		::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_INSTANCEPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_InstanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_INSTANCEPROVIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RESOURCEMANAGER_OFFSET))(nullptr);
		}

		::System::Int32 get_CatalogRequestsTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CATALOGREQUESTSTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_CatalogRequestsTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_CATALOGREQUESTSTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SceneOperationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_SCENEOPERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TrackedHandleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_TRACKEDHANDLECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseSceneManagerOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASESCENEMANAGEROPERATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_InternalIdTransformFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_INTERNALIDTRANSFORMFUNC_OFFSET))(nullptr);
		}

		::System::Void set_InternalIdTransformFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_INTERNALIDTRANSFORMFUNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WebRequestOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_WEBREQUESTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_WebRequestOverride(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_SET_WEBREQUESTOVERRIDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* get_ChainOperation()
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CHAINOPERATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldChainRequest()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_SHOULDCHAINREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONSCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::String* get_StreamingAssetsSubFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_STREAMINGASSETSSUBFOLDER_OFFSET))(nullptr);
		}

		::System::String* get_BuildPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_BUILDPATH_OFFSET))(nullptr);
		}

		::System::String* get_PlayerBuildDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_PLAYERBUILDDATAPATH_OFFSET))(nullptr);
		}

		::System::String* get_RuntimePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RUNTIMEPATH_OFFSET))(nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOG_OFFSET))(str, nullptr);
		}

		::System::Void LogFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogWarning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGWARNING_OFFSET))(str, nullptr);
		}

		::System::Void LogWarningFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGWARNINGFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGERROR_OFFSET))(str, nullptr);
		}

		::System::Void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LogException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void LogErrorFormat(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOGERRORFORMAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* ResolveInternalId(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RESOLVEINTERNALID_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_ResourceLocators()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_RESOURCELOCATORS_OFFSET))(nullptr);
		}

		::System::Void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ADDRESOURCELOCATOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_REMOVERESOURCELOCATOR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearResourceLocators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARRESOURCELOCATORS_OFFSET))(nullptr);
		}

		::System::Boolean GetResourceLocations(::System::Object* arg, ::System::Type* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETRESOURCELOCATIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetResourceLocations(::System::Collections::IEnumerable* arg, ::System::Type* arg, MergeMode* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IEnumerable*, ::System::Type*, MergeMode*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETRESOURCELOCATIONS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InitializeAsync(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* InitializeAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* InitializeAsync(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INITIALIZEASYNC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATECATALOGLOCATIONWITHHASHDEPENDENCIES_OFFSET))(str, str, nullptr);
		}

		::System::Void QueueEditorUpdateIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_QUEUEEDITORUPDATEIFNEEDED_OFFSET))(nullptr);
		}

		Il2CppObject* LoadContentCatalogAsync(::System::String* str, ::System::Boolean arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADCONTENTCATALOGASYNC_OFFSET))(str, arg, str, nullptr);
		}

		Il2CppObject* TrackHandle(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TrackHandle(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* TrackHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_TRACKHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearTrackHandles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARTRACKHANDLES_OFFSET))(nullptr);
		}

		Il2CppObject* LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadAssetWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETWITHCHAIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetAsync(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Collections::IEnumerable*, MergeMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSWITHCHAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsAsync(::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, MergeMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSWITHCHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadResourceLocationsAsync(::System::Object* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADRESOURCELOCATIONSASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Collections::IEnumerable* arg, Il2CppObject* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Collections::IEnumerable*, Il2CppObject*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSWITHCHAIN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Collections::IEnumerable* arg, Il2CppObject* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, Il2CppObject*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSWITHCHAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAssetsAsync(::System::Object* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADASSETSASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnHandleDestroyed(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONHANDLEDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSceneHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONSCENEHANDLECOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void OnHandleCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_ONHANDLECOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEWITHCHAIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Collections::IEnumerable* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEWITHCHAIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadSizeAsync(::System::Collections::IEnumerable* arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETDOWNLOADSIZEASYNC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WrapAsDownloadLocations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_WRAPASDOWNLOADLOCATIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GatherDependenciesFromLocations(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GATHERDEPENDENCIESFROMLOCATIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsyncWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Collections::IEnumerable*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNCWITHCHAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* DownloadDependenciesAsync(::System::Collections::IEnumerable* arg, MergeMode* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::System::Collections::IEnumerable*, MergeMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_DOWNLOADDEPENDENCIESASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ClearDependencyCacheForKey(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEFORKEY_OFFSET))(arg, nullptr);
		}

		::System::Void AutoReleaseHandleOnCompletion(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET))(arg, nullptr);
		}

		::System::Void AutoReleaseHandleOnCompletion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET))(arg, nullptr);
		}

		::System::Void AutoReleaseHandleOnCompletion(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONCOMPLETION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AutoReleaseHandleOnTypelessCompletion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_AUTORELEASEHANDLEONTYPELESSCOMPLETION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ClearDependencyCacheAsync(::System::Collections::IEnumerable* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IEnumerable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEARDEPENDENCYCACHEASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEWITHCHAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::System::Object* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEWITHCHAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INSTANTIATEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReleaseInstance(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_RELEASEINSTANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LoadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::System::Object* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEWITHCHAIN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadSceneAsync(::System::Object* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_LOADSCENEASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* UnloadSceneAsync(Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UNLOADSCENEASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateUnloadSceneWithChain(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATEUNLOADSCENEWITHCHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateUnloadSceneWithChain(Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CREATEUNLOADSCENEWITHCHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InternalUnloadScene(Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_INTERNALUNLOADSCENE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* EvaluateKey(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_EVALUATEKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CheckForCatalogUpdates(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CHECKFORCATALOGUPDATES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CheckForCatalogUpdatesWithChain(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CHECKFORCATALOGUPDATESWITHCHAIN_OFFSET))(arg, nullptr);
		}

		ResourceLocatorInfo* GetLocatorInfo(::System::String* str)
		{
			return (return (ResourceLocatorInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETLOCATORINFO_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_CatalogsWithAvailableUpdates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GET_CATALOGSWITHAVAILABLEUPDATES_OFFSET))(nullptr);
		}

		Il2CppObject* UpdateCatalogs(Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_UPDATECATALOGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CleanBundleCache(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CleanBundleCache(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CleanBundleCacheWithChain(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHEWITHCHAIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CleanBundleCacheWithChain(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL_CLEANBUNDLECACHEWITHCHAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _TrackHandle_b__72_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__TRACKHANDLE_B__72_0_OFFSET))(arg, nullptr);
		}

		::System::Void _AutoReleaseHandleOnCompletion_b__109_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONCOMPLETION_B__109_0_OFFSET))(arg, nullptr);
		}

		::System::Void _AutoReleaseHandleOnCompletion_b__110_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONCOMPLETION_B__110_0_OFFSET))(arg, nullptr);
		}

		::System::Void _AutoReleaseHandleOnTypelessCompletion_b__112_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ADDRESSABLESIMPL__AUTORELEASEHANDLEONTYPELESSCOMPLETION_B__112_0_OFFSET))(arg, nullptr);
		}

	};
}

