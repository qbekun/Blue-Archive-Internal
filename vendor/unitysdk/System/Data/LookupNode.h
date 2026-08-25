#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_LOOKUPNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9761510)
#define SYSTEM_DATA_LOOKUPNODE_BIND_OFFSET UNITYSDK_OFFSET(0x9761560)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9761800)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9761830)
#define SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9761950)
#define SYSTEM_DATA_LOOKUPNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9761990)
#define SYSTEM_DATA_LOOKUPNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x97619A0)
#define SYSTEM_DATA_LOOKUPNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x97619B0)
#define SYSTEM_DATA_LOOKUPNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x97619C0)
#define SYSTEM_DATA_LOOKUPNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x97619D0)
#define SYSTEM_DATA_LOOKUPNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x97619E0)

namespace System::Data
{
	inline static constexpr unsigned int LookupNode_TypeDefinitionIndex = 32263;

	class LookupNode : public Il2CppObject
	{
	public:
		::System::String* _relationName; // 0x18
		::System::String* _columnName; // 0x20
		::System::Data::DataColumn* _column; // 0x28
		::System::Data::DataRelation* _relation; // 0x30

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LOOKUPNODE_OPTIMIZE_OFFSET))(nullptr);
		}

	};
}

