#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyMessangerExcel; }
namespace FlatData { class AcademyMessageConditions; }
namespace FlatData { class AcademyMessageTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x198B5E0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETROOTASACADEMYMESSANGEREXCEL_OFFSET UNITYSDK_OFFSET(0x198B5F0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETROOTASACADEMYMESSANGEREXCEL_OFFSET UNITYSDK_OFFSET(0x198B650)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x198B6E0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x198B6B0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198B700)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x198B750)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x198B7A0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGECONDITION_OFFSET UNITYSDK_OFFSET(0x198B7F0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x198B840)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_PRECONDITIONGROUPID_OFFSET UNITYSDK_OFFSET(0x198B890)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_PRECONDITIONFAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x198B8E0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x198B930)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_NEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x198B980)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_FEEDBACKTIMEMILLISEC_OFFSET UNITYSDK_OFFSET(0x198B9D0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x198BA20)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x198BA70)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x198BAB0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEKR_OFFSET UNITYSDK_OFFSET(0x198BAD0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEKRBYTES_OFFSET UNITYSDK_OFFSET(0x198BB10)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEJP_OFFSET UNITYSDK_OFFSET(0x198BB30)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEJPBYTES_OFFSET UNITYSDK_OFFSET(0x198BB70)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETH_OFFSET UNITYSDK_OFFSET(0x198BB90)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGETHBYTES_OFFSET UNITYSDK_OFFSET(0x198BBD0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETW_OFFSET UNITYSDK_OFFSET(0x198BBF0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGETWBYTES_OFFSET UNITYSDK_OFFSET(0x198BC30)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEEN_OFFSET UNITYSDK_OFFSET(0x198BC50)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEENBYTES_OFFSET UNITYSDK_OFFSET(0x198BC90)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_CREATEACADEMYMESSANGEREXCEL_OFFSET UNITYSDK_OFFSET(0x198BCB0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_STARTACADEMYMESSANGEREXCEL_OFFSET UNITYSDK_OFFSET(0x198C320)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x198C120)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x198C0F0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x198C0C0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGECONDITION_OFFSET UNITYSDK_OFFSET(0x198C2A0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x198C090)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDPRECONDITIONGROUPID_OFFSET UNITYSDK_OFFSET(0x198C060)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDPRECONDITIONFAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x198C030)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDFAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x198C000)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDNEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x198BFD0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDFEEDBACKTIMEMILLISEC_OFFSET UNITYSDK_OFFSET(0x198BFA0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x198C270)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x198C240)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEKR_OFFSET UNITYSDK_OFFSET(0x198C210)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEJP_OFFSET UNITYSDK_OFFSET(0x198C1E0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETH_OFFSET UNITYSDK_OFFSET(0x198C1B0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETW_OFFSET UNITYSDK_OFFSET(0x198C180)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEEN_OFFSET UNITYSDK_OFFSET(0x198C150)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ENDACADEMYMESSANGEREXCEL_OFFSET UNITYSDK_OFFSET(0x198C2D0)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_FINISHACADEMYMESSANGEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x198C340)
#define MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_FINISHSIZEPREFIXEDACADEMYMESSANGEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x198C360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyMessangerExcel_TypeDefinitionIndex = 16579;

	class AcademyMessangerExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyMessangerExcel* GetRootAsAcademyMessangerExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyMessangerExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETROOTASACADEMYMESSANGEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyMessangerExcel* GetRootAsAcademyMessangerExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyMessangerExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyMessangerExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyMessangerExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETROOTASACADEMYMESSANGEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyMessangerExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyMessangerExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::AcademyMessageConditions* get_MessageCondition()
		{
			return (return (::FlatData::AcademyMessageConditions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGECONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_CONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_PreConditionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_PRECONDITIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PreConditionFavorScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_PRECONDITIONFAVORSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_FAVORSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Int64 get_NextGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_NEXTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_FeedbackTimeMillisec()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_FEEDBACKTIMEMILLISEC_OFFSET))(nullptr);
		}

		::FlatData::AcademyMessageTypes* get_MessageType()
		{
			return (return (::FlatData::AcademyMessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MessageKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetMessageKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MessageJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetMessageJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MessageTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMessageTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MessageTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetMessageTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MessageEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GET_MESSAGEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetMessageENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_GETMESSAGEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyMessangerExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::AcademyMessageConditions* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::AcademyMessageTypes* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::AcademyMessageConditions*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::AcademyMessageTypes*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_CREATEACADEMYMESSANGEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyMessangerExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_STARTACADEMYMESSANGEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMessageGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AcademyMessageConditions* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AcademyMessageConditions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDCONDITIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreConditionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDPRECONDITIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreConditionFavorScheduleId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDPRECONDITIONFAVORSCHEDULEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorScheduleId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDFAVORSCHEDULEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDNEXTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeedbackTimeMillisec(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDFEEDBACKTIMEMILLISEC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AcademyMessageTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AcademyMessageTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ADDMESSAGEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyMessangerExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_ENDACADEMYMESSANGEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyMessangerExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_FINISHACADEMYMESSANGEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyMessangerExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYMESSANGEREXCEL_FINISHSIZEPREFIXEDACADEMYMESSANGEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

