#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CombatEmojiExcel; }
namespace FlatData { class EmojiEvent; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4FE80)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GETROOTASCOMBATEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4FE90)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GETROOTASCOMBATEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4FEF0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A4FF80)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A4FF50)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A4FFA0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A4FFF0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_ORDEROFPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A50040)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIDURATION_OFFSET UNITYSDK_OFFSET(0x1A50090)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIREVERSAL_OFFSET UNITYSDK_OFFSET(0x1A500E0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJITURNON_OFFSET UNITYSDK_OFFSET(0x1A50130)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_SHOWEMOJIDELAY_OFFSET UNITYSDK_OFFSET(0x1A50180)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_SHOWDEFAULTBG_OFFSET UNITYSDK_OFFSET(0x1A501D0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_CREATECOMBATEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A50220)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_STARTCOMBATEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A50570)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A503A0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A50430)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDORDEROFPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A50400)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIDURATION_OFFSET UNITYSDK_OFFSET(0x1A504F0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIREVERSAL_OFFSET UNITYSDK_OFFSET(0x1A504C0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJITURNON_OFFSET UNITYSDK_OFFSET(0x1A50490)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDSHOWEMOJIDELAY_OFFSET UNITYSDK_OFFSET(0x1A503D0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDSHOWDEFAULTBG_OFFSET UNITYSDK_OFFSET(0x1A50460)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_ENDCOMBATEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A50520)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_FINISHCOMBATEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A50590)
#define MX_DATA_EXCEL_COMBATEMOJIEXCEL_FINISHSIZEPREFIXEDCOMBATEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A505B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CombatEmojiExcel_TypeDefinitionIndex = 17182;

	class CombatEmojiExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CombatEmojiExcel* GetRootAsCombatEmojiExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CombatEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GETROOTASCOMBATEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CombatEmojiExcel* GetRootAsCombatEmojiExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CombatEmojiExcel* arg)
		{
			return (return (::MX::Data::Excel::CombatEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CombatEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GETROOTASCOMBATEMOJIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CombatEmojiExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CombatEmojiExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::EmojiEvent* get_EmojiEvent()
		{
			return (return (::FlatData::EmojiEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIEVENT_OFFSET))(nullptr);
		}

		::System::Int32 get_OrderOfPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_ORDEROFPRIORITY_OFFSET))(nullptr);
		}

		::System::Boolean get_EmojiDuration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_EmojiReversal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJIREVERSAL_OFFSET))(nullptr);
		}

		::System::Boolean get_EmojiTurnOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_EMOJITURNON_OFFSET))(nullptr);
		}

		::System::Int32 get_ShowEmojiDelay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_SHOWEMOJIDELAY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowDefaultBG()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_GET_SHOWDEFAULTBG_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCombatEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EmojiEvent* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EmojiEvent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_CREATECOMBATEMOJIEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCombatEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_STARTCOMBATEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiEvent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmojiEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmojiEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderOfPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDORDEROFPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiReversal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJIREVERSAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmojiTurnOn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDEMOJITURNON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowEmojiDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDSHOWEMOJIDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowDefaultBG(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ADDSHOWDEFAULTBG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCombatEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_ENDCOMBATEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCombatEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_FINISHCOMBATEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCombatEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCEL_FINISHSIZEPREFIXEDCOMBATEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

