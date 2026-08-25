#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProviderBehaviourFlags; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_CANPROVIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GET_BEHAVIOURFLAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GETDEFAULTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int IResourceProvider_TypeDefinitionIndex = 36401;

	class IResourceProvider : public Il2CppObject
	{
	public:
		::System::String* get_ProviderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GET_PROVIDERID_OFFSET))(nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanProvide(::System::Type* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_CANPROVIDE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags* get_BehaviourFlags()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GET_BEHAVIOURFLAGS_OFFSET))(nullptr);
		}

		::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_GETDEFAULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IRESOURCEPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

	};
}

