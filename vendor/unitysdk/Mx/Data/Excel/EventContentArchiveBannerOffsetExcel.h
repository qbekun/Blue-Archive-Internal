#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentArchiveBannerOffsetExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A939F0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GETROOTASEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1A93A00)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GETROOTASEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1A93A60)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A93AF0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A93AC0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A93B10)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x1A93B60)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x1A93BB0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1A93C00)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1A93C50)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_CREATEEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1A93CA0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_STARTEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1A93F10)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A93DD0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDOFFSETX_OFFSET UNITYSDK_OFFSET(0x1A93E90)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDOFFSETY_OFFSET UNITYSDK_OFFSET(0x1A93E60)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDSCALEX_OFFSET UNITYSDK_OFFSET(0x1A93E30)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDSCALEY_OFFSET UNITYSDK_OFFSET(0x1A93E00)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ENDEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1A93EC0)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_FINISHEVENTCONTENTARCHIVEBANNEROFFSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A93F30)
#define MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTARCHIVEBANNEROFFSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A93F50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentArchiveBannerOffsetExcel_TypeDefinitionIndex = 17468;

	class EventContentArchiveBannerOffsetExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentArchiveBannerOffsetExcel* GetRootAsEventContentArchiveBannerOffsetExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentArchiveBannerOffsetExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GETROOTASEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentArchiveBannerOffsetExcel* GetRootAsEventContentArchiveBannerOffsetExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentArchiveBannerOffsetExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentArchiveBannerOffsetExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentArchiveBannerOffsetExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GETROOTASEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentArchiveBannerOffsetExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentArchiveBannerOffsetExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Single get_OffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_OFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_OffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_OFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_ScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_SCALEX_OFFSET))(nullptr);
		}

		::System::Single get_ScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_GET_SCALEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentArchiveBannerOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_CREATEEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentArchiveBannerOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_STARTEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScaleX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDSCALEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScaleY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ADDSCALEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentArchiveBannerOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_ENDEVENTCONTENTARCHIVEBANNEROFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentArchiveBannerOffsetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_FINISHEVENTCONTENTARCHIVEBANNEROFFSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentArchiveBannerOffsetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTARCHIVEBANNEROFFSETEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTARCHIVEBANNEROFFSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

