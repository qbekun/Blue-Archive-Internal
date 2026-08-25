#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductDailyRecordRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C37F50)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETROOTASPRODUCTDAILYRECORDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C37F60)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETROOTASPRODUCTDAILYRECORDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C37FC0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C38050)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C38020)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C38070)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1C380C0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C38110)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C38170)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C381B0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0x1C381D0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C38230)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C38270)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C38290)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C382F0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C38330)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEPRODUCTDAILYRECORDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C38350)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTPRODUCTDAILYRECORDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C38590)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C38450)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDDAY_OFFSET UNITYSDK_OFFSET(0x1C38510)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C384E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C385B0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C38640)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1C384B0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C38680)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C38710)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C38480)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C38750)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C387E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ENDPRODUCTDAILYRECORDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C38540)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_FINISHPRODUCTDAILYRECORDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C38820)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C38840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordRewardExcel_TypeDefinitionIndex = 19113;

	class ProductDailyRecordRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordRewardExcel* GetRootAsProductDailyRecordRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETROOTASPRODUCTDAILYRECORDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordRewardExcel* GetRootAsProductDailyRecordRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductDailyRecordRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductDailyRecordRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETROOTASPRODUCTDAILYRECORDREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_DAY_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_REWARDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GET_REWARDAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_GETREWARDAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductDailyRecordRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEPRODUCTDAILYRECORDREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductDailyRecordRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTPRODUCTDAILYRECORDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_CREATEREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_STARTREWARDAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductDailyRecordRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_ENDPRODUCTDAILYRECORDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductDailyRecordRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_FINISHPRODUCTDAILYRECORDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductDailyRecordRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

