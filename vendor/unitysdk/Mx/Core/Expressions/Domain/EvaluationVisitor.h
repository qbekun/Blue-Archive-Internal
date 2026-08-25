#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions { class EvaluateOptions; }
namespace MX::Core::Expressions { class EvaluateFunctionHandler; }
namespace MX::Core::Expressions { class EvaluateParameterHandler; }
namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class TernaryExpression; }
namespace MX::Core::Expressions::Domain { class BinaryExpression; }
namespace MX::Core::Expressions::Domain { class UnaryExpression; }
namespace MX::Core::Expressions::Domain { class ValueExpression; }
namespace MX::Core::Expressions::Domain { class Function; }
class FunctionType;
namespace MX::Core::Expressions { class FunctionArgs; }
namespace MX::Core::Expressions::Domain { class Identifier; }
namespace MX::Core::Expressions { class ParameterArgs; }

#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x1076680)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x106CE10)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x10766A0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x10766B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10766C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1076700)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GETMOSTPRECISETYPE_OFFSET UNITYSDK_OFFSET(0x1076760)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_COMPAREUSINGMOSTPRECISETYPE_OFFSET UNITYSDK_OFFSET(0x1076890)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x10769B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ISREAL_OFFSET UNITYSDK_OFFSET(0x1076A60)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1076AF0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x10773D0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1077530)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1077560)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_CHECKCASE_OFFSET UNITYSDK_OFFSET(0x10779B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ADD_EVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x106CE40)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_REMOVE_EVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1077AC0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ONEVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1077990)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x1077B60)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ADD_EVALUATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x106CEE0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_REMOVE_EVALUATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1078200)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ONEVALUATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x10781E0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x10782A0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x10782B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10782C0)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int EvaluationVisitor_TypeDefinitionIndex = 12885;

	class EvaluationVisitor : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::EvaluateOptions* _options; // 0x10
		::System::Object* _Result_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* CommonTypes; // 0x0
		::MX::Core::Expressions::EvaluateFunctionHandler* EvaluateFunction; // 0x20
		::MX::Core::Expressions::EvaluateParameterHandler* EvaluateParameter; // 0x28
		Il2CppObject* _Parameters_k__BackingField; // 0x30

		::System::Boolean get_IgnoreCase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::EvaluateOptions* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Result(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::System::Object*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Type* GetMostPreciseType(::System::Type* arg, ::System::Type* arg2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GETMOSTPRECISETYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareUsingMostPreciseType(::System::Object* arg, ::System::Object* arg2)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_COMPAREUSINGMOSTPRECISETYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::TernaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::TernaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReal(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ISREAL_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::BinaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::UnaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::ValueExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::ValueExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Function* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Function*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void CheckCase(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_CHECKCASE_OFFSET))(str, str2, nullptr);
		}

		::System::Void add_EvaluateFunction(::MX::Core::Expressions::EvaluateFunctionHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateFunctionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ADD_EVALUATEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_EvaluateFunction(::MX::Core::Expressions::EvaluateFunctionHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateFunctionHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_REMOVE_EVALUATEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEvaluateFunction(FunctionType* arg, ::MX::Core::Expressions::FunctionArgs* arg2)
		{
			((::System::Void(*)(FunctionType*, ::MX::Core::Expressions::FunctionArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ONEVALUATEFUNCTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Identifier* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Identifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void add_EvaluateParameter(::MX::Core::Expressions::EvaluateParameterHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateParameterHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ADD_EVALUATEPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_EvaluateParameter(::MX::Core::Expressions::EvaluateParameterHandler* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::EvaluateParameterHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_REMOVE_EVALUATEPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void OnEvaluateParameter(::System::String* str, ::MX::Core::Expressions::ParameterArgs* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Core::Expressions::ParameterArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_ONEVALUATEPARAMETER_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_Parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_EVALUATIONVISITOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

