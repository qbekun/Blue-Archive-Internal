#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_FUNCTIONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9725B20)
#define SYSTEM_DATA_FUNCTIONNODE_ADDARGUMENT_OFFSET UNITYSDK_OFFSET(0x9725C90)
#define SYSTEM_DATA_FUNCTIONNODE_BIND_OFFSET UNITYSDK_OFFSET(0x9725E90)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x97263B0)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x97263D0)
#define SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9728700)
#define SYSTEM_DATA_FUNCTIONNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9728740)
#define SYSTEM_DATA_FUNCTIONNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x97287C0)
#define SYSTEM_DATA_FUNCTIONNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9728830)
#define SYSTEM_DATA_FUNCTIONNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x97288B0)
#define SYSTEM_DATA_FUNCTIONNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9728930)
#define SYSTEM_DATA_FUNCTIONNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x97289B0)
#define SYSTEM_DATA_FUNCTIONNODE_GETDATATYPE_OFFSET UNITYSDK_OFFSET(0x9726DE0)
#define SYSTEM_DATA_FUNCTIONNODE_EVALFUNCTION_OFFSET UNITYSDK_OFFSET(0x9727060)
#define SYSTEM_DATA_FUNCTIONNODE_GET_AGGREGATE_OFFSET UNITYSDK_OFFSET(0x9728BA0)
#define SYSTEM_DATA_FUNCTIONNODE_GET_ISAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9728C30)
#define SYSTEM_DATA_FUNCTIONNODE_CHECK_OFFSET UNITYSDK_OFFSET(0x97261A0)
#define SYSTEM_DATA_FUNCTIONNODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9728EC0)

namespace System::Data
{
	inline static constexpr unsigned int FunctionNode_TypeDefinitionIndex = 32182;

	class FunctionNode : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x18
		::System::Int32 _info; // 0x20
		::System::Int32 _argumentCount; // 0x24
		::Il2CppArray<::System::Object*>* _arguments; // 0x28
		::System::Data::TypeLimiter* _capturedLimiter; // 0x30
		::Il2CppArray<::System::Object*>* s_funcs; // 0x0

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddArgument(::System::Data::ExpressionNode* arg)
		{
			((::System::Void(*)(::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ADDARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_OPTIMIZE_OFFSET))(nullptr);
		}

		::System::Type* GetDataType(::System::Data::ExpressionNode* arg)
		{
			return (return (::System::Type*(*)(::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GETDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* EvalFunction(::System::Data::FunctionId* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::FunctionId*, ::Il2CppArray<::System::Object*>*, ::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_EVALFUNCTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Data::FunctionId* get_Aggregate()
		{
			return (return (::System::Data::FunctionId*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GET_AGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_GET_ISAGGREGATE_OFFSET))(nullptr);
		}

		::System::Void Check()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_CHECK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTIONNODE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

