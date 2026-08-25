#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_AGGREGATENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9750250)
#define SYSTEM_DATA_AGGREGATENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9750270)
#define SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET UNITYSDK_OFFSET(0x97503A0)
#define SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET UNITYSDK_OFFSET(0x9750670)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x97508A0)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x97508C0)
#define SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9750BC0)
#define SYSTEM_DATA_AGGREGATENODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9750C50)
#define SYSTEM_DATA_AGGREGATENODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x9750C60)
#define SYSTEM_DATA_AGGREGATENODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9750C70)
#define SYSTEM_DATA_AGGREGATENODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9750C80)
#define SYSTEM_DATA_AGGREGATENODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9750C90)
#define SYSTEM_DATA_AGGREGATENODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x9750D30)

namespace System::Data
{
	inline static constexpr unsigned int AggregateNode_TypeDefinitionIndex = 32245;

	class AggregateNode : public Il2CppObject
	{
	public:
		::System::Data::AggregateType* _type; // 0x18
		::System::Data::Aggregate* _aggregate; // 0x1C
		::System::Boolean _local; // 0x20
		::System::String* _relationName; // 0x28
		::System::String* _columnName; // 0x30
		::System::Data::DataTable* _childTable; // 0x38
		::System::Data::DataColumn* _column; // 0x40
		::System::Data::DataRelation* _relation; // 0x48

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Data::FunctionId* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::FunctionId*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Data::FunctionId* arg, ::System::String* str, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::FunctionId*, ::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_.CTOR_OFFSET))(arg, arg, str, arg, str, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataRelation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AGGREGATENODE_OPTIMIZE_OFFSET))(nullptr);
		}

	};
}

