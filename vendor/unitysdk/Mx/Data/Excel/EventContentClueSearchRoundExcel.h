#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentClueSearchRoundExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAB420)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAB430)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AAB490)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AAB520)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AAB4F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAB540)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1AAB590)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1AAB5E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_TARGETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AAB630)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETTARGETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AAB670)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_LOCALIZELD_OFFSET UNITYSDK_OFFSET(0x1AAB690)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1AAB6E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUESLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1AAB730)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUESLOTNUMBERLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAB790)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUESLOTNUMBERBYTES_OFFSET UNITYSDK_OFFSET(0x1AAB7D0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AAB7F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAB850)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AAB890)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AAB8B0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUECOSTAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1AAB910)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUECOSTAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1AAB950)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_HINTLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AAB970)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLEARLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AAB9C0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLEARPAGEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AABA10)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLEARPAGEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AABA50)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATEEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AABA70)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AABF20)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AABCF0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0x1AABCC0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDISLOOP_OFFSET UNITYSDK_OFFSET(0x1AABEA0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDTARGETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AABE70)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDLOCALIZELD_OFFSET UNITYSDK_OFFSET(0x1AABE40)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1AABC90)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUESLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1AABE10)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUESLOTNUMBERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AABF40)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUESLOTNUMBERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AABFD0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUEID_OFFSET UNITYSDK_OFFSET(0x1AABDE0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAC010)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAC0A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AABDB0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUECOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAC0E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUECOSTAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1AAC170)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDHINTLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AABD80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLEARLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1AABD50)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLEARPAGEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AABD20)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ENDEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1AABED0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_FINISHEVENTCONTENTCLUESEARCHROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAC1B0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AAC1D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchRoundExcel_TypeDefinitionIndex = 17584;

	class EventContentClueSearchRoundExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRoundExcel* GetRootAsEventContentClueSearchRoundExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRoundExcel* GetRootAsEventContentClueSearchRoundExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentClueSearchRoundExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRoundExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentClueSearchRoundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETROOTASEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentClueSearchRoundExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentClueSearchRoundExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::String* get_TargetImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_TARGETIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETTARGETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Localizeld()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_LOCALIZELD_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 ClueSlotNumber(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUESLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClueSlotNumberLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUESLOTNUMBERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClueSlotNumberBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUESLOTNUMBERBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClueId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClueIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClueIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClueCostAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CLUECOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClueCostAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLUECOSTAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClueCostAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLUECOSTAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_HintlocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_HINTLOCALIZEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_ClearlocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLEARLOCALIZEID_OFFSET))(nullptr);
		}

		::System::String* get_ClearPageImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GET_CLEARPAGEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearPageImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_GETCLEARPAGEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentClueSearchRoundExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATEEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentClueSearchRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLoop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDISLOOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDTARGETIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeld(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDLOCALIZELD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueSlotNumber(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUESLOTNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClueSlotNumberVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUESLOTNUMBERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClueSlotNumberVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUESLOTNUMBERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClueIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClueCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLUECOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClueCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_CREATECLUECOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClueCostAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_STARTCLUECOSTAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHintlocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDHINTLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearlocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLEARLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearPageImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ADDCLEARPAGEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentClueSearchRoundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_ENDEVENTCONTENTCLUESEARCHROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentClueSearchRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_FINISHEVENTCONTENTCLUESEARCHROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentClueSearchRoundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCLUESEARCHROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

