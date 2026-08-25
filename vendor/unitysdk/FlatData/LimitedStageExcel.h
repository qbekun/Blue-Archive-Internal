#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StrategyEnvironment; }
namespace FlatData { class ContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4C2B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETROOTASLIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD4C2C0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETROOTASLIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD4C320)
#define FLATDATA_LIMITEDSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD4C380)
#define FLATDATA_LIMITEDSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4BFD0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD4C3A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD4C3F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD4C470)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD4C4B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD4C520)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD4C540)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD4C590)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD4C610)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD4C660)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0xD4C6E0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0xD4C720)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET UNITYSDK_OFFSET(0xD4C790)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4C7B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4C800)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD4C880)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD4C8D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD4C950)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD4C9A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0xD4CA20)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0xD4CA70)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD4CAF0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD4CB40)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD4CBC0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD4CC10)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD4CC90)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD4CCE0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4CD60)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4CDB0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD4CE30)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD4CE80)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0xD4CF00)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0xD4CF50)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xD4CFD0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xD4D020)
#define FLATDATA_LIMITEDSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4D0A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD4D100)
#define FLATDATA_LIMITEDSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4D140)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD4D1D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4D1F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD4D250)
#define FLATDATA_LIMITEDSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4D290)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD4D320)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0xD4D340)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0xD4D380)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET UNITYSDK_OFFSET(0xD4D3F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0xD4D410)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0xD4D450)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0xD4D4C0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0xD4D4E0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0xD4D530)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0xD4D5B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0xD4D600)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD4D680)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD4D6D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD4D750)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD4D7A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD4D820)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD4D860)
#define FLATDATA_LIMITEDSTAGEEXCEL_GETBGMIDBYTES_OFFSET UNITYSDK_OFFSET(0xD4D8D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xD4D8F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xD4D940)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD4D9C0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD4DA10)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD4DA90)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD4DAE0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD4DB60)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD4DBB0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD4DC30)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD4DC80)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0xD4DCD0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0xD4DD20)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4DDA0)
#define FLATDATA_LIMITEDSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4DDF0)
#define FLATDATA_LIMITEDSTAGEEXCEL_CREATELIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD4DE40)
#define FLATDATA_LIMITEDSTAGEEXCEL_STARTLIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD4EA10)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD4E600)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD4E930)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD4E5D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD4E900)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0xD4E8D0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4E8A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD4E5A0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0xD4E570)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDOPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0xD4E540)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD4E510)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD4E870)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD4E4E0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD4E840)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0xD4E810)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET UNITYSDK_OFFSET(0xD4E4B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xD4E480)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4E7E0)
#define FLATDATA_LIMITEDSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD4EA30)
#define FLATDATA_LIMITEDSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD4EAC0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD4E7B0)
#define FLATDATA_LIMITEDSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD4EB00)
#define FLATDATA_LIMITEDSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD4EB90)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET UNITYSDK_OFFSET(0xD4E780)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0xD4E750)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0xD4E450)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDMAXTURN_OFFSET UNITYSDK_OFFSET(0xD4E720)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD4E6F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD4E6C0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0xD4E690)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xD4E660)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD4E420)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xD4E630)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0xD4E3F0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD4E990)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDBUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0xD4E3C0)
#define FLATDATA_LIMITEDSTAGEEXCEL_ADDCHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0xD4E960)
#define FLATDATA_LIMITEDSTAGEEXCEL_ENDLIMITEDSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD4E9C0)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageExcel_TypeDefinitionIndex = 9301;

	class LimitedStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageExcel* GetRootAsLimitedStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETROOTASLIMITEDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageExcel* GetRootAsLimitedStageExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageExcel* arg2)
		{
			return ((::FlatData::LimitedStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETROOTASLIMITEDSTAGEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_stageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::String* get_stageNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		::System::String* get_StageNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageNumberBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETSTAGENUMBERBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_stageDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Int32 get_StageDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Int64 get_prevStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_openDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_openEventPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenEventPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_OPENEVENTPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_battleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_stageEnterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_stageEnterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_stageEnterCostAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_stageEnterEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterEchelonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_starConditionTacticRankSCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTacticRankSCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTACTICRANKSCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_starConditionTurnCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StarConditionTurnCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STARCONDITIONTURNCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 enterScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnterScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_ENTERSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 EnterScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnterScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETENTERSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 clearScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_CLEARSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ClearScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetClearScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETCLEARSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_strategyMap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETSTRATEGYMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_strategyMapBG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMapBG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBGBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_stageRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_maxTurn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_MAXTURN_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxTurn()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_MAXTURN_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_stageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_recommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_bgmId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_BgmId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GETBGMIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StrategyEnvironment* get_strategyEnvironment()
		{
			return ((::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::FlatData::StrategyEnvironment* get_StrategyEnvironment()
		{
			return ((::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_groundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_contentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_bGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Boolean get_instantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Int64 get_buffContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_challengeDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_ChallengeDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_GET_CHALLENGEDISPLAY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::System::Int64 arg4, ::FlatData::StageDifficulty* arg5, ::FlatBuffers::StringOffset* arg6, ::System::Int32 arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::System::Int64 arg11, ::FlatData::ParcelType* arg12, ::System::Int64 arg13, ::System::Int32 arg14, ::System::Int32 arg15, ::System::Int64 arg16, ::System::Int64 arg17, ::FlatBuffers::VectorOffset* arg18, ::FlatBuffers::VectorOffset* arg19, ::FlatBuffers::StringOffset* arg20, ::FlatBuffers::StringOffset* arg21, ::System::Int64 arg22, ::System::Int32 arg23, ::FlatData::StageTopography* arg24, ::System::Int32 arg25, ::FlatBuffers::StringOffset* arg26, ::FlatData::StrategyEnvironment* arg27, ::System::Int64 arg28, ::FlatData::ContentType* arg29, ::System::Int64 arg30, ::System::Boolean arg31, ::System::Int64 arg32, ::System::Boolean arg33)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageDifficulty*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatData::StageTopography*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatData::StrategyEnvironment*, ::System::Int64, ::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_CREATELIMITEDSTAGEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, nullptr);
		}

		::System::Void StartLimitedStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_STARTLIMITEDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageNumber(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGENUMBER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEDISPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDOPENDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenEventPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDOPENEVENTPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStarConditionTacticRankSCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTARCONDITIONTACTICRANKSCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStarConditionTurnCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTARCONDITIONTURNCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_CREATEENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEnterScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_STARTENTERSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_CREATECLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartClearScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_STARTCLEARSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrategyMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrategyMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYMAPBG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGEREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMaxTurn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDMAXTURN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrategyEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyEnvironment* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroundID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInstantClear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBuffContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDBUFFCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddChallengeDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ADDCHALLENGEDISPLAY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGEEXCEL_ENDLIMITEDSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

