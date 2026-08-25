#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }
namespace FlatData { class EventContentType; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class SubEventType; }
namespace FlatData { class EventContentReleaseType; }
namespace FlatData { class RewardTag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF8F70)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETROOTASEVENTCONTENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF8F80)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETROOTASEVENTCONTENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF8FE0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AF9070)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AF9040)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF9090)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ORIGINALEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF90E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ISRETURN_OFFSET UNITYSDK_OFFSET(0x1AF9130)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF9180)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF91C0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF91E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1AF9230)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AF9280)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x1AF92D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AF9320)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBEVENT_OFFSET UNITYSDK_OFFSET(0x1AF9370)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTITEMID_OFFSET UNITYSDK_OFFSET(0x1AF93C0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINEVENTID_OFFSET UNITYSDK_OFFSET(0x1AF9410)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCHANGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1AF9460)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1AF94B0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDEXPOSEDTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF94F0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTOPENTIME_OFFSET UNITYSDK_OFFSET(0x1AF9510)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTOPENTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9550)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTCLOSENOTETIME_OFFSET UNITYSDK_OFFSET(0x1AF9570)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTCLOSENOTETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF95B0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1AF95D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTCLOSETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9610)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1AF9630)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEXTENSIONTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9670)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1AF9690)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINICONPARCELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF96D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1AF96F0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETSUBICONPARCELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9730)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF9750)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9790)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF97B0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_BEFOREHANDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF9800)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AF9860)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AF98A0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF98C0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINBANNERIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9900)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF9920)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9960)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SHIFTTRIGGERSTAGEID_OFFSET UNITYSDK_OFFSET(0x1AF9980)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SHIFTMAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF99D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETSHIFTMAINBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9A10)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMELOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AF9A30)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMELOBBYPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9A70)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEVICTORYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AF9A90)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEVICTORYPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9AD0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEMISSIONBGPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AF9AF0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEMISSIONBGPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9B30)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF9B50)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEMISSIONBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9B90)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_CARDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AF9BB0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETCARDBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF9BF0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTASSIST_OFFSET UNITYSDK_OFFSET(0x1AF9C10)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTRELEASETYPE_OFFSET UNITYSDK_OFFSET(0x1AF9C60)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET UNITYSDK_OFFSET(0x1AF9CB0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_REWARDTAGPERMANENT_OFFSET UNITYSDK_OFFSET(0x1AF9D00)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1AF9D50)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1AF9DA0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_CREATEEVENTCONTENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF9DF0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_STARTEVENTCONTENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFABE0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFA620)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDORIGINALEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFA5F0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDISRETURN_OFFSET UNITYSDK_OFFSET(0x1AFAB60)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1AFAAA0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFAA70)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDOPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1AFAA40)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AFAB30)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDICONORDER_OFFSET UNITYSDK_OFFSET(0x1AFAA10)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFA9E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBEVENT_OFFSET UNITYSDK_OFFSET(0x1AFAB00)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTITEMID_OFFSET UNITYSDK_OFFSET(0x1AFA5C0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINEVENTID_OFFSET UNITYSDK_OFFSET(0x1AFA590)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCHANGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1AFA560)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1AFA9B0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTOPENTIME_OFFSET UNITYSDK_OFFSET(0x1AFA980)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTCLOSENOTETIME_OFFSET UNITYSDK_OFFSET(0x1AFA950)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1AFA920)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1AFA8F0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1AFA8C0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x1AFA890)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA860)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEPROLOGSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AFA530)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AFA830)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_CREATEBEFOREHANDSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFAC00)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_STARTBEFOREHANDSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFAC90)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA800)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA7D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSHIFTTRIGGERSTAGEID_OFFSET UNITYSDK_OFFSET(0x1AFA500)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSHIFTMAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA7A0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMELOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AFA770)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEVICTORYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AFA740)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEMISSIONBGPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AFA710)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEMISSIONBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA6E0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDCARDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AFA6B0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTASSIST_OFFSET UNITYSDK_OFFSET(0x1AFAAD0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTRELEASETYPE_OFFSET UNITYSDK_OFFSET(0x1AFA680)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET UNITYSDK_OFFSET(0x1AFA4D0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDREWARDTAGPERMANENT_OFFSET UNITYSDK_OFFSET(0x1AFA650)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIEVENTSHORTCUTSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1AFA4A0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSCENARIOCONTENTCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1AFA470)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ENDEVENTCONTENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFAB90)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_FINISHEVENTCONTENTSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFACD0)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFACF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSeasonExcel_TypeDefinitionIndex = 17809;

	class EventContentSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentSeasonExcel* GetRootAsEventContentSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETROOTASEVENTCONTENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentSeasonExcel* GetRootAsEventContentSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETROOTASEVENTCONTENTSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalEventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ORIGINALEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ISRETURN_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContent()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_OPENCONDITIONCONTENT_OFFSET))(nullptr);
		}

		::System::Boolean get_EventDisplay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTDISPLAY_OFFSET))(nullptr);
		}

		::System::Int32 get_IconOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_ICONORDER_OFFSET))(nullptr);
		}

		::FlatData::SubEventType* get_SubEventType()
		{
			return (return (::FlatData::SubEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBEVENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_SubEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBEVENT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTITEMID_OFFSET))(nullptr);
		}

		::System::Int64 get_MainEventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINEVENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventChangeOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCHANGEOPENCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_BeforehandExposedTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDEXPOSEDTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforehandExposedTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDEXPOSEDTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EventContentOpenTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTOPENTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentOpenTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTOPENTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EventContentCloseNoteTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTCLOSENOTETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentCloseNoteTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTCLOSENOTETIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EventContentCloseTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTCLOSETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventContentCloseTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEVENTCONTENTCLOSETIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ExtensionTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EXTENSIONTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetExtensionTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETEXTENSIONTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MainIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINICONPARCELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMainIconParcelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINICONPARCELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SUBICONPARCELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubIconParcelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETSUBICONPARCELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforehandBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforehandBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_MinigamePrologScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 BeforehandScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_BEFOREHANDSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BeforehandScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_BEFOREHANDSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforehandScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETBEFOREHANDSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MainBannerImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMainBannerImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINBANNERIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MainBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MAINBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMainBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMAINBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftTriggerStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SHIFTTRIGGERSTAGEID_OFFSET))(nullptr);
		}

		::System::String* get_ShiftMainBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SHIFTMAINBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShiftMainBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETSHIFTMAINBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MinigameLobbyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMELOBBYPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinigameLobbyPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMELOBBYPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MinigameVictoryPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEVICTORYPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinigameVictoryPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEVICTORYPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MinigameMissionBgPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEMISSIONBGPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinigameMissionBgPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEMISSIONBGPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MinigameMissionBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinigameMissionBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETMINIGAMEMISSIONBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CardBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_CARDBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCardBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GETCARDBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_EventAssist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTASSIST_OFFSET))(nullptr);
		}

		::FlatData::EventContentReleaseType* get_EventContentReleaseType()
		{
			return (return (::FlatData::EventContentReleaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTRELEASETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentStageRewardIdPermanent()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTagPermanent()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_REWARDTAGPERMANENT_OFFSET))(nullptr);
		}

		::System::Int64 get_MiniEventShortCutScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioContentCollectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_GET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EventContentType* arg, ::FlatData::OpenConditionContent* arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatData::SubEventType* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatData::EventContentReleaseType* arg, ::System::Int64 arg, ::FlatData::RewardTag* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatData::EventContentType*, ::FlatData::OpenConditionContent*, ::System::Boolean, ::System::Int32, ::FlatData::SubEventType*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatData::EventContentReleaseType*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_CREATEEVENTCONTENTSEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_STARTEVENTCONTENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOriginalEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDORIGINALEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsReturn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDISRETURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionContent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDOPENCONDITIONCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDICONORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubEventType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SubEventType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SubEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBEVENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubEvent(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainEventId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventChangeOpenCondition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCHANGEOPENCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforehandExposedTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDEXPOSEDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentOpenTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTOPENTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentCloseNoteTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTCLOSENOTETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentCloseTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTCLOSETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtensionTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEXTENSIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainIconParcelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINICONPARCELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubIconParcelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSUBICONPARCELPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforehandBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinigamePrologScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEPROLOGSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforehandScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDBEFOREHANDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBeforehandScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_CREATEBEFOREHANDSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBeforehandScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_STARTBEFOREHANDSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainBannerImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINBANNERIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMainBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMAINBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftTriggerStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSHIFTTRIGGERSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShiftMainBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSHIFTMAINBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinigameLobbyPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMELOBBYPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinigameVictoryPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEVICTORYPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinigameMissionBgPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEMISSIONBGPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinigameMissionBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIGAMEMISSIONBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDCARDBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventAssist(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTASSIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentReleaseType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentReleaseType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentReleaseType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTRELEASETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentStageRewardIdPermanent(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDEVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTagPermanent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDREWARDTAGPERMANENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniEventShortCutScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDMINIEVENTSHORTCUTSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioContentCollectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ADDSCENARIOCONTENTCOLLECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_ENDEVENTCONTENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_FINISHEVENTCONTENTSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

