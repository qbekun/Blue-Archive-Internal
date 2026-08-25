#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SchoolDungeonRewardExcel; }
namespace FlatData { class SchoolDungeonType; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6AF50)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GETROOTASSCHOOLDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6AF60)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GETROOTASSCHOOLDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6AFC0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C6B050)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C6B020)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C6B070)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6B0C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1C6B110)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C6B160)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C6B1B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6B200)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1C6B250)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C6B2A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_CREATESCHOOLDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6B2F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_STARTSCHOOLDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6B640)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C6B500)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6B590)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x1C6B560)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C6B530)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C6B4D0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C6B4A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1C6B470)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C6B5C0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ENDSCHOOLDUNGEONREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6B5F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_FINISHSCHOOLDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6B660)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDSCHOOLDUNGEONREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6B680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonRewardExcel_TypeDefinitionIndex = 19339;

	class SchoolDungeonRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SchoolDungeonRewardExcel* GetRootAsSchoolDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GETROOTASSCHOOLDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SchoolDungeonRewardExcel* GetRootAsSchoolDungeonRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SchoolDungeonRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SchoolDungeonRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GETROOTASSCHOOLDUNGEONREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SchoolDungeonRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SchoolDungeonRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::SchoolDungeonType* get_DungeonType()
		{
			return (return (::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelProbability()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSchoolDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::SchoolDungeonType* arg, ::FlatData::RewardTag* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::SchoolDungeonType*, ::FlatData::RewardTag*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_CREATESCHOOLDUNGEONREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSchoolDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_STARTSCHOOLDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelProbability(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSchoolDungeonRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_ENDSCHOOLDUNGEONREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSchoolDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_FINISHSCHOOLDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSchoolDungeonRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCEL_FINISHSIZEPREFIXEDSCHOOLDUNGEONREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

