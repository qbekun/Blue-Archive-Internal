#pragma once
#include "unitysdk.h"

#define POLYNODE_GETNEXTSIBLINGUP_OFFSET UNITYSDK_OFFSET(0x286D1E0)
#define POLYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CF50)
#define POLYNODE_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x286D290)
#define POLYNODE_GETNEXT_OFFSET UNITYSDK_OFFSET(0x286D2A0)
#define POLYNODE_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x286D390)
#define POLYNODE_GET_CONTOUR_OFFSET UNITYSDK_OFFSET(0x286D3A0)
#define POLYNODE_GET_ISHOLE_OFFSET UNITYSDK_OFFSET(0x286D3B0)
#define POLYNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x286D3F0)
#define POLYNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x286D400)
#define POLYNODE_ISHOLENODE_OFFSET UNITYSDK_OFFSET(0x286D3D0)
#define POLYNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x286D410)
#define POLYNODE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x286D4D0)

	inline static constexpr unsigned int PolyNode_TypeDefinitionIndex = 34374;

	class PolyNode : public Il2CppObject
	{
	public:
		PolyNode* m_Parent; // 0x10
		Il2CppObject* m_polygon; // 0x18
		::System::Int32 m_Index; // 0x20
		JoinType* m_jointype; // 0x24
		EndType* m_endtype; // 0x28
		Il2CppObject* m_Childs; // 0x30
		::System::Boolean _IsOpen_k__BackingField; // 0x38

		PolyNode* GetNextSiblingUp()
		{
			return (return (PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GETNEXTSIBLINGUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		PolyNode* GetNext()
		{
			return (return (PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GETNEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_ISOPEN_OFFSET))(nullptr);
		}

		Il2CppObject* get_Contour()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_CONTOUR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHole()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_ISHOLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Childs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_CHILDS_OFFSET))(nullptr);
		}

		PolyNode* get_Parent()
		{
			return (return (PolyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Boolean IsHoleNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_ISHOLENODE_OFFSET))(nullptr);
		}

		::System::Void AddChild(PolyNode* arg)
		{
			((::System::Void(*)(PolyNode*, ::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POLYNODE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

	};

