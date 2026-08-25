#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentConcentrationExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB2680)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB2690)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB26F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AB2780)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AB2750)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB27A0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1AB27F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_MAXCARDPAIRCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2840)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_MAXCARDOPENCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2890)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_INSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1AB28E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_CARDBOARDPREFABS_OFFSET UNITYSDK_OFFSET(0x1AB2930)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETCARDBOARDPREFABSBYTES_OFFSET UNITYSDK_OFFSET(0x1AB2970)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_BACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB2990)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETBACKIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AB29D0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_CREATEEVENTCONTENTCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB29F0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_STARTEVENTCONTENTCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB2CE0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB2B70)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDCOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1AB2B40)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDMAXCARDPAIRCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2C60)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDMAXCARDOPENCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2C30)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDINSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x1AB2C00)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDCARDBOARDPREFABS_OFFSET UNITYSDK_OFFSET(0x1AB2BD0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AB2BA0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ENDEVENTCONTENTCONCENTRATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB2C90)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_FINISHEVENTCONTENTCONCENTRATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB2D00)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB2D20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationExcel_TypeDefinitionIndex = 17614;

	class EventContentConcentrationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationExcel* GetRootAsEventContentConcentrationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationExcel* GetRootAsEventContentConcentrationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentConcentrationExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentConcentrationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCardPairCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_MAXCARDPAIRCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCardOpenCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_MAXCARDOPENCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_InstantClearRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_INSTANTCLEARROUND_OFFSET))(nullptr);
		}

		::System::String* get_CardBoardPrefabs()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_CARDBOARDPREFABS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCardBoardPrefabsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETCARDBOARDPREFABSBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BackImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GET_BACKIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_GETBACKIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentConcentrationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_CREATEEVENTCONTENTCONCENTRATIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentConcentrationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_STARTEVENTCONTENTCONCENTRATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDCOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxCardPairCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDMAXCARDPAIRCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxCardOpenCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDMAXCARDOPENCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInstantClearRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDINSTANTCLEARROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardBoardPrefabs(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDCARDBOARDPREFABS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ADDBACKIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentConcentrationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_ENDEVENTCONTENTCONCENTRATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentConcentrationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_FINISHEVENTCONTENTCONCENTRATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentConcentrationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

