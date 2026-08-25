#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BattleExcel; }
namespace FlatData { class UnitType; }
namespace FlatData { class AttackType; }
namespace FlatData { class ProjectileType; }
namespace FlatData { class DamageFontColor; }
namespace FlatData { class EmoticonEvent; }
namespace FlatData { class BulletType; }
namespace FlatData { class ActionType; }
namespace FlatData { class BuffOverlap; }
namespace FlatData { class ReArrangeTargetType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class EntityMaterialType; }
namespace FlatData { class CoverMotionType; }
namespace FlatData { class TargetSortBy; }
namespace FlatData { class PositioningType; }
namespace FlatData { class FormationLine; }
namespace FlatData { class ExternalBTNodeType; }
namespace FlatData { class ExternalBehavior; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class EngageType; }
namespace FlatData { class HitEffectPosition; }
namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }
namespace FlatData { class ObstacleClass; }
namespace FlatData { class ObstacleDestroyType; }
namespace FlatData { class ObstacleHeightType; }
namespace FlatData { class DamageAttribute; }
namespace FlatData { class SkillPriorityCheckTarget; }
namespace FlatData { class StageType; }
namespace FlatData { class KnockbackDirection; }
namespace FlatData { class EndCondition; }
namespace FlatData { class ArenaSimulatorServer; }
namespace FlatData { class BattleCalculationStat; }
namespace FlatData { class StatTransType; }
namespace FlatData { class BattleDialogType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BATTLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE1390)
#define FLATDATA_BATTLEEXCEL_GETROOTASBATTLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE13A0)
#define FLATDATA_BATTLEEXCEL_GETROOTASBATTLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE1400)
#define FLATDATA_BATTLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE1460)
#define FLATDATA_BATTLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE10B0)
#define FLATDATA_BATTLEEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xCE1480)
#define FLATDATA_BATTLEEXCEL_GET_NONELENGTH_OFFSET UNITYSDK_OFFSET(0xCE14E0)
#define FLATDATA_BATTLEEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xCE1520)
#define FLATDATA_BATTLEEXCEL_GETNONEBYTES_OFFSET UNITYSDK_OFFSET(0xCE15B0)
#define FLATDATA_BATTLEEXCEL_GET_SINGLE_OFFSET UNITYSDK_OFFSET(0xCE15D0)
#define FLATDATA_BATTLEEXCEL_GET_SINGLE_OFFSET UNITYSDK_OFFSET(0xCE1620)
#define FLATDATA_BATTLEEXCEL_GET_GUIDED_OFFSET UNITYSDK_OFFSET(0xCE16A0)
#define FLATDATA_BATTLEEXCEL_GET_GUIDED_OFFSET UNITYSDK_OFFSET(0xCE16F0)
#define FLATDATA_BATTLEEXCEL_GET_BLUE_OFFSET UNITYSDK_OFFSET(0xCE1770)
#define FLATDATA_BATTLEEXCEL_GET_BLUE_OFFSET UNITYSDK_OFFSET(0xCE17C0)
#define FLATDATA_BATTLEEXCEL_GET_COVERENTER_OFFSET UNITYSDK_OFFSET(0xCE1840)
#define FLATDATA_BATTLEEXCEL_GET_COVERENTER_OFFSET UNITYSDK_OFFSET(0xCE1890)
#define FLATDATA_BATTLEEXCEL_NORMAL_OFFSET UNITYSDK_OFFSET(0xCE1910)
#define FLATDATA_BATTLEEXCEL_GET_NORMALLENGTH_OFFSET UNITYSDK_OFFSET(0xCE1970)
#define FLATDATA_BATTLEEXCEL_NORMAL_OFFSET UNITYSDK_OFFSET(0xCE19B0)
#define FLATDATA_BATTLEEXCEL_GETNORMALBYTES_OFFSET UNITYSDK_OFFSET(0xCE1A40)
#define FLATDATA_BATTLEEXCEL_GET_CRUSH_OFFSET UNITYSDK_OFFSET(0xCE1A60)
#define FLATDATA_BATTLEEXCEL_GET_CRUSH_OFFSET UNITYSDK_OFFSET(0xCE1AB0)
#define FLATDATA_BATTLEEXCEL_GET_ABLE_OFFSET UNITYSDK_OFFSET(0xCE1B30)
#define FLATDATA_BATTLEEXCEL_GET_ABLE_OFFSET UNITYSDK_OFFSET(0xCE1B80)
#define FLATDATA_BATTLEEXCEL_GET_ALLYSELF_OFFSET UNITYSDK_OFFSET(0xCE1C00)
#define FLATDATA_BATTLEEXCEL_GET_ALLYSELF_OFFSET UNITYSDK_OFFSET(0xCE1C50)
#define FLATDATA_BATTLEEXCEL_GET_LIGHTARMOR_OFFSET UNITYSDK_OFFSET(0xCE1CD0)
#define FLATDATA_BATTLEEXCEL_GET_LIGHTARMOR_OFFSET UNITYSDK_OFFSET(0xCE1D20)
#define FLATDATA_BATTLEEXCEL_GET_WOOD_OFFSET UNITYSDK_OFFSET(0xCE1DA0)
#define FLATDATA_BATTLEEXCEL_GET_WOOD_OFFSET UNITYSDK_OFFSET(0xCE1DF0)
#define FLATDATA_BATTLEEXCEL_ALL_OFFSET UNITYSDK_OFFSET(0xCE1E70)
#define FLATDATA_BATTLEEXCEL_GET_ALLLENGTH_OFFSET UNITYSDK_OFFSET(0xCE1ED0)
#define FLATDATA_BATTLEEXCEL_ALL_OFFSET UNITYSDK_OFFSET(0xCE1F10)
#define FLATDATA_BATTLEEXCEL_GETALLBYTES_OFFSET UNITYSDK_OFFSET(0xCE1FA0)
#define FLATDATA_BATTLEEXCEL_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCE1FC0)
#define FLATDATA_BATTLEEXCEL_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xCE2010)
#define FLATDATA_BATTLEEXCEL_GET_CLOSETOOBSTACLE_OFFSET UNITYSDK_OFFSET(0xCE2090)
#define FLATDATA_BATTLEEXCEL_GET_CLOSETOOBSTACLE_OFFSET UNITYSDK_OFFSET(0xCE20E0)
#define FLATDATA_BATTLEEXCEL_GET_STUDENTS_OFFSET UNITYSDK_OFFSET(0xCE2160)
#define FLATDATA_BATTLEEXCEL_GET_STUDENTS_OFFSET UNITYSDK_OFFSET(0xCE21B0)
#define FLATDATA_BATTLEEXCEL_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0xCE2230)
#define FLATDATA_BATTLEEXCEL_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0xCE2280)
#define FLATDATA_BATTLEEXCEL_GET_USENEXTEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE2300)
#define FLATDATA_BATTLEEXCEL_GET_USENEXTEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE2350)
#define FLATDATA_BATTLEEXCEL_GET_STUDENT_OFFSET UNITYSDK_OFFSET(0xCE23D0)
#define FLATDATA_BATTLEEXCEL_GET_STUDENT_OFFSET UNITYSDK_OFFSET(0xCE2420)
#define FLATDATA_BATTLEEXCEL_GET_SEARCHANDMOVE_OFFSET UNITYSDK_OFFSET(0xCE24A0)
#define FLATDATA_BATTLEEXCEL_GET_SEARCHANDMOVE_OFFSET UNITYSDK_OFFSET(0xCE24F0)
#define FLATDATA_BATTLEEXCEL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCE2570)
#define FLATDATA_BATTLEEXCEL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCE25C0)
#define FLATDATA_BATTLEEXCEL_GET_STREET_OFFSET UNITYSDK_OFFSET(0xCE2640)
#define FLATDATA_BATTLEEXCEL_GET_STREET_OFFSET UNITYSDK_OFFSET(0xCE2690)
#define FLATDATA_BATTLEEXCEL_GET_D_OFFSET UNITYSDK_OFFSET(0xCE2710)
#define FLATDATA_BATTLEEXCEL_GET_D_OFFSET UNITYSDK_OFFSET(0xCE2760)
#define FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xCE27E0)
#define FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xCE2830)
#define FLATDATA_BATTLEEXCEL_GET_REMAIN_OFFSET UNITYSDK_OFFSET(0xCE28B0)
#define FLATDATA_BATTLEEXCEL_GET_REMAIN_OFFSET UNITYSDK_OFFSET(0xCE2900)
#define FLATDATA_BATTLEEXCEL_GET_LOW_OFFSET UNITYSDK_OFFSET(0xCE2980)
#define FLATDATA_BATTLEEXCEL_GET_LOW_OFFSET UNITYSDK_OFFSET(0xCE29D0)
#define FLATDATA_BATTLEEXCEL_GET_RESIST_OFFSET UNITYSDK_OFFSET(0xCE2A50)
#define FLATDATA_BATTLEEXCEL_GET_RESIST_OFFSET UNITYSDK_OFFSET(0xCE2AA0)
#define FLATDATA_BATTLEEXCEL_GET_ALLY_OFFSET UNITYSDK_OFFSET(0xCE2B20)
#define FLATDATA_BATTLEEXCEL_GET_ALLY_OFFSET UNITYSDK_OFFSET(0xCE2B70)
#define FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xCE2BF0)
#define FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xCE2C40)
#define FLATDATA_BATTLEEXCEL_GET_TARGETTOCASTER_OFFSET UNITYSDK_OFFSET(0xCE2CC0)
#define FLATDATA_BATTLEEXCEL_GET_TARGETTOCASTER_OFFSET UNITYSDK_OFFSET(0xCE2D10)
#define FLATDATA_BATTLEEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xCE2D90)
#define FLATDATA_BATTLEEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xCE2DE0)
#define FLATDATA_BATTLEEXCEL_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xCE2E60)
#define FLATDATA_BATTLEEXCEL_GET_PRESET_OFFSET UNITYSDK_OFFSET(0xCE2EB0)
#define FLATDATA_BATTLEEXCEL_GET_FINALDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE2F30)
#define FLATDATA_BATTLEEXCEL_GET_FINALDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE2F80)
#define FLATDATA_BATTLEEXCEL_GET_SPECIALTRANSSTAT_OFFSET UNITYSDK_OFFSET(0xCE3000)
#define FLATDATA_BATTLEEXCEL_GET_SPECIALTRANSSTAT_OFFSET UNITYSDK_OFFSET(0xCE3050)
#define FLATDATA_BATTLEEXCEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0xCE30D0)
#define FLATDATA_BATTLEEXCEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0xCE3120)
#define FLATDATA_BATTLEEXCEL_CREATEBATTLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE31A0)
#define FLATDATA_BATTLEEXCEL_STARTBATTLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE3E20)
#define FLATDATA_BATTLEEXCEL_ADDNONE_OFFSET UNITYSDK_OFFSET(0xCE3DA0)
#define FLATDATA_BATTLEEXCEL_CREATENONEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE3E40)
#define FLATDATA_BATTLEEXCEL_STARTNONEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE3ED0)
#define FLATDATA_BATTLEEXCEL_ADDSINGLE_OFFSET UNITYSDK_OFFSET(0xCE3D70)
#define FLATDATA_BATTLEEXCEL_ADDGUIDED_OFFSET UNITYSDK_OFFSET(0xCE3D40)
#define FLATDATA_BATTLEEXCEL_ADDBLUE_OFFSET UNITYSDK_OFFSET(0xCE3D10)
#define FLATDATA_BATTLEEXCEL_ADDCOVERENTER_OFFSET UNITYSDK_OFFSET(0xCE3CE0)
#define FLATDATA_BATTLEEXCEL_ADDNORMAL_OFFSET UNITYSDK_OFFSET(0xCE3CB0)
#define FLATDATA_BATTLEEXCEL_CREATENORMALVECTOR_OFFSET UNITYSDK_OFFSET(0xCE3F10)
#define FLATDATA_BATTLEEXCEL_STARTNORMALVECTOR_OFFSET UNITYSDK_OFFSET(0xCE3FA0)
#define FLATDATA_BATTLEEXCEL_ADDCRUSH_OFFSET UNITYSDK_OFFSET(0xCE3C80)
#define FLATDATA_BATTLEEXCEL_ADDABLE_OFFSET UNITYSDK_OFFSET(0xCE3C50)
#define FLATDATA_BATTLEEXCEL_ADDALLYSELF_OFFSET UNITYSDK_OFFSET(0xCE3C20)
#define FLATDATA_BATTLEEXCEL_ADDLIGHTARMOR_OFFSET UNITYSDK_OFFSET(0xCE3BF0)
#define FLATDATA_BATTLEEXCEL_ADDWOOD_OFFSET UNITYSDK_OFFSET(0xCE3BC0)
#define FLATDATA_BATTLEEXCEL_ADDALL_OFFSET UNITYSDK_OFFSET(0xCE3B90)
#define FLATDATA_BATTLEEXCEL_CREATEALLVECTOR_OFFSET UNITYSDK_OFFSET(0xCE3FE0)
#define FLATDATA_BATTLEEXCEL_STARTALLVECTOR_OFFSET UNITYSDK_OFFSET(0xCE4070)
#define FLATDATA_BATTLEEXCEL_ADDDISTANCE_OFFSET UNITYSDK_OFFSET(0xCE3B60)
#define FLATDATA_BATTLEEXCEL_ADDCLOSETOOBSTACLE_OFFSET UNITYSDK_OFFSET(0xCE3B30)
#define FLATDATA_BATTLEEXCEL_ADDSTUDENTS_OFFSET UNITYSDK_OFFSET(0xCE3B00)
#define FLATDATA_BATTLEEXCEL_ADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCE3AD0)
#define FLATDATA_BATTLEEXCEL_ADDUSENEXTEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE3AA0)
#define FLATDATA_BATTLEEXCEL_ADDSTUDENT_OFFSET UNITYSDK_OFFSET(0xCE3A70)
#define FLATDATA_BATTLEEXCEL_ADDSEARCHANDMOVE_OFFSET UNITYSDK_OFFSET(0xCE3A40)
#define FLATDATA_BATTLEEXCEL_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE3A10)
#define FLATDATA_BATTLEEXCEL_ADDSTREET_OFFSET UNITYSDK_OFFSET(0xCE39E0)
#define FLATDATA_BATTLEEXCEL_ADDD_OFFSET UNITYSDK_OFFSET(0xCE39B0)
#define FLATDATA_BATTLEEXCEL_ADDMAIN_OFFSET UNITYSDK_OFFSET(0xCE3980)
#define FLATDATA_BATTLEEXCEL_ADDREMAIN_OFFSET UNITYSDK_OFFSET(0xCE3950)
#define FLATDATA_BATTLEEXCEL_ADDLOW_OFFSET UNITYSDK_OFFSET(0xCE3920)
#define FLATDATA_BATTLEEXCEL_ADDRESIST_OFFSET UNITYSDK_OFFSET(0xCE38F0)
#define FLATDATA_BATTLEEXCEL_ADDALLY_OFFSET UNITYSDK_OFFSET(0xCE38C0)
#define FLATDATA_BATTLEEXCEL_ADDMAIN_OFFSET UNITYSDK_OFFSET(0xCE3890)
#define FLATDATA_BATTLEEXCEL_ADDTARGETTOCASTER_OFFSET UNITYSDK_OFFSET(0xCE3860)
#define FLATDATA_BATTLEEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0xCE3830)
#define FLATDATA_BATTLEEXCEL_ADDPRESET_OFFSET UNITYSDK_OFFSET(0xCE3800)
#define FLATDATA_BATTLEEXCEL_ADDFINALDAMAGE_OFFSET UNITYSDK_OFFSET(0xCE37D0)
#define FLATDATA_BATTLEEXCEL_ADDSPECIALTRANSSTAT_OFFSET UNITYSDK_OFFSET(0xCE37A0)
#define FLATDATA_BATTLEEXCEL_ADDTALK_OFFSET UNITYSDK_OFFSET(0xCE3770)
#define FLATDATA_BATTLEEXCEL_ENDBATTLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE3DD0)

namespace FlatData
{
	inline static constexpr unsigned int BattleExcel_TypeDefinitionIndex = 9195;

	class BattleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BattleExcel* GetRootAsBattleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BattleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GETROOTASBATTLEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::BattleExcel* GetRootAsBattleExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::BattleExcel* arg2)
		{
			return ((::FlatData::BattleExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BattleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GETROOTASBATTLEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BattleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BattleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::UnitType* none(::System::Int32 arg)
		{
			return ((::FlatData::UnitType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NoneLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_NONELENGTH_OFFSET))(nullptr);
		}

		::FlatData::UnitType* None(::System::Int32 arg)
		{
			return ((::FlatData::UnitType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNoneBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GETNONEBYTES_OFFSET))(nullptr);
		}

		::FlatData::AttackType* get_single()
		{
			return ((::FlatData::AttackType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SINGLE_OFFSET))(nullptr);
		}

		::FlatData::AttackType* get_Single()
		{
			return ((::FlatData::AttackType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SINGLE_OFFSET))(nullptr);
		}

		::FlatData::ProjectileType* get_guided()
		{
			return ((::FlatData::ProjectileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_GUIDED_OFFSET))(nullptr);
		}

		::FlatData::ProjectileType* get_Guided()
		{
			return ((::FlatData::ProjectileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_GUIDED_OFFSET))(nullptr);
		}

		::FlatData::DamageFontColor* get_blue()
		{
			return ((::FlatData::DamageFontColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_BLUE_OFFSET))(nullptr);
		}

		::FlatData::DamageFontColor* get_Blue()
		{
			return ((::FlatData::DamageFontColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_BLUE_OFFSET))(nullptr);
		}

		::FlatData::EmoticonEvent* get_coverEnter()
		{
			return ((::FlatData::EmoticonEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_COVERENTER_OFFSET))(nullptr);
		}

		::FlatData::EmoticonEvent* get_CoverEnter()
		{
			return ((::FlatData::EmoticonEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_COVERENTER_OFFSET))(nullptr);
		}

		::FlatData::BulletType* normal(::System::Int32 arg)
		{
			return ((::FlatData::BulletType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_NORMAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NormalLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_NORMALLENGTH_OFFSET))(nullptr);
		}

		::FlatData::BulletType* Normal(::System::Int32 arg)
		{
			return ((::FlatData::BulletType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_NORMAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNormalBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GETNORMALBYTES_OFFSET))(nullptr);
		}

		::FlatData::ActionType* get_crush()
		{
			return ((::FlatData::ActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_CRUSH_OFFSET))(nullptr);
		}

		::FlatData::ActionType* get_Crush()
		{
			return ((::FlatData::ActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_CRUSH_OFFSET))(nullptr);
		}

		::FlatData::BuffOverlap* get_able()
		{
			return ((::FlatData::BuffOverlap*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ABLE_OFFSET))(nullptr);
		}

		::FlatData::BuffOverlap* get_Able()
		{
			return ((::FlatData::BuffOverlap*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ABLE_OFFSET))(nullptr);
		}

		::FlatData::ReArrangeTargetType* get_allySelf()
		{
			return ((::FlatData::ReArrangeTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ALLYSELF_OFFSET))(nullptr);
		}

		::FlatData::ReArrangeTargetType* get_AllySelf()
		{
			return ((::FlatData::ReArrangeTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ALLYSELF_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_lightArmor()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_LIGHTARMOR_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_LightArmor()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_LIGHTARMOR_OFFSET))(nullptr);
		}

		::FlatData::EntityMaterialType* get_wood()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_WOOD_OFFSET))(nullptr);
		}

		::FlatData::EntityMaterialType* get_Wood()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_WOOD_OFFSET))(nullptr);
		}

		::FlatData::CoverMotionType* all(::System::Int32 arg)
		{
			return ((::FlatData::CoverMotionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AllLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ALLLENGTH_OFFSET))(nullptr);
		}

		::FlatData::CoverMotionType* All(::System::Int32 arg)
		{
			return ((::FlatData::CoverMotionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GETALLBYTES_OFFSET))(nullptr);
		}

		::FlatData::TargetSortBy* get_dISTANCE()
		{
			return ((::FlatData::TargetSortBy*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_DISTANCE_OFFSET))(nullptr);
		}

		::FlatData::TargetSortBy* get_DISTANCE()
		{
			return ((::FlatData::TargetSortBy*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_DISTANCE_OFFSET))(nullptr);
		}

		::FlatData::PositioningType* get_closeToObstacle()
		{
			return ((::FlatData::PositioningType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_CLOSETOOBSTACLE_OFFSET))(nullptr);
		}

		::FlatData::PositioningType* get_CloseToObstacle()
		{
			return ((::FlatData::PositioningType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_CLOSETOOBSTACLE_OFFSET))(nullptr);
		}

		::FlatData::FormationLine* get_students()
		{
			return ((::FlatData::FormationLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STUDENTS_OFFSET))(nullptr);
		}

		::FlatData::FormationLine* get_Students()
		{
			return ((::FlatData::FormationLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STUDENTS_OFFSET))(nullptr);
		}

		::FlatData::ExternalBTNodeType* get_sequence()
		{
			return ((::FlatData::ExternalBTNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::FlatData::ExternalBTNodeType* get_Sequence()
		{
			return ((::FlatData::ExternalBTNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::FlatData::ExternalBehavior* get_useNextExSkill()
		{
			return ((::FlatData::ExternalBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_USENEXTEXSKILL_OFFSET))(nullptr);
		}

		::FlatData::ExternalBehavior* get_UseNextExSkill()
		{
			return ((::FlatData::ExternalBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_USENEXTEXSKILL_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_student()
		{
			return ((::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STUDENT_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_Student()
		{
			return ((::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STUDENT_OFFSET))(nullptr);
		}

		::FlatData::EngageType* get_searchAndMove()
		{
			return ((::FlatData::EngageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SEARCHANDMOVE_OFFSET))(nullptr);
		}

		::FlatData::EngageType* get_SearchAndMove()
		{
			return ((::FlatData::EngageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SEARCHANDMOVE_OFFSET))(nullptr);
		}

		::FlatData::HitEffectPosition* get_position()
		{
			return ((::FlatData::HitEffectPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_POSITION_OFFSET))(nullptr);
		}

		::FlatData::HitEffectPosition* get_Position()
		{
			return ((::FlatData::HitEffectPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_POSITION_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_street()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STREET_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_Street()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_STREET_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_d()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_D_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_D()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_D_OFFSET))(nullptr);
		}

		::FlatData::ObstacleClass* get_mAIN()
		{
			return ((::FlatData::ObstacleClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET))(nullptr);
		}

		::FlatData::ObstacleClass* get_MAIN()
		{
			return ((::FlatData::ObstacleClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET))(nullptr);
		}

		::FlatData::ObstacleDestroyType* get_remain()
		{
			return ((::FlatData::ObstacleDestroyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_REMAIN_OFFSET))(nullptr);
		}

		::FlatData::ObstacleDestroyType* get_Remain()
		{
			return ((::FlatData::ObstacleDestroyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_REMAIN_OFFSET))(nullptr);
		}

		::FlatData::ObstacleHeightType* get_low()
		{
			return ((::FlatData::ObstacleHeightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_LOW_OFFSET))(nullptr);
		}

		::FlatData::ObstacleHeightType* get_Low()
		{
			return ((::FlatData::ObstacleHeightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_LOW_OFFSET))(nullptr);
		}

		::FlatData::DamageAttribute* get_resist()
		{
			return ((::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_RESIST_OFFSET))(nullptr);
		}

		::FlatData::DamageAttribute* get_Resist()
		{
			return ((::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_RESIST_OFFSET))(nullptr);
		}

		::FlatData::SkillPriorityCheckTarget* get_ally()
		{
			return ((::FlatData::SkillPriorityCheckTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ALLY_OFFSET))(nullptr);
		}

		::FlatData::SkillPriorityCheckTarget* get_Ally()
		{
			return ((::FlatData::SkillPriorityCheckTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_ALLY_OFFSET))(nullptr);
		}

		::FlatData::StageType* get_main()
		{
			return ((::FlatData::StageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET))(nullptr);
		}

		::FlatData::StageType* get_Main()
		{
			return ((::FlatData::StageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_MAIN_OFFSET))(nullptr);
		}

		::FlatData::KnockbackDirection* get_targetToCaster()
		{
			return ((::FlatData::KnockbackDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_TARGETTOCASTER_OFFSET))(nullptr);
		}

		::FlatData::KnockbackDirection* get_TargetToCaster()
		{
			return ((::FlatData::KnockbackDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_TARGETTOCASTER_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_duration()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_Duration()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::FlatData::ArenaSimulatorServer* get_preset()
		{
			return ((::FlatData::ArenaSimulatorServer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_PRESET_OFFSET))(nullptr);
		}

		::FlatData::ArenaSimulatorServer* get_Preset()
		{
			return ((::FlatData::ArenaSimulatorServer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_PRESET_OFFSET))(nullptr);
		}

		::FlatData::BattleCalculationStat* get_finalDamage()
		{
			return ((::FlatData::BattleCalculationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_FINALDAMAGE_OFFSET))(nullptr);
		}

		::FlatData::BattleCalculationStat* get_FinalDamage()
		{
			return ((::FlatData::BattleCalculationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_FINALDAMAGE_OFFSET))(nullptr);
		}

		::FlatData::StatTransType* get_specialTransStat()
		{
			return ((::FlatData::StatTransType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SPECIALTRANSSTAT_OFFSET))(nullptr);
		}

		::FlatData::StatTransType* get_SpecialTransStat()
		{
			return ((::FlatData::StatTransType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_SPECIALTRANSSTAT_OFFSET))(nullptr);
		}

		::FlatData::BattleDialogType* get_talk()
		{
			return ((::FlatData::BattleDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_TALK_OFFSET))(nullptr);
		}

		::FlatData::BattleDialogType* get_Talk()
		{
			return ((::FlatData::BattleDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_GET_TALK_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2, ::FlatData::AttackType* arg3, ::FlatData::ProjectileType* arg4, ::FlatData::DamageFontColor* arg5, ::FlatData::EmoticonEvent* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatData::ActionType* arg8, ::FlatData::BuffOverlap* arg9, ::FlatData::ReArrangeTargetType* arg10, ::FlatData::ArmorType* arg11, ::FlatData::EntityMaterialType* arg12, ::FlatBuffers::VectorOffset* arg13, ::FlatData::TargetSortBy* arg14, ::FlatData::PositioningType* arg15, ::FlatData::FormationLine* arg16, ::FlatData::ExternalBTNodeType* arg17, ::FlatData::ExternalBehavior* arg18, ::FlatData::TacticEntityType* arg19, ::FlatData::EngageType* arg20, ::FlatData::HitEffectPosition* arg21, ::FlatData::StageTopography* arg22, ::FlatData::TerrainAdaptationStat* arg23, ::FlatData::ObstacleClass* arg24, ::FlatData::ObstacleDestroyType* arg25, ::FlatData::ObstacleHeightType* arg26, ::FlatData::DamageAttribute* arg27, ::FlatData::SkillPriorityCheckTarget* arg28, ::FlatData::StageType* arg29, ::FlatData::KnockbackDirection* arg30, ::FlatData::EndCondition* arg31, ::FlatData::ArenaSimulatorServer* arg32, ::FlatData::BattleCalculationStat* arg33, ::FlatData::StatTransType* arg34, ::FlatData::BattleDialogType* arg35)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::FlatData::AttackType*, ::FlatData::ProjectileType*, ::FlatData::DamageFontColor*, ::FlatData::EmoticonEvent*, ::FlatBuffers::VectorOffset*, ::FlatData::ActionType*, ::FlatData::BuffOverlap*, ::FlatData::ReArrangeTargetType*, ::FlatData::ArmorType*, ::FlatData::EntityMaterialType*, ::FlatBuffers::VectorOffset*, ::FlatData::TargetSortBy*, ::FlatData::PositioningType*, ::FlatData::FormationLine*, ::FlatData::ExternalBTNodeType*, ::FlatData::ExternalBehavior*, ::FlatData::TacticEntityType*, ::FlatData::EngageType*, ::FlatData::HitEffectPosition*, ::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::FlatData::ObstacleClass*, ::FlatData::ObstacleDestroyType*, ::FlatData::ObstacleHeightType*, ::FlatData::DamageAttribute*, ::FlatData::SkillPriorityCheckTarget*, ::FlatData::StageType*, ::FlatData::KnockbackDirection*, ::FlatData::EndCondition*, ::FlatData::ArenaSimulatorServer*, ::FlatData::BattleCalculationStat*, ::FlatData::StatTransType*, ::FlatData::BattleDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_CREATEBATTLEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, nullptr);
		}

		::System::Void StartBattleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_STARTBATTLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNone(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDNONE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_CREATENONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_STARTNONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSingle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AttackType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AttackType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSINGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGuided(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProjectileType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProjectileType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDGUIDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBlue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DamageFontColor* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DamageFontColor*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDBLUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCoverEnter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmoticonEvent* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmoticonEvent*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDCOVERENTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNormal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDNORMAL_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNormalVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_CREATENORMALVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNormalVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_STARTNORMALVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCrush(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ActionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ActionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDCRUSH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAble(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BuffOverlap* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BuffOverlap*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAllySelf(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ReArrangeTargetType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ReArrangeTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDALLYSELF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLightArmor(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArmorType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDLIGHTARMOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddWood(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EntityMaterialType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EntityMaterialType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDWOOD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAll(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDALL_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAllVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_CREATEALLVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartAllVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_STARTALLVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDISTANCE(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetSortBy* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetSortBy*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDDISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCloseToObstacle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PositioningType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PositioningType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDCLOSETOOBSTACLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStudents(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FormationLine* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FormationLine*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSTUDENTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSequence(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ExternalBTNodeType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ExternalBTNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSEQUENCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUseNextExSkill(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ExternalBehavior* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ExternalBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDUSENEXTEXSKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStudent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEntityType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSTUDENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSearchAndMove(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EngageType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EngageType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSEARCHANDMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPosition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::HitEffectPosition* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::HitEffectPosition*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStreet(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSTREET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddD(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TerrainAdaptationStat* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMAIN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ObstacleClass* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ObstacleClass*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDMAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRemain(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ObstacleDestroyType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ObstacleDestroyType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDREMAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLow(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ObstacleHeightType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ObstacleHeightType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDLOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResist(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDRESIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAlly(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SkillPriorityCheckTarget* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SkillPriorityCheckTarget*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDALLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMain(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDMAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTargetToCaster(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::KnockbackDirection* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::KnockbackDirection*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDTARGETTOCASTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EndCondition* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EndCondition*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPreset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArenaSimulatorServer* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArenaSimulatorServer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDPRESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFinalDamage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BattleCalculationStat* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BattleCalculationStat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDFINALDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpecialTransStat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatTransType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatTransType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDSPECIALTRANSSTAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTalk(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BattleDialogType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BattleDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ADDTALK_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBattleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BATTLEEXCEL_ENDBATTLEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

