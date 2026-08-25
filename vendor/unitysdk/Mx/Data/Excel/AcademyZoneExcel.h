#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyZoneExcel; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19C9010)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETROOTASACADEMYZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x19C9020)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETROOTASACADEMYZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x19C9080)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19C9110)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19C90E0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19C9130)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x19C9180)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x19C91D0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x19C9220)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_STUDENTVISITPROB_OFFSET UNITYSDK_OFFSET(0x19C9270)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_STUDENTVISITPROBLENGTH_OFFSET UNITYSDK_OFFSET(0x19C92D0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETSTUDENTVISITPROBBYTES_OFFSET UNITYSDK_OFFSET(0x19C9310)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19C9330)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x19C9380)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x19C93E0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x19C9420)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATEACADEMYZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x19C9440)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTACADEMYZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x19C9730)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19C9620)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCATIONID_OFFSET UNITYSDK_OFFSET(0x19C95F0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x19C95C0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x19C96B0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDSTUDENTVISITPROB_OFFSET UNITYSDK_OFFSET(0x19C9680)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATESTUDENTVISITPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x19C9750)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTSTUDENTVISITPROBVECTOR_OFFSET UNITYSDK_OFFSET(0x19C97E0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19C9590)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x19C9650)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x19C9820)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x19C98B0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_ENDACADEMYZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x19C96E0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_FINISHACADEMYZONEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19C98F0)
#define MX_DATA_EXCEL_ACADEMYZONEEXCEL_FINISHSIZEPREFIXEDACADEMYZONEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19C9910)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyZoneExcel_TypeDefinitionIndex = 16606;

	class AcademyZoneExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyZoneExcel* GetRootAsAcademyZoneExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETROOTASACADEMYZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyZoneExcel* GetRootAsAcademyZoneExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyZoneExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETROOTASACADEMYZONEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyZoneExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyZoneExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationRankForUnlock()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCATIONRANKFORUNLOCK_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 StudentVisitProb(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_STUDENTVISITPROB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StudentVisitProbLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_STUDENTVISITPROBLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStudentVisitProbBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETSTUDENTVISITPROBBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyZoneExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATEACADEMYZONEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTACADEMYZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationRankForUnlock(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCATIONRANKFORUNLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStudentVisitProb(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDSTUDENTVISITPROB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStudentVisitProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATESTUDENTVISITPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStudentVisitProbVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTSTUDENTVISITPROBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_ENDACADEMYZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyZoneExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_FINISHACADEMYZONEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyZoneExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYZONEEXCEL_FINISHSIZEPREFIXEDACADEMYZONEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

