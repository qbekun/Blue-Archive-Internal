#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19EAD80)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GETROOTASBATTLEPASSREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EAD90)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GETROOTASBATTLEPASSREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EADF0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19EAE80)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19EAE50)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19EAEA0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EAEF0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19EAF40)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19EAF90)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19EAFE0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EB030)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_CREATEBATTLEPASSREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EB080)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_STARTBATTLEPASSREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EB320)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19EB270)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x19EB240)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x19EB210)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19EB2A0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19EB1E0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19EB1B0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ENDBATTLEPASSREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19EB2D0)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_FINISHBATTLEPASSREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EB340)
#define MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_FINISHSIZEPREFIXEDBATTLEPASSREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EB360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassRewardExcel_TypeDefinitionIndex = 16775;

	class BattlePassRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassRewardExcel* GetRootAsBattlePassRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GETROOTASBATTLEPASSREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassRewardExcel* GetRootAsBattlePassRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GETROOTASBATTLEPASSREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_CREATEBATTLEPASSREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_STARTBATTLEPASSREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_ENDBATTLEPASSREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_FINISHBATTLEPASSREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSREWARDEXCEL_FINISHSIZEPREFIXEDBATTLEPASSREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

