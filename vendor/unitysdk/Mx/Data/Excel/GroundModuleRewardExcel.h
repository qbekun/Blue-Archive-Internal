#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GroundModuleRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B42A80)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETROOTASGROUNDMODULEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B42A90)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETROOTASGROUNDMODULEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B42AF0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B42B80)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B42B50)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B42BA0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B42BF0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B42C40)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B42C90)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1B42CE0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1B42D30)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_DROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B42D80)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETDROPITEMMODELPREFABPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B42DC0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_CREATEGROUNDMODULEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B42DE0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_STARTGROUNDMODULEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B430D0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B43020)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B42FF0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B42F90)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B42F60)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1B42F30)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1B43050)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B42FC0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ENDGROUNDMODULEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B43080)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_FINISHGROUNDMODULEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B430F0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_FINISHSIZEPREFIXEDGROUNDMODULEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B43110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GroundModuleRewardExcel_TypeDefinitionIndex = 18128;

	class GroundModuleRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GroundModuleRewardExcel* GetRootAsGroundModuleRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GroundModuleRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETROOTASGROUNDMODULEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GroundModuleRewardExcel* GetRootAsGroundModuleRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GroundModuleRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::GroundModuleRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GroundModuleRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETROOTASGROUNDMODULEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GroundModuleRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GroundModuleRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_GroupId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelProbability()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_REWARDPARCELPROBABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		::System::String* get_DropItemModelPrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GET_DROPITEMMODELPREFABPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDropItemModelPrefabPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_GETDROPITEMMODELPREFABPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundModuleRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_CREATEGROUNDMODULEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGroundModuleRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_STARTGROUNDMODULEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelProbability(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDropItemModelPrefabPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGroundModuleRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_ENDGROUNDMODULEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGroundModuleRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_FINISHGROUNDMODULEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGroundModuleRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCEL_FINISHSIZEPREFIXEDGROUNDMODULEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

