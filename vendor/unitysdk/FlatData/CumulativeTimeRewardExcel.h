#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CumulativeTimeRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2E020)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETROOTASCUMULATIVETIMEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD2E030)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETROOTASCUMULATIVETIMEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD2E090)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD2E0F0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2DD40)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD2E110)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD2E160)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xD2E1E0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xD2E220)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETDESCRIPTIONBYTES_OFFSET UNITYSDK_OFFSET(0xD2E290)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD2E2B0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD2E2F0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD2E360)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD2E380)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD2E3C0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD2E430)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_TIMECONDITION_OFFSET UNITYSDK_OFFSET(0xD2E450)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_TIMECONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0xD2E4B0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_TIMECONDITION_OFFSET UNITYSDK_OFFSET(0xD2E4F0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETTIMECONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0xD2E580)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2E5A0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD2E600)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2E640)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD2E6D0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0xD2E6F0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD2E750)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0xD2E790)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0xD2E820)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2E840)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2E8A0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2E8E0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD2E970)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATECUMULATIVETIMEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD2E990)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTCUMULATIVETIMEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD2ECE0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD2EB10)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xD2EC60)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0xD2EC30)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0xD2EC00)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDTIMECONDITION_OFFSET UNITYSDK_OFFSET(0xD2EBD0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATETIMECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0xD2ED00)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTTIMECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0xD2ED90)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2EBA0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD2EDD0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD2EE60)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD2EB70)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD2EEA0)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD2EF30)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2EB40)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2EF70)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2F000)
#define FLATDATA_CUMULATIVETIMEREWARDEXCEL_ENDCUMULATIVETIMEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD2EC90)

namespace FlatData
{
	inline static constexpr unsigned int CumulativeTimeRewardExcel_TypeDefinitionIndex = 9241;

	class CumulativeTimeRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CumulativeTimeRewardExcel* GetRootAsCumulativeTimeRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CumulativeTimeRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETROOTASCUMULATIVETIMEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::CumulativeTimeRewardExcel* GetRootAsCumulativeTimeRewardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::CumulativeTimeRewardExcel* arg2)
		{
			return ((::FlatData::CumulativeTimeRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CumulativeTimeRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETROOTASCUMULATIVETIMEREWARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CumulativeTimeRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CumulativeTimeRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETDESCRIPTIONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_startDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_endDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 timeCondition(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_TIMECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TimeConditionLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_TIMECONDITIONLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 TimeCondition(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_TIMECONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTimeConditionBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETTIMECONDITIONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* rewardParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 rewardId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RewardId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 rewardAmount(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 RewardAmount(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCumulativeTimeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::VectorOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8, ::FlatBuffers::VectorOffset* arg9)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATECUMULATIVETIMEREWARDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void StartCumulativeTimeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTCUMULATIVETIMEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDSTARTDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDENDDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTimeCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDTIMECONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTimeConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATETIMECONDITIONVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTimeConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTTIMECONDITIONVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCumulativeTimeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CUMULATIVETIMEREWARDEXCEL_ENDCUMULATIVETIMEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

