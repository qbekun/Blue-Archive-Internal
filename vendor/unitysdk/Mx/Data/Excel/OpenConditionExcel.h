#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class OpenConditionExcel; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatData { class WeekDay; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1FA10)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETROOTASOPENCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1FA20)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETROOTASOPENCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1FA80)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C1FB10)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C1FAE0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C1FB30)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_LOCKUI_OFFSET UNITYSDK_OFFSET(0x1C1FB80)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_LOCKUILENGTH_OFFSET UNITYSDK_OFFSET(0x1C1FBD0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTPOPUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C1FC10)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_SHORTCUTUINAME_OFFSET UNITYSDK_OFFSET(0x1C1FC60)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTUINAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1C1FCB0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTPARAM_OFFSET UNITYSDK_OFFSET(0x1C1FCF0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1C1FD40)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETSCENEBYTES_OFFSET UNITYSDK_OFFSET(0x1C1FD80)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1FDA0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C1FDF0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C1FE40)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C1FE90)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1C1FEE0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C1FF30)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENHOUR_OFFSET UNITYSDK_OFFSET(0x1C1FF80)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CLOSEDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C1FFD0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CLOSEHOUR_OFFSET UNITYSDK_OFFSET(0x1C20020)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENEDCAFEID_OFFSET UNITYSDK_OFFSET(0x1C20070)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAFEIDFORCAFERANK_OFFSET UNITYSDK_OFFSET(0x1C200C0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAFERANK_OFFSET UNITYSDK_OFFSET(0x1C20110)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CONTENTSOPENSHOW_OFFSET UNITYSDK_OFFSET(0x1C20160)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CONTENTSOPENSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1C201B0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETCONTENTSOPENSHORTCUTUIBYTES_OFFSET UNITYSDK_OFFSET(0x1C201F0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATEOPENCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C20210)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTOPENCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C20990)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C208B0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDLOCKUI_OFFSET UNITYSDK_OFFSET(0x1C20880)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATELOCKUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1C209B0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTLOCKUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1C20A40)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTPOPUPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C20700)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTUINAME_OFFSET UNITYSDK_OFFSET(0x1C20850)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATESHORTCUTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C20A80)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTSHORTCUTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C20B10)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTPARAM_OFFSET UNITYSDK_OFFSET(0x1C20820)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSCENE_OFFSET UNITYSDK_OFFSET(0x1C207F0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDHIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1C20910)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C206D0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C206A0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C20670)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1C207C0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C20790)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENHOUR_OFFSET UNITYSDK_OFFSET(0x1C20640)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCLOSEDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1C20760)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCLOSEHOUR_OFFSET UNITYSDK_OFFSET(0x1C20610)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENEDCAFEID_OFFSET UNITYSDK_OFFSET(0x1C205E0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAFEIDFORCAFERANK_OFFSET UNITYSDK_OFFSET(0x1C205B0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAFERANK_OFFSET UNITYSDK_OFFSET(0x1C20580)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCONTENTSOPENSHOW_OFFSET UNITYSDK_OFFSET(0x1C208E0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCONTENTSOPENSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1C20730)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_ENDOPENCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C20940)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_FINISHOPENCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C20B50)
#define MX_DATA_EXCEL_OPENCONDITIONEXCEL_FINISHSIZEPREFIXEDOPENCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C20B70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OpenConditionExcel_TypeDefinitionIndex = 18995;

	class OpenConditionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::OpenConditionExcel* GetRootAsOpenConditionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::OpenConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETROOTASOPENCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::OpenConditionExcel* GetRootAsOpenConditionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::OpenConditionExcel* arg)
		{
			return (return (::MX::Data::Excel::OpenConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::OpenConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETROOTASOPENCONDITIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::OpenConditionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::OpenConditionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContentType()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENCONDITIONCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* LockUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_LOCKUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LockUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_LOCKUILENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_ShortcutPopupPriority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTPOPUPPRIORITY_OFFSET))(nullptr);
		}

		::System::String* ShortcutUIName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_SHORTCUTUINAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUINameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTUINAMELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_ShortcutParam()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SHORTCUTPARAM_OFFSET))(nullptr);
		}

		::System::String* get_Scene()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SCENE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSceneBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETSCENEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HideWhenLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_HIDEWHENLOCKED_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CampaignStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAMPAIGNSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::FlatData::WeekDay* get_OpenDayOfWeek()
		{
			return (return (::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENDAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenHour()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENHOUR_OFFSET))(nullptr);
		}

		::FlatData::WeekDay* get_CloseDayOfWeek()
		{
			return (return (::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CLOSEDAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_CloseHour()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CLOSEHOUR_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenedCafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_OPENEDCAFEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeIdforCafeRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAFEIDFORCAFERANK_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CAFERANK_OFFSET))(nullptr);
		}

		::System::Boolean get_ContentsOpenShow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CONTENTSOPENSHOW_OFFSET))(nullptr);
		}

		::System::String* get_ContentsOpenShortcutUI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GET_CONTENTSOPENSHORTCUTUI_OFFSET))(nullptr);
		}

		Il2CppObject* GetContentsOpenShortcutUIBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_GETCONTENTSOPENSHORTCUTUIBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateOpenConditionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MultipleConditionCheckType* arg, ::FlatData::WeekDay* arg, ::System::Int64 arg, ::FlatData::WeekDay* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::MultipleConditionCheckType*, ::FlatData::WeekDay*, ::System::Int64, ::FlatData::WeekDay*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATEOPENCONDITIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartOpenConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTOPENCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddOpenConditionContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENCONDITIONCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLockUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDLOCKUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLockUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATELOCKUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLockUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTLOCKUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutPopupPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTPOPUPPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUIName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTUINAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_CREATESHORTCUTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_STARTSHORTCUTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutParam(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSHORTCUTPARAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScene(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSCENE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideWhenLocked(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDHIDEWHENLOCKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampaignStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAMPAIGNSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenDayOfWeek(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENDAYOFWEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenHour(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENHOUR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseDayOfWeek(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCLOSEDAYOFWEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseHour(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCLOSEHOUR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenedCafeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDOPENEDCAFEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeIdforCafeRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAFEIDFORCAFERANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCAFERANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentsOpenShow(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCONTENTSOPENSHOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentsOpenShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ADDCONTENTSOPENSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndOpenConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_ENDOPENCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishOpenConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_FINISHOPENCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedOpenConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCEL_FINISHSIZEPREFIXEDOPENCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

