#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestPlayGuideExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A63320)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETROOTASCONQUESTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A63330)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETROOTASCONQUESTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A63390)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A63420)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A633F0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A63440)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A63490)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A634E0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1A63530)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET UNITYSDK_OFFSET(0x1A63570)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A63590)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A635D0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1A635F0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1A63630)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_CREATECONQUESTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A63650)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_STARTCONQUESTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A638F0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A637B0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A63780)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A63870)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1A63840)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A63810)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1A637E0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ENDCONQUESTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A638A0)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_FINISHCONQUESTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A63910)
#define MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDCONQUESTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A63930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestPlayGuideExcel_TypeDefinitionIndex = 17264;

	class ConquestPlayGuideExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestPlayGuideExcel* GetRootAsConquestPlayGuideExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETROOTASCONQUESTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestPlayGuideExcel* GetRootAsConquestPlayGuideExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestPlayGuideExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETROOTASCONQUESTPLAYGUIDEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestPlayGuideExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestPlayGuideExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_GuideTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTitleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_CREATECONQUESTPLAYGUIDEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_STARTCONQUESTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_ENDCONQUESTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_FINISHCONQUESTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDCONQUESTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

