#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCardShopModifyExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA0970)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETROOTASEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA0980)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETROOTASEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA09E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA0A70)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA0A40)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA0A90)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_USEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AA0AE0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETUSEPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA0B20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_CREATEEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA0B40)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_STARTEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA0C80)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA0BD0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ADDUSEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AA0C00)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ENDEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA0C30)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_FINISHEVENTCONTENTCARDSHOPMODIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA0CA0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDSHOPMODIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA0CC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardShopModifyExcel_TypeDefinitionIndex = 17529;

	class EventContentCardShopModifyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCardShopModifyExcel* GetRootAsEventContentCardShopModifyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopModifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETROOTASEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardShopModifyExcel* GetRootAsEventContentCardShopModifyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCardShopModifyExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopModifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCardShopModifyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETROOTASEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardShopModifyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardShopModifyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_UsePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GET_USEPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUsePrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_GETUSEPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCardShopModifyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_CREATEEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCardShopModifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_STARTEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsePrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ADDUSEPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCardShopModifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_ENDEVENTCONTENTCARDSHOPMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCardShopModifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_FINISHEVENTCONTENTCARDSHOPMODIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCardShopModifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDSHOPMODIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

