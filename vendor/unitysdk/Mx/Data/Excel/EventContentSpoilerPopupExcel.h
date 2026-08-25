#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentSpoilerPopupExcel; }
namespace FlatData { class SpoilerPopupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B07480)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GETROOTASEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B07490)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GETROOTASEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B074F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B07580)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B07550)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B075A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1B075F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B07640)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B07690)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B076E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_CREATEEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B07730)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_STARTEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B07970)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B07860)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1B078F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B078C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B07890)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B07830)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ENDEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B07920)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_FINISHEVENTCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B07990)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B079B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpoilerPopupExcel_TypeDefinitionIndex = 17867;

	class EventContentSpoilerPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentSpoilerPopupExcel* GetRootAsEventContentSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GETROOTASEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpoilerPopupExcel* GetRootAsEventContentSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentSpoilerPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentSpoilerPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GETROOTASEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpoilerPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpoilerPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::SpoilerPopupType* get_PopupType()
		{
			return (return (::FlatData::SpoilerPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatData::SpoilerPopupType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::FlatData::SpoilerPopupType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_CREATEEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_STARTEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SpoilerPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_ENDEVENTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_FINISHEVENTCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

