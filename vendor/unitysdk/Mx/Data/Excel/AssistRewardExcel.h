#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AssistRewardExcel; }
namespace FlatData { class AssistRewardType; }
namespace FlatData { class EchelonType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19D8DC0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GETROOTASASSISTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D8DD0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GETROOTASASSISTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D8E30)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19D8EC0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19D8E90)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D8EE0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D8F30)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D8F80)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x19D8FD0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D9020)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_CREATEASSISTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D9070)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_STARTASSISTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D92B0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D9230)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D9200)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19D91D0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x19D91A0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19D9170)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_ENDASSISTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x19D9260)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_FINISHASSISTREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D92D0)
#define MX_DATA_EXCEL_ASSISTREWARDEXCEL_FINISHSIZEPREFIXEDASSISTREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19D92F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistRewardExcel_TypeDefinitionIndex = 16689;

	class AssistRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AssistRewardExcel* GetRootAsAssistRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GETROOTASASSISTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AssistRewardExcel* GetRootAsAssistRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AssistRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::AssistRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AssistRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GETROOTASASSISTREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AssistRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AssistRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::AssistRewardType* get_RewardType()
		{
			return (return (::FlatData::AssistRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAssistRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AssistRewardType* arg, ::FlatData::EchelonType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AssistRewardType*, ::FlatData::EchelonType*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_CREATEASSISTREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAssistRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_STARTASSISTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AssistRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AssistRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDECHELONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAssistRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_ENDASSISTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAssistRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_FINISHASSISTREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAssistRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDEXCEL_FINISHSIZEPREFIXEDASSISTREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

