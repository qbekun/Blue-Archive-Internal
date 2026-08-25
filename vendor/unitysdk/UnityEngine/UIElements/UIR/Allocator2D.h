#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2Int; }

#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA42B220)
#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_TRYALLOCATE_OFFSET UNITYSDK_OFFSET(0xA42B920)
#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_FREE_OFFSET UNITYSDK_OFFSET(0xA42BEE0)
#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_BUILDAREAS_OFFSET UNITYSDK_OFFSET(0xA42B4A0)
#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_COMPUTEMAXALLOCSIZE_OFFSET UNITYSDK_OFFSET(0xA42B7B0)
#define UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_BUILDROWARRAY_OFFSET UNITYSDK_OFFSET(0xA42B8B0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Allocator2D_TypeDefinitionIndex = 30715;

	class Allocator2D : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2Int* m_MinSize; // 0x10
		::UnityEngine::Vector2Int* m_MaxSize; // 0x18
		::UnityEngine::Vector2Int* m_MaxAllocSize; // 0x20
		::System::Int32 m_RowHeightBias; // 0x28
		::Il2CppArray<::System::Object*>* m_Rows; // 0x30
		Il2CppObject* m_Areas; // 0x38

		::System::Void .ctor(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryAllocate(::System::Int32 arg, ::System::Int32 arg, Alloc2D&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, Alloc2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_TRYALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Free(Alloc2D* arg)
		{
			((::System::Void(*)(Alloc2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void BuildAreas(Il2CppObject* arg, ::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_BUILDAREAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2Int* ComputeMaxAllocSize(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_COMPUTEMAXALLOCSIZE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildRowArray(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_ALLOCATOR2D_BUILDROWARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

