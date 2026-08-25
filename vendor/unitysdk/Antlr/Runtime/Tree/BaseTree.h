#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime::Tree { class ITree; }

#define ANTLR_RUNTIME_TREE_BASETREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CA2E0)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x4CA2F0)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x4CA390)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_LINE_OFFSET UNITYSDK_OFFSET(0x4CA3A0)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4CA3B0)
#define ANTLR_RUNTIME_TREE_BASETREE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x4CA3C0)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x4CA530)
#define ANTLR_RUNTIME_TREE_BASETREE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x4CA540)
#define ANTLR_RUNTIME_TREE_BASETREE_CREATECHILDRENLIST_OFFSET UNITYSDK_OFFSET(0x4CAAF0)
#define ANTLR_RUNTIME_TREE_BASETREE_FRESHENPARENTANDCHILDINDEXES_OFFSET UNITYSDK_OFFSET(0x4CAB40)
#define ANTLR_RUNTIME_TREE_BASETREE_FRESHENPARENTANDCHILDINDEXES_OFFSET UNITYSDK_OFFSET(0x4CAB60)
#define ANTLR_RUNTIME_TREE_BASETREE_SET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x4CACD0)
#define ANTLR_RUNTIME_TREE_BASETREE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x4CACE0)
#define ANTLR_RUNTIME_TREE_BASETREE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREE_SET_TOKENSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREE_SET_TOKENSTOPINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_BASETREE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int BaseTree_TypeDefinitionIndex = 37405;

	class BaseTree : public Il2CppObject
	{
	public:
		::System::Collections::IList* children; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::Antlr::Runtime::Tree::ITree* GetChild(::System::Int32 arg)
		{
			return (return (::Antlr::Runtime::Tree::ITree*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_Children()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Void AddChild(::Antlr::Runtime::Tree::ITree* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITree*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* CreateChildrenList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_CREATECHILDRENLIST_OFFSET))(nullptr);
		}

		::System::Void FreshenParentAndChildIndexes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_FRESHENPARENTANDCHILDINDEXES_OFFSET))(nullptr);
		}

		::System::Void FreshenParentAndChildIndexes(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_FRESHENPARENTANDCHILDINDEXES_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChildIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_SET_CHILDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Parent(::Antlr::Runtime::Tree::ITree* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITree*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_TokenStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_SET_TOKENSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TokenStopIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_SET_TOKENSTOPINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_BASETREE_GET_TEXT_OFFSET))(nullptr);
		}

	};
}

