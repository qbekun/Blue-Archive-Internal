#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WelcomeCampaignEnterRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC15B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GETROOTASWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC15C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GETROOTASWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC1620)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC16B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC1680)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC16D0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1720)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CC1770)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC17C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_CREATEWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC1810)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_STARTWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC1A00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC1950)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1980)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CC1920)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CC18F0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ENDWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC19B0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_FINISHWELCOMECAMPAIGNENTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC1A20)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNENTERREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC1A40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignEnterRewardExcel_TypeDefinitionIndex = 19764;

	class WelcomeCampaignEnterRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignEnterRewardExcel* GetRootAsWelcomeCampaignEnterRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignEnterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GETROOTASWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignEnterRewardExcel* GetRootAsWelcomeCampaignEnterRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WelcomeCampaignEnterRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignEnterRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WelcomeCampaignEnterRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GETROOTASWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignEnterRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignEnterRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWelcomeCampaignEnterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_CREATEWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWelcomeCampaignEnterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_STARTWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWelcomeCampaignEnterRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_ENDWELCOMECAMPAIGNENTERREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWelcomeCampaignEnterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_FINISHWELCOMECAMPAIGNENTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWelcomeCampaignEnterRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNENTERREWARDEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNENTERREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

