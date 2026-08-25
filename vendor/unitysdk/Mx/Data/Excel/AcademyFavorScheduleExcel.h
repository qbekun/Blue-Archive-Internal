#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyFavorScheduleExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1986680)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETROOTASACADEMYFAVORSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1986690)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETROOTASACADEMYFAVORSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x19866F0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1986780)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1986750)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19867A0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x19867F0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1986840)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_ORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x1986890)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x19868E0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETLOCATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1986920)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_LOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x1986940)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x1986990)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x19869E0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SCENARIOSRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x1986A30)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1986A80)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1986AE0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1986B20)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1986B40)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1986BA0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1986BE0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1986C00)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1986C60)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1986CA0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEACADEMYFAVORSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1986CC0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTACADEMYFAVORSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1987170)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1987000)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1986FD0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1986FA0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDORDERINGROUP_OFFSET UNITYSDK_OFFSET(0x1986F70)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0x19870F0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDLOCALIZESCENARIOID_OFFSET UNITYSDK_OFFSET(0x19870C0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1986F40)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSECRETSTONEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1986F10)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSCENARIOSRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0x1986EE0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1987090)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1987190)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1987220)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1987060)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1987260)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x19872F0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1987030)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1987330)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x19873C0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ENDACADEMYFAVORSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1987120)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_FINISHACADEMYFAVORSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1987400)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_FINISHSIZEPREFIXEDACADEMYFAVORSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1987420)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyFavorScheduleExcel_TypeDefinitionIndex = 16555;

	class AcademyFavorScheduleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyFavorScheduleExcel* GetRootAsAcademyFavorScheduleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyFavorScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETROOTASACADEMYFAVORSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyFavorScheduleExcel* GetRootAsAcademyFavorScheduleExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyFavorScheduleExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyFavorScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyFavorScheduleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETROOTASACADEMYFAVORSCHEDULEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyFavorScheduleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyFavorScheduleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_OrderInGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_ORDERINGROUP_OFFSET))(nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETLOCATIONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeScenarioId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_LOCALIZESCENARIOID_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_SecretStoneAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SECRETSTONEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioSriptGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_SCENARIOSRIPTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyFavorScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEACADEMYFAVORSCHEDULEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyFavorScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTACADEMYFAVORSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderInGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDORDERINGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDLOCATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDLOCALIZESCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSecretStoneAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSECRETSTONEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioSriptGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDSCENARIOSRIPTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyFavorScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_ENDACADEMYFAVORSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyFavorScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_FINISHACADEMYFAVORSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyFavorScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCEL_FINISHSIZEPREFIXEDACADEMYFAVORSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

