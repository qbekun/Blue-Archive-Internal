#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9665B30)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9665BC0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9665BF0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9665C00)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9665C10)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x965E720)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x965E7C0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x9665C50)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9665C60)
#define SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9660D40)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewExpression_TypeDefinitionIndex = 33103;

	class NewExpression : public Il2CppObject
	{
	public:
		Il2CppObject* _arguments; // 0x10
		::System::Reflection::ConstructorInfo* _Constructor_k__BackingField; // 0x18
		Il2CppObject* _Members_k__BackingField; // 0x20

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Reflection::ConstructorInfo* get_Constructor()
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_CONSTRUCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Arguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Members()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_GET_MEMBERS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::NewExpression* Update(Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::NewExpression*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWEXPRESSION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

