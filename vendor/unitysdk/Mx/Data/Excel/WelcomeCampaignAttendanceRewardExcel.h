#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WelcomeCampaignAttendanceRewardExcel; }
namespace FlatData { class WelcomeCampaignAttendanceType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC0200)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GETROOTASWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC0210)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GETROOTASWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC0270)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC0300)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC02D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC0320)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC0370)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_COUNTCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1CC03C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1CC0410)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC0460)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1CC04B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC0500)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_CREATEWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC0550)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_STARTWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC0840)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CC0760)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0x1CC0730)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDCOUNTCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1CC07C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDDAY_OFFSET UNITYSDK_OFFSET(0x1CC0700)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC0790)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1CC06D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC06A0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ENDWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC07F0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_FINISHWELCOMECAMPAIGNATTENDANCEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC0860)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNATTENDANCEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC0880)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignAttendanceRewardExcel_TypeDefinitionIndex = 19757;

	class WelcomeCampaignAttendanceRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel* GetRootAsWelcomeCampaignAttendanceRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GETROOTASWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel* GetRootAsWelcomeCampaignAttendanceRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GETROOTASWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignAttendanceRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::FlatData::WelcomeCampaignAttendanceType* get_CountCheckType()
		{
			return (return (::FlatData::WelcomeCampaignAttendanceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_COUNTCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Day()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_DAY_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWelcomeCampaignAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::WelcomeCampaignAttendanceType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::WelcomeCampaignAttendanceType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_CREATEWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWelcomeCampaignAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_STARTWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCountCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WelcomeCampaignAttendanceType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WelcomeCampaignAttendanceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDCOUNTCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWelcomeCampaignAttendanceRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_ENDWELCOMECAMPAIGNATTENDANCEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWelcomeCampaignAttendanceRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_FINISHWELCOMECAMPAIGNATTENDANCEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWelcomeCampaignAttendanceRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNATTENDANCEREWARDEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNATTENDANCEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

