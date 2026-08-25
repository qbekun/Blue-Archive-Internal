#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentSpineDisplayPeriodExcel; }
namespace FlatData { class DialogCategory; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B050E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETROOTASEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1B050F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETROOTASEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1B05150)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B051E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B051B0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B05200)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B05250)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B052A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1B052F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETSHOWPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1B05330)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWPERIODTO_OFFSET UNITYSDK_OFFSET(0x1B05350)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETSHOWPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1B05390)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWWORLDRAIDCONDITIONIDFROM_OFFSET UNITYSDK_OFFSET(0x1B053B0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWWORLDRAIDCONDITIONIDTO_OFFSET UNITYSDK_OFFSET(0x1B05400)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_CREATEEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1B05450)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_STARTEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1B05740)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B05630)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B056C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B05600)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1B05690)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWPERIODTO_OFFSET UNITYSDK_OFFSET(0x1B05660)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWWORLDRAIDCONDITIONIDFROM_OFFSET UNITYSDK_OFFSET(0x1B055D0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWWORLDRAIDCONDITIONIDTO_OFFSET UNITYSDK_OFFSET(0x1B055A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ENDEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1B056F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_FINISHEVENTCONTENTSPINEDISPLAYPERIODEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B05760)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPINEDISPLAYPERIODEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B05780)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDisplayPeriodExcel_TypeDefinitionIndex = 17857;

	class EventContentSpineDisplayPeriodExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentSpineDisplayPeriodExcel* GetRootAsEventContentSpineDisplayPeriodExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDisplayPeriodExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETROOTASEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpineDisplayPeriodExcel* GetRootAsEventContentSpineDisplayPeriodExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentSpineDisplayPeriodExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDisplayPeriodExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentSpineDisplayPeriodExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETROOTASEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpineDisplayPeriodExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDisplayPeriodExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_ShowPeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowPeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETSHOWPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShowPeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowPeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GETSHOWPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ShowWorldRaidConditionIDFrom()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWWORLDRAIDCONDITIONIDFROM_OFFSET))(nullptr);
		}

		::System::Int64 get_ShowWorldRaidConditionIDTo()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_GET_SHOWWORLDRAIDCONDITIONIDTO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentSpineDisplayPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::DialogCategory*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_CREATEEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentSpineDisplayPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_STARTEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDDIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowPeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowPeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowWorldRaidConditionIDFrom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWWORLDRAIDCONDITIONIDFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowWorldRaidConditionIDTo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ADDSHOWWORLDRAIDCONDITIONIDTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentSpineDisplayPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_ENDEVENTCONTENTSPINEDISPLAYPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentSpineDisplayPeriodExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_FINISHEVENTCONTENTSPINEDISPLAYPERIODEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentSpineDisplayPeriodExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPINEDISPLAYPERIODEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

