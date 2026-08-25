#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AttendanceRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19DE230)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETROOTASATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19DE240)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETROOTASATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19DE2A0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19DE330)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19DE300)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_ATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DE350)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_DAY_OFFSET UNITYSDK_OFFSET(0x19DE3A0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDICON_OFFSET UNITYSDK_OFFSET(0x19DE3F0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDICONBYTES_OFFSET UNITYSDK_OFFSET(0x19DE430)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19DE450)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x19DE4B0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x19DE4F0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0x19DE510)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x19DE570)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x19DE5B0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x19DE5D0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x19DE630)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x19DE670)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19DE690)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19DE930)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DE7F0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDDAY_OFFSET UNITYSDK_OFFSET(0x19DE7C0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDICON_OFFSET UNITYSDK_OFFSET(0x19DE8B0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19DE880)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19DE950)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19DE9E0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x19DE850)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19DEA20)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19DEAB0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x19DE820)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19DEAF0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19DEB80)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ENDATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19DE8E0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_FINISHATTENDANCEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DEBC0)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_FINISHSIZEPREFIXEDATTENDANCEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19DEBE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AttendanceRewardExcel_TypeDefinitionIndex = 16713;

	class AttendanceRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AttendanceRewardExcel* GetRootAsAttendanceRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AttendanceRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETROOTASATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AttendanceRewardExcel* GetRootAsAttendanceRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AttendanceRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::AttendanceRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AttendanceRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETROOTASATTENDANCEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AttendanceRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AttendanceRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_AttendanceId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_ATTENDANCEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Day()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_DAY_OFFSET))(nullptr);
		}

		::System::String* get_RewardIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDICONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEATTENDANCEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttendanceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDATTENDANCEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_ENDATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAttendanceRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_FINISHATTENDANCEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAttendanceRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCEL_FINISHSIZEPREFIXEDATTENDANCEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

