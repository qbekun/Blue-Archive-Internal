#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDiceRaceExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABE590)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETROOTASEVENTCONTENTDICERACEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABE5A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETROOTASEVENTCONTENTDICERACEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABE600)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1ABE690)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1ABE660)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABE6B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICECOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1ABE700)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_SKIPABLELAP_OFFSET UNITYSDK_OFFSET(0x1ABE750)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICERACEPAWNPREFAB_OFFSET UNITYSDK_OFFSET(0x1ABE7A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETDICERACEPAWNPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1ABE7E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_ISUSINGFIXEDDICE_OFFSET UNITYSDK_OFFSET(0x1ABE800)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FIXEDDICEICON_OFFSET UNITYSDK_OFFSET(0x1ABE850)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_FIXEDDICEICONLENGTH_OFFSET UNITYSDK_OFFSET(0x1ABE8A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_DICERACEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ABE8E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICERACEEVENTTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1ABE930)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEEVENTCONTENTDICERACEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABE970)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTEVENTCONTENTDICERACEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABEC60)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABEAF0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICECOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1ABEAC0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDSKIPABLELAP_OFFSET UNITYSDK_OFFSET(0x1ABEBB0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICERACEPAWNPREFAB_OFFSET UNITYSDK_OFFSET(0x1ABEB80)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDISUSINGFIXEDDICE_OFFSET UNITYSDK_OFFSET(0x1ABEBE0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDFIXEDDICEICON_OFFSET UNITYSDK_OFFSET(0x1ABEB50)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEFIXEDDICEICONVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABEC80)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTFIXEDDICEICONVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABED10)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICERACEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ABEB20)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEDICERACEEVENTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABED50)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTDICERACEEVENTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABEDE0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ENDEVENTCONTENTDICERACEEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABEC10)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FINISHEVENTCONTENTDICERACEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABEE20)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABEE40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceExcel_TypeDefinitionIndex = 17671;

	class EventContentDiceRaceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceExcel* GetRootAsEventContentDiceRaceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETROOTASEVENTCONTENTDICERACEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceExcel* GetRootAsEventContentDiceRaceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDiceRaceExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDiceRaceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETROOTASEVENTCONTENTDICERACEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DiceCostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICECOSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int32 get_SkipableLap()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_SKIPABLELAP_OFFSET))(nullptr);
		}

		::System::String* get_DiceRacePawnPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICERACEPAWNPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetDiceRacePawnPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GETDICERACEPAWNPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUsingFixedDice()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_ISUSINGFIXEDDICE_OFFSET))(nullptr);
		}

		::System::String* FixedDiceIcon(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FIXEDDICEICON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedDiceIconLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_FIXEDDICEICONLENGTH_OFFSET))(nullptr);
		}

		::System::String* DiceRaceEventType(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_DICERACEEVENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DiceRaceEventTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_GET_DICERACEEVENTTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDiceRaceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEEVENTCONTENTDICERACEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDiceRaceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTEVENTCONTENTDICERACEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICECOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipableLap(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDSKIPABLELAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceRacePawnPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICERACEPAWNPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsUsingFixedDice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDISUSINGFIXEDDICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedDiceIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDFIXEDDICEICON_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedDiceIconVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEFIXEDDICEICONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFixedDiceIconVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTFIXEDDICEICONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceRaceEventType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ADDDICERACEEVENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDiceRaceEventTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_CREATEDICERACEEVENTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDiceRaceEventTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_STARTDICERACEEVENTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDiceRaceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_ENDEVENTCONTENTDICERACEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDiceRaceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FINISHEVENTCONTENTDICERACEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDiceRaceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

