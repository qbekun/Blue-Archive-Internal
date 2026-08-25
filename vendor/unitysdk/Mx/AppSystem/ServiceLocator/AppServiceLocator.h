#pragma once
#include "../../../unitysdk.h"

namespace MX::AppSystem::ServiceLocator { class AppConfigProfile; }
namespace MX::AppSystem::ServiceLocator { class AppServiceLocator; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace MX::AppSystem::ServiceLocator { class SupportedPlatforms; }
namespace MX::AppSystem::ServiceLocator { class IAppService; }

#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISPROFILESWITCHING_OFFSET UNITYSDK_OFFSET(0xA2B270)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SET_ISPROFILESWITCHING_OFFSET UNITYSDK_OFFSET(0xA2B280)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_HASACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA2B290)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2B450)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_HASPROFILEANDISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA2B4E0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA2B5F0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SET_ACTIVEPROFILE_OFFSET UNITYSDK_OFFSET(0xA2B600)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETPROFILEBEFOREINITIALIZATION_OFFSET UNITYSDK_OFFSET(0xA2B730)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_RESETCONFIGURATION_OFFSET UNITYSDK_OFFSET(0xA2B6B0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZENEWPROFILE_OFFSET UNITYSDK_OFFSET(0xA2B930)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REMOVECURRENTPROFILE_OFFSET UNITYSDK_OFFSET(0xA2B790)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ISSERVICEREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZESERVICELOCATOR_OFFSET UNITYSDK_OFFSET(0xA2B9B0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2BE30)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2BE80)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ASSERTISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA2BF80)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA2B3D0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CONFIRMINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA2BF90)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xA2C0E0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA2C8B0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA2C950)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA2CDA0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2D250)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2D2F0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D730)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2C130)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D340)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETINSTANCEINACTIVE_OFFSET UNITYSDK_OFFSET(0xA2D850)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D9D0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICESBYTYPE_OFFSET UNITYSDK_OFFSET(0xA2E260)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICESBYTYPEANDNAME_OFFSET UNITYSDK_OFFSET(0xA2E2B0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICESBYTYPE_OFFSET UNITYSDK_OFFSET(0xA2E510)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICESBYTYPEANDNAME_OFFSET UNITYSDK_OFFSET(0xA2E560)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZEALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2BD30)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_RESETALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2EB50)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2BAD0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UPDATEALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2CAF0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_LATEUPDATEALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2CEC0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2BBD0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DESTROYALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2BCD0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_EXECUTEONALLSERVICESINORDER_OFFSET UNITYSDK_OFFSET(0xA2E7C0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_EXECUTEONALLSERVICESREVERSEORDER_OFFSET UNITYSDK_OFFSET(0xA2EC50)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICEBYNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E1B0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICEBYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETALLSERVICESBYNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CHECKSERVICEMATCH_OFFSET UNITYSDK_OFFSET(0xA2F290)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CANGETSERVICE_OFFSET UNITYSDK_OFFSET(0xA2DE70)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERRUNTIMEPLAYMODELISTENER_OFFSET UNITYSDK_OFFSET(0xA2F4D0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F5E0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2F5F0)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int AppServiceLocator_TypeDefinitionIndex = 37690;

	class AppServiceLocator : public Il2CppObject
	{
	public:
		::System::Boolean isInitializing; // 0x0
		::System::Boolean isApplicationQuitting; // 0x1
		::System::Boolean internalShutdown; // 0x2
		::System::String* NoAppProfileErrorMessage; // 0x0
		::System::Boolean _IsProfileSwitching_k__BackingField; // 0x18
		::MX::AppSystem::ServiceLocator::AppConfigProfile* activeProfile; // 0x20
		::MX::AppSystem::ServiceLocator::AppConfigProfile* _newProfile; // 0x28
		::MX::AppSystem::ServiceLocator::AppServiceLocator* activeInstance; // 0x8
		::System::Boolean newInstanceBeingInitialized; // 0x10
		::System::String* activeInstanceGameObjectName; // 0x0
		::System::String* inactiveInstanceGameObjectName; // 0x0
		Il2CppObject* toolkitInstances; // 0x18
		::Unity::Profiling::ProfilerMarker* UpdateAllServicesPerfMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* LateUpdateAllServicesPerfMarker; // 0x28
		::Unity::Profiling::ProfilerMarker* ExecuteOnAllServicesInOrderPerfMarker; // 0x30
		::Unity::Profiling::ProfilerMarker* ExecuteOnAllServicesReverseOrderPerfMarker; // 0x38

		::System::Boolean get_IsProfileSwitching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISPROFILESWITCHING_OFFSET))(nullptr);
		}

		::System::Void set_IsProfileSwitching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SET_ISPROFILESWITCHING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasActiveProfile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_HASACTIVEPROFILE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActiveInstance()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISACTIVEINSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasProfileAndIsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_HASPROFILEANDISINITIALIZED_OFFSET))(nullptr);
		}

		::MX::AppSystem::ServiceLocator::AppConfigProfile* get_ActiveProfile()
		{
			return (return (::MX::AppSystem::ServiceLocator::AppConfigProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ACTIVEPROFILE_OFFSET))(nullptr);
		}

		::System::Void set_ActiveProfile(::MX::AppSystem::ServiceLocator::AppConfigProfile* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppConfigProfile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SET_ACTIVEPROFILE_OFFSET))(arg, nullptr);
		}

		::System::Void SetProfileBeforeInitialization(::MX::AppSystem::ServiceLocator::AppConfigProfile* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppConfigProfile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETPROFILEBEFOREINITIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void ResetConfiguration(::MX::AppSystem::ServiceLocator::AppConfigProfile* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppConfigProfile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_RESETCONFIGURATION_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeNewProfile(::MX::AppSystem::ServiceLocator::AppConfigProfile* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppConfigProfile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZENEWPROFILE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCurrentProfile(::MX::AppSystem::ServiceLocator::AppConfigProfile* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppConfigProfile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REMOVECURRENTPROFILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterService(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterService(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RegisterService(::System::Type* arg, ::MX::AppSystem::ServiceLocator::SupportedPlatforms* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::SupportedPlatforms*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RegisterServiceInternal(::System::Boolean arg, ::System::Type* arg, ::MX::AppSystem::ServiceLocator::SupportedPlatforms* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::Type*, ::MX::AppSystem::ServiceLocator::SupportedPlatforms*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UnregisterService(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERSERVICE_OFFSET))(str, nullptr);
		}

		::System::Boolean UnregisterService(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsServiceRegistered(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ISSERVICEREGISTERED_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetService(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetServices(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICES_OFFSET))(str, nullptr);
		}

		::System::Void InitializeServiceLocator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZESERVICELOCATOR_OFFSET))(nullptr);
		}

		::MX::AppSystem::ServiceLocator::AppServiceLocator* get_Instance()
		{
			return (return (::MX::AppSystem::ServiceLocator::AppServiceLocator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void InitializeInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZEINSTANCE_OFFSET))(nullptr);
		}

		::System::Void AssertIsInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ASSERTISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean ConfirmInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CONFIRMINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetActiveInstance(::MX::AppSystem::ServiceLocator::AppServiceLocator* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppServiceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETACTIVEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterInstance(::MX::AppSystem::ServiceLocator::AppServiceLocator* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppServiceLocator*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnregisterInstance(::MX::AppSystem::ServiceLocator::AppServiceLocator* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppServiceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UNREGISTERINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInstanceInactive(::MX::AppSystem::ServiceLocator::AppServiceLocator* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::AppServiceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_SETINSTANCEINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterServiceInternal(::System::Type* arg, ::MX::AppSystem::ServiceLocator::IAppService* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::IAppService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RegisterServiceInternal(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERSERVICEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAllServicesByType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICESBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAllServicesByTypeAndName(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICESBYTYPEANDNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void DisableAllServicesByType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICESBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableAllServicesByTypeAndName(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICESBYTYPEANDNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void InitializeAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_INITIALIZEALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void ResetAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_RESETALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void EnableAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_ENABLEALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void UpdateAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_UPDATEALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void LateUpdateAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_LATEUPDATEALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void DisableAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DISABLEALLSERVICES_OFFSET))(nullptr);
		}

		::System::Void DestroyAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_DESTROYALLSERVICES_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteOnAllServicesInOrder(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_EXECUTEONALLSERVICESINORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ExecuteOnAllServicesReverseOrder(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_EXECUTEONALLSERVICESREVERSEORDER_OFFSET))(arg, nullptr);
		}

		::MX::AppSystem::ServiceLocator::IAppService* GetServiceByNameInternal(::System::Type* arg, ::System::String* str)
		{
			return (return (::MX::AppSystem::ServiceLocator::IAppService*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICEBYNAMEINTERNAL_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetServiceByName(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETSERVICEBYNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAllServicesByNameInternal(::System::Type* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_GETALLSERVICESBYNAMEINTERNAL_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CheckServiceMatch(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::MX::AppSystem::ServiceLocator::IAppService* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Type*, ::MX::AppSystem::ServiceLocator::IAppService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CHECKSERVICEMATCH_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean CanGetService(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_CANGETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterRuntimePlayModeListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_REGISTERRUNTIMEPLAYMODELISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICELOCATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

