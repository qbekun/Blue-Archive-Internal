#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ClanRewardExcel; }
namespace FlatData { class ClanRewardType; }
namespace FlatData { class EchelonType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4EB90)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GETROOTASCLANREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4EBA0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GETROOTASCLANREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4EC00)
#define MX_DATA_EXCEL_CLANREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A4EC90)
#define MX_DATA_EXCEL_CLANREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A4EC60)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_CLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4ECB0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4ED00)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A4ED50)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A4EDA0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A4EDF0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_CREATECLANREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4EE40)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_STARTCLANREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4F080)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ADDCLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F000)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ADDECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4EFD0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A4EFA0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A4EF70)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A4EF40)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_ENDCLANREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4F030)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_FINISHCLANREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4F0A0)
#define MX_DATA_EXCEL_CLANREWARDEXCEL_FINISHSIZEPREFIXEDCLANREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4F0C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClanRewardExcel_TypeDefinitionIndex = 17175;

	class ClanRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ClanRewardExcel* GetRootAsClanRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ClanRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GETROOTASCLANREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ClanRewardExcel* GetRootAsClanRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ClanRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ClanRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ClanRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GETROOTASCLANREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ClanRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ClanRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ClanRewardType* get_ClanRewardType()
		{
			return (return (::FlatData::ClanRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_CLANREWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateClanRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ClanRewardType* arg, ::FlatData::EchelonType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ClanRewardType*, ::FlatData::EchelonType*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_CREATECLANREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartClanRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_STARTCLANREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddClanRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ClanRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ClanRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ADDCLANREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ADDECHELONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndClanRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_ENDCLANREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishClanRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_FINISHCLANREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedClanRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCEL_FINISHSIZEPREFIXEDCLANREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

