#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentPlayGuideExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF5A60)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETROOTASEVENTCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF5A70)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETROOTASEVENTCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF5AD0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AF5B60)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AF5B30)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF5B80)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF5BD0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1AF5C20)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AF5C70)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1AF5CC0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF5D00)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF5D20)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF5D60)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1AF5D80)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1AF5DC0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_CREATEEVENTCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF5DE0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_STARTEVENTCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF60D0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AF5F60)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF5F30)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1AF6050)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AF6020)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1AF5FF0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF5FC0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1AF5F90)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ENDEVENTCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF6080)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_FINISHEVENTCONTENTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF60F0)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF6110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentPlayGuideExcel_TypeDefinitionIndex = 17795;

	class EventContentPlayGuideExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentPlayGuideExcel* GetRootAsEventContentPlayGuideExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETROOTASEVENTCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentPlayGuideExcel* GetRootAsEventContentPlayGuideExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentPlayGuideExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETROOTASEVENTCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentPlayGuideExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentPlayGuideExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPcBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_GuideTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTitleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_CREATEEVENTCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_STARTEVENTCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPcBuild(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_ENDEVENTCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_FINISHEVENTCONTENTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

