#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestEventExcel; }
namespace FlatData { class ConquestEventType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A58DD0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETROOTASCONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A58DE0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETROOTASCONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A58E40)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A58ED0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A58EA0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A58EF0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A58F40)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_CONQUESTEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A58F90)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USEEROSION_OFFSET UNITYSDK_OFFSET(0x1A58FE0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USEUNEXPECTEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A59030)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USECALCULATE_OFFSET UNITYSDK_OFFSET(0x1A59080)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1A590D0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETMAPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A59120)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETMAPGOALLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A59160)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETMAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A59180)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETMAPNAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A591C0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MAPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A591E0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETSCENARIOBG_OFFSET UNITYSDK_OFFSET(0x1A59230)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETSCENARIOBGBYTES_OFFSET UNITYSDK_OFFSET(0x1A59270)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MANAGEUNITCHANGE_OFFSET UNITYSDK_OFFSET(0x1A59290)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A592E0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1A59330)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1A59380)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1A593D0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET UNITYSDK_OFFSET(0x1A59420)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEUNEXPECTED_OFFSET UNITYSDK_OFFSET(0x1A59470)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEUNEXPECTEDBYTES_OFFSET UNITYSDK_OFFSET(0x1A594B0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEEROSIONS_OFFSET UNITYSDK_OFFSET(0x1A594D0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEEROSIONSBYTES_OFFSET UNITYSDK_OFFSET(0x1A59510)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZESTEP_OFFSET UNITYSDK_OFFSET(0x1A59530)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZESTEPBYTES_OFFSET UNITYSDK_OFFSET(0x1A59570)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZETILE_OFFSET UNITYSDK_OFFSET(0x1A59590)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZETILEBYTES_OFFSET UNITYSDK_OFFSET(0x1A595D0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEMAPINFO_OFFSET UNITYSDK_OFFSET(0x1A595F0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEMAPINFOBYTES_OFFSET UNITYSDK_OFFSET(0x1A59630)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEMANAGE_OFFSET UNITYSDK_OFFSET(0x1A59650)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEMANAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1A59690)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEUPGRADE_OFFSET UNITYSDK_OFFSET(0x1A596B0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEUPGRADEBYTES_OFFSET UNITYSDK_OFFSET(0x1A596F0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZETREASUREBOX_OFFSET UNITYSDK_OFFSET(0x1A59710)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZETREASUREBOXBYTES_OFFSET UNITYSDK_OFFSET(0x1A59750)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_INDIVIDUALEROSIONDAILYCOUNT_OFFSET UNITYSDK_OFFSET(0x1A59770)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_CREATECONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A597C0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_STARTCONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5A160)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A59CC0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A59C90)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDCONQUESTEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A5A020)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSEEROSION_OFFSET UNITYSDK_OFFSET(0x1A5A0E0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSEUNEXPECTEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A5A0B0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSECALCULATE_OFFSET UNITYSDK_OFFSET(0x1A5A080)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1A5A050)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETMAPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A59FF0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETMAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A59FC0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMAPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A59C60)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETSCENARIOBG_OFFSET UNITYSDK_OFFSET(0x1A59F90)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMANAGEUNITCHANGE_OFFSET UNITYSDK_OFFSET(0x1A59F60)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A59F30)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0x1A59F00)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1A59ED0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x1A59EA0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITDELAY_OFFSET UNITYSDK_OFFSET(0x1A59E70)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEUNEXPECTED_OFFSET UNITYSDK_OFFSET(0x1A59E40)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEEROSIONS_OFFSET UNITYSDK_OFFSET(0x1A59E10)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZESTEP_OFFSET UNITYSDK_OFFSET(0x1A59DE0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZETILE_OFFSET UNITYSDK_OFFSET(0x1A59DB0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEMAPINFO_OFFSET UNITYSDK_OFFSET(0x1A59D80)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEMANAGE_OFFSET UNITYSDK_OFFSET(0x1A59D50)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEUPGRADE_OFFSET UNITYSDK_OFFSET(0x1A59D20)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZETREASUREBOX_OFFSET UNITYSDK_OFFSET(0x1A59CF0)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDINDIVIDUALEROSIONDAILYCOUNT_OFFSET UNITYSDK_OFFSET(0x1A59C30)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ENDCONQUESTEVENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A5A110)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_FINISHCONQUESTEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5A180)
#define MX_DATA_EXCEL_CONQUESTEVENTEXCEL_FINISHSIZEPREFIXEDCONQUESTEVENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A5A1A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestEventExcel_TypeDefinitionIndex = 17223;

	class ConquestEventExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestEventExcel* GetRootAsConquestEventExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETROOTASCONQUESTEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestEventExcel* GetRootAsConquestEventExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestEventExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestEventExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestEventExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETROOTASCONQUESTEVENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestEventExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestEventExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_MainStoryEventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MAINSTORYEVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ConquestEventType* get_ConquestEventType()
		{
			return (return (::FlatData::ConquestEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_CONQUESTEVENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseErosion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USEEROSION_OFFSET))(nullptr);
		}

		::System::Boolean get_UseUnexpectedEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USEUNEXPECTEDEVENT_OFFSET))(nullptr);
		}

		::System::Boolean get_UseCalculate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USECALCULATE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseConquestObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_USECONQUESTOBJECT_OFFSET))(nullptr);
		}

		::System::String* get_EvnetMapGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETMAPGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEvnetMapGoalLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETMAPGOALLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EvnetMapNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETMAPNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEvnetMapNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETMAPNAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_MapEnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MAPENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_EvnetScenarioBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_EVNETSCENARIOBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetEvnetScenarioBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETEVNETSCENARIOBGBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageUnitChange()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_MANAGEUNITCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_AssistCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ASSISTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayTimeLimitInSeconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_AnimationUnitAmountMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_AnimationUnitAmountMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Single get_AnimationUnitDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeUnexpected()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEUNEXPECTED_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeUnexpectedBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEUNEXPECTEDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeErosions()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEEROSIONS_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeErosionsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEEROSIONSBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeStep()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZESTEP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeStepBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZESTEPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTile()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZETILE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTileBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZETILEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeMapInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEMAPINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeMapInfoBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEMAPINFOBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeManage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEMANAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeManageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEMANAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeUpgrade()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZEUPGRADE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeUpgradeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZEUPGRADEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTreasureBox()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_LOCALIZETREASUREBOX_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTreasureBoxBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GETLOCALIZETREASUREBOXBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_IndividualErosionDailyCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_GET_INDIVIDUALEROSIONDAILYCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestEventExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConquestEventType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConquestEventType*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_CREATECONQUESTEVENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_STARTCONQUESTEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainStoryEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMAINSTORYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestEventType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestEventType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDCONQUESTEVENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseErosion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSEEROSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseUnexpectedEvent(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSEUNEXPECTEDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseCalculate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSECALCULATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseConquestObject(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDUSECONQUESTOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEvnetMapGoalLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETMAPGOALLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEvnetMapNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETMAPNAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMAPENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEvnetScenarioBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDEVNETSCENARIOBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageUnitChange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDMANAGEUNITCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAssistCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDASSISTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationUnitAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITAMOUNTMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationUnitAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITAMOUNTMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationUnitDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDANIMATIONUNITDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeUnexpected(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEUNEXPECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeErosions(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEEROSIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZESTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTile(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZETILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeMapInfo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEMAPINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeManage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEMANAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeUpgrade(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZEUPGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTreasureBox(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDLOCALIZETREASUREBOX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIndividualErosionDailyCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ADDINDIVIDUALEROSIONDAILYCOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestEventExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_ENDCONQUESTEVENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_FINISHCONQUESTEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestEventExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTEXCEL_FINISHSIZEPREFIXEDCONQUESTEVENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

