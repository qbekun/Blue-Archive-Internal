#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::TerrainUtils { class TerrainMapStatusCode; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine::TerrainUtils { class TerrainMap; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_GETTERRAIN_OFFSET UNITYSDK_OFFSET(0xA2A8270)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA2A82E0)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA2A8680)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_GET_TERRAINTILES_OFFSET UNITYSDK_OFFSET(0xA2A8F60)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A8C00)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_ADDTERRAININTERNAL_OFFSET UNITYSDK_OFFSET(0xA2A8F70)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_TRYTOADDTERRAIN_OFFSET UNITYSDK_OFFSET(0xA2A8C90)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_VALIDATETERRAIN_OFFSET UNITYSDK_OFFSET(0xA2A9170)
#define UNITYENGINE_TERRAINUTILS_TERRAINMAP_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA2A8DD0)

namespace UnityEngine::TerrainUtils
{
	inline static constexpr unsigned int TerrainMap_TypeDefinitionIndex = 37802;

	class TerrainMap : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_patchSize; // 0x10
		::UnityEngine::TerrainUtils::TerrainMapStatusCode* m_errorCode; // 0x1C
		Il2CppObject* m_terrainTiles; // 0x20

		::UnityEngine::Terrain* GetTerrain(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Terrain*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_GETTERRAIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Terrain* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TerrainUtils::TerrainMap*(*)(::UnityEngine::Terrain*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::TerrainUtils::TerrainMap* CreateFromPlacement(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TerrainUtils::TerrainMap*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_CREATEFROMPLACEMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_terrainTiles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_GET_TERRAINTILES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddTerrainInternal(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Terrain* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Terrain*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_ADDTERRAININTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryToAddTerrain(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Terrain* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Terrain*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_TRYTOADDTERRAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateTerrain(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_VALIDATETERRAIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TerrainUtils::TerrainMapStatusCode* Validate()
		{
			return (return (::UnityEngine::TerrainUtils::TerrainMapStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINMAP_VALIDATE_OFFSET))(nullptr);
		}

	};
}

