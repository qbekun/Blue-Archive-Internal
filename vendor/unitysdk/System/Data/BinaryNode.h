#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_BINARYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9750D40)
#define SYSTEM_DATA_BINARYNODE_BIND_OFFSET UNITYSDK_OFFSET(0x9750DB0)
#define SYSTEM_DATA_BINARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9750E20)
#define SYSTEM_DATA_BINARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9750E40)
#define SYSTEM_DATA_BINARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x97579B0)
#define SYSTEM_DATA_BINARYNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x97579F0)
#define SYSTEM_DATA_BINARYNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x9757A50)
#define SYSTEM_DATA_BINARYNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9757AB0)
#define SYSTEM_DATA_BINARYNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9757B10)
#define SYSTEM_DATA_BINARYNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9757B70)
#define SYSTEM_DATA_BINARYNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x9757BD0)
#define SYSTEM_DATA_BINARYNODE_SETTYPEMISMATCHERROR_OFFSET UNITYSDK_OFFSET(0x9758120)
#define SYSTEM_DATA_BINARYNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9758150)
#define SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET UNITYSDK_OFFSET(0x97581A0)
#define SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET UNITYSDK_OFFSET(0x97581C0)
#define SYSTEM_DATA_BINARYNODE_EVALBINARYOP_OFFSET UNITYSDK_OFFSET(0x9750E80)
#define SYSTEM_DATA_BINARYNODE_GETPRECEDENCE_OFFSET UNITYSDK_OFFSET(0x975A250)
#define SYSTEM_DATA_BINARYNODE_GETPRECEDENCETYPE_OFFSET UNITYSDK_OFFSET(0x975A270)
#define SYSTEM_DATA_BINARYNODE_ISMIXED_OFFSET UNITYSDK_OFFSET(0x975A290)
#define SYSTEM_DATA_BINARYNODE_ISMIXEDSQL_OFFSET UNITYSDK_OFFSET(0x975A330)
#define SYSTEM_DATA_BINARYNODE_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x9759E50)
#define SYSTEM_DATA_BINARYNODE_RESULTSQLTYPE_OFFSET UNITYSDK_OFFSET(0x9759A60)
#define SYSTEM_DATA_BINARYNODE_SQLRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x975A400)

namespace System::Data
{
	inline static constexpr unsigned int BinaryNode_TypeDefinitionIndex = 32247;

	class BinaryNode : public Il2CppObject
	{
	public:
		::System::Int32 _op; // 0x18
		::System::Data::ExpressionNode* _left; // 0x20
		::System::Data::ExpressionNode* _right; // 0x28

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Int32 arg, ::System::Data::ExpressionNode* arg, ::System::Data::ExpressionNode* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_OPTIMIZE_OFFSET))(nullptr);
		}

		::System::Void SetTypeMismatchError(::System::Int32 arg, ::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_SETTYPEMISMATCHERROR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Eval(::System::Data::ExpressionNode* arg, ::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BinaryCompare(::System::Object* arg, ::System::Object* arg, ::System::Data::Common::StorageType* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::System::Data::Common::StorageType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BinaryCompare(::System::Object* arg, ::System::Object* arg, ::System::Data::Common::StorageType* arg, ::System::Int32 arg, ::System::Globalization::CompareInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::System::Data::Common::StorageType*, ::System::Int32, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_BINARYCOMPARE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* EvalBinaryOp(::System::Int32 arg, ::System::Data::ExpressionNode* arg, ::System::Data::ExpressionNode* arg, ::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*, ::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_EVALBINARYOP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		DataTypePrecedence* GetPrecedence(::System::Data::Common::StorageType* arg)
		{
			return (return (DataTypePrecedence*(*)(::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_GETPRECEDENCE_OFFSET))(arg, nullptr);
		}

		::System::Data::Common::StorageType* GetPrecedenceType(DataTypePrecedence* arg)
		{
			return (return (::System::Data::Common::StorageType*(*)(DataTypePrecedence*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_GETPRECEDENCETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMixed(::System::Data::Common::StorageType* arg, ::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISMIXED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMixedSql(::System::Data::Common::StorageType* arg, ::System::Data::Common::StorageType* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Common::StorageType*, ::System::Data::Common::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_ISMIXEDSQL_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::Common::StorageType* ResultType(::System::Data::Common::StorageType* arg, ::System::Data::Common::StorageType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Data::Common::StorageType*(*)(::System::Data::Common::StorageType*, ::System::Data::Common::StorageType*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_RESULTTYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Data::Common::StorageType* ResultSqlType(::System::Data::Common::StorageType* arg, ::System::Data::Common::StorageType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Data::Common::StorageType*(*)(::System::Data::Common::StorageType*, ::System::Data::Common::StorageType*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_RESULTSQLTYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 SqlResultType(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_BINARYNODE_SQLRESULTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

