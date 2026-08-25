#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestUnitExcel; }
namespace FlatData { class ConquestEnemyType; }
namespace FlatData { class ConquestTeamType; }
namespace FlatData { class StarGoalType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6B5A0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETROOTASCONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6B5B0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETROOTASCONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6B610)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A6B6A0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A6B670)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A6B6C0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A6B710)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A6B760)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A6B7A0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6B7C0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A6B800)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STRATEGYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6B820)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTRATEGYPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A6B860)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1A6B880)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_SHIELDEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x1A6B8D0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_UNITFXPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6B920)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETUNITFXPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A6B960)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_POINTANIMATION_OFFSET UNITYSDK_OFFSET(0x1A6B980)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETPOINTANIMATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1A6B9C0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ENEMYTYPE_OFFSET UNITYSDK_OFFSET(0x1A6B9E0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x1A6BA30)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_UNITGROUP_OFFSET UNITYSDK_OFFSET(0x1A6BA80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_PREVUNITGROUP_OFFSET UNITYSDK_OFFSET(0x1A6BAD0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A6BB20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1A6BB70)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARGOAL_OFFSET UNITYSDK_OFFSET(0x1A6BBC0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STARGOALLENGTH_OFFSET UNITYSDK_OFFSET(0x1A6BC20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTARGOALBYTES_OFFSET UNITYSDK_OFFSET(0x1A6BC60)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6BC80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A6BCE0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1A6BD20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_GROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x1A6BD40)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6BD90)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6BDE0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6BE30)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6BE80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6BED0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6BF20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6BF70)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6BFC0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_CONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A6C010)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1A6C060)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A6C0B0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_TACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1A6C100)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1A6C150)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A6C1A0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATECONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6C1F0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTCONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6CDD0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A6C9C0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1A6CD50)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A6CD20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6CCF0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTRATEGYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6CCC0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSCALE_OFFSET UNITYSDK_OFFSET(0x1A6CC90)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSHIELDEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x1A6CC60)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDUNITFXPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A6CC30)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPOINTANIMATION_OFFSET UNITYSDK_OFFSET(0x1A6CC00)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDENEMYTYPE_OFFSET UNITYSDK_OFFSET(0x1A6CBD0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDTEAM_OFFSET UNITYSDK_OFFSET(0x1A6CBA0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDUNITGROUP_OFFSET UNITYSDK_OFFSET(0x1A6C990)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPREVUNITGROUP_OFFSET UNITYSDK_OFFSET(0x1A6C960)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1A6C930)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1A6C900)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTARGOAL_OFFSET UNITYSDK_OFFSET(0x1A6CB70)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATESTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6CDF0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTSTARGOALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6CE80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTARGOALAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CB40)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6CEC0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A6CF50)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDGROUPBUFFID_OFFSET UNITYSDK_OFFSET(0x1A6C8D0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6CB10)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6C8A0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CAE0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6CAB0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6C870)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6CA80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6C840)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6C810)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDCONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A6C7E0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1A6CA50)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A6CA20)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDTACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1A6C7B0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1A6C780)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A6C9F0)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_ENDCONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6CD80)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_FINISHCONQUESTUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6CF90)
#define MX_DATA_EXCEL_CONQUESTUNITEXCEL_FINISHSIZEPREFIXEDCONQUESTUNITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6CFB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnitExcel_TypeDefinitionIndex = 17302;

	class ConquestUnitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestUnitExcel* GetRootAsConquestUnitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETROOTASCONQUESTUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestUnitExcel* GetRootAsConquestUnitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETROOTASCONQUESTUNITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestUnitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestUnitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STRATEGYPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTRATEGYPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_Scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Single get_ShieldEffectScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_SHIELDEFFECTSCALE_OFFSET))(nullptr);
		}

		::System::String* get_UnitFxPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_UNITFXPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnitFxPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETUNITFXPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PointAnimation()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_POINTANIMATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetPointAnimationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETPOINTANIMATIONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ConquestEnemyType* get_EnemyType()
		{
			return (return (::FlatData::ConquestEnemyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ENEMYTYPE_OFFSET))(nullptr);
		}

		::FlatData::ConquestTeamType* get_Team()
		{
			return (return (::FlatData::ConquestTeamType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_TEAM_OFFSET))(nullptr);
		}

		::System::Int64 get_UnitGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_UNITGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevUnitGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_PREVUNITGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::FlatData::StarGoalType* StarGoal(::System::Int32 arg)
		{
			return (return (::FlatData::StarGoalType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARGOAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STARGOALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTARGOALBYTES_OFFSET))(nullptr);
		}

		::System::Int32 StarGoalAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARGOALAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGoalAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STARGOALAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStarGoalAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GETSTARGOALAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_GROUPBUFFID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StageEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ManageEchelonStageEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ManageEchelonStageEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageEchelonStageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_MANAGEECHELONSTAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_CLEARSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_CONQUESTREWARDID_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_TacticRewardExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_TACTICREWARDEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestUnitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::System::Single arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ConquestEnemyType* arg, ::FlatData::ConquestTeamType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::StageTopography* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EchelonExtensionType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ConquestEnemyType*, ::FlatData::ConquestTeamType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::StageTopography*, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATECONQUESTUNITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTCONQUESTUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTRATEGYPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShieldEffectScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSHIELDEFFECTSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnitFxPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDUNITFXPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPointAnimation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPOINTANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestEnemyType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestEnemyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDENEMYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeam(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestTeamType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestTeamType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDTEAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnitGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDUNITGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrevUnitGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDPREVUNITGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTARGOAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATESTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTSTARGOALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGoalAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTARGOALAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_CREATESTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStarGoalAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_STARTSTARGOALAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupBuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDGROUPBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageEchelonStageEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageEchelonStageEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddManageEchelonStageEnterCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDMANAGEECHELONSTAGEENTERCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDENTERSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDCLEARSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDCONQUESTREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticRewardExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDTACTICREWARDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEchelonExtensionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ADDECHELONEXTENSIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestUnitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_ENDCONQUESTUNITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_FINISHCONQUESTUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestUnitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITEXCEL_FINISHSIZEPREFIXEDCONQUESTUNITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

