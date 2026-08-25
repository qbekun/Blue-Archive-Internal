#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioModeSpoilerPopupExcel; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class SpoilerPopupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C639E0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GETROOTASSCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C639F0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GETROOTASSCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C63A50)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C63AE0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C63AB0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1C63B00)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C63B50)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C63BA0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C63BF0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1C63C40)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C63C90)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C63CE0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C63D30)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_CREATESCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C63D80)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_STARTSCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C640D0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDMODETYPE_OFFSET UNITYSDK_OFFSET(0x1C64050)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C64020)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C63F60)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C63F30)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET UNITYSDK_OFFSET(0x1C63FF0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C63FC0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C63F90)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C63F00)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ENDSCENARIOMODESPOILERPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C64080)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_FINISHSCENARIOMODESPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C640F0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDSCENARIOMODESPOILERPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C64110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeSpoilerPopupExcel_TypeDefinitionIndex = 19304;

	class ScenarioModeSpoilerPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeSpoilerPopupExcel* GetRootAsScenarioModeSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GETROOTASSCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeSpoilerPopupExcel* GetRootAsScenarioModeSpoilerPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioModeSpoilerPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeSpoilerPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioModeSpoilerPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GETROOTASSCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeSpoilerPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeSpoilerPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_MODETYPE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SPOILERPOPUPTITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_SpoilerPopupDescription()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_SPOILERPOPUPDESCRIPTION_OFFSET))(nullptr);
		}

		::FlatData::SpoilerPopupType* get_PopupType()
		{
			return (return (::FlatData::SpoilerPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_GET_CONDITIONSCENARIOMODEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioModeSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatData::SpoilerPopupType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::UInt32, ::FlatData::SpoilerPopupType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_CREATESCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioModeSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_STARTSCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddModeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDMODETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSUBTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolumeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDVOLUMEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDCHAPTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSPOILERPOPUPTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpoilerPopupDescription(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDSPOILERPOPUPDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SpoilerPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SpoilerPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ADDCONDITIONSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioModeSpoilerPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_ENDSCENARIOMODESPOILERPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioModeSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_FINISHSCENARIOMODESPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioModeSpoilerPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCEL_FINISHSIZEPREFIXEDSCENARIOMODESPOILERPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

