#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Vector3Int; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeTextureMemoryBudget; }
namespace UnityEngine { class Vector3Int&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F7DEE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_SET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F7DEF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GETVOXELSUBDIVLEVEL_OFFSET UNITYSDK_OFFSET(0x9F7DF00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_SIZEOFPHYSICALINDEXFROMBUDGET_OFFSET UNITYSDK_OFFSET(0x9F7DFE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F7E010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPLOADINDEXDATA_OFFSET UNITYSDK_OFFSET(0x9F7E340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F7E290)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_MAPBRICKTOVOXELS_OFFSET UNITYSDK_OFFSET(0x9F7E370)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEARVOXEL_OFFSET UNITYSDK_OFFSET(0x9F7E840)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GETRUNTIMERESOURCES_OFFSET UNITYSDK_OFFSET(0x9F7EEF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F7EF40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_MERGEINDEX_OFFSET UNITYSDK_OFFSET(0x9F7EFB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_ASSIGNINDEXCHUNKSTOCELL_OFFSET UNITYSDK_OFFSET(0x9F7EFD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_ADDBRICKS_OFFSET UNITYSDK_OFFSET(0x9F7F110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_REMOVEBRICKS_OFFSET UNITYSDK_OFFSET(0x9F801D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEINDEXFORVOXEL_OFFSET UNITYSDK_OFFSET(0x9F7FF40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEPHYSICALINDEX_OFFSET UNITYSDK_OFFSET(0x9F7EBB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLIPTOINDEXSPACE_OFFSET UNITYSDK_OFFSET(0x9F7EA60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEINDEXFORVOXEL_OFFSET UNITYSDK_OFFSET(0x9F80720)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeBrickIndex_TypeDefinitionIndex = 33785;

	class ProbeBrickIndex : public Il2CppObject
	{
	public:
		::System::Int32 kMaxSubdivisionLevels; // 0x0
		::System::Int32 kIndexChunkSize; // 0x0
		::System::Collections::BitArray* m_IndexChunks; // 0x10
		::System::Int32 m_IndexInChunks; // 0x18
		::System::Int32 m_NextFreeChunk; // 0x1C
		::UnityEngine::ComputeBuffer* m_PhysicalIndexBuffer; // 0x20
		::Il2CppArray<::System::Object*>* m_PhysicalIndexBufferData; // 0x28
		::System::Int32 _estimatedVMemCost_k__BackingField; // 0x30
		::UnityEngine::Vector3Int* m_CenterRS; // 0x34
		Il2CppObject* m_VoxelToBricks; // 0x40
		Il2CppObject* m_BricksToVoxels; // 0x48
		::System::Boolean m_NeedUpdateIndexComputeBuffer; // 0x50

		::System::Int32 get_estimatedVMemCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GET_ESTIMATEDVMEMCOST_OFFSET))(nullptr);
		}

		::System::Void set_estimatedVMemCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_SET_ESTIMATEDVMEMCOST_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetVoxelSubdivLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GETVOXELSUBDIVLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 SizeOfPhysicalIndexFromBudget(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_SIZEOFPHYSICALINDEXFROMBUDGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void UploadIndexData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPLOADINDEXDATA_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEAR_OFFSET))(nullptr);
		}

		::System::Void MapBrickToVoxels(Brick* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Brick*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_MAPBRICKTOVOXELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearVoxel(::UnityEngine::Vector3Int* arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEARVOXEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetRuntimeResources(RuntimeResources&* arg)
		{
			((::System::Void(*)(RuntimeResources&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_GETRUNTIMERESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLEANUP_OFFSET))(nullptr);
		}

		::System::Int32 MergeIndex(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_MERGEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AssignIndexChunksToCell(Cell* arg, ::System::Int32 arg, CellIndexUpdateInfo&* arg)
		{
			return (return (::System::Boolean(*)(Cell*, ::System::Int32, CellIndexUpdateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_ASSIGNINDEXCHUNKSTOCELL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddBricks(RegId* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(RegId*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Int32, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_ADDBRICKS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveBricks(RegId* arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(RegId*, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_REMOVEBRICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateIndexForVoxel(::UnityEngine::Vector3Int* arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEINDEXFORVOXEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdatePhysicalIndex(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg, ::System::Int32 arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::System::Int32, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEPHYSICALINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ClipToIndexSpace(::UnityEngine::Vector3Int* arg, ::System::Int32 arg, ::UnityEngine::Vector3Int&* arg, ::UnityEngine::Vector3Int&* arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::System::Int32, ::UnityEngine::Vector3Int&*, ::UnityEngine::Vector3Int&*, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_CLIPTOINDEXSPACE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateIndexForVoxel(::UnityEngine::Vector3Int* arg, Il2CppObject* arg, Il2CppObject* arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, Il2CppObject*, Il2CppObject*, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKINDEX_UPDATEINDEXFORVOXEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

