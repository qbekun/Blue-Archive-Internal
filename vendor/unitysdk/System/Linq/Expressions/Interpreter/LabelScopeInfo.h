#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9684D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_GET_CANJUMPINTO_OFFSET UNITYSDK_OFFSET(0x9684C30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_CONTAINSTARGET_OFFSET UNITYSDK_OFFSET(0x96846F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_TRYGETLABELINFO_OFFSET UNITYSDK_OFFSET(0x9684DC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_ADDLABELINFO_OFFSET UNITYSDK_OFFSET(0x9684860)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelScopeInfo_TypeDefinitionIndex = 33283;

	class LabelScopeInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _labels; // 0x10
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Kind; // 0x18
		::System::Linq::Expressions::Interpreter::LabelScopeInfo* Parent; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg, ::System::Linq::Expressions::Interpreter::LabelScopeKind* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeKind*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanJumpInto()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_GET_CANJUMPINTO_OFFSET))(nullptr);
		}

		::System::Boolean ContainsTarget(::System::Linq::Expressions::LabelTarget* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_CONTAINSTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Interpreter::LabelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_TRYGETLABELINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLabelInfo(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Interpreter::LabelInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELSCOPEINFO_ADDLABELINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

