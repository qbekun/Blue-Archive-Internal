#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioContentCollectionExcel; }
namespace FlatData { class CollectionUnlockType; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5CA60)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETROOTASSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5CA70)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETROOTASSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5CAD0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C5CB60)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C5CB30)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C5CB80)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C5CBD0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C5CC20)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_UNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C5CC70)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5CCD0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETUNLOCKCONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CD10)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1C5CD30)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5CD80)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1C5CDD0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x1C5CE20)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5CE70)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETEMBLEMRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CEB0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5CED0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETTHUMBRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CF10)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5CF30)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETFULLRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5CF70)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C5CF90)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1C5CFE0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETSUBNAMELOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C5D020)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_CREATESCENARIOCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5D040)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_STARTSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5D550)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C5D2F0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C5D2C0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C5D470)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C5D440)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_CREATEUNLOCKCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C5D570)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_STARTUNLOCKCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C5D600)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1C5D410)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5D290)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDISOBJECT_OFFSET UNITYSDK_OFFSET(0x1C5D4D0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDISHORIZON_OFFSET UNITYSDK_OFFSET(0x1C5D4A0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDEMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5D3E0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDTHUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5D3B0)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C5D380)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C5D350)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDSUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1C5D320)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ENDSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5D500)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_FINISHSCENARIOCONTENTCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5D640)
#define MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_FINISHSIZEPREFIXEDSCENARIOCONTENTCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5D660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioContentCollectionExcel_TypeDefinitionIndex = 19276;

	class ScenarioContentCollectionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioContentCollectionExcel* GetRootAsScenarioContentCollectionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioContentCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETROOTASSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioContentCollectionExcel* GetRootAsScenarioContentCollectionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioContentCollectionExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioContentCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioContentCollectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETROOTASSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioContentCollectionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioContentCollectionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::CollectionUnlockType* get_UnlockConditionType()
		{
			return (return (::FlatData::CollectionUnlockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 UnlockConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_UNLOCKCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnlockConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnlockConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETUNLOCKCONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_ISHORIZON_OFFSET))(nullptr);
		}

		::System::String* get_EmblemResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_EMBLEMRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETEMBLEMRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ThumbResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_THUMBRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThumbResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETTHUMBRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FullResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_FULLRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFullResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETFULLRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SubNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GET_SUBNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubNameLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_GETSUBNAMELOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CollectionUnlockType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MultipleConditionCheckType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::CollectionUnlockType*, ::FlatBuffers::VectorOffset*, ::FlatData::MultipleConditionCheckType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_CREATESCENARIOCONTENTCOLLECTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_STARTSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CollectionUnlockType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CollectionUnlockType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnlockConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_CREATEUNLOCKCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUnlockConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_STARTUNLOCKCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsObject(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDISOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsHorizon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDISHORIZON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDEMBLEMRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThumbResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDTHUMBRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFullResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDFULLRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubNameLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ADDSUBNAMELOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_ENDSCENARIOCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioContentCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_FINISHSCENARIOCONTENTCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioContentCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCONTENTCOLLECTIONEXCEL_FINISHSIZEPREFIXEDSCENARIOCONTENTCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

