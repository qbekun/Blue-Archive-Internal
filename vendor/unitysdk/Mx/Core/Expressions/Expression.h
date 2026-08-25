#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Expressions { class EvaluateOptions; }
namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions { class EvaluateFunctionHandler; }
namespace MX::Core::Expressions { class EvaluateParameterHandler; }

#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x106A950)
#define MX_CORE_EXPRESSIONS_EXPRESSION_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x106A960)
#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_ORIGINALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x106A970)
#define MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A980)
#define MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A990)
#define MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106AA40)
#define MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x106AA50)
#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_CACHEENABLED_OFFSET UNITYSDK_OFFSET(0x106AAF0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_SET_CACHEENABLED_OFFSET UNITYSDK_OFFSET(0x106AB40)
#define MX_CORE_EXPRESSIONS_EXPRESSION_CLEANCACHE_OFFSET UNITYSDK_OFFSET(0x106ACB0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x106B1B0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_HASERRORS_OFFSET UNITYSDK_OFFSET(0x106B8E0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x106BA40)
#define MX_CORE_EXPRESSIONS_EXPRESSION_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x106BA50)
#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_PARSEDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x106BA60)
#define MX_CORE_EXPRESSIONS_EXPRESSION_SET_PARSEDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x106BA70)
#define MX_CORE_EXPRESSIONS_EXPRESSION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x106BA80)
#define MX_CORE_EXPRESSIONS_EXPRESSION_ADD_EVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x106D000)
#define MX_CORE_EXPRESSIONS_EXPRESSION_REMOVE_EVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x106D0A0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_ADD_EVALUATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x106D140)
#define MX_CORE_EXPRESSIONS_EXPRESSION_REMOVE_EVALUATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x106D1E0)
#define MX_CORE_EXPRESSIONS_EXPRESSION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x106CF80)
#define MX_CORE_EXPRESSIONS_EXPRESSION_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x106D280)
#define MX_CORE_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x106D290)
#define MX_CORE_EXPRESSIONS_EXPRESSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x106D2A0)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 12877;

	class Expression : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::EvaluateOptions* _Options_k__BackingField; // 0x10
		::System::String* _OriginalExpression_k__BackingField; // 0x18
		::System::Boolean _cacheEnabled; // 0x0
		Il2CppObject* _compiledExpressions; // 0x8
		::System::Threading::ReaderWriterLock* Rwl; // 0x10
		::System::String* _Error_k__BackingField; // 0x20
		::MX::Core::Expressions::Domain::LogicalExpression* _ParsedExpression_k__BackingField; // 0x28
		Il2CppObject* ParameterEnumerators; // 0x30
		Il2CppObject* ParametersBackup; // 0x38
		::MX::Core::Expressions::EvaluateFunctionHandler* EvaluateFunction; // 0x40
		::MX::Core::Expressions::EvaluateParameterHandler* EvaluateParameter; // 0x48
		Il2CppObject* _parameters; // 0x50

		::MX::Core::Expressions::EvaluateOptions* get_Options()
		{
			return ((::MX::Core::Expressions::EvaluateOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::MX::Core::Expressions::EvaluateOptions* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::String* get_OriginalExpression()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_ORIGINALEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::Core::Expressions::EvaluateOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Core::Expressions::EvaluateOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::Domain::LogicalExpression* arg, ::MX::Core::Expressions::EvaluateOptions* arg2)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::MX::Core::Expressions::EvaluateOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_CacheEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_CACHEENABLED_OFFSET))(nullptr);
		}

		::System::Void set_CacheEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_SET_CACHEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void CleanCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_CLEANCACHE_OFFSET))(nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* Compile(::System::String* str, ::System::Boolean arg)
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_COMPILE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_HASERRORS_OFFSET))(nullptr);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void set_Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_SET_ERROR_OFFSET))(str, nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_ParsedExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_PARSEDEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void set_ParsedExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_SET_PARSEDEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void add_EvaluateFunction(::MX::Core::Expressions::EvaluateFunctionHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateFunctionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_ADD_EVALUATEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_EvaluateFunction(::MX::Core::Expressions::EvaluateFunctionHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateFunctionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_REMOVE_EVALUATEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void add_EvaluateParameter(::MX::Core::Expressions::EvaluateParameterHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateParameterHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_ADD_EVALUATEPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_EvaluateParameter(::MX::Core::Expressions::EvaluateParameterHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateParameterHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_REMOVE_EVALUATEPARAMETER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_Parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EXPRESSION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

