#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TerrainData; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET UNITYSDK_OFFSET(0xA2A78B0)
#define UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET UNITYSDK_OFFSET(0xA2A78F0)
#define UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET UNITYSDK_OFFSET(0xA2A7930)
#define UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA2A7970)
#define UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET UNITYSDK_OFFSET(0xA2A79C0)
#define UNITYENGINE_TERRAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7A00)

namespace UnityEngine
{
	inline static constexpr unsigned int Terrain_TypeDefinitionIndex = 37793;

	class Terrain : public Il2CppObject
	{
	public:
		::UnityEngine::TerrainData* get_terrainData()
		{
			return (return (::UnityEngine::TerrainData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_TERRAINDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_allowAutoConnect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ALLOWAUTOCONNECT_OFFSET))(nullptr);
		}

		::System::Int32 get_groupingID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_GROUPINGID_OFFSET))(nullptr);
		}

		::System::Void SetNeighbors(::UnityEngine::Terrain* arg, ::UnityEngine::Terrain* arg, ::UnityEngine::Terrain* arg, ::UnityEngine::Terrain* arg)
		{
			((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_SETNEIGHBORS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_activeTerrains()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_GET_ACTIVETERRAINS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAIN_.CTOR_OFFSET))(nullptr);
		}

	};
}

