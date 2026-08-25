#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentClueSearchExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA8CC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETROOTASEVENTCONTENTCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA8CD0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETROOTASEVENTCONTENTCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA8D30)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA8DC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA8D90)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA8DE0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_TITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1AA8E30)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_USEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AA8E80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETUSEPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA8EC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_CLUEBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA8EE0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETCLUEBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AA8F20)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_CREATEEVENTCONTENTCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA8F40)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_STARTEVENTCONTENTCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA9130)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA9020)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1AA90B0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDUSEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AA9080)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDCLUEBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AA9050)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ENDEVENTCONTENTCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA90E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_FINISHEVENTCONTENTCLUESEARCHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA9150)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA9170)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchExcel_TypeDefinitionIndex = 17570;

	class EventContentClueSearchExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchExcel* GetRootAsEventContentClueSearchExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETROOTASEVENTCONTENTCLUESEARCHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchExcel* GetRootAsEventContentClueSearchExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentClueSearchExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentClueSearchExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETROOTASEVENTCONTENTCLUESEARCHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_TitleLocalize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_TITLELOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_UsePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_USEPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUsePrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETUSEPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ClueBGImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GET_CLUEBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClueBGImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_GETCLUEBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentClueSearchExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_CREATEEVENTCONTENTCLUESEARCHEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentClueSearchExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_STARTEVENTCONTENTCLUESEARCHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDTITLELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsePrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDUSEPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueBGImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ADDCLUEBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentClueSearchExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_ENDEVENTCONTENTCLUESEARCHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentClueSearchExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_FINISHEVENTCONTENTCLUESEARCHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentClueSearchExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

