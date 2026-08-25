#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class IAllocationStrategy; }
namespace UnityEngine::Networking { class CertificateHandler; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement { class IUpdateReceiver; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IResourceProvider; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class AsyncOperationHandle; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class IAsyncOperation; }
namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class GroupOperation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ISceneProvider; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IInstanceProvider; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }
namespace UnityEngine::SceneManagement { class Scene; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_EXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA0DBE60)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_EXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA0DBEB0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0xA0DBF20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_INTERNALIDTRANSFORMFUNC_OFFSET UNITYSDK_OFFSET(0xA0DBF30)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_TRANSFORMINTERNALID_OFFSET UNITYSDK_OFFSET(0xA0DBF40)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA0DC000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_WEBREQUESTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA0DC010)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_OPERATIONCACHECOUNT_OFFSET UNITYSDK_OFFSET(0xA0DC020)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_INSTANCEOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA0DC070)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ADDUPDATERECEIVER_OFFSET UNITYSDK_OFFSET(0xA0DC0B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REMOVEUPDATERECIEVER_OFFSET UNITYSDK_OFFSET(0xA0DC110)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_ALLOCATOR_OFFSET UNITYSDK_OFFSET(0xA0DC260)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_ALLOCATOR_OFFSET UNITYSDK_OFFSET(0xA0DC270)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_RESOURCEPROVIDERS_OFFSET UNITYSDK_OFFSET(0xA0DC280)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_CERTIFICATEHANDLERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0DC290)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_CERTIFICATEHANDLERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0DC2A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DC2C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOBJECTADDED_OFFSET UNITYSDK_OFFSET(0xA0DC9C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOBJECTREMOVED_OFFSET UNITYSDK_OFFSET(0xA0DCA50)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERFORCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA0DCAB0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEARDIAGNOSTICSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0DCB70)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEARDIAGNOSTICCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA0DCBC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_UNREGISTERDIAGNOSTICCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0DCC10)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERDIAGNOSTICCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0DCD00)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERDIAGNOSTICCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0DCD20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_POSTDIAGNOSTICEVENT_OFFSET UNITYSDK_OFFSET(0xA0DCDD0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GETRESOURCEPROVIDER_OFFSET UNITYSDK_OFFSET(0xA0DCF00)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GETDEFAULTTYPEFORLOCATION_OFFSET UNITYSDK_OFFSET(0xA0DD360)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CALCULATELOCATIONSHASH_OFFSET UNITYSDK_OFFSET(0xA0DD480)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCE_OFFSET UNITYSDK_OFFSET(0xA0DD8A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_STARTOPERATION_OFFSET UNITYSDK_OFFSET(0xA0DEA70)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONINSTANCEOPERATIONDESTROY_OFFSET UNITYSDK_OFFSET(0xA0DEBC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOPERATIONDESTROYNONCACHED_OFFSET UNITYSDK_OFFSET(0xA0DED10)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOPERATIONDESTROYCACHED_OFFSET UNITYSDK_OFFSET(0xA0DEDF0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ADDOPERATIONTOCACHE_OFFSET UNITYSDK_OFFSET(0xA0DF080)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REMOVEOPERATIONFROMCACHE_OFFSET UNITYSDK_OFFSET(0xA0DEFD0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ISOPERATIONCACHED_OFFSET UNITYSDK_OFFSET(0xA0DF130)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CACHEDOPERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA0DF180)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATIONWITHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0DF1D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xA0DF2A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ACQUIREGROUPOPFROMCACHE_OFFSET UNITYSDK_OFFSET(0xA0DF380)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGROUPOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGROUPOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGENERICGROUPOPERATION_OFFSET UNITYSDK_OFFSET(0xA0DF4B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCEGROUPCACHED_OFFSET UNITYSDK_OFFSET(0xA0DE450)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDESCENE_OFFSET UNITYSDK_OFFSET(0xA0DF8E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_RELEASESCENE_OFFSET UNITYSDK_OFFSET(0xA0DFA20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0DFB50)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEANUPSCENEINSTANCES_OFFSET UNITYSDK_OFFSET(0xA0DFF40)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_EXECUTEDEFERREDCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA0E03C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERFORDEFERREDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0E05A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0E0800)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0E0D00)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E0DC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER__.CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0xA0E0EA0)

namespace UnityEngine::ResourceManagement
{
	inline static constexpr unsigned int ResourceManager_TypeDefinitionIndex = 36355;

	class ResourceManager : public Il2CppObject
	{
	public:
		::System::Boolean postProfilerEvents; // 0x10
		Il2CppObject* _ExceptionHandler_k__BackingField; // 0x0
		Il2CppObject* _InternalIdTransformFunc_k__BackingField; // 0x18
		Il2CppObject* _WebRequestOverride_k__BackingField; // 0x20
		::System::Boolean CallbackHooksEnabled; // 0x28
		Il2CppObject* m_ResourceProviders; // 0x30
		::UnityEngine::ResourceManagement::Util::IAllocationStrategy* m_allocator; // 0x38
		Il2CppObject* m_UpdateReceivers; // 0x40
		Il2CppObject* m_UpdateReceiversToRemove; // 0x48
		::System::Boolean m_UpdatingReceivers; // 0x50
		::System::Boolean m_InsideUpdateMethod; // 0x51
		Il2CppObject* m_providerMap; // 0x58
		Il2CppObject* m_AssetOperationCache; // 0x60
		Il2CppObject* m_TrackedInstanceOperations; // 0x68
		Il2CppObject* m_UpdateCallbacks; // 0x70
		Il2CppObject* m_DeferredCompleteCallbacks; // 0x78
		::System::Boolean m_InsideExecuteDeferredCallbacksMethod; // 0x80
		Il2CppObject* m_DeferredCallbacksToRegister; // 0x88
		Il2CppObject* m_obsoleteDiagnosticsHandler; // 0x90
		Il2CppObject* m_diagnosticsHandler; // 0x98
		Il2CppObject* m_ReleaseOpNonCached; // 0xA0
		Il2CppObject* m_ReleaseOpCached; // 0xA8
		Il2CppObject* m_ReleaseInstanceOp; // 0xB0
		::System::Int32 s_GroupOperationTypeHash; // 0x8
		::System::Int32 s_InstanceOperationTypeHash; // 0xC
		::UnityEngine::Networking::CertificateHandler* _CertificateHandlerInstance_k__BackingField; // 0xB8
		::System::Boolean m_RegisteredForCallbacks; // 0xC0
		Il2CppObject* m_ProviderOperationTypeCache; // 0xC8

		Il2CppObject* get_ExceptionHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_EXCEPTIONHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ExceptionHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_EXCEPTIONHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InternalIdTransformFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_INTERNALIDTRANSFORMFUNC_OFFSET))(nullptr);
		}

		::System::Void set_InternalIdTransformFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_INTERNALIDTRANSFORMFUNC_OFFSET))(arg, nullptr);
		}

		::System::String* TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_TRANSFORMINTERNALID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WebRequestOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_WEBREQUESTOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_WebRequestOverride(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_WEBREQUESTOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OperationCacheCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_OPERATIONCACHECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_InstanceOperationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_INSTANCEOPERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::IUpdateReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ADDUPDATERECEIVER_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::IUpdateReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REMOVEUPDATERECIEVER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::Util::IAllocationStrategy* get_Allocator()
		{
			return (return (::UnityEngine::ResourceManagement::Util::IAllocationStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_ALLOCATOR_OFFSET))(nullptr);
		}

		::System::Void set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_ALLOCATOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ResourceProviders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_RESOURCEPROVIDERS_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::CertificateHandler* get_CertificateHandlerInstance()
		{
			return (return (::UnityEngine::Networking::CertificateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GET_CERTIFICATEHANDLERINSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::CertificateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_SET_CERTIFICATEHANDLERINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnObjectAdded(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOBJECTADDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnObjectRemoved(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOBJECTREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterForCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERFORCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void ClearDiagnosticsCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEARDIAGNOSTICSCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ClearDiagnosticCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEARDIAGNOSTICCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void UnregisterDiagnosticCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_UNREGISTERDIAGNOSTICCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDiagnosticCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERDIAGNOSTICCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDiagnosticCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERDIAGNOSTICCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void PostDiagnosticEvent(DiagnosticEventContext* arg)
		{
			((::System::Void(*)(DiagnosticEventContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_POSTDIAGNOSTICEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* GetResourceProvider(::System::Type* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*(*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GETRESOURCEPROVIDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_GETDEFAULTTYPEFORLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateLocationsHash(Il2CppObject* arg, ::System::Type* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CALCULATELOCATIONSHASH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* StartOperation(Il2CppObject* arg, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_STARTOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*(*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_STARTOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONINSTANCEOPERATIONDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOPERATIONDESTROYNONCACHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ONOPERATIONDESTROYCACHED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateOperation(::System::Type* arg, ::System::Int32 arg, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::Int32, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEOPERATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ADDOPERATIONTOCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REMOVEOPERATIONFROMCACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ISOPERATIONCACHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 CachedOperationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CACHEDOPERATIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCompletedOperation(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATION_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* CreateCompletedOperationWithException(Il2CppObject* arg, ::System::Exception* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATIONWITHEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateCompletedOperationInternal(Il2CppObject* arg, ::System::Boolean arg, ::System::Exception* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECOMPLETEDOPERATIONINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_ACQUIREGROUPOPFROMCACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGroupOperation(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGROUPOPERATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateGroupOperation(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGROUPOPERATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateGenericGroupOperation(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATEGENERICGROUPOPERATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProvideResourceGroupCached(Il2CppObject* arg, ::System::Int32 arg, ::System::Type* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Type*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCEGROUPCACHED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ProvideResources(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProvideResources(Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDERESOURCES_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateChainOperation(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateChainOperation(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CREATECHAINOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDESCENE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_RELEASESCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_PROVIDEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CleanupSceneInstances(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_CLEANUPSCENEINSTANCES_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDeferredCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_EXECUTEDEFERREDCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_REGISTERFORDEFERREDCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__53_0(::UnityEngine::ResourceManagement::IUpdateReceiver* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::IUpdateReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEMANAGER__.CTOR_B__53_0_OFFSET))(arg, nullptr);
		}

	};
}

