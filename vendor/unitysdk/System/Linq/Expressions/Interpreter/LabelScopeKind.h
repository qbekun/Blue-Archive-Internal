#pragma once
#include "../../../../unitysdk.h"

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelScopeKind_TypeDefinitionIndex = 33282;

	class LabelScopeKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Statement; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Block; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Switch; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Lambda; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Try; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Catch; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Finally; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Filter; // 0x0
		::System::Linq::Expressions::Interpreter::LabelScopeKind* Expression; // 0x0

	};
}

