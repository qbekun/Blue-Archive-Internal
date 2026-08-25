#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentTreasureExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B104A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETROOTASEVENTCONTENTTREASUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B104B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETROOTASEVENTCONTENTTREASUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B10510)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B105A0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B10570)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B105C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_TITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1B10610)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETTITLELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1B10650)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_LOOPROUND_OFFSET UNITYSDK_OFFSET(0x1B10670)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_USEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B106C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETUSEPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B10700)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_TREASUREBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B10720)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETTREASUREBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B10760)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_CREATEEVENTCONTENTTREASUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B10780)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_STARTEVENTCONTENTTREASUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B109C0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B10880)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1B10940)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDLOOPROUND_OFFSET UNITYSDK_OFFSET(0x1B10910)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDUSEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B108E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDTREASUREBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B108B0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ENDEVENTCONTENTTREASUREEXCEL_OFFSET UNITYSDK_OFFSET(0x1B10970)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_FINISHEVENTCONTENTTREASUREEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B109E0)
#define MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B10A00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentTreasureExcel_TypeDefinitionIndex = 17905;

	class EventContentTreasureExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentTreasureExcel* GetRootAsEventContentTreasureExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETROOTASEVENTCONTENTTREASUREEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureExcel* GetRootAsEventContentTreasureExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentTreasureExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentTreasureExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETROOTASEVENTCONTENTTREASUREEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentTreasureExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentTreasureExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_TITLELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETTITLELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_LoopRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_LOOPROUND_OFFSET))(nullptr);
		}

		::System::String* get_UsePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_USEPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUsePrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETUSEPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TreasureBGImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GET_TREASUREBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTreasureBGImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_GETTREASUREBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentTreasureExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_CREATEEVENTCONTENTTREASUREEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentTreasureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_STARTEVENTCONTENTTREASUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDTITLELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDLOOPROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsePrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDUSEPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTreasureBGImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ADDTREASUREBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentTreasureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_ENDEVENTCONTENTTREASUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentTreasureExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_FINISHEVENTCONTENTTREASUREEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentTreasureExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTTREASUREEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTTREASUREEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

