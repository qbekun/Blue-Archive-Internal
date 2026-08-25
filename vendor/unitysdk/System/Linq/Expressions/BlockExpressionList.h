#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96501F0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x96518B0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x9651940)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9651970)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x96519A0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x96519E0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9651A10)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x9651A40)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9651A70)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x9651B10)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9651CE0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9651D10)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x9651D40)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9651D70)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9651E00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpressionList_TypeDefinitionIndex = 33021;

	class BlockExpressionList : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::BlockExpression* _block; // 0x10
		::System::Linq::Expressions::Expression* _arg0; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::BlockExpression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::BlockExpression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* get_Item(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSIONLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

