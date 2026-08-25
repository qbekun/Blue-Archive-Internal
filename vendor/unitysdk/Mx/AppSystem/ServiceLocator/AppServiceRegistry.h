#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace MX::AppSystem::ServiceLocator { class IAppServiceRegistrar; }
namespace MX::AppSystem::ServiceLocator { class IAppService; }
namespace MX::AppSystem::ServiceLocator { class IAppServiceRegistrar&; }
namespace MX::AppSystem::ServiceLocator { class IAppService&; }

#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2FD00)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_ADDSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2FFA0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_ADDSERVICETOCACHE_OFFSET UNITYSDK_OFFSET(0xA30380)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICEFROMCACHE_OFFSET UNITYSDK_OFFSET(0xA301A0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET UNITYSDK_OFFSET(0xA2F120)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA30690)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_FINDENTRY_OFFSET UNITYSDK_OFFSET(0xA30BD0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_CLEARALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA2EFD0)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_GETALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA30F90)
#define MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_GETALLSERVICES_OFFSET UNITYSDK_OFFSET(0xA30FE0)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int AppServiceRegistry_TypeDefinitionIndex = 37692;

	class AppServiceRegistry : public Il2CppObject
	{
	public:
		Il2CppObject* registry; // 0x0
		Il2CppObject* allServicesByRegistrar; // 0x8
		Il2CppObject* allServices; // 0x10
		Il2CppObject* ascendingOrderComparer; // 0x18
		::Unity::Profiling::ProfilerMarker* TryGetServiceInternalPerfMarker; // 0x20
		::Unity::Profiling::ProfilerMarker* FindEntryPerfMarker; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean AddService(Il2CppObject* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_ADDSERVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RemoveService(Il2CppObject* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RemoveService(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveService(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICE_OFFSET))(str, nullptr);
		}

		::System::Boolean RemoveServiceInternal(::System::Type* arg, ::MX::AppSystem::ServiceLocator::IAppService* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::IAppService*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddServiceToCache(::MX::AppSystem::ServiceLocator::IAppService* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::IAppService*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_ADDSERVICETOCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveServiceFromCache(::MX::AppSystem::ServiceLocator::IAppService* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			((::System::Void(*)(::MX::AppSystem::ServiceLocator::IAppService*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_REMOVESERVICEFROMCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetService(Il2CppObject&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean TryGetService(Il2CppObject&* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Boolean TryGetService(::System::Type* arg, ::MX::AppSystem::ServiceLocator::IAppService&* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::IAppService&*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Boolean TryGetServiceInternal(::System::Type* arg, ::MX::AppSystem::ServiceLocator::IAppService&* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::IAppService&*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_TRYGETSERVICEINTERNAL_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Boolean FindEntry(Il2CppObject* arg, ::System::Type* arg, ::System::String* str, ::MX::AppSystem::ServiceLocator::IAppService&* arg, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Type*, ::System::String*, ::MX::AppSystem::ServiceLocator::IAppService&*, ::MX::AppSystem::ServiceLocator::IAppServiceRegistrar&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_FINDENTRY_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void ClearAllServices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_CLEARALLSERVICES_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllServices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_GETALLSERVICES_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllServices(::MX::AppSystem::ServiceLocator::IAppServiceRegistrar* arg)
		{
			return (return (Il2CppObject*(*)(::MX::AppSystem::ServiceLocator::IAppServiceRegistrar*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPSERVICEREGISTRY_GETALLSERVICES_OFFSET))(arg, nullptr);
		}

	};
}

