#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentSpoilerPopupExcel; }
namespace FlatData { class ContentType; }
namespace FlatData { class SpoilerPopupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A702E0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GETROOTASCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A702F0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GETROOTASCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A70350)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A703E0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A703B0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A70400)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1A70450)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1A704A0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A704F0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1A70540)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_CREATECONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A70590)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_STARTCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A707D0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A70750)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1A70720)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1A706F0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A706C0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1A70690)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ENDCONTENTSPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A70780)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_FINISHCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A707F0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A70810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentSpoilerPopupExcel_TypeDefinitionIndex = 17323;

	class ContentSpoilerPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentSpoilerPopupExcel* GetRootAsContentSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GETROOTASCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentSpoilerPopupExcel* GetRootAsContentSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentSpoilerPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentSpoilerPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GETROOTASCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentSpoilerPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentSpoilerPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::SpoilerPopupType* get_PopupType()
		{
			return (return (::FlatData::SpoilerPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatData::SpoilerPopupType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::System::UInt32, ::System::UInt32, ::FlatData::SpoilerPopupType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_CREATECONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_STARTCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SpoilerPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_ENDCONTENTSPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_FINISHCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDCONTENTSPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

