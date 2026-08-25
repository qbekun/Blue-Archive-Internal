#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AccountLevelRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19CB9F0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GETROOTASACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19CBA00)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GETROOTASACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19CBA60)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19CBAF0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19CBAC0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CBB10)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CBB60)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19CBBB0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x19CBC00)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19CBC50)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_CREATEACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19CBCA0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_STARTACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19CBEF0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19CBE40)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x19CBE10)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19CBE70)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x19CBDE0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19CBDB0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ENDACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19CBEA0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_FINISHACCOUNTLEVELREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CBF10)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_FINISHSIZEPREFIXEDACCOUNTLEVELREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CBF30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelRewardExcel_TypeDefinitionIndex = 16620;

	class AccountLevelRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AccountLevelRewardExcel* GetRootAsAccountLevelRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GETROOTASACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AccountLevelRewardExcel* GetRootAsAccountLevelRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AccountLevelRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AccountLevelRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GETROOTASACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AccountLevelRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAccountLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_CREATEACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAccountLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_STARTACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAccountLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_ENDACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAccountLevelRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_FINISHACCOUNTLEVELREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAccountLevelRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCEL_FINISHSIZEPREFIXEDACCOUNTLEVELREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

