#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingGroup; }

#define UNITYENGINE_RENDERING_SORTINGGROUP_GET_INVALIDSORTINGGROUPID_OFFSET UNITYSDK_OFFSET(0xA267A50)
#define UNITYENGINE_RENDERING_SORTINGGROUP_GETSORTINGGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0xA267A90)
#define UNITYENGINE_RENDERING_SORTINGGROUP_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xA267AD0)
#define UNITYENGINE_RENDERING_SORTINGGROUP_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA267B10)
#define UNITYENGINE_RENDERING_SORTINGGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA267B50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingGroup_TypeDefinitionIndex = 31590;

	class SortingGroup : public Il2CppObject
	{
	public:
		::System::Int32 get_invalidSortingGroupID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGGROUP_GET_INVALIDSORTINGGROUPID_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::SortingGroup* GetSortingGroupByIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::SortingGroup*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGGROUP_GETSORTINGGROUPBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sortingLayerID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGGROUP_GET_SORTINGLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_sortingOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGGROUP_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

