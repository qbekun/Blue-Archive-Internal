#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PolyNode; }
namespace UnityEngine::Rendering::Universal { class JoinType; }
namespace UnityEngine::Rendering::Universal { class EndType; }

#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x9FF91B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9FF91F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GETNEXTSIBLINGUP_OFFSET UNITYSDK_OFFSET(0x9FF9200)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_ISHOLE_OFFSET UNITYSDK_OFFSET(0x9FF92B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_ISHOLENODE_OFFSET UNITYSDK_OFFSET(0x9FF92D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9FF92F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x9FF9300)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x9FF9310)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GETNEXT_OFFSET UNITYSDK_OFFSET(0x9FF9320)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x9FF9410)
#define UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CONTOUR_OFFSET UNITYSDK_OFFSET(0x9FF94D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PolyNode_TypeDefinitionIndex = 32432;

	class PolyNode : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::PolyNode* m_Parent; // 0x10
		Il2CppObject* m_polygon; // 0x18
		::System::Int32 m_Index; // 0x20
		::UnityEngine::Rendering::Universal::JoinType* m_jointype; // 0x24
		::UnityEngine::Rendering::Universal::EndType* m_endtype; // 0x28
		Il2CppObject* m_Childs; // 0x30
		::System::Boolean _IsOpen_k__BackingField; // 0x38

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_ISOPEN_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::PolyNode* GetNextSiblingUp()
		{
			return (return (::UnityEngine::Rendering::Universal::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GETNEXTSIBLINGUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHole()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_ISHOLE_OFFSET))(nullptr);
		}

		::System::Boolean IsHoleNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_ISHOLENODE_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::PolyNode* get_Parent()
		{
			return (return (::UnityEngine::Rendering::Universal::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_PARENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Childs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CHILDS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::PolyNode* GetNext()
		{
			return (return (::UnityEngine::Rendering::Universal::PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GETNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddChild(::UnityEngine::Rendering::Universal::PolyNode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PolyNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Contour()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_POLYNODE_GET_CONTOUR_OFFSET))(nullptr);
		}

	};
}

