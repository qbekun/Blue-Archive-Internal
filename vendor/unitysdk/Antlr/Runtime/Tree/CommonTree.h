#pragma once
#include "../../../unitysdk.h"

namespace Antlr::Runtime { class IToken; }
namespace Antlr::Runtime::Tree { class CommonTree; }
namespace Antlr::Runtime::Tree { class ITree; }

#define ANTLR_RUNTIME_TREE_COMMONTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C7DB0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4CB380)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x4CB3C0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x4CB3D0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4CB3E0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x4CB480)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_LINE_OFFSET UNITYSDK_OFFSET(0x4CB520)
#define ANTLR_RUNTIME_TREE_COMMONTREE_GET_CHARPOSITIONINLINE_OFFSET UNITYSDK_OFFSET(0x4CB6D0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_SET_TOKENSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x4CB880)
#define ANTLR_RUNTIME_TREE_COMMONTREE_SET_TOKENSTOPINDEX_OFFSET UNITYSDK_OFFSET(0x4CB890)
#define ANTLR_RUNTIME_TREE_COMMONTREE_SET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x4CB8A0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x4CB8B0)
#define ANTLR_RUNTIME_TREE_COMMONTREE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4CB970)

namespace Antlr::Runtime::Tree
{
	inline static constexpr unsigned int CommonTree_TypeDefinitionIndex = 37407;

	class CommonTree : public ::UnityEngine::Bindings::NativePropertyAttribute
	{
	public:
		::System::Int32 startIndex; // 0x18
		::System::Int32 stopIndex; // 0x1C
		::Antlr::Runtime::IToken* token; // 0x20
		::Antlr::Runtime::Tree::CommonTree* parent; // 0x28
		::System::Int32 childIndex; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::IToken* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::IToken*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Antlr::Runtime::IToken* get_Token()
		{
			return (return (::Antlr::Runtime::IToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Line()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_LINE_OFFSET))(nullptr);
		}

		::System::Int32 get_CharPositionInLine()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_GET_CHARPOSITIONINLINE_OFFSET))(nullptr);
		}

		::System::Void set_TokenStartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_SET_TOKENSTARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TokenStopIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_SET_TOKENSTOPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChildIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_SET_CHILDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Parent(::Antlr::Runtime::Tree::ITree* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::Tree::ITree*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_TREE_COMMONTREE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

