#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GroundExcel; }
namespace FlatData { class StageTopography; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class TacticSpeed; }
namespace FlatData { class TacticSkillUse; }
namespace FlatData { class ShowSkillCutIn; }
namespace FlatData { class UIEnemyCountType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GROUNDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3ED00)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETROOTASGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3ED10)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETROOTASGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3ED70)
#define MX_DATA_EXCEL_GROUNDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B3EE00)
#define MX_DATA_EXCEL_GROUNDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B3EDD0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B3EE20)
#define MX_DATA_EXCEL_GROUNDEXCEL_STAGEFILENAME_OFFSET UNITYSDK_OFFSET(0x1B3EE70)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_STAGEFILENAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1B3EEC0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GROUNDSCENENAME_OFFSET UNITYSDK_OFFSET(0x1B3EF00)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETGROUNDSCENENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B3EF40)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_FORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B3EF60)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1B3EFB0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1B3F000)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1B3F050)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSUBARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1B3F0A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELNPC_OFFSET UNITYSDK_OFFSET(0x1B3F0F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELMINION_OFFSET UNITYSDK_OFFSET(0x1B3F140)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELELITE_OFFSET UNITYSDK_OFFSET(0x1B3F190)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELCHAMPION_OFFSET UNITYSDK_OFFSET(0x1B3F1E0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELBOSS_OFFSET UNITYSDK_OFFSET(0x1B3F230)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_OBSTACLELEVEL_OFFSET UNITYSDK_OFFSET(0x1B3F280)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADENPC_OFFSET UNITYSDK_OFFSET(0x1B3F2D0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEMINION_OFFSET UNITYSDK_OFFSET(0x1B3F320)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEELITE_OFFSET UNITYSDK_OFFSET(0x1B3F370)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADECHAMPION_OFFSET UNITYSDK_OFFSET(0x1B3F3C0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEBOSS_OFFSET UNITYSDK_OFFSET(0x1B3F410)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTPOINTADD_OFFSET UNITYSDK_OFFSET(0x1B3F460)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTPOINTRATE_OFFSET UNITYSDK_OFFSET(0x1B3F4B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERATTACKRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B3F500)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERATTACKRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B3F550)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTPOINTADD_OFFSET UNITYSDK_OFFSET(0x1B3F5A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTPOINTRATE_OFFSET UNITYSDK_OFFSET(0x1B3F5F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYATTACKRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B3F640)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYATTACKRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B3F690)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSKILLRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B3F6E0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSKILLRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B3F730)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSKILLRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B3F780)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSKILLRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B3F7D0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERMINIMUMPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x1B3F820)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYMINIMUMPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x1B3F870)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1B3F8C0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1B3F910)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_TSSAIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3F960)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ISPHASEBGM_OFFSET UNITYSDK_OFFSET(0x1B3F9B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1B3FA00)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_WARNINGUI_OFFSET UNITYSDK_OFFSET(0x1B3FA50)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_TSSHATCHOPEN_OFFSET UNITYSDK_OFFSET(0x1B3FAA0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_FORCEDTACTICSPEED_OFFSET UNITYSDK_OFFSET(0x1B3FAF0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_FORCEDSKILLUSE_OFFSET UNITYSDK_OFFSET(0x1B3FB40)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_SHOWNPCSKILLCUTIN_OFFSET UNITYSDK_OFFSET(0x1B3FB90)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_IMMUNEHITBEFORETIMEOUTEND_OFFSET UNITYSDK_OFFSET(0x1B3FBE0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_UIBATTLEHIDEFROMSCRATCH_OFFSET UNITYSDK_OFFSET(0x1B3FC30)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_UIENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3FC80)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1B3FCD0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETBATTLEREADYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B3FD10)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_BEFOREVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1B3FD30)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETBEFOREVICTORYTIMELINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B3FD70)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_SKIPBATTLEEND_OFFSET UNITYSDK_OFFSET(0x1B3FD90)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_HIDENPCWHENBATTLEEND_OFFSET UNITYSDK_OFFSET(0x1B3FDE0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_COVERPOINTOFF_OFFSET UNITYSDK_OFFSET(0x1B3FE30)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_UIHPSCALE_OFFSET UNITYSDK_OFFSET(0x1B3FE80)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_UIEMOJISCALE_OFFSET UNITYSDK_OFFSET(0x1B3FED0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_UISKILLMAINLOGSCALE_OFFSET UNITYSDK_OFFSET(0x1B3FF20)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_EFFECTCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1B3FF70)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_CARRIERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B3FFC0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ALLYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B40010)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ALLYPASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B40060)
#define MX_DATA_EXCEL_GROUNDEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B400A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B40100)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B40140)
#define MX_DATA_EXCEL_GROUNDEXCEL_ENEMYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B40160)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYPASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B401B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B401F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B40250)
#define MX_DATA_EXCEL_GROUNDEXCEL_GETENEMYPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B40290)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATEGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B402B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B41900)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B412E0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDSTAGEFILENAME_OFFSET UNITYSDK_OFFSET(0x1B416A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATESTAGEFILENAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41920)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTSTAGEFILENAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B419B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGROUNDSCENENAME_OFFSET UNITYSDK_OFFSET(0x1B41670)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1B412B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1B41640)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1B41610)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1B415E0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSUBARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1B415B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELNPC_OFFSET UNITYSDK_OFFSET(0x1B41280)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELMINION_OFFSET UNITYSDK_OFFSET(0x1B41250)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELELITE_OFFSET UNITYSDK_OFFSET(0x1B41220)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELCHAMPION_OFFSET UNITYSDK_OFFSET(0x1B411F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELBOSS_OFFSET UNITYSDK_OFFSET(0x1B411C0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDOBSTACLELEVEL_OFFSET UNITYSDK_OFFSET(0x1B41190)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADENPC_OFFSET UNITYSDK_OFFSET(0x1B41160)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEMINION_OFFSET UNITYSDK_OFFSET(0x1B41130)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEELITE_OFFSET UNITYSDK_OFFSET(0x1B41100)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADECHAMPION_OFFSET UNITYSDK_OFFSET(0x1B410D0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEBOSS_OFFSET UNITYSDK_OFFSET(0x1B410A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTPOINTADD_OFFSET UNITYSDK_OFFSET(0x1B41070)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTPOINTRATE_OFFSET UNITYSDK_OFFSET(0x1B41040)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERATTACKRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B41010)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERATTACKRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B40FE0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTPOINTADD_OFFSET UNITYSDK_OFFSET(0x1B40FB0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTPOINTRATE_OFFSET UNITYSDK_OFFSET(0x1B40F80)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYATTACKRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B40F50)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYATTACKRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B40F20)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSKILLRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B40EF0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSKILLRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B40EC0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSKILLRANGEADD_OFFSET UNITYSDK_OFFSET(0x1B40E90)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSKILLRANGERATE_OFFSET UNITYSDK_OFFSET(0x1B40E60)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERMINIMUMPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x1B40E30)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYMINIMUMPOSITIONGAPRATE_OFFSET UNITYSDK_OFFSET(0x1B40E00)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1B41880)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1B41850)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDTSSAIRUNITHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B40DD0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDISPHASEBGM_OFFSET UNITYSDK_OFFSET(0x1B41820)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1B40DA0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDWARNINGUI_OFFSET UNITYSDK_OFFSET(0x1B417F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDTSSHATCHOPEN_OFFSET UNITYSDK_OFFSET(0x1B417C0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDFORCEDTACTICSPEED_OFFSET UNITYSDK_OFFSET(0x1B41580)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDFORCEDSKILLUSE_OFFSET UNITYSDK_OFFSET(0x1B41550)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDSHOWNPCSKILLCUTIN_OFFSET UNITYSDK_OFFSET(0x1B41520)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDIMMUNEHITBEFORETIMEOUTEND_OFFSET UNITYSDK_OFFSET(0x1B41790)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDUIBATTLEHIDEFROMSCRATCH_OFFSET UNITYSDK_OFFSET(0x1B41760)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDUIENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B414F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1B414C0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDBEFOREVICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1B41490)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDSKIPBATTLEEND_OFFSET UNITYSDK_OFFSET(0x1B41730)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDHIDENPCWHENBATTLEEND_OFFSET UNITYSDK_OFFSET(0x1B41700)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDCOVERPOINTOFF_OFFSET UNITYSDK_OFFSET(0x1B416D0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDUIHPSCALE_OFFSET UNITYSDK_OFFSET(0x1B41460)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDUIEMOJISCALE_OFFSET UNITYSDK_OFFSET(0x1B41430)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDUISKILLMAINLOGSCALE_OFFSET UNITYSDK_OFFSET(0x1B41400)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDEFFECTCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1B413D0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDCARRIERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B40D70)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDALLYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B413A0)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATEALLYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B419F0)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTALLYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41A80)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B41370)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41AC0)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41B50)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B41340)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATEENEMYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41B90)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTENEMYPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41C20)
#define MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B41310)
#define MX_DATA_EXCEL_GROUNDEXCEL_CREATEENEMYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41C60)
#define MX_DATA_EXCEL_GROUNDEXCEL_STARTENEMYPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B41CF0)
#define MX_DATA_EXCEL_GROUNDEXCEL_ENDGROUNDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B418B0)
#define MX_DATA_EXCEL_GROUNDEXCEL_FINISHGROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B41D30)
#define MX_DATA_EXCEL_GROUNDEXCEL_FINISHSIZEPREFIXEDGROUNDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B41D50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GroundExcel_TypeDefinitionIndex = 18121;

	class GroundExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GroundExcel* GetRootAsGroundExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GroundExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETROOTASGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GroundExcel* GetRootAsGroundExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Data::Excel::GroundExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETROOTASGROUNDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GroundExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GroundExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* StageFileName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STAGEFILENAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageFileNameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_STAGEFILENAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* get_GroundSceneName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GROUNDSCENENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroundSceneNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETGROUNDSCENENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_FormationGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_FORMATIONGROUPID_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_EnemyBulletType()
		{
			return (return (::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_EnemyArmorType()
		{
			return (return (::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYARMORTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_EnemySubArmorType()
		{
			return (return (::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSUBARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelNPC()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELNPC_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelMinion()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELMINION_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelElite()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELELITE_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelChampion()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELCHAMPION_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelBoss()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_LEVELBOSS_OFFSET))(nullptr);
		}

		::System::Int64 get_ObstacleLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_OBSTACLELEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_GradeNPC()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADENPC_OFFSET))(nullptr);
		}

		::System::Int64 get_GradeMinion()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEMINION_OFFSET))(nullptr);
		}

		::System::Int64 get_GradeElite()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEELITE_OFFSET))(nullptr);
		}

		::System::Int64 get_GradeChampion()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADECHAMPION_OFFSET))(nullptr);
		}

		::System::Int64 get_GradeBoss()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_GRADEBOSS_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerSightPointAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTPOINTADD_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerSightPointRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTPOINTRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerAttackRangeAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERATTACKRANGEADD_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerAttackRangeRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERATTACKRANGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemySightPointAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTPOINTADD_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemySightPointRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTPOINTRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyAttackRangeAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYATTACKRANGEADD_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyAttackRangeRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYATTACKRANGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerSkillRangeAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSKILLRANGEADD_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerSkillRangeRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSKILLRANGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemySkillRangeAdd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSKILLRANGEADD_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemySkillRangeRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSKILLRANGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayerMinimumPositionGapRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERMINIMUMPOSITIONGAPRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyMinimumPositionGapRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYMINIMUMPOSITIONGAPRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_PlayerSightRangeMax()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_PLAYERSIGHTRANGEMAX_OFFSET))(nullptr);
		}

		::System::Boolean get_EnemySightRangeMax()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYSIGHTRANGEMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_TSSAirUnitHeight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_TSSAIRUNITHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPhaseBGM()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ISPHASEBGM_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Boolean get_WarningUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_WARNINGUI_OFFSET))(nullptr);
		}

		::System::Boolean get_TSSHatchOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_TSSHATCHOPEN_OFFSET))(nullptr);
		}

		::FlatData::TacticSpeed* get_ForcedTacticSpeed()
		{
			return (return (::FlatData::TacticSpeed*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_FORCEDTACTICSPEED_OFFSET))(nullptr);
		}

		::FlatData::TacticSkillUse* get_ForcedSkillUse()
		{
			return (return (::FlatData::TacticSkillUse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_FORCEDSKILLUSE_OFFSET))(nullptr);
		}

		::FlatData::ShowSkillCutIn* get_ShowNPCSkillCutIn()
		{
			return (return (::FlatData::ShowSkillCutIn*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_SHOWNPCSKILLCUTIN_OFFSET))(nullptr);
		}

		::System::Boolean get_ImmuneHitBeforeTimeOutEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_IMMUNEHITBEFORETIMEOUTEND_OFFSET))(nullptr);
		}

		::System::Boolean get_UIBattleHideFromScratch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_UIBATTLEHIDEFROMSCRATCH_OFFSET))(nullptr);
		}

		::FlatData::UIEnemyCountType* get_UIEnemyCount()
		{
			return (return (::FlatData::UIEnemyCountType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_UIENEMYCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_BattleReadyTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_BATTLEREADYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleReadyTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETBATTLEREADYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BeforeVictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_BEFOREVICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBeforeVictoryTimelinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETBEFOREVICTORYTIMELINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipBattleEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_SKIPBATTLEEND_OFFSET))(nullptr);
		}

		::System::Boolean get_HideNPCWhenBattleEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_HIDENPCWHENBATTLEEND_OFFSET))(nullptr);
		}

		::System::Boolean get_CoverPointOff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_COVERPOINTOFF_OFFSET))(nullptr);
		}

		::System::Single get_UIHpScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_UIHPSCALE_OFFSET))(nullptr);
		}

		::System::Single get_UIEmojiScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_UIEMOJISCALE_OFFSET))(nullptr);
		}

		::System::Single get_UISkillMainLogScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_UISKILLMAINLOGSCALE_OFFSET))(nullptr);
		}

		::System::Int32 get_EffectCountLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_EFFECTCOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_CarrierSkillGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_CARRIERSKILLGROUPID_OFFSET))(nullptr);
		}

		::System::String* AllyPassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ALLYPASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ALLYPASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 AllyPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ALLYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllyPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ALLYPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllyPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETALLYPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* EnemyPassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ENEMYPASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYPASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 EnemyPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ENEMYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GET_ENEMYPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_GETENEMYPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::StageTopography* arg, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg, ::FlatData::ArmorType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatData::TacticSpeed* arg, ::FlatData::TacticSkillUse* arg, ::FlatData::ShowSkillCutIn* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatData::UIEnemyCountType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageTopography*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::FlatData::ArmorType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatData::TacticSpeed*, ::FlatData::TacticSkillUse*, ::FlatData::ShowSkillCutIn*, ::System::Boolean, ::System::Boolean, ::FlatData::UIEnemyCountType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATEGROUNDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGroundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageFileName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDSTAGEFILENAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStageFileNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATESTAGEFILENAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStageFileNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTSTAGEFILENAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundSceneName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGROUNDSCENENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFormationGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDFORMATIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyBulletType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYBULLETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyArmorType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYARMORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySubArmorType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSUBARMORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelNPC(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELNPC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelMinion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELMINION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelElite(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELELITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelChampion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELCHAMPION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelBoss(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDLEVELBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObstacleLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDOBSTACLELEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGradeNPC(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADENPC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGradeMinion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEMINION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGradeElite(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEELITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGradeChampion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADECHAMPION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGradeBoss(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDGRADEBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerSightPointAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTPOINTADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerSightPointRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTPOINTRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerAttackRangeAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERATTACKRANGEADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerAttackRangeRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERATTACKRANGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySightPointAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTPOINTADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySightPointRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTPOINTRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyAttackRangeAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYATTACKRANGEADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyAttackRangeRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYATTACKRANGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerSkillRangeAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSKILLRANGEADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerSkillRangeRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSKILLRANGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySkillRangeAdd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSKILLRANGEADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySkillRangeRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSKILLRANGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerMinimumPositionGapRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERMINIMUMPOSITIONGAPRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyMinimumPositionGapRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYMINIMUMPOSITIONGAPRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPlayerSightRangeMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDPLAYERSIGHTRANGEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySightRangeMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYSIGHTRANGEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTSSAirUnitHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDTSSAIRUNITHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPhaseBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDISPHASEBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWarningUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDWARNINGUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTSSHatchOpen(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDTSSHATCHOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForcedTacticSpeed(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticSpeed* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticSpeed*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDFORCEDTACTICSPEED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForcedSkillUse(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticSkillUse* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticSkillUse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDFORCEDSKILLUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowNPCSkillCutIn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShowSkillCutIn* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShowSkillCutIn*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDSHOWNPCSKILLCUTIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImmuneHitBeforeTimeOutEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDIMMUNEHITBEFORETIMEOUTEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIBattleHideFromScratch(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDUIBATTLEHIDEFROMSCRATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIEnemyCount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::UIEnemyCountType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::UIEnemyCountType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDUIENEMYCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleReadyTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDBATTLEREADYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBeforeVictoryTimelinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDBEFOREVICTORYTIMELINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkipBattleEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDSKIPBATTLEEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideNPCWhenBattleEnd(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDHIDENPCWHENBATTLEEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCoverPointOff(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDCOVERPOINTOFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIHpScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDUIHPSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIEmojiScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDUIEMOJISCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUISkillMainLogScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDUISKILLMAINLOGSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEffectCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDEFFECTCOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCarrierSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDCARRIERSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDALLYPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATEALLYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTALLYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDALLYPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATEALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAllyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTALLYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATEENEMYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnemyPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTENEMYPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ADDENEMYPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_CREATEENEMYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnemyPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_STARTENEMYPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGroundExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_ENDGROUNDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGroundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_FINISHGROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGroundExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDEXCEL_FINISHSIZEPREFIXEDGROUNDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

