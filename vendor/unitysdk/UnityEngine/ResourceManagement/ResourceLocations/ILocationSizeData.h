#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCELOCATIONS_ILOCATIONSIZEDATA_COMPUTESIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceLocations
{
	inline static constexpr unsigned int ILocationSizeData_TypeDefinitionIndex = 36418;

	class ILocationSizeData : public Il2CppObject
	{
	public:
		::System::Int64 ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceManager* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCELOCATIONS_ILOCATIONSIZEDATA_COMPUTESIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

