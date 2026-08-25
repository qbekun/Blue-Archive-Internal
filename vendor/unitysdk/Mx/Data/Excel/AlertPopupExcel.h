#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AlertPopupExcel; }
namespace FlatData { class SpoilerPopupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19CD830)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GETROOTASALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CD840)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GETROOTASALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CD8A0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19CD930)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19CD900)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CD950)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_CHECKCONFIRMABLE_OFFSET UNITYSDK_OFFSET(0x19CD9A0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SYSTEMPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x19CD9F0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SYSTEMPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19CDA40)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x19CDA90)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19CDAE0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x19CDB30)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_CREATEALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CDB80)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_STARTALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CDE70)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19CDCD0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDCHECKCONFIRMABLE_OFFSET UNITYSDK_OFFSET(0x19CDDF0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSYSTEMPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x19CDDC0)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSYSTEMPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19CDD90)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x19CDD60)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19CDD30)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x19CDD00)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_ENDALERTPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x19CDE20)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_FINISHALERTPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CDE90)
#define MX_DATA_EXCEL_ALERTPOPUPEXCEL_FINISHSIZEPREFIXEDALERTPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CDEB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AlertPopupExcel_TypeDefinitionIndex = 16630;

	class AlertPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AlertPopupExcel* GetRootAsAlertPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AlertPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GETROOTASALERTPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AlertPopupExcel* GetRootAsAlertPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AlertPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::AlertPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AlertPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GETROOTASALERTPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AlertPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AlertPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckConfirmAble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_CHECKCONFIRMABLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SystemPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SYSTEMPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SystemPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SYSTEMPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::SpoilerPopupType* get_PopupType()
		{
			return (return (::FlatData::SpoilerPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAlertPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatData::SpoilerPopupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_CREATEALERTPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAlertPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_STARTALERTPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCheckConfirmAble(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDCHECKCONFIRMABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSystemPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSYSTEMPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSystemPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSYSTEMPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SpoilerPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ADDPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAlertPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_ENDALERTPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAlertPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_FINISHALERTPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAlertPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCEL_FINISHSIZEPREFIXEDALERTPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

