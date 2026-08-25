#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class Club; }
namespace FlatData { class EventContentType; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5F410)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETROOTASSCENARIOMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5F420)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETROOTASSCENARIOMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5F480)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C5F510)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C5F4E0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MODEID_OFFSET UNITYSDK_OFFSET(0x1C5F530)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1C5F580)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C5F5D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_DISPLAYVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C5F620)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETDISPLAYVOLUMEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C5F660)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C5F680)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C5F6D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EPISODEID_OFFSET UNITYSDK_OFFSET(0x1C5F720)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1C5F770)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETEXPOSEDTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5F7B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_HIDE_OFFSET UNITYSDK_OFFSET(0x1C5F7D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_OPEN_OFFSET UNITYSDK_OFFSET(0x1C5F820)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOOPENDATE_OFFSET UNITYSDK_OFFSET(0x1C5F870)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSCENARIOOPENDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5F8B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1C5F8D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSCENARIOCLOSEDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5F910)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C5F930)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EPISODECONTINUEMODEID_OFFSET UNITYSDK_OFFSET(0x1C5F980)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_FRONTSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1C5F9D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FRONTSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5FA30)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETFRONTSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C5FA70)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C5FA90)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C5FAE0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x1C5FB30)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C5FB80)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0x1C5FBD0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_BACKSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1C5FC20)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BACKSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5FC80)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETBACKSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C5FCC0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_CLEAREDMODEID_OFFSET UNITYSDK_OFFSET(0x1C5FCE0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CLEAREDMODEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5FD40)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETCLEAREDMODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C5FD80)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C5FDA0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISSCENARIOSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x1C5FDF0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SPECIALREWARDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C5FE40)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSPECIALREWARDPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5FE80)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SPECIALREWARDLOGOUT_OFFSET UNITYSDK_OFFSET(0x1C5FEA0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1C5FEF0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CLEAREDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C5FF40)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_NEEDCLUB_OFFSET UNITYSDK_OFFSET(0x1C5FF90)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_NEEDCLUBSTUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FFE0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C60030)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C60080)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C600D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTCONDITIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C60120)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C60170)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1C601C0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C60210)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1C60260)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETEVENTICONPARCELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C602A0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTBANNERTITLE_OFFSET UNITYSDK_OFFSET(0x1C602C0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_LOF_OFFSET UNITYSDK_OFFSET(0x1C60310)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C60360)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1C603B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_COMPLETEREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C60400)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETCOMPLETEREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C60440)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C60460)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_COLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C604B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIRSTCLEARFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C60500)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETFIRSTCLEARFUNNELMESSAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1C60540)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATESCENARIOMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C60560)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTSCENARIOMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C61650)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMODEID_OFFSET UNITYSDK_OFFSET(0x1C61060)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMODETYPE_OFFSET UNITYSDK_OFFSET(0x1C61480)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C61450)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDDISPLAYVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C61420)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C61030)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C61000)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEPISODEID_OFFSET UNITYSDK_OFFSET(0x1C60FD0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1C613F0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDHIDE_OFFSET UNITYSDK_OFFSET(0x1C615D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDOPEN_OFFSET UNITYSDK_OFFSET(0x1C615A0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOOPENDATE_OFFSET UNITYSDK_OFFSET(0x1C613C0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1C61390)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C61570)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEPISODECONTINUEMODEID_OFFSET UNITYSDK_OFFSET(0x1C60FA0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFRONTSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1C61360)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATEFRONTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C61670)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTFRONTSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C61700)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTRATEGYID_OFFSET UNITYSDK_OFFSET(0x1C60F70)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1C60F40)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x1C61540)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C60F10)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIELDDATEID_OFFSET UNITYSDK_OFFSET(0x1C60EE0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDBACKSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1C61330)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATEBACKSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C61740)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTBACKSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C617D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCLEAREDMODEID_OFFSET UNITYSDK_OFFSET(0x1C61300)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATECLEAREDMODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C61810)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTCLEAREDMODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C618A0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C60EB0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISSCENARIOSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x1C61510)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSPECIALREWARDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C612D0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSPECIALREWARDLOGOUT_OFFSET UNITYSDK_OFFSET(0x1C614E0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x1C60E80)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCLEAREDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1C60E50)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDNEEDCLUB_OFFSET UNITYSDK_OFFSET(0x1C612A0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDNEEDCLUBSTUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C61270)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C60E20)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C61240)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C60DF0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTCONDITIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C60DC0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C61210)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1C611E0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C611B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1C61180)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTBANNERTITLE_OFFSET UNITYSDK_OFFSET(0x1C61150)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDLOF_OFFSET UNITYSDK_OFFSET(0x1C614B0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C61120)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1C60D90)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCOMPLETEREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C610F0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C610C0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C60D60)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIRSTCLEARFUNNELMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C61090)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_ENDSCENARIOMODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C61600)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_FINISHSCENARIOMODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C618E0)
#define MX_DATA_EXCEL_SCENARIOMODEEXCEL_FINISHSIZEPREFIXEDSCENARIOMODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C61900)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeExcel_TypeDefinitionIndex = 19290;

	class ScenarioModeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* GetRootAsScenarioModeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETROOTASSCENARIOMODEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* GetRootAsScenarioModeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETROOTASSCENARIOMODEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MODEID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MODETYPE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::String* get_DisplayVolumeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_DISPLAYVOLUMEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetDisplayVolumeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETDISPLAYVOLUMEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_EpisodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EPISODEID_OFFSET))(nullptr);
		}

		::System::String* get_ExposedTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EXPOSEDTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetExposedTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETEXPOSEDTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_Hide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_HIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_Open()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_OPEN_OFFSET))(nullptr);
		}

		::System::String* get_ScenarioOpenDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOOPENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioOpenDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSCENARIOOPENDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ScenarioCloseDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOCLOSEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioCloseDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSCENARIOCLOSEDATEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContinue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISCONTINUE_OFFSET))(nullptr);
		}

		::System::Int64 get_EpisodeContinueModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EPISODECONTINUEMODEID_OFFSET))(nullptr);
		}

		::System::Int64 FrontScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_FRONTSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FrontScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FRONTSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFrontScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETFRONTSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_StrategyId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STRATEGYID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldDateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 BackScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_BACKSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BackScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_BACKSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETBACKSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClearedModeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_CLEAREDMODEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearedModeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CLEAREDMODEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearedModeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETCLEAREDMODEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SCENARIOMODEREWARDID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsScenarioSpecialReward()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ISSCENARIOSPECIALREWARD_OFFSET))(nullptr);
		}

		::System::String* get_SpecialRewardPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SPECIALREWARDPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpecialRewardPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETSPECIALREWARDPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_SpecialRewardLogOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_SPECIALREWARDLOGOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevelLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ACCOUNTLEVELLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearedStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_CLEAREDSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::Club* get_NeedClub()
		{
			return (return (::FlatData::Club*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_NEEDCLUB_OFFSET))(nullptr);
		}

		::System::Int32 get_NeedClubStudentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_NEEDCLUBSTUDENTCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentConditionGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTCONTENTCONDITIONGROUP_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_MapDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_MAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommendLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_RECOMMENDLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_EventIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTICONPARCELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventIconParcelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETEVENTICONPARCELPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_EventBannerTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_EVENTBANNERTITLE_OFFSET))(nullptr);
		}

		::System::Boolean get_Lof()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_LOF_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::String* get_CompleteReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_COMPLETEREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompleteReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETCOMPLETEREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CollectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_COLLECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_FirstClearFunnelMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GET_FIRSTCLEARFUNNELMESSAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstClearFunnelMessageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_GETFIRSTCLEARFUNNELMESSAGEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioModeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::Club* arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Boolean arg, ::FlatData::StageTopography* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EchelonExtensionType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatData::Club*, ::System::Int32, ::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Boolean, ::FlatData::StageTopography*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::EchelonExtensionType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATESCENARIOMODEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioModeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTSCENARIOMODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddModeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMODETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSUBTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayVolumeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDDISPLAYVOLUMEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolumeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDVOLUMEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChapterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCHAPTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEpisodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEPISODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExposedTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEXPOSEDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDHIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpen(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOOPENDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioCloseDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOCLOSEDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsContinue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISCONTINUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEpisodeContinueModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEPISODECONTINUEMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFrontScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFRONTSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFrontScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATEFRONTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFrontScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTFRONTSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTRATEGYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDefeatBattle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISDEFEATBATTLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFieldDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIELDDATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDBACKSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBackScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATEBACKSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBackScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTBACKSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearedModeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCLEAREDMODEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearedModeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_CREATECLEAREDMODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClearedModeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_STARTCLEAREDMODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSCENARIOMODEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsScenarioSpecialReward(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDISSCENARIOSPECIALREWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpecialRewardPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSPECIALREWARDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpecialRewardLogOut(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSPECIALREWARDLOGOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevelLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDACCOUNTLEVELLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearedStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCLEAREDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNeedClub(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Club* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDNEEDCLUB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNeedClubStudentCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDNEEDCLUBSTUDENTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentConditionGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTCONTENTCONDITIONGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMapDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDMAPDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommendLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDRECOMMENDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventIconParcelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTICONPARCELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventBannerTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDEVENTBANNERTITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLof(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDLOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompleteReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCOMPLETEREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDCOLLECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstClearFunnelMessage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ADDFIRSTCLEARFUNNELMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioModeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_ENDSCENARIOMODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioModeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_FINISHSCENARIOMODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioModeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCEL_FINISHSIZEPREFIXEDSCENARIOMODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

