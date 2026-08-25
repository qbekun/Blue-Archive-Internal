#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_VALIDTERRAINSEXIST_OFFSET UNITYSDK_OFFSET(0xA2A9CE0)
#define UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0xA2A9D60)
#define UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_COLLECTTERRAINS_OFFSET UNITYSDK_OFFSET(0xA2A9E60)
#define UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0xA2AA210)

namespace UnityEngine::TerrainUtils
{
	inline static constexpr unsigned int TerrainUtility_TypeDefinitionIndex = 37805;

	class TerrainUtility : public Il2CppObject
	{
	public:
		::System::Boolean ValidTerrainsExist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_VALIDTERRAINSEXIST_OFFSET))(nullptr);
		}

		::System::Void ClearConnectivity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET))(nullptr);
		}

		Il2CppObject* CollectTerrains(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_COLLECTTERRAINS_OFFSET))(arg, nullptr);
		}

		::System::Void AutoConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINUTILITY_AUTOCONNECT_OFFSET))(nullptr);
		}

	};
}

