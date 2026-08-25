#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MomotalkScheduleSpoilerPopupExcel; }
namespace FlatData { class SpoilerPopupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C14570)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GETROOTASMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C14580)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GETROOTASMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C145E0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C14670)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C14640)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14690)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1C146E0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C14730)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C14780)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C147D0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_CREATEMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C14820)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_STARTMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C14A60)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDFAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1C14950)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1C149E0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C149B0)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C14980)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C14920)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ENDMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C14A10)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_FINISHMOMOTALKSCHEDULESPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C14A80)
#define MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDMOMOTALKSCHEDULESPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C14AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MomotalkScheduleSpoilerPopupExcel_TypeDefinitionIndex = 18943;

	class MomotalkScheduleSpoilerPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* GetRootAsMomotalkScheduleSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GETROOTASMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* GetRootAsMomotalkScheduleSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GETROOTASMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_FavorScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_FAVORSCHEDULEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::SpoilerPopupType* get_PopupType()
		{
			return (return (::FlatData::SpoilerPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMomotalkScheduleSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatData::SpoilerPopupType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::FlatData::SpoilerPopupType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_CREATEMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMomotalkScheduleSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_STARTMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFavorScheduleId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDFAVORSCHEDULEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SpoilerPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMomotalkScheduleSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_ENDMOMOTALKSCHEDULESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMomotalkScheduleSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_FINISHMOMOTALKSCHEDULESPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMomotalkScheduleSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MOMOTALKSCHEDULESPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDMOMOTALKSCHEDULESPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

