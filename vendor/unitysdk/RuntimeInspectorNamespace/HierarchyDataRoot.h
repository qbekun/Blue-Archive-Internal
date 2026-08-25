#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace RuntimeInspectorNamespace { class HierarchyDataTransform; }
namespace UnityEngine { class Transform; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_RESETCACHEDNAMES_OFFSET UNITYSDK_OFFSET(0x955AFA0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_FINDTRANSFORMINVISIBLECHILDREN_OFFSET UNITYSDK_OFFSET(0x9563F30)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9563F50)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESHNAMEOF_OFFSET UNITYSDK_OFFSET(0x955BA20)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_BOUNDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9564080)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESH_OFFSET UNITYSDK_OFFSET(0x9564090)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_SET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x95640C0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x95640D0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x95640E0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GETNEARESTROOTOF_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyDataRoot_TypeDefinitionIndex = 35629;

	class HierarchyDataRoot : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::RuntimeHierarchy* _Hierarchy_k__BackingField; // 0x30

		::System::Void ResetCachedNames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_RESETCACHEDNAMES_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataTransform* FindTransformInVisibleChildren(::UnityEngine::Transform* arg, ::System::Int32 arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataTransform*(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_FINDTRANSFORMINVISIBLECHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshNameOf(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESHNAMEOF_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_BoundTransform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_BOUNDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean Refresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_Hierarchy(::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_SET_HIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::RuntimeHierarchy* get_Hierarchy()
		{
			return (return (::RuntimeInspectorNamespace::RuntimeHierarchy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GET_HIERARCHY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetNearestRootOf(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOT_GETNEARESTROOTOF_OFFSET))(arg, nullptr);
		}

	};
}

