#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTRAINT_GET_CONSTRAINTNAME_OFFSET UNITYSDK_OFFSET(0x972DE30)
#define SYSTEM_DATA_CONSTRAINT_SET_CONSTRAINTNAME_OFFSET UNITYSDK_OFFSET(0x972DE40)
#define SYSTEM_DATA_CONSTRAINT_GET_SCHEMANAME_OFFSET UNITYSDK_OFFSET(0x972E310)
#define SYSTEM_DATA_CONSTRAINT_SET_SCHEMANAME_OFFSET UNITYSDK_OFFSET(0x972E350)
#define SYSTEM_DATA_CONSTRAINT_GET_INCOLLECTION_OFFSET UNITYSDK_OFFSET(0x972E390)
#define SYSTEM_DATA_CONSTRAINT_SET_INCOLLECTION_OFFSET UNITYSDK_OFFSET(0x972E3A0)
#define SYSTEM_DATA_CONSTRAINT_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_GET_EXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x972E400)
#define SYSTEM_DATA_CONSTRAINT_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CANENABLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x972E470)
#define SYSTEM_DATA_CONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_CHECKSTATEFORPROPERTY_OFFSET UNITYSDK_OFFSET(0x972E4D0)
#define SYSTEM_DATA_CONSTRAINT_GET__DATASET_OFFSET UNITYSDK_OFFSET(0x972E640)
#define SYSTEM_DATA_CONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_CONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x972E650)
#define SYSTEM_DATA_CONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x972E670)

namespace System::Data
{
	inline static constexpr unsigned int Constraint_TypeDefinitionIndex = 32194;

	class Constraint : public Il2CppObject
	{
	public:
		::System::String* _schemaName; // 0x10
		::System::Boolean _inCollection; // 0x18
		::System::Data::DataSet* _dataSet; // 0x20
		::System::String* _name; // 0x28
		::System::Data::PropertyCollection* _extendedProperties; // 0x30

		::System::String* get_ConstraintName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_CONSTRAINTNAME_OFFSET))(nullptr);
		}

		::System::Void set_ConstraintName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_CONSTRAINTNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_SchemaName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_SCHEMANAME_OFFSET))(nullptr);
		}

		::System::Void set_SchemaName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_SCHEMANAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_InCollection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_INCOLLECTION_OFFSET))(nullptr);
		}

		::System::Void set_InCollection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_INCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Data::DataTable* get_Table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Data::PropertyCollection* get_ExtendedProperties()
		{
			return (return (::System::Data::PropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_EXTENDEDPROPERTIES_OFFSET))(nullptr);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CONTAINSCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanEnableConstraint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CANENABLECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* Clone(::System::Data::DataSet* arg, ::System::Boolean arg)
		{
			return (return (::System::Data::Constraint*(*)(::System::Data::DataSet*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CLONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckConstraint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void CheckCanAddToCollection(::System::Data::ConstraintCollection* arg)
		{
			((::System::Void(*)(::System::Data::ConstraintCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKCANADDTOCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBeRemovedFromCollection(::System::Data::ConstraintCollection* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Data::ConstraintCollection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CANBEREMOVEDFROMCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckConstraint(::System::Data::DataRow* arg, ::System::Data::DataRowAction* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Data::DataRowAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKSTATE_OFFSET))(nullptr);
		}

		::System::Void CheckStateForProperty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKSTATEFORPROPERTY_OFFSET))(nullptr);
		}

		::System::Data::DataSet* get__DataSet()
		{
			return (return (::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET__DATASET_OFFSET))(nullptr);
		}

		::System::Boolean IsConstraintViolated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_ISCONSTRAINTVIOLATED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

