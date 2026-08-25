#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class IntervalTreeNode; }

#define UNITYENGINE_TIMELINE_INTERVALTREE`1_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_INTERSECTSWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_QUERY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_REBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_REBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_INTERVALTREE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTree`1_TypeDefinitionIndex = 36285;

	class IntervalTree`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Entries; // 0x0
		Il2CppObject* m_Nodes; // 0x0
		::System::Boolean _dirty_k__BackingField; // 0x0

		::System::Boolean get_dirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_GET_DIRTY_OFFSET))(nullptr);
		}

		::System::Void set_dirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_SET_DIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void IntersectsWith(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_INTERSECTSWITH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Query(::UnityEngine::Timeline::IntervalTreeNode* arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::IntervalTreeNode*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_QUERY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_REBUILD_OFFSET))(nullptr);
		}

		::System::Int32 Rebuild(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_REBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INTERVALTREE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

