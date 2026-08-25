#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x955ECA0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_INSERTCHILD_OFFSET UNITYSDK_OFFSET(0x9561B00)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95640F0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x955F1E0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GETNEARESTROOTOF_OFFSET UNITYSDK_OFFSET(0x9564100)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x9564270)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x95642B0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x9564300)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x955FA70)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyDataRootPseudoScene_TypeDefinitionIndex = 35630;

	class HierarchyDataRootPseudoScene : public Il2CppObject
	{
	public:
		::System::String* name; // 0x38
		Il2CppObject* rootObjects; // 0x40

		::System::Void AddChild(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void InsertChild(::System::Int32 arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_INSERTCHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void RemoveChild(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetNearestRootOf(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GETNEARESTROOTOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::RuntimeInspectorNamespace::RuntimeHierarchy* arg, ::System::String* str)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATAROOTPSEUDOSCENE_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

