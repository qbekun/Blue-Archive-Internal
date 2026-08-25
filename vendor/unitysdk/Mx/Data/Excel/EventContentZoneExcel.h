#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentZoneExcel; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B14A40)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETROOTASEVENTCONTENTZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B14A50)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETROOTASEVENTCONTENTZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B14AB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B14B40)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B14B10)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B14B60)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_ORIGINALZONEID_OFFSET UNITYSDK_OFFSET(0x1B14BB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B14C00)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1B14C50)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_EVENTPOINTFORLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1B14CA0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B14CF0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STUDENTVISITPROB_OFFSET UNITYSDK_OFFSET(0x1B14D40)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_STUDENTVISITPROBLENGTH_OFFSET UNITYSDK_OFFSET(0x1B14DA0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETSTUDENTVISITPROBBYTES_OFFSET UNITYSDK_OFFSET(0x1B14DE0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B14E00)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1B14E50)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B14EB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B14EF0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_WHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1B14F10)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_WHITELISTTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B14F70)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETWHITELISTTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B14FB0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATEEVENTCONTENTZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B14FD0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTEVENTCONTENTZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B153D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B15290)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDORIGINALZONEID_OFFSET UNITYSDK_OFFSET(0x1B15260)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B15230)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1B15200)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDEVENTPOINTFORLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1B151D0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B15350)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDSTUDENTVISITPROB_OFFSET UNITYSDK_OFFSET(0x1B15320)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATESTUDENTVISITPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1B153F0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTSTUDENTVISITPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x1B15480)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B151A0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1B152F0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B154C0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B15550)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDWHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1B152C0)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATEWHITELISTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B15590)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTWHITELISTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B15620)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ENDEVENTCONTENTZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B15380)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_FINISHEVENTCONTENTZONEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B15660)
#define MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTZONEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B15680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentZoneExcel_TypeDefinitionIndex = 17926;

	class EventContentZoneExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentZoneExcel* GetRootAsEventContentZoneExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETROOTASEVENTCONTENTZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentZoneExcel* GetRootAsEventContentZoneExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentZoneExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETROOTASEVENTCONTENTZONEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentZoneExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentZoneExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalZoneId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_ORIGINALZONEID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_EventPointForLocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_EVENTPOINTFORLOCATIONRANK_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 StudentVisitProb(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STUDENTVISITPROB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StudentVisitProbLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_STUDENTVISITPROBLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStudentVisitProbBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETSTUDENTVISITPROBBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* WhiteListTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_WHITELISTTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WhiteListTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GET_WHITELISTTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetWhiteListTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_GETWHITELISTTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentZoneExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATEEVENTCONTENTZONEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTEVENTCONTENTZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalZoneId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDORIGINALZONEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCATIONRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventPointForLocationRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDEVENTPOINTFORLOCATIONRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStudentVisitProb(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDSTUDENTVISITPROB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStudentVisitProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATESTUDENTVISITPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStudentVisitProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTSTUDENTVISITPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWhiteListTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ADDWHITELISTTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateWhiteListTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_CREATEWHITELISTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartWhiteListTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_STARTWHITELISTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_ENDEVENTCONTENTZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentZoneExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_FINISHEVENTCONTENTZONEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentZoneExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTZONEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

