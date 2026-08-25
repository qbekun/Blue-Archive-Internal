#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class CollectObjects; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::AI { class NavMeshCollectGeometry; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshDataInstance; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::AI { class NavMeshSurface; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshBuildSettings; }

#define UNITYENGINE_AI_NAVMESHSURFACE_SET_DEFAULTAREA_OFFSET UNITYSDK_OFFSET(0x9446980)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_DEFAULTAREA_OFFSET UNITYSDK_OFFSET(0x9446990)
#define UNITYENGINE_AI_NAVMESHSURFACE_REGISTER_OFFSET UNITYSDK_OFFSET(0x94469A0)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATEACTIVE_OFFSET UNITYSDK_OFFSET(0x9446C50)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHAGENT_OFFSET UNITYSDK_OFFSET(0x9446D80)
#define UNITYENGINE_AI_NAVMESHSURFACE_GETWORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x9446D90)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x94470F0)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATEDATAIFTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9446D40)
#define UNITYENGINE_AI_NAVMESHSURFACE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9447380)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDEVOXELSIZE_OFFSET UNITYSDK_OFFSET(0x94473D0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x94473E0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_BUILDHEIGHTMESH_OFFSET UNITYSDK_OFFSET(0x94473F0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x9447400)
#define UNITYENGINE_AI_NAVMESHSURFACE_BUILDNAVMESH_OFFSET UNITYSDK_OFFSET(0x9447410)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x9448FA0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x9448FB0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x9448FC0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDETILESIZE_OFFSET UNITYSDK_OFFSET(0x9448FD0)
#define UNITYENGINE_AI_NAVMESHSURFACE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x9447220)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_USEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x9448FE0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDEVOXELSIZE_OFFSET UNITYSDK_OFFSET(0x9448FF0)
#define UNITYENGINE_AI_NAVMESHSURFACE_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0x9447700)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x9449940)
#define UNITYENGINE_AI_NAVMESHSURFACE_HASTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9447100)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_BUILDHEIGHTMESH_OFFSET UNITYSDK_OFFSET(0x9449950)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x9449960)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x9449970)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x9449980)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x9449990)
#define UNITYENGINE_AI_NAVMESHSURFACE_ABS_OFFSET UNITYSDK_OFFSET(0x94470C0)
#define UNITYENGINE_AI_NAVMESHSURFACE_UPDATENAVMESH_OFFSET UNITYSDK_OFFSET(0x94499B0)
#define UNITYENGINE_AI_NAVMESHSURFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9449B10)
#define UNITYENGINE_AI_NAVMESHSURFACE_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x9447200)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_ACTIVESURFACES_OFFSET UNITYSDK_OFFSET(0x9449BD0)
#define UNITYENGINE_AI_NAVMESHSURFACE_APPENDMODIFIERVOLUMES_OFFSET UNITYSDK_OFFSET(0x9449000)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHAGENT_OFFSET UNITYSDK_OFFSET(0x9449C20)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_USEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x9449C30)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x9449C40)
#define UNITYENGINE_AI_NAVMESHSURFACE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9449C50)
#define UNITYENGINE_AI_NAVMESHSURFACE_CALCULATEWORLDBOUNDS_OFFSET UNITYSDK_OFFSET(0x9448160)
#define UNITYENGINE_AI_NAVMESHSURFACE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9449CE0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x9449EA0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x9449EB0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x9449ED0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GET_VOXELSIZE_OFFSET UNITYSDK_OFFSET(0x9449EE0)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDETILESIZE_OFFSET UNITYSDK_OFFSET(0x9449EF0)
#define UNITYENGINE_AI_NAVMESHSURFACE_GETBUILDSETTINGS_OFFSET UNITYSDK_OFFSET(0x9448E10)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x9449F00)
#define UNITYENGINE_AI_NAVMESHSURFACE_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x9449F10)
#define UNITYENGINE_AI_NAVMESHSURFACE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9449F20)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface_TypeDefinitionIndex = 37905;

	class NavMeshSurface : public Il2CppObject
	{
	public:
		::System::Int32 m_AgentTypeID; // 0x18
		::UnityEngine::AI::CollectObjects* m_CollectObjects; // 0x1C
		::UnityEngine::Vector3* m_Size; // 0x20
		::UnityEngine::Vector3* m_Center; // 0x2C
		::UnityEngine::LayerMask* m_LayerMask; // 0x38
		::UnityEngine::AI::NavMeshCollectGeometry* m_UseGeometry; // 0x3C
		::System::Int32 m_DefaultArea; // 0x40
		::System::Boolean m_IgnoreNavMeshAgent; // 0x44
		::System::Boolean m_IgnoreNavMeshObstacle; // 0x45
		::System::Boolean m_OverrideTileSize; // 0x46
		::System::Int32 m_TileSize; // 0x48
		::System::Boolean m_OverrideVoxelSize; // 0x4C
		::System::Single m_VoxelSize; // 0x50
		::System::Boolean m_BuildHeightMesh; // 0x54
		::UnityEngine::AI::NavMeshData* m_NavMeshData; // 0x58
		::UnityEngine::AI::NavMeshDataInstance* m_NavMeshDataInstance; // 0x60
		::UnityEngine::Vector3* m_LastPosition; // 0x64
		::UnityEngine::Quaternion* m_LastRotation; // 0x70
		Il2CppObject* s_NavMeshSurfaces; // 0x0

		::System::Void set_defaultArea(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_DEFAULTAREA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_defaultArea()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_DEFAULTAREA_OFFSET))(nullptr);
		}

		::System::Void Register(::UnityEngine::AI::NavMeshSurface* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATEACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreNavMeshAgent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHAGENT_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* GetWorldBounds(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GETWORLDBOUNDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_voxelSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_VOXELSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDataIfTransformChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATEDATAIFTRANSFORMCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_overrideVoxelSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDEVOXELSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* get_layerMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_LAYERMASK_OFFSET))(nullptr);
		}

		::System::Void set_buildHeightMesh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_BUILDHEIGHTMESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void BuildNavMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_BUILDNAVMESH_OFFSET))(nullptr);
		}

		::System::Void set_navMeshData(::UnityEngine::AI::NavMeshData* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_NAVMESHDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_tileSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_TILESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_collectObjects(::UnityEngine::AI::CollectObjects* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::CollectObjects*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_COLLECTOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overrideTileSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDETILESIZE_OFFSET))(nullptr);
		}

		::System::Void AddData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ADDDATA_OFFSET))(nullptr);
		}

		::System::Void set_useGeometry(::UnityEngine::AI::NavMeshCollectGeometry* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshCollectGeometry*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_USEGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overrideVoxelSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_OVERRIDEVOXELSIZE_OFFSET))(nullptr);
		}

		Il2CppObject* CollectSources()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_COLLECTSOURCES_OFFSET))(nullptr);
		}

		::System::Int32 get_agentTypeID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_AGENTTYPEID_OFFSET))(nullptr);
		}

		::System::Boolean HasTransformChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_HASTRANSFORMCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean get_buildHeightMesh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_BUILDHEIGHTMESH_OFFSET))(nullptr);
		}

		::System::Void set_agentTypeID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_AGENTTYPEID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::CollectObjects* get_collectObjects()
		{
			return (return (::UnityEngine::AI::CollectObjects*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_COLLECTOBJECTS_OFFSET))(nullptr);
		}

		::UnityEngine::AI::NavMeshData* get_navMeshData()
		{
			return (return (::UnityEngine::AI::NavMeshData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_NAVMESHDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* Abs(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ABS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UpdateNavMesh(::UnityEngine::AI::NavMeshData* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UPDATENAVMESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_REMOVEDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeSurfaces()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_ACTIVESURFACES_OFFSET))(nullptr);
		}

		::System::Void AppendModifierVolumes(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_APPENDMODIFIERVOLUMES_OFFSET))(arg, nullptr);
		}

		::System::Void set_ignoreNavMeshAgent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHAGENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshCollectGeometry* get_useGeometry()
		{
			return (return (::UnityEngine::AI::NavMeshCollectGeometry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_USEGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void set_ignoreNavMeshObstacle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_IGNORENAVMESHOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* CalculateWorldBounds(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_CALCULATEWORLDBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::UnityEngine::AI::NavMeshSurface* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshSurface*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreNavMeshObstacle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_IGNORENAVMESHOBSTACLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Int32 get_tileSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_TILESIZE_OFFSET))(nullptr);
		}

		::System::Single get_voxelSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GET_VOXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_overrideTileSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_OVERRIDETILESIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshBuildSettings* GetBuildSettings()
		{
			return (return (::UnityEngine::AI::NavMeshBuildSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_GETBUILDSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_layerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_SET_LAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

