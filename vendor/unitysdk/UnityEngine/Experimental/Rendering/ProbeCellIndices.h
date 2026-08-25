#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Vector3Int; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_SET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F82D70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F82D80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETCELLMINPOSITION_OFFSET UNITYSDK_OFFSET(0x9F82F50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETFLATIDXFORCELL_OFFSET UNITYSDK_OFFSET(0x9F82F70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GET_ESTIMATEDVMEMCOST_OFFSET UNITYSDK_OFFSET(0x9F82FC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_PUSHCOMPUTEDATA_OFFSET UNITYSDK_OFFSET(0x9F82FD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETFLATINDEX_OFFSET UNITYSDK_OFFSET(0x9F82FA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F83000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_ADDCELL_OFFSET UNITYSDK_OFFSET(0x9F83070)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETRUNTIMERESOURCES_OFFSET UNITYSDK_OFFSET(0x9F833A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETCELLINDEXDIMENSION_OFFSET UNITYSDK_OFFSET(0x9F833F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_MARKCELLASUNLOADED_OFFSET UNITYSDK_OFFSET(0x9F83410)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeCellIndices_TypeDefinitionIndex = 33790;

	class ProbeCellIndices : public Il2CppObject
	{
	public:
		::System::Int32 kUintPerEntry; // 0x0
		::System::Int32 _estimatedVMemCost_k__BackingField; // 0x10
		::UnityEngine::ComputeBuffer* m_IndexOfIndicesBuffer; // 0x18
		::Il2CppArray<::System::Object*>* m_IndexOfIndicesData; // 0x20
		::UnityEngine::Vector3Int* m_CellCount; // 0x28
		::UnityEngine::Vector3Int* m_CellMin; // 0x34
		::System::Int32 m_CellSizeInMinBricks; // 0x40
		::System::Boolean m_NeedUpdateComputeBuffer; // 0x44

		::System::Void set_estimatedVMemCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_SET_ESTIMATEDVMEMCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3Int* arg, ::UnityEngine::Vector3Int* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Vector3Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3Int* GetCellMinPosition()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETCELLMINPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 GetFlatIdxForCell(::UnityEngine::Vector3Int* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETFLATIDXFORCELL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_estimatedVMemCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GET_ESTIMATEDVMEMCOST_OFFSET))(nullptr);
		}

		::System::Void PushComputeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_PUSHCOMPUTEDATA_OFFSET))(nullptr);
		}

		::System::Int32 GetFlatIndex(::UnityEngine::Vector3Int* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETFLATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void AddCell(::System::Int32 arg, CellIndexUpdateInfo* arg)
		{
			((::System::Void(*)(::System::Int32, CellIndexUpdateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_ADDCELL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetRuntimeResources(RuntimeResources&* arg)
		{
			((::System::Void(*)(RuntimeResources&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETRUNTIMERESOURCES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3Int* GetCellIndexDimension()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_GETCELLINDEXDIMENSION_OFFSET))(nullptr);
		}

		::System::Void MarkCellAsUnloaded(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBECELLINDICES_MARKCELLASUNLOADED_OFFSET))(arg, nullptr);
		}

	};
}

