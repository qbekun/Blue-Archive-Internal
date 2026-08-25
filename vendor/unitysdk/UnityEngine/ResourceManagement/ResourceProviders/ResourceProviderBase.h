#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ProviderBehaviourFlags; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xA0EBCA0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_CANPROVIDE_OFFSET UNITYSDK_OFFSET(0xA0EBE90)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA0EBEE0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0EBF10)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_PROVIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0EBF20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_UNITYENGINE.RESOURCEMANAGEMENT.RESOURCEPROVIDERS.IRESOURCEPROVIDER.GET_BEHAVIOURFLAGS_OFFSET UNITYSDK_OFFSET(0xA0EBF40)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_GETDEFAULTTYPE_OFFSET UNITYSDK_OFFSET(0xA0EBF50)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0xA0EBFB0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9550)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int ResourceProviderBase_TypeDefinitionIndex = 36411;

	class ResourceProviderBase : public Il2CppObject
	{
	public:
		::System::String* m_ProviderId; // 0x10
		::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags* m_BehaviourFlags; // 0x18

		Il2CppObject* InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_INITIALIZEASYNC_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean CanProvide(::System::Type* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_CANPROVIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Initialize(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_INITIALIZE_OFFSET))(str, str, nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags* UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_UNITYENGINE.RESOURCEMANAGEMENT.RESOURCEPROVIDERS.IRESOURCEPROVIDER.GET_BEHAVIOURFLAGS_OFFSET))(nullptr);
		}

		::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_GETDEFAULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_ProviderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_GET_PROVIDERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_RESOURCEPROVIDERBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

