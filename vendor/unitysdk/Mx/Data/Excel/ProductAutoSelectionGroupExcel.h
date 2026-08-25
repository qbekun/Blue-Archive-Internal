#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductAutoSelectionGroupExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C31F20)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETROOTASPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C31F30)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETROOTASPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C31F90)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C32020)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C31FF0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_PRODUCTAUTOSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C32040)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C32090)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C320E0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C32140)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C32180)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C321A0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C32200)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C32240)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_RESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C32260)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_RESULTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C322C0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETRESULTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C32300)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C32320)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x1C32370)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C323C0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C326B0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDPRODUCTAUTOSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C32570)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C32540)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C32630)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C326D0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C32760)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C32600)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C327A0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C32830)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDRESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C325D0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATERESULTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C32870)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTRESULTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C32900)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C325A0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x1C32510)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ENDPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C32660)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_FINISHPRODUCTAUTOSELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C32940)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDPRODUCTAUTOSELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C32960)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductAutoSelectionGroupExcel_TypeDefinitionIndex = 19085;

	class ProductAutoSelectionGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductAutoSelectionGroupExcel* GetRootAsProductAutoSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductAutoSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETROOTASPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductAutoSelectionGroupExcel* GetRootAsProductAutoSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductAutoSelectionGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductAutoSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductAutoSelectionGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETROOTASPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductAutoSelectionGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductAutoSelectionGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ProductAutoSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_PRODUCTAUTOSELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ResultAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_RESULTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResultAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_RESULTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GETRESULTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConditionParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CONDITIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_GET_CONDITIONPARCELID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductAutoSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductAutoSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddProductAutoSelectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDPRODUCTAUTOSELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDRESULTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResultAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_CREATERESULTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartResultAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_STARTRESULTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCONDITIONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ADDCONDITIONPARCELID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductAutoSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_ENDPRODUCTAUTOSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductAutoSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_FINISHPRODUCTAUTOSELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductAutoSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDPRODUCTAUTOSELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

