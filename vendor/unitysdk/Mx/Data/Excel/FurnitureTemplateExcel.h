#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FurnitureTemplateExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2EE80)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETROOTASFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2EE90)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETROOTASFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2EEF0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B2EF80)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B2EF50)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2EFA0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_FUNITURETEMPLATETITLE_OFFSET UNITYSDK_OFFSET(0x1B2EFF0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_THUMBNAILIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B2F040)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETTHUMBNAILIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B2F080)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B2F0A0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B2F0E0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_CREATEFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2F100)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_STARTFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2F2F0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDFURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2F1E0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDFUNITURETEMPLATETITLE_OFFSET UNITYSDK_OFFSET(0x1B2F270)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDTHUMBNAILIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B2F240)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B2F210)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ENDFURNITURETEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2F2A0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_FINISHFURNITURETEMPLATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2F310)
#define MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_FINISHSIZEPREFIXEDFURNITURETEMPLATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2F330)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateExcel_TypeDefinitionIndex = 18038;

	class FurnitureTemplateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateExcel* GetRootAsFurnitureTemplateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETROOTASFURNITURETEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateExcel* GetRootAsFurnitureTemplateExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FurnitureTemplateExcel* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FurnitureTemplateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETROOTASFURNITURETEMPLATEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_FurnitureTemplateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_FURNITURETEMPLATEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_FunitureTemplateTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_FUNITURETEMPLATETITLE_OFFSET))(nullptr);
		}

		::System::String* get_ThumbnailImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_THUMBNAILIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetThumbnailImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETTHUMBNAILIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFurnitureTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_CREATEFURNITURETEMPLATEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFurnitureTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_STARTFURNITURETEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFurnitureTemplateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDFURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFunitureTemplateTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDFUNITURETEMPLATETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThumbnailImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDTHUMBNAILIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFurnitureTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_ENDFURNITURETEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFurnitureTemplateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_FINISHFURNITURETEMPLATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFurnitureTemplateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEEXCEL_FINISHSIZEPREFIXEDFURNITURETEMPLATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

