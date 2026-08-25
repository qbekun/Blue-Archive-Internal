#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeTextureMemoryBudget; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSHBands; }
namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_ENSURETEXTUREVALIDITY_OFFSET UNITYSDK_OFFSET(0x9F80CA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETRUNTIMERESOURCES_OFFSET UNITYSDK_OFFSET(0x9F815F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F81680)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F81690)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETCHUNKSIZEINPROBECOUNT_OFFSET UNITYSDK_OFFSET(0x9F816F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_FILLDATALOCATION_OFFSET UNITYSDK_OFFSET(0x9F81700)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_DERIVEPOOLSIZEFROMBUDGET_OFFSET UNITYSDK_OFFSET(0x9F82230)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9F82250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETCHUNKSIZE_OFFSET UNITYSDK_OFFSET(0x9F82500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_PROBECOUNTTODATALOCSIZE_OFFSET UNITYSDK_OFFSET(0x9F82510)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_SET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F82580)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x9F82590)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CREATEDATALOCATION_OFFSET UNITYSDK_OFFSET(0x9F80EC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x9F82760)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLWIDTH_OFFSET UNITYSDK_OFFSET(0x9F82780)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x9F821E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F82790)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F827A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F82C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F82C50)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeBrickPool_TypeDefinitionIndex = 33788;

	class ProbeBrickPool : public Il2CppObject
	{
	public:
		::System::Int32 kBrickCellCount; // 0x0
		::System::Int32 kBrickProbeCountPerDim; // 0x0
		::System::Int32 kBrickProbeCountTotal; // 0x0
		::System::Int32 _estimatedVMemCost_k__BackingField; // 0x10
		::System::Int32 kMaxPoolWidth; // 0x0
		::System::Int32 m_AllocationSize; // 0x14
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* m_MemoryBudget; // 0x18
		DataLocation* m_Pool; // 0x20
		BrickChunkAlloc* m_NextFreeChunk; // 0x68
		Il2CppObject* m_FreeList; // 0x78
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* m_SHBands; // 0x80

		::System::Void EnsureTextureValidity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_ENSURETEXTUREVALIDITY_OFFSET))(nullptr);
		}

		::System::Void GetRuntimeResources(RuntimeResources&* arg)
		{
			((::System::Void(*)(RuntimeResources&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETRUNTIMERESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 GetChunkSizeInProbeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETCHUNKSIZEINPROBECOUNT_OFFSET))(nullptr);
		}

		::System::Void FillDataLocation(DataLocation&* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg)
		{
			((::System::Void(*)(DataLocation&*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_FILLDATALOCATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DerivePoolSizeFromBudget(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_DERIVEPOOLSIZEFROMBUDGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Allocate(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_ALLOCATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetChunkSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETCHUNKSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3Int* ProbeCountToDataLocSize(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3Int*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_PROBECOUNTTODATALOCSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_estimatedVMemCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_SET_ESTIMATEDVMEMCOST_OFFSET))(arg, nullptr);
		}

		::System::Void Deallocate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_DEALLOCATE_OFFSET))(arg, nullptr);
		}

		DataLocation* CreateDataLocation(::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg, int32_t&* arg)
		{
			return (return (DataLocation*(*)(::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_CREATEDATALOCATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* GetPoolDimensions()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLDIMENSIONS_OFFSET))(nullptr);
		}

		::System::Int32 GetPoolWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLWIDTH_OFFSET))(nullptr);
		}

		::System::Void SetPixel(::System::Object[]&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_SETPIXEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPoolHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GETPOOLHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Update(DataLocation* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg)
		{
			((::System::Void(*)(DataLocation*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_UPDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_estimatedVMemCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_GET_ESTIMATEDVMEMCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* arg, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget*, ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEBRICKPOOL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

