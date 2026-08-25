#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldContentStageExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StarGoalType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD36020)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GETROOTASFIELDCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD36030)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GETROOTASFIELDCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD36090)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD360F0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD35D40)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD36110)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD36160)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD361E0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD36230)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xD362B0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xD36300)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD36380)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD363D0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD36450)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD364A0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD36520)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD36570)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD365F0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD36630)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD366A0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD366C0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD36710)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD36790)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD367E0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD36860)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD368B0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD36930)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD36980)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD36A00)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD36A50)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD36AD0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD36B20)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD36BA0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD36BF0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD36C70)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD36CC0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD36D40)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD36D90)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD36DE0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD36E30)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD36EB0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD36F00)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_DAILYLASTPLAY_OFFSET UNITYSDK_OFFSET(0xD36F50)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_DAILYLASTPLAY_OFFSET UNITYSDK_OFFSET(0xD36FA0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0xD36FF0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0xD37050)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0xD37090)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0xD37120)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0xD37140)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD371A0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0xD371E0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD37270)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATEFIELDCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD37290)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTFIELDCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD37A60)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD377D0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD377A0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDAREAID_OFFSET UNITYSDK_OFFSET(0xD37770)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD37740)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xD37950)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDPREVSTAGEID_OFFSET UNITYSDK_OFFSET(0xD37710)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD37920)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD376E0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0xD378F0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0xD376B0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xD378C0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD37890)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD37860)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD37680)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0xD37650)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0xD379E0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD37620)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD379B0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDDAILYLASTPLAY_OFFSET UNITYSDK_OFFSET(0xD37980)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0xD37830)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0xD37A80)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0xD37B10)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0xD37800)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD37B50)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD37BE0)
#define FLATDATA_FIELDCONTENTSTAGEEXCEL_ENDFIELDCONTENTSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD37A10)

namespace FlatData
{
	inline static constexpr unsigned int FieldContentStageExcel_TypeDefinitionIndex = 9259;

	class FieldContentStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldContentStageExcel* GetRootAsFieldContentStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldContentStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GETROOTASFIELDCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldContentStageExcel* GetRootAsFieldContentStageExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldContentStageExcel* arg2)
		{
			return ((::FlatData::FieldContentStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldContentStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GETROOTASFIELDCONTENTSTAGEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldContentStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldContentStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_areaId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_AREAID_OFFSET))(nullptr);
		}

		::System::Int64 get_AreaId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_AREAID_OFFSET))(nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_stageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_prevStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_battleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_stageEnterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_stageEnterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_stageEnterCostAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_stageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_recommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_groundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_bGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Boolean get_instantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Int64 get_fixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Boolean get_skipFormationSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipFormationSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_dailyLastPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_DAILYLASTPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_DailyLastPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_DAILYLASTPLAY_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* starGoal(::System::Int32 arg)
		{
			return ((::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return ((::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 starGoalAmount(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::FlatData::StageDifficulty* arg6, ::System::Int64 arg7, ::FlatBuffers::StringOffset* arg8, ::System::Int64 arg9, ::FlatData::ParcelType* arg10, ::System::Int64 arg11, ::System::Int32 arg12, ::FlatData::StageTopography* arg13, ::System::Int32 arg14, ::System::Int64 arg15, ::System::Int64 arg16, ::System::Boolean arg17, ::System::Int64 arg18, ::System::Boolean arg19, ::System::Boolean arg20, ::FlatBuffers::VectorOffset* arg21, ::FlatBuffers::VectorOffset* arg22)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::StageDifficulty*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::StageTopography*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATEFIELDCONTENTSTAGEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, nullptr);
		}

		::System::Void StartFieldContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTFIELDCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAreaId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDAREAID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEDIFFICULTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPrevStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDPREVSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroundID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInstantClear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDINSTANTCLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSkipFormationSettings(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSKIPFORMATIONSETTINGS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDailyLastPlay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDDAILYLASTPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTARGOAL_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldContentStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCONTENTSTAGEEXCEL_ENDFIELDCONTENTSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

