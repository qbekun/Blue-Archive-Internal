#pragma once
#include "../../../unitysdk.h"

namespace MX::AppSystem::ServiceLocator { class SupportedPlatforms; }

#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_ISSERVICEREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int IAppServiceRegistrar_TypeDefinitionIndex = 37697;

	class IAppServiceRegistrar : public Il2CppObject
	{
	public:
		::System::Boolean RegisterService(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_REGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterService(::System::Type* arg, ::MX::AppSystem::ServiceLocator::SupportedPlatforms* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::MX::AppSystem::ServiceLocator::SupportedPlatforms*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_REGISTERSERVICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UnregisterService(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_UNREGISTERSERVICE_OFFSET))(str, nullptr);
		}

		::System::Boolean UnregisterService(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsServiceRegistered(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_ISSERVICEREGISTERED_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetService(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_GETSERVICE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetServices(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_IAPPSERVICEREGISTRAR_GETSERVICES_OFFSET))(str, nullptr);
		}

	};
}

