#pragma once
#include "../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace UnityEngine { class Transform; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x955E9B0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x95643D0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GETNEARESTROOTOF_OFFSET UNITYSDK_OFFSET(0x9564460)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x95644C0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9564500)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x9564520)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_SET_SCENE_OFFSET UNITYSDK_OFFSET(0x9564580)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x9564590)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyDataRootScene_TypeDefinitionIndex = 35631;

	class HierarchyDataRootScene : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::Scene* _Scene_k__BackingField; // 0x38
		Il2CppObject* rootObjects; // 0x40

		::System::Void .ctor(::RuntimeInspectorNamespace::RuntimeHierarchy* arg, ::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetNearestRootOf(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GETNEARESTROOTOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_Scene(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_SET_SCENE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* get_Scene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTSCENE_GET_SCENE_OFFSET))(nullptr);
		}

	};
}

