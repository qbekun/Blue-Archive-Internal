#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET UNITYSDK_OFFSET(0x9666730)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET UNITYSDK_OFFSET(0x9666740)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x9666750)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET UNITYSDK_OFFSET(0x9666760)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchExpression_TypeDefinitionIndex = 33114;

	class SwitchExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _SwitchValue_k__BackingField; // 0x10
		Il2CppObject* _Cases_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _DefaultBody_k__BackingField; // 0x20
		::System::Reflection::MethodInfo* _Comparison_k__BackingField; // 0x28

		::System::Linq::Expressions::Expression* get_SwitchValue()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_SWITCHVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Cases()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_CASES_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_DefaultBody()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_DEFAULTBODY_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_Comparison()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHEXPRESSION_GET_COMPARISON_OFFSET))(nullptr);
		}

	};
}

