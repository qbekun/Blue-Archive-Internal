#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCollectionExcel; }
namespace FlatData { class CollectionUnlockType; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AADE60)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETROOTASEVENTCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AADE70)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETROOTASEVENTCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AADED0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AADF60)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AADF30)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AADF80)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AADFD0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1AAE020)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AAE070)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_UNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AAE0C0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAE120)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETUNLOCKCONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE160)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1AAE180)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AAE1D0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1AAE220)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISOBJECTONFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE270)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISHORIZON_OFFSET UNITYSDK_OFFSET(0x1AAE2C0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_EMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE310)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETEMBLEMRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE350)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_THUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE370)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETTHUMBRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE3B0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_FULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE3D0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETFULLRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE410)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_DECORATION_OFFSET UNITYSDK_OFFSET(0x1AAE430)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETDECORATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE470)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AAE490)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_SUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1AAE4E0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETSUBNAMELOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AAE520)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_CREATEEVENTCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAE540)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_STARTEVENTCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAEB60)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AAE8A0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAE870)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1AAE840)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AAEA50)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AAEA20)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_CREATEUNLOCKCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAEB80)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_STARTUNLOCKCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAEC10)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1AAE9F0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1AAE810)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISOBJECT_OFFSET UNITYSDK_OFFSET(0x1AAEAE0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISOBJECTONFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAEAB0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISHORIZON_OFFSET UNITYSDK_OFFSET(0x1AAEA80)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDEMBLEMRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE9C0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDTHUMBRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE990)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDFULLRESOURCE_OFFSET UNITYSDK_OFFSET(0x1AAE960)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDDECORATION_OFFSET UNITYSDK_OFFSET(0x1AAE930)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AAE900)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDSUBNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1AAE8D0)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ENDEVENTCONTENTCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAEB10)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_FINISHEVENTCONTENTCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAEC50)
#define MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAEC70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCollectionExcel_TypeDefinitionIndex = 17594;

	class EventContentCollectionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCollectionExcel* GetRootAsEventContentCollectionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETROOTASEVENTCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCollectionExcel* GetRootAsEventContentCollectionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCollectionExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCollectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETROOTASEVENTCONTENTCOLLECTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCollectionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCollectionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::CollectionUnlockType* get_UnlockConditionType()
		{
			return (return (::FlatData::CollectionUnlockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 UnlockConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_UNLOCKCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnlockConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnlockConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETUNLOCKCONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_UNLOCKCONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObjectOnFullResource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISOBJECTONFULLRESOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHorizon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_ISHORIZON_OFFSET))(nullptr);
		}

		::System::String* get_EmblemResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_EMBLEMRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmblemResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETEMBLEMRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ThumbResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_THUMBRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThumbResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETTHUMBRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FullResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_FULLRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFullResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETFULLRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Decoration()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_DECORATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetDecorationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETDECORATIONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_SubNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GET_SUBNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubNameLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_GETSUBNAMELOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CollectionUnlockType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MultipleConditionCheckType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::CollectionUnlockType*, ::FlatBuffers::VectorOffset*, ::FlatData::MultipleConditionCheckType*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_CREATEEVENTCONTENTCOLLECTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_STARTEVENTCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CollectionUnlockType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CollectionUnlockType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnlockConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_CREATEUNLOCKCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUnlockConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_STARTUNLOCKCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockConditionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDUNLOCKCONDITIONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsObject(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsObjectOnFullResource(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISOBJECTONFULLRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsHorizon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDISHORIZON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmblemResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDEMBLEMRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThumbResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDTHUMBRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFullResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDFULLRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDecoration(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDDECORATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubNameLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ADDSUBNAMELOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_ENDEVENTCONTENTCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_FINISHEVENTCONTENTCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCOLLECTIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

