#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentStageExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class EventContentType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StrategyEnvironment; }
namespace FlatData { class ContentType; }
namespace FlatData { class StarGoalType; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B086E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETROOTASEVENTCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B086F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETROOTASEVENTCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B08750)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B087E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B087B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B08800)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B08850)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B08890)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B088B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1B08900)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1B08950)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET UNITYSDK_OFFSET(0x1B08990)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B089B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B08A00)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0x1B08A50)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0x1B08AA0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONSCENARIOPERMANENTSUBEVENTID_OFFSET UNITYSDK_OFFSET(0x1B08AF0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_PREVSTAGESUBEVENTID_OFFSET UNITYSDK_OFFSET(0x1B08B40)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1B08B90)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B08BE0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B08C30)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1B08C80)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1B08CD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1B08D20)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B08D70)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B08DC0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B08E10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1B08E60)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B08EB0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B08F10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B08F50)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B08F70)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B08FD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B09010)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1B09030)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1B09070)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1B09090)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1B090D0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1B090F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0x1B09140)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1B09190)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B091E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1B09230)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETBGMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B09270)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1B09290)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1B092E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B09330)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1B09380)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0x1B093D0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B09420)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B09470)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B094C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0x1B09510)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0x1B09570)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0x1B095B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B095D0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B09630)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B09670)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x1B09690)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEHINT_OFFSET UNITYSDK_OFFSET(0x1B096E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B09730)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATEEVENTCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B09780)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTEVENTCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0A770)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B0A240)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1B0A660)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0A210)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1B0A630)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1B0A600)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B0A5D0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B0A1E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0x1B0A1B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0x1B0A180)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONSCENARIOPERMANENTSUBEVENTID_OFFSET UNITYSDK_OFFSET(0x1B0A150)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDPREVSTAGESUBEVENTID_OFFSET UNITYSDK_OFFSET(0x1B0A120)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1B0A0F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B0A5A0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0A0C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1B0A090)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1B0A570)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1B0A060)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0A540)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B0A510)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B0A030)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1B0A000)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B0A4E0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A790)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A820)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B0A4B0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A860)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A8F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1B0A480)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1B0A450)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1B09FD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDMAXTURN_OFFSET UNITYSDK_OFFSET(0x1B0A420)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1B0A3F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B0A3C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1B0A390)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1B0A360)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1B09FA0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B0A330)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1B09F70)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0x1B0A6F0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B09F40)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B09F10)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B0A6C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0x1B0A300)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A930)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0A9C0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B0A2D0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0AA00)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B0AA90)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x1B0A690)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEHINT_OFFSET UNITYSDK_OFFSET(0x1B0A2A0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B0A270)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ENDEVENTCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B0A720)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_FINISHEVENTCONTENTSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0AAD0)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B0AAF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageExcel_TypeDefinitionIndex = 17874;

	class EventContentStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentStageExcel* GetRootAsEventContentStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETROOTASEVENTCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageExcel* GetRootAsEventContentStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentStageExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETROOTASEVENTCONTENTSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::String* get_StageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageNumberBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StageDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenEventPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionScenarioPermanentSubEventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONSCENARIOPERMANENTSUBEVENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageSubEventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_PREVSTAGESUBEVENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionScenarioId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONSCENARIOID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_OpenConditionContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_OPENCONDITIONCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterEchelonCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTacticRankSCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTurnCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 EnterScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnterScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnterScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ClearScenarioGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearScenarioGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearScenarioGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentStageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxTurn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_MAXTURN_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_BgmId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETBGMIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StrategyEnvironment* get_StrategyEnvironment()
		{
			return (return (::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantClear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Boolean get_ChallengeDisplay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return (return (::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageHint()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_STAGEHINT_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::StageTopography* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StrategyEnvironment* arg, ::System::Int64 arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::UInt32 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageDifficulty*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatData::StageTopography*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatData::StrategyEnvironment*, ::System::Int64, ::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::UInt32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATEEVENTCONTENTSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTEVENTCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageNumber(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGENUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenEventPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENEVENTPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionScenarioPermanentSubEventId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONSCENARIOPERMANENTSUBEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevStageSubEventId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDPREVSTAGESUBEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionScenarioId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONSCENARIOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDOPENCONDITIONCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarConditionTacticRankSCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarConditionTurnCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxTurn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDMAXTURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInstantClear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDBUFFCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChallengeDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDCHALLENGEDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARGOAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDefeatBattle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDISDEFEATBATTLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageHint(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDSTAGEHINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_ENDEVENTCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_FINISHEVENTCONTENTSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

