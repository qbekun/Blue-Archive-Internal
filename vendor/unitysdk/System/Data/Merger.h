#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_MERGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9767EC0)
#define SYSTEM_DATA_MERGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9767F10)
#define SYSTEM_DATA_MERGER_MERGEDATASET_OFFSET UNITYSDK_OFFSET(0x9767F60)
#define SYSTEM_DATA_MERGER_MERGETABLE_OFFSET UNITYSDK_OFFSET(0x976A040)
#define SYSTEM_DATA_MERGER_MERGETABLE_OFFSET UNITYSDK_OFFSET(0x976A320)
#define SYSTEM_DATA_MERGER_MERGESCHEMA_OFFSET UNITYSDK_OFFSET(0x976AA10)
#define SYSTEM_DATA_MERGER_MERGETABLEDATA_OFFSET UNITYSDK_OFFSET(0x9769170)
#define SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9769260)
#define SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x976B250)
#define SYSTEM_DATA_MERGER_MERGERELATION_OFFSET UNITYSDK_OFFSET(0x97692D0)
#define SYSTEM_DATA_MERGER_MERGEEXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9769DE0)
#define SYSTEM_DATA_MERGER_GETSRCKEY_OFFSET UNITYSDK_OFFSET(0x976A890)

namespace System::Data
{
	inline static constexpr unsigned int Merger_TypeDefinitionIndex = 32274;

	class Merger : public Il2CppObject
	{
	public:
		::System::Data::DataSet* _dataSet; // 0x10
		::System::Data::DataTable* _dataTable; // 0x18
		::System::Boolean _preserveChanges; // 0x20
		::System::Data::MissingSchemaAction* _missingSchemaAction; // 0x24
		::System::Boolean _isStandAlonetable; // 0x28
		::System::Boolean _IgnoreNSforTableLookup; // 0x29

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Boolean arg, ::System::Data::MissingSchemaAction* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Boolean, ::System::Data::MissingSchemaAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg, ::System::Data::MissingSchemaAction* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::System::Data::MissingSchemaAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MergeDataSet(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGEDATASET_OFFSET))(arg, nullptr);
		}

		::System::Void MergeTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void MergeTable(::System::Data::DataTable* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataTable* MergeSchema(::System::Data::DataTable* arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGESCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void MergeTableData(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGETABLEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void MergeConstraints(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Void MergeConstraints(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGECONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Void MergeRelation(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGERELATION_OFFSET))(arg, nullptr);
		}

		::System::Void MergeExtendedProperties(::System::Data::PropertyCollection* arg, ::System::Data::PropertyCollection* arg)
		{
			((::System::Void(*)(::System::Data::PropertyCollection*, ::System::Data::PropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_MERGEEXTENDEDPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataKey* GetSrcKey(::System::Data::DataTable* arg, ::System::Data::DataTable* arg)
		{
			return (return (::System::Data::DataKey*(*)(::System::Data::DataTable*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGER_GETSRCKEY_OFFSET))(arg, arg, nullptr);
		}

	};
}

