#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_DOWNLOADONLYLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E6C80)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int DownloadOnlyLocation_TypeDefinitionIndex = 36386;

	class DownloadOnlyLocation : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_DOWNLOADONLYLOCATION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

