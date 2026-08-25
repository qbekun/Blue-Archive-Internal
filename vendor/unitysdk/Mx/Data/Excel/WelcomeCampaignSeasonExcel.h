#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WelcomeCampaignSeasonExcel; }
namespace FlatData { class TargetGroup; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC6EB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETROOTASWELCOMECAMPAIGNSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC6EC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETROOTASWELCOMECAMPAIGNSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC6F20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC6FB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC6F80)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC6FD0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1CC7020)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1CC7070)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ACTIVEORDER_OFFSET UNITYSDK_OFFSET(0x1CC70C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1CC7110)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC7150)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1CC7170)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC71B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1CC71D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENTERICONIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC7220)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETENTERICONIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC7260)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_BACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC7280)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETBACKGROUNDIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC72C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC72E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETTITLEIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1CC7320)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENTERREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC7340)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_REWARDINCREASEID_OFFSET UNITYSDK_OFFSET(0x1CC7390)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC73E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ATTENDANCEBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1CC7430)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_CONTINUOUSATTENDANCE_OFFSET UNITYSDK_OFFSET(0x1CC7480)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_CREATEWELCOMECAMPAIGNSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC74D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_STARTWELCOMECAMPAIGNSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC7A90)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CC7860)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1CC79E0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1CC79B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDACTIVEORDER_OFFSET UNITYSDK_OFFSET(0x1CC7980)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1CC7950)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1CC7920)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDEXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1CC7830)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENTERICONIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC78F0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC78C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1CC7890)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENTERREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC7800)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDREWARDINCREASEID_OFFSET UNITYSDK_OFFSET(0x1CC77D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDMAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC77A0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDATTENDANCEBOOKSIZE_OFFSET UNITYSDK_OFFSET(0x1CC7770)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDCONTINUOUSATTENDANCE_OFFSET UNITYSDK_OFFSET(0x1CC7A10)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ENDWELCOMECAMPAIGNSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC7A40)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_FINISHWELCOMECAMPAIGNSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC7AB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC7AD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignSeasonExcel_TypeDefinitionIndex = 19788;

	class WelcomeCampaignSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignSeasonExcel* GetRootAsWelcomeCampaignSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETROOTASWELCOMECAMPAIGNSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignSeasonExcel* GetRootAsWelcomeCampaignSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WelcomeCampaignSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WelcomeCampaignSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETROOTASWELCOMECAMPAIGNSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_TitleLocalizeCode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TITLELOCALIZECODE_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ACTIVEORDER_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::String* get_EnterIconImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENTERICONIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterIconImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETENTERICONIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BackgroundImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_BACKGROUNDIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackgroundImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETBACKGROUNDIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_TITLEIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GETTITLEIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ENTERREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardIncreaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_REWARDINCREASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumLoginCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_MAXIMUMLOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_AttendanceBookSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_ATTENDANCEBOOKSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_ContinuousAttendance()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_GET_CONTINUOUSATTENDANCE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWelcomeCampaignSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatData::TargetGroup* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatData::TargetGroup*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_CREATEWELCOMECAMPAIGNSEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWelcomeCampaignSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_STARTWELCOMECAMPAIGNSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTITLELOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDACTIVEORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDEXPIRYDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterIconImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENTERICONIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackgroundImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDBACKGROUNDIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDTITLEIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDENTERREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardIncreaseId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDREWARDINCREASEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumLoginCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDMAXIMUMLOGINCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttendanceBookSize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDATTENDANCEBOOKSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContinuousAttendance(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ADDCONTINUOUSATTENDANCE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWelcomeCampaignSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_ENDWELCOMECAMPAIGNSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWelcomeCampaignSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_FINISHWELCOMECAMPAIGNSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWelcomeCampaignSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNSEASONEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

