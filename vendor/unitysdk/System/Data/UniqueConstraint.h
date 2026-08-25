#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9773180)
#define SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9773320)
#define SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9773350)
#define SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9773380)
#define SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x97733D0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x9773410)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x9773420)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXCLEAR_OFFSET UNITYSDK_OFFSET(0x9773430)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9773470)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x97734D0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x97734E0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x97734F0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9773500)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CANENABLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9773680)
#define SYSTEM_DATA_UNIQUECONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET UNITYSDK_OFFSET(0x9773700)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x97739D0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x9773AC0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x9773AD0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x9773AF0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x9774190)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x9774730)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNSREFERENCE_OFFSET UNITYSDK_OFFSET(0x9773AB0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_ISPRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x9774740)
#define SYSTEM_DATA_UNIQUECONSTRAINT_CREATE_OFFSET UNITYSDK_OFFSET(0x9773230)
#define SYSTEM_DATA_UNIQUECONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x97747A0)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9774820)
#define SYSTEM_DATA_UNIQUECONSTRAINT_SET_INCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9774830)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9774870)
#define SYSTEM_DATA_UNIQUECONSTRAINT_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x9774880)

namespace System::Data
{
	inline static constexpr unsigned int UniqueConstraint_TypeDefinitionIndex = 32301;

	class UniqueConstraint : public Il2CppObject
	{
	public:
		::System::Data::DataKey* _key; // 0x38
		::System::Data::Index* _constraintIndex; // 0x40
		::System::Boolean _bPrimaryKey; // 0x48
		::System::String* _constraintName; // 0x50
		::Il2CppArray<::System::Object*>* _columnNames; // 0x58

		::System::Void .ctor(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ColumnNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNNAMES_OFFSET))(nullptr);
		}

		::System::Data::Index* get_ConstraintIndex()
		{
			return (return (::System::Data::Index*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_CONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Void ConstraintIndexClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXCLEAR_OFFSET))(nullptr);
		}

		::System::Void ConstraintIndexInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONSTRAINTINDEXINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void CheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKSTATE_OFFSET))(nullptr);
		}

		::System::Void NonVirtualCheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET))(nullptr);
		}

		::System::Void CheckCanAddToCollection(::System::Data::ConstraintCollection* arg)
		{
			((::System::Void(*)(::System::Data::ConstraintCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBeRemovedFromCollection(::System::Data::ConstraintCollection* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Data::ConstraintCollection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanEnableConstraint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CANENABLECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean IsConstraintViolated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET))(nullptr);
		}

		::System::Void CheckConstraint(::System::Data::DataRow* arg, ::System::Data::DataRowAction* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataRowAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CHECKCONSTRAINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CONTAINSCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg, ::System::Boolean arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::UniqueConstraint* Clone(::System::Data::DataTable* arg)
		{
			return (return (::System::Data::UniqueConstraint*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CLONE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Columns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ColumnsReference()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_COLUMNSREFERENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrimaryKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_ISPRIMARYKEY_OFFSET))(nullptr);
		}

		::System::Void Create(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_CREATE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void set_InCollection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_SET_INCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Data::DataKey* get_Key()
		{
			return (return (::System::Data::DataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_KEY_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_Table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_UNIQUECONSTRAINT_GET_TABLE_OFFSET))(nullptr);
		}

	};
}

