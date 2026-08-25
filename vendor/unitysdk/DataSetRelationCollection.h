#pragma once
#include "unitysdk.h"

#define DATASETRELATIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x973D6A0)
#define DATASETRELATIONCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x973D7B0)
#define DATASETRELATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x973D7C0)
#define DATASETRELATIONCOLLECTION_GETDATASET_OFFSET UNITYSDK_OFFSET(0x973D810)
#define DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x973D820)
#define DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x973D920)
#define DATASETRELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x973DA10)
#define DATASETRELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x973E240)
#define DATASETRELATIONCOLLECTION_FINISHINITRELATIONS_OFFSET UNITYSDK_OFFSET(0x973E520)

	inline static constexpr unsigned int DataSetRelationCollection_TypeDefinitionIndex = 32210;

	class DataSetRelationCollection : public Il2CppObject
	{
	public:
		::System::Data::DataSet* _dataSet; // 0x38
		::System::Collections::ArrayList* _relations; // 0x40
		::Il2CppArray<::System::Object*>* _delayLoadingRelations; // 0x48

		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_List()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_GET_LIST_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Data::DataSet* GetDataSet()
		{
			return (return (::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_GETDATASET_OFFSET))(nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataRelation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::String* str)
		{
			return (return (::System::Data::DataRelation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void AddCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_ADDCORE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_REMOVECORE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInitRelations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATASETRELATIONCOLLECTION_FINISHINITRELATIONS_OFFSET))(nullptr);
		}

	};

