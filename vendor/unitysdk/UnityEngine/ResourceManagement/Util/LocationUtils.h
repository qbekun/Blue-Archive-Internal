#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONUTILS_DEPENDENCIESEQUAL_OFFSET UNITYSDK_OFFSET(0xA0E4E50)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONUTILS_LOCATIONEQUALS_OFFSET UNITYSDK_OFFSET(0xA0E4A30)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int LocationUtils_TypeDefinitionIndex = 36371;

	class LocationUtils : public Il2CppObject
	{
	public:
		::System::Boolean DependenciesEqual(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONUTILS_DEPENDENCIESEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LocationEquals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LOCATIONUTILS_LOCATIONEQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

