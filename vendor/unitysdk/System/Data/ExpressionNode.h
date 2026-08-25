#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_EXPRESSIONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9750370)
#define SYSTEM_DATA_EXPRESSIONNODE_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x9759680)
#define SYSTEM_DATA_EXPRESSIONNODE_GET_ISSQLCOLUMN_OFFSET UNITYSDK_OFFSET(0x975D4E0)
#define SYSTEM_DATA_EXPRESSIONNODE_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x975D4F0)
#define SYSTEM_DATA_EXPRESSIONNODE_BINDTABLE_OFFSET UNITYSDK_OFFSET(0x975D500)
#define SYSTEM_DATA_EXPRESSIONNODE_BIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_EXPRESSIONNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x975D510)
#define SYSTEM_DATA_EXPRESSIONNODE_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x975A3F0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISINTEGERSQL_OFFSET UNITYSDK_OFFSET(0x975A230)
#define SYSTEM_DATA_EXPRESSIONNODE_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x975A2F0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISSIGNEDSQL_OFFSET UNITYSDK_OFFSET(0x975A390)
#define SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNED_OFFSET UNITYSDK_OFFSET(0x975A320)
#define SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNEDSQL_OFFSET UNITYSDK_OFFSET(0x975A3B0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x975A3D0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISNUMERICSQL_OFFSET UNITYSDK_OFFSET(0x975A470)
#define SYSTEM_DATA_EXPRESSIONNODE_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x975D520)
#define SYSTEM_DATA_EXPRESSIONNODE_ISFLOATSQL_OFFSET UNITYSDK_OFFSET(0x975D540)

namespace System::Data
{
	inline static constexpr unsigned int ExpressionNode_TypeDefinitionIndex = 32251;

	class ExpressionNode : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x10

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return (return (::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_GET_FORMATPROVIDER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSqlColumn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_GET_ISSQLCOLUMN_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void BindTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_BINDTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_OPTIMIZE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInteger(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIntegerSql(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISINTEGERSQL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSigned(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSignedSql(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISSIGNEDSQL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnsigned(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnsignedSql(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNEDSQL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNumeric(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISNUMERIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNumericSql(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISNUMERICSQL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFloat(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFloatSql(::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISFLOATSQL_OFFSET))(arg, nullptr);
		}

	};
}

