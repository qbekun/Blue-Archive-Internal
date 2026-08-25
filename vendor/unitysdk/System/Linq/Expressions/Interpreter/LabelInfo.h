#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9683E50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET UNITYSDK_OFFSET(0x9683EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET UNITYSDK_OFFSET(0x9683F90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET UNITYSDK_OFFSET(0x96843F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET UNITYSDK_OFFSET(0x9684060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET UNITYSDK_OFFSET(0x9684C50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET UNITYSDK_OFFSET(0x9683F40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET UNITYSDK_OFFSET(0x9684980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x9684050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET UNITYSDK_OFFSET(0x9684A20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET UNITYSDK_OFFSET(0x9684740)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x9684910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_COMMONNODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LabelInfo_TypeDefinitionIndex = 33281;

	class LabelInfo : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LabelTarget* _node; // 0x10
		::System::Linq::Expressions::Interpreter::BranchLabel* _label; // 0x18
		::System::Object* _definitions; // 0x20
		Il2CppObject* _references; // 0x28
		::System::Boolean _acrossBlockJump; // 0x30

		::System::Void .ctor(::System::Linq::Expressions::LabelTarget* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::BranchLabel* GetLabel(::System::Linq::Expressions::Interpreter::LightCompiler* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::BranchLabel*(*)(::System::Linq::Expressions::Interpreter::LightCompiler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GETLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void Reference(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_REFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void Define(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateJump(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEJUMP_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_VALIDATEFINISH_OFFSET))(nullptr);
		}

		::System::Void EnsureLabel(::System::Linq::Expressions::Interpreter::LightCompiler* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LightCompiler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ENSURELABEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean DefinedIn(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_DEFINEDIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasDefinitions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASDEFINITIONS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::LabelScopeInfo* FirstDefinition()
		{
			return (return (::System::Linq::Expressions::Interpreter::LabelScopeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_FIRSTDEFINITION_OFFSET))(nullptr);
		}

		::System::Void AddDefinition(::System::Linq::Expressions::Interpreter::LabelScopeInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_ADDDEFINITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasMultipleDefinitions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_GET_HASMULTIPLEDEFINITIONS_OFFSET))(nullptr);
		}

		Il2CppObject* CommonNode(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LABELINFO_COMMONNODE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

