#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGOpenDialogExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9ACC0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GETROOTASMINIGAMECCGOPENDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9ACD0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GETROOTASMINIGAMECCGOPENDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9AD30)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B9ADC0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B9AD90)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9ADE0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_PLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B9AE30)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_CONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9AE80)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DIALOG_OFFSET UNITYSDK_OFFSET(0x1B9AED0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1B9AF20)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1B9AF70)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_VOICE_OFFSET UNITYSDK_OFFSET(0x1B9AFC0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_CREATEMINIGAMECCGOPENDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9B010)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_STARTMINIGAMECCGOPENDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9B300)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9B1F0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B9B280)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDCONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9B1C0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDIALOG_OFFSET UNITYSDK_OFFSET(0x1B9B250)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1B9B190)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1B9B160)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDVOICE_OFFSET UNITYSDK_OFFSET(0x1B9B220)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ENDMINIGAMECCGOPENDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9B2B0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_FINISHMINIGAMECCGOPENDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9B320)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGOPENDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9B340)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGOpenDialogExcel_TypeDefinitionIndex = 18510;

	class MinigameCCGOpenDialogExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGOpenDialogExcel* GetRootAsMinigameCCGOpenDialogExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGOpenDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GETROOTASMINIGAMECCGOPENDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGOpenDialogExcel* GetRootAsMinigameCCGOpenDialogExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGOpenDialogExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGOpenDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGOpenDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GETROOTASMINIGAMECCGOPENDIALOGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGOpenDialogExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGOpenDialogExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_DialogId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DIALOGID_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_PLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionCard()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_CONDITIONCARD_OFFSET))(nullptr);
		}

		::System::UInt32 get_Dialog()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DIALOG_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::UInt32 get_Voice()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_GET_VOICE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGOpenDialogExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::UInt32, ::System::Int64, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_CREATEMINIGAMECCGOPENDIALOGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGOpenDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_STARTMINIGAMECCGOPENDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDialogId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDIALOGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionCard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDCONDITIONCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialog(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoice(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ADDVOICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGOpenDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_ENDMINIGAMECCGOPENDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGOpenDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_FINISHMINIGAMECCGOPENDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGOpenDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGOPENDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

