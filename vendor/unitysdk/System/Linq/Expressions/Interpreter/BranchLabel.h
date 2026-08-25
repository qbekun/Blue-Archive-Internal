#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_LABELINDEX_OFFSET UNITYSDK_OFFSET(0x966C510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_SET_LABELINDEX_OFFSET UNITYSDK_OFFSET(0x966C520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_HASRUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x966C530)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x966C540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_TORUNTIMELABEL_OFFSET UNITYSDK_OFFSET(0x966C550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_MARK_OFFSET UNITYSDK_OFFSET(0x966C570)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_ADDBRANCH_OFFSET UNITYSDK_OFFSET(0x966C750)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_FIXUPBRANCH_OFFSET UNITYSDK_OFFSET(0x966C720)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x966C870)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int BranchLabel_TypeDefinitionIndex = 33154;

	class BranchLabel : public Il2CppObject
	{
	public:
		::System::Int32 _targetIndex; // 0x10
		::System::Int32 _stackDepth; // 0x14
		::System::Int32 _continuationStackDepth; // 0x18
		Il2CppObject* _forwardBranchFixups; // 0x20
		::System::Int32 _LabelIndex_k__BackingField; // 0x28

		::System::Int32 get_LabelIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_LABELINDEX_OFFSET))(nullptr);
		}

		::System::Void set_LabelIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_SET_LABELINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasRuntimeLabel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_HASRUNTIMELABEL_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::RuntimeLabel* ToRuntimeLabel()
		{
			return (return (::System::Linq::Expressions::Interpreter::RuntimeLabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_TORUNTIMELABEL_OFFSET))(nullptr);
		}

		::System::Void Mark(::System::Linq::Expressions::Interpreter::InstructionList* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_MARK_OFFSET))(arg, nullptr);
		}

		::System::Void AddBranch(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_ADDBRANCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FixupBranch(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_FIXUPBRANCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BRANCHLABEL_.CTOR_OFFSET))(nullptr);
		}

	};
}

