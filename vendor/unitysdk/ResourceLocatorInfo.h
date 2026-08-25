#pragma once
#include "unitysdk.h"

namespace UnityEngine::AddressableAssets::ResourceLocators { class IResourceLocator; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define RESOURCELOCATORINFO_SET_CONTENTUPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E09850)
#define RESOURCELOCATORINFO_GET_CATALOGLOCATION_OFFSET UNITYSDK_OFFSET(0x9E09860)
#define RESOURCELOCATORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E03460)
#define RESOURCELOCATORINFO_SET_LOCALHASH_OFFSET UNITYSDK_OFFSET(0x9E09870)
#define RESOURCELOCATORINFO_GET_HASHLOCATION_OFFSET UNITYSDK_OFFSET(0x9E09880)
#define RESOURCELOCATORINFO_SET_LOCATOR_OFFSET UNITYSDK_OFFSET(0x9E09990)
#define RESOURCELOCATORINFO_UPDATECONTENT_OFFSET UNITYSDK_OFFSET(0x9E099A0)
#define RESOURCELOCATORINFO_GET_CANUPDATECONTENT_OFFSET UNITYSDK_OFFSET(0x9E099F0)
#define RESOURCELOCATORINFO_GET_LOCALHASH_OFFSET UNITYSDK_OFFSET(0x9E09BA0)
#define RESOURCELOCATORINFO_GET_CONTENTUPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E09BB0)
#define RESOURCELOCATORINFO_GET_LOCATOR_OFFSET UNITYSDK_OFFSET(0x9E09BC0)
#define RESOURCELOCATORINFO_SET_CATALOGLOCATION_OFFSET UNITYSDK_OFFSET(0x9E09BD0)

	inline static constexpr unsigned int ResourceLocatorInfo_TypeDefinitionIndex = 36162;

	class ResourceLocatorInfo : public Il2CppObject
	{
	public:
		::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* _Locator_k__BackingField; // 0x10
		::System::String* _LocalHash_k__BackingField; // 0x18
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _CatalogLocation_k__BackingField; // 0x20
		::System::Boolean _ContentUpdateAvailable_k__BackingField; // 0x28

		::System::Void set_ContentUpdateAvailable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_SET_CONTENTUPDATEAVAILABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_CatalogLocation()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_CATALOGLOCATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void set_LocalHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_SET_LOCALHASH_OFFSET))(str, nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_HashLocation()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_HASHLOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Locator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_SET_LOCATOR_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateContent(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_UPDATECONTENT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean get_CanUpdateContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_CANUPDATECONTENT_OFFSET))(nullptr);
		}

		::System::String* get_LocalHash()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_LOCALHASH_OFFSET))(nullptr);
		}

		::System::Boolean get_ContentUpdateAvailable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_CONTENTUPDATEAVAILABLE_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* get_Locator()
		{
			return (return (::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_GET_LOCATOR_OFFSET))(nullptr);
		}

		::System::Void set_CatalogLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCELOCATORINFO_SET_CATALOGLOCATION_OFFSET))(arg, nullptr);
		}

	};

