#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentConcentrationCardExcel; }
namespace FlatData { class Rarity; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB0570)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB0580)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB05E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AB0670)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AB0640)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB0690)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1AB06E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1AB0730)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB0780)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AB07C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_CREATEEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB07E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_STARTEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB09D0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB08F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDCARDID_OFFSET UNITYSDK_OFFSET(0x1AB08C0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDRARITY_OFFSET UNITYSDK_OFFSET(0x1AB0950)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB0920)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ENDEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB0980)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_FINISHEVENTCONTENTCONCENTRATIONCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB09F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB0A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationCardExcel_TypeDefinitionIndex = 17604;

	class EventContentConcentrationCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationCardExcel* GetRootAsEventContentConcentrationCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationCardExcel* GetRootAsEventContentConcentrationCardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentConcentrationCardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentConcentrationCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_CARDID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_RARITY_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentConcentrationCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::Rarity* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::Rarity*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_CREATEEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentConcentrationCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_STARTEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDCARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRarity(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDRARITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentConcentrationCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_ENDEVENTCONTENTCONCENTRATIONCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentConcentrationCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_FINISHEVENTCONTENTCONCENTRATIONCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentConcentrationCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONCARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

