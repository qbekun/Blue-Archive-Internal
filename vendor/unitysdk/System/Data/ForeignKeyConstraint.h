#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9763E20)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9763E60)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9764050)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDKEY_OFFSET UNITYSDK_OFFSET(0x9764100)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x9764120)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x9764150)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x9764180)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x9764190)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x97641A0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x97642D0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISKEYNULL_OFFSET UNITYSDK_OFFSET(0x97642E0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET UNITYSDK_OFFSET(0x9764370)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANENABLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x97649F0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADECOMMIT_OFFSET UNITYSDK_OFFSET(0x9764CC0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEDELETE_OFFSET UNITYSDK_OFFSET(0x9764EC0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEROLLBACK_OFFSET UNITYSDK_OFFSET(0x9765690)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEUPDATE_OFFSET UNITYSDK_OFFSET(0x9765900)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANCLEARPARENTTABLE_OFFSET UNITYSDK_OFFSET(0x9765FD0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANREMOVEPARENTROW_OFFSET UNITYSDK_OFFSET(0x97660C0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCASCADE_OFFSET UNITYSDK_OFFSET(0x9766190)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x97662B0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x9766610)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x9766870)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_ACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x9766880)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_ACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x97668A0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x97668F0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x9766930)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x9766950)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x97672C0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CREATE_OFFSET UNITYSDK_OFFSET(0x9763EB0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_DELETERULE_OFFSET UNITYSDK_OFFSET(0x9767A10)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_DELETERULE_OFFSET UNITYSDK_OFFSET(0x9767A30)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9767A80)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9767B50)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNS_OFFSET UNITYSDK_OFFSET(0x9767B60)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNSREFERENCE_OFFSET UNITYSDK_OFFSET(0x97672A0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTKEY_OFFSET UNITYSDK_OFFSET(0x9766170)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_FINDPARENTRELATION_OFFSET UNITYSDK_OFFSET(0x9767B90)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDTABLE_OFFSET UNITYSDK_OFFSET(0x9767C70)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_UPDATERULE_OFFSET UNITYSDK_OFFSET(0x9767CA0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_UPDATERULE_OFFSET UNITYSDK_OFFSET(0x9767CC0)

namespace System::Data
{
	inline static constexpr unsigned int ForeignKeyConstraint_TypeDefinitionIndex = 32268;

	class ForeignKeyConstraint : public Il2CppObject
	{
	public:
		::System::Data::Rule* _deleteRule; // 0x38
		::System::Data::Rule* _updateRule; // 0x3C
		::System::Data::AcceptRejectRule* _acceptRejectRule; // 0x40
		::System::Data::DataKey* _childKey; // 0x48
		::System::Data::DataKey* _parentKey; // 0x50
		::System::String* _constraintName; // 0x58
		::Il2CppArray<::System::Object*>* _parentColumnNames; // 0x60
		::Il2CppArray<::System::Object*>* _childColumnNames; // 0x68
		::System::String* _parentTableName; // 0x70
		::System::String* _parentTableNamespace; // 0x78

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Data::AcceptRejectRule* arg, ::System::Data::Rule* arg, ::System::Data::Rule* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Data::AcceptRejectRule*, ::System::Data::Rule*, ::System::Data::Rule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Data::DataKey* get_ChildKey()
		{
			return (return (::System::Data::DataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDKEY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Columns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_COLUMNS_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_Table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_TABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ParentColumnNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTCOLUMNNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildColumnNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_CHILDCOLUMNNAMES_OFFSET))(nullptr);
		}

		::System::Void CheckCanAddToCollection(::System::Data::ConstraintCollection* arg)
		{
			((::System::Void(*)(::System::Data::ConstraintCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBeRemovedFromCollection(::System::Data::ConstraintCollection* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Data::ConstraintCollection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsKeyNull(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISKEYNULL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstraintViolated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET))(nullptr);
		}

		::System::Boolean CanEnableConstraint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CANENABLECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void CascadeCommit(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADECOMMIT_OFFSET))(arg, nullptr);
		}

		::System::Void CascadeDelete(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEDELETE_OFFSET))(arg, nullptr);
		}

		::System::Void CascadeRollback(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEROLLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void CascadeUpdate(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CASCADEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckCanClearParentTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANCLEARPARENTTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckCanRemoveParentRow(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCANREMOVEPARENTROW_OFFSET))(arg, nullptr);
		}

		::System::Void CheckCascade(::System::Data::DataRow* arg, ::System::Data::DataRowAction* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataRowAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCASCADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckConstraint(::System::Data::DataRow* arg, ::System::Data::DataRowAction* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataRowAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKCONSTRAINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NonVirtualCheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_NONVIRTUALCHECKSTATE_OFFSET))(nullptr);
		}

		::System::Void CheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CHECKSTATE_OFFSET))(nullptr);
		}

		::System::Data::AcceptRejectRule* get_AcceptRejectRule()
		{
			return (return (::System::Data::AcceptRejectRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_ACCEPTREJECTRULE_OFFSET))(nullptr);
		}

		::System::Void set_AcceptRejectRule(::System::Data::AcceptRejectRule* arg)
		{
			((::System::Void(*)(::System::Data::AcceptRejectRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_ACCEPTREJECTRULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CONTAINSCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg, ::System::Boolean arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::ForeignKeyConstraint* Clone(::System::Data::DataTable* arg)
		{
			return (return (::System::Data::ForeignKeyConstraint*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void Create(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_CREATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Data::Rule* get_DeleteRule()
		{
			return (return (::System::Data::Rule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_DELETERULE_OFFSET))(nullptr);
		}

		::System::Void set_DeleteRule(::System::Data::Rule* arg)
		{
			((::System::Void(*)(::System::Data::Rule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_DELETERULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RelatedColumns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RelatedColumnsReference()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDCOLUMNSREFERENCE_OFFSET))(nullptr);
		}

		::System::Data::DataKey* get_ParentKey()
		{
			return (return (::System::Data::DataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_PARENTKEY_OFFSET))(nullptr);
		}

		::System::Data::DataRelation* FindParentRelation()
		{
			return (return (::System::Data::DataRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_FINDPARENTRELATION_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_RelatedTable()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_RELATEDTABLE_OFFSET))(nullptr);
		}

		::System::Data::Rule* get_UpdateRule()
		{
			return (return (::System::Data::Rule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_GET_UPDATERULE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateRule(::System::Data::Rule* arg)
		{
			((::System::Void(*)(::System::Data::Rule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINT_SET_UPDATERULE_OFFSET))(arg, nullptr);
		}

	};
}

