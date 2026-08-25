#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_UNARYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9763280)
#define SYSTEM_DATA_UNARYNODE_BIND_OFFSET UNITYSDK_OFFSET(0x97632C0)
#define SYSTEM_DATA_UNARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763310)
#define SYSTEM_DATA_UNARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763330)
#define SYSTEM_DATA_UNARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763AD0)
#define SYSTEM_DATA_UNARYNODE_EVALUNARYOP_OFFSET UNITYSDK_OFFSET(0x9763380)
#define SYSTEM_DATA_UNARYNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9763B00)
#define SYSTEM_DATA_UNARYNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x9763B30)
#define SYSTEM_DATA_UNARYNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9763B60)
#define SYSTEM_DATA_UNARYNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9763B90)
#define SYSTEM_DATA_UNARYNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9763BC0)
#define SYSTEM_DATA_UNARYNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x9763BF0)

namespace System::Data
{
	inline static constexpr unsigned int UnaryNode_TypeDefinitionIndex = 32266;

	class UnaryNode : public Il2CppObject
	{
	public:
		::System::Int32 _op; // 0x18
		::System::Data::ExpressionNode* _right; // 0x20

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Int32 arg, ::System::Data::ExpressionNode* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Object* EvalUnaryOp(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_EVALUNARYOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNARYNODE_OPTIMIZE_OFFSET))(nullptr);
		}

	};
}

