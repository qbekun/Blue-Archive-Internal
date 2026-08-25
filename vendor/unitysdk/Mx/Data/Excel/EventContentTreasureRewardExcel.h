#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentTreasureRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B11700)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETROOTASEVENTCONTENTTREASUREREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B11710)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETROOTASEVENTCONTENTTREASUREREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B11770)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B11800)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B117D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B11820)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B11870)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETLOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B118B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B118D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B11920)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0x1B11970)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B119C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B11A20)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B11A60)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B11A80)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B11AE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B11B20)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B11B40)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B11BA0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B11BE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B11C00)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETCELLUNDERIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B11C40)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_TREASURESMALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B11C60)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETTREASURESMALLIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B11CA0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_TREASURESIZEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B11CC0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETTREASURESIZEICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B11D00)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEEVENTCONTENTTREASUREREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B11D20)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTEVENTCONTENTTREASUREREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B12180)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B11F20)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B120D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B120A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B12070)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDHIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0x1B12100)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B12040)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B121A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B12230)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1B12010)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B12270)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B12300)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B11FE0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B12340)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B123D0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B11FB0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDTREASURESMALLIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B11F80)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDTREASURESIZEICONPATH_OFFSET UNITYSDK_OFFSET(0x1B11F50)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ENDEVENTCONTENTTREASUREREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B12130)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_FINISHEVENTCONTENTTREASUREREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B12410)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B12430)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentTreasureRewardExcel_TypeDefinitionIndex = 17912;

	class EventContentTreasureRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRewardExcel* GetRootAsEventContentTreasureRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETROOTASEVENTCONTENTTREASUREREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRewardExcel* GetRootAsEventContentTreasureRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentTreasureRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentTreasureRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETROOTASEVENTCONTENTTREASUREREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCodeIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETLOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_CellUnderImageWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_CellUnderImageHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_HiddenImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_HIDDENIMAGE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CellUnderImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_CELLUNDERIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCellUnderImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETCELLUNDERIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TreasureSmallImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_TREASURESMALLIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTreasureSmallImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETTREASURESMALLIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TreasureSizeIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GET_TREASURESIZEICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTreasureSizeIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_GETTREASURESIZEICONPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentTreasureRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEEVENTCONTENTTREASUREREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentTreasureRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTEVENTCONTENTTREASUREREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellUnderImageWidth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellUnderImageHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHiddenImage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDHIDDENIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCellUnderImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDCELLUNDERIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureSmallImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDTREASURESMALLIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureSizeIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ADDTREASURESIZEICONPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentTreasureRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_ENDEVENTCONTENTTREASUREREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentTreasureRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_FINISHEVENTCONTENTTREASUREREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentTreasureRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREREWARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

