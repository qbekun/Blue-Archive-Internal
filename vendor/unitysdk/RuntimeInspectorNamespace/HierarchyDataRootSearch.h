#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class HierarchyDataRoot; }
namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class HierarchyDataTransform; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x95645A0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x95649A0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_REFRESH_OFFSET UNITYSDK_OFFSET(0x95649E0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GETNEARESTROOTOF_OFFSET UNITYSDK_OFFSET(0x9564A60)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9564AC0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GETCHILD_OFFSET UNITYSDK_OFFSET(0x9564AF0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_FINDTRANSFORMINVISIBLECHILDREN_OFFSET UNITYSDK_OFFSET(0x9564B40)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_SEARCHTRANSFORMRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x9564820)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x955EA90)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyDataRootSearch_TypeDefinitionIndex = 35632;

	class HierarchyDataRootSearch : public Il2CppObject
	{
	public:
		Il2CppObject* searchResult; // 0x38
		::RuntimeInspectorNamespace::HierarchyDataRoot* reference; // 0x40
		::System::String* searchTerm; // 0x48

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Refresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_REFRESH_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetNearestRootOf(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GETNEARESTROOTOF_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_GETCHILD_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataTransform* FindTransformInVisibleChildren(::UnityEngine::Transform* arg, ::System::Int32 arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataTransform*(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_FINDTRANSFORMINVISIBLECHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SearchTransformRecursively(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_SEARCHTRANSFORMRECURSIVELY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::RuntimeInspectorNamespace::RuntimeHierarchy* arg, ::RuntimeInspectorNamespace::HierarchyDataRoot* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::RuntimeInspectorNamespace::HierarchyDataRoot*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSEARCH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

