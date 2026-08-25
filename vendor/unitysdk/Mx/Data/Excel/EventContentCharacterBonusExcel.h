#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCharacterBonusExcel; }
namespace FlatData { class EventContentItemType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA40B0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETROOTASEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA40C0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETROOTASEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA4120)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA41B0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA4180)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA41D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AA4220)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_EVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AA4270)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_EVENTCONTENTITEMTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AA42D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETEVENTCONTENTITEMTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA4310)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_BONUSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1AA4330)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_BONUSPERCENTAGELENGTH_OFFSET UNITYSDK_OFFSET(0x1AA4390)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETBONUSPERCENTAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA43D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA43F0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA45E0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA4500)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AA44D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AA4560)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEEVENTCONTENTITEMTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA4600)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTEVENTCONTENTITEMTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA4690)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDBONUSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1AA4530)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEBONUSPERCENTAGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA46D0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTBONUSPERCENTAGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AA4760)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ENDEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA4590)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_FINISHEVENTCONTENTCHARACTERBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA47A0)
#define MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHARACTERBONUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA47C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCharacterBonusExcel_TypeDefinitionIndex = 17550;

	class EventContentCharacterBonusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCharacterBonusExcel* GetRootAsEventContentCharacterBonusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCharacterBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETROOTASEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCharacterBonusExcel* GetRootAsEventContentCharacterBonusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCharacterBonusExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCharacterBonusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCharacterBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETROOTASEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCharacterBonusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCharacterBonusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::EventContentItemType* EventContentItemType(::System::Int32 arg)
		{
			return (return (::FlatData::EventContentItemType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_EVENTCONTENTITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EventContentItemTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_EVENTCONTENTITEMTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentItemTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETEVENTCONTENTITEMTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 BonusPercentage(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_BONUSPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BonusPercentageLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GET_BONUSPERCENTAGELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBonusPercentageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_GETBONUSPERCENTAGEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCharacterBonusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCharacterBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentItemType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEventContentItemTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEEVENTCONTENTITEMTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEventContentItemTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTEVENTCONTENTITEMTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBonusPercentage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ADDBONUSPERCENTAGE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBonusPercentageVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_CREATEBONUSPERCENTAGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBonusPercentageVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_STARTBONUSPERCENTAGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCharacterBonusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_ENDEVENTCONTENTCHARACTERBONUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCharacterBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_FINISHEVENTCONTENTCHARACTERBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCharacterBonusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHARACTERBONUSEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHARACTERBONUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

