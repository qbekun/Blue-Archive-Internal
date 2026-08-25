#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime::Tree { class ITree; }

#define ANTLR_RUNTIME_TREE_ITREE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_SET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GET_LINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_SET_TOKENSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANTLR_RUNTIME_TREE_ITREE_SET_TOKENSTOPINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int ITree_TypeDefinitionIndex = 37409;

	class ITree : public Il2CppObject
	{
	public:
		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::Antlr::Runtime::Tree::ITree* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITree*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChildIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_SET_CHILDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::Antlr::Runtime::Tree::ITree* GetChild(::System::Int32 arg)
		{
			return (return (::Antlr::Runtime::Tree::ITree*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::Antlr::Runtime::Tree::ITree* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITree*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_TokenStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_SET_TOKENSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TokenStopIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_ITREE_SET_TOKENSTOPINDEX_OFFSET))(arg, nullptr);
		}

	};
}

