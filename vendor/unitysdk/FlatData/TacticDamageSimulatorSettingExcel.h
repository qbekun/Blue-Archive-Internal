#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticDamageSimulatorSettingExcel; }
namespace FlatData { class TerrainAdaptationStat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5E560)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD5E570)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD5E5D0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD5E630)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5E280)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD5E650)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD5E6A0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0xD5E720)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0xD5E770)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTPRESET_OFFSET UNITYSDK_OFFSET(0xD5E7F0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTPRESET_OFFSET UNITYSDK_OFFSET(0xD5E840)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xD5E8C0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xD5E910)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_STRIKERSQUARD_OFFSET UNITYSDK_OFFSET(0xD5E990)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_STRIKERSQUARD_OFFSET UNITYSDK_OFFSET(0xD5E9E0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_SPECIALSQUARD_OFFSET UNITYSDK_OFFSET(0xD5EA60)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_SPECIALSQUARD_OFFSET UNITYSDK_OFFSET(0xD5EAB0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECHARACTERCOSTREGEN_OFFSET UNITYSDK_OFFSET(0xD5EB30)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECHARACTERCOSTREGEN_OFFSET UNITYSDK_OFFSET(0xD5EB80)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECOSTREGENVALUE_OFFSET UNITYSDK_OFFSET(0xD5EBD0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECOSTREGENVALUE_OFFSET UNITYSDK_OFFSET(0xD5EC20)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_USEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0xD5ECA0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_USEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0xD5ECF0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDESTREETADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5ED40)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDESTREETADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5ED90)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEOUTDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5EE10)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEOUTDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5EE60)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEINDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5EEE0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEINDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5EF30)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5EFB0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5F000)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F050)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F0A0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F120)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F170)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD5F1C0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD5F210)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_FIXEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xD5F290)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_FIXEDCHARACTERLENGTH_OFFSET UNITYSDK_OFFSET(0xD5F2F0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_FIXEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xD5F330)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETFIXEDCHARACTERBYTES_OFFSET UNITYSDK_OFFSET(0xD5F3C0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_CREATETACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD5F3E0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_STARTTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD5FA50)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0xD5F910)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPEAT_OFFSET UNITYSDK_OFFSET(0xD5F8E0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDTESTPRESET_OFFSET UNITYSDK_OFFSET(0xD5F790)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDTESTBATTLETIME_OFFSET UNITYSDK_OFFSET(0xD5F760)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDSTRIKERSQUARD_OFFSET UNITYSDK_OFFSET(0xD5F730)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDSPECIALSQUARD_OFFSET UNITYSDK_OFFSET(0xD5F700)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPLACECHARACTERCOSTREGEN_OFFSET UNITYSDK_OFFSET(0xD5F9D0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPLACECOSTREGENVALUE_OFFSET UNITYSDK_OFFSET(0xD5F8B0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0xD5F9A0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDESTREETADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5F880)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEOUTDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5F850)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEINDOORADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5F820)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDAPPLYOVERRIDEADAPTATION_OFFSET UNITYSDK_OFFSET(0xD5F970)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F7F0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDAPPLYOVERRIDEFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0xD5F940)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD5F6D0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDFIXEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xD5F7C0)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_CREATEFIXEDCHARACTERVECTOR_OFFSET UNITYSDK_OFFSET(0xD5FA70)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_STARTFIXEDCHARACTERVECTOR_OFFSET UNITYSDK_OFFSET(0xD5FB00)
#define FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ENDTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD5FA00)

namespace FlatData
{
	inline static constexpr unsigned int TacticDamageSimulatorSettingExcel_TypeDefinitionIndex = 9339;

	class TacticDamageSimulatorSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcel* GetRootAsTacticDamageSimulatorSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcel* GetRootAsTacticDamageSimulatorSettingExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticDamageSimulatorSettingExcel* arg2)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticDamageSimulatorSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETROOTASTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticDamageSimulatorSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticDamageSimulatorSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_repeat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPEAT_OFFSET))(nullptr);
		}

		::System::Int32 get_Repeat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPEAT_OFFSET))(nullptr);
		}

		::System::Int64 get_testPreset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTPRESET_OFFSET))(nullptr);
		}

		::System::Int64 get_TestPreset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTPRESET_OFFSET))(nullptr);
		}

		::System::Int64 get_testBattleTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTBATTLETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_TestBattleTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_TESTBATTLETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_strikerSquard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_STRIKERSQUARD_OFFSET))(nullptr);
		}

		::System::Int64 get_StrikerSquard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_STRIKERSQUARD_OFFSET))(nullptr);
		}

		::System::Int64 get_specialSquard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_SPECIALSQUARD_OFFSET))(nullptr);
		}

		::System::Int64 get_SpecialSquard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_SPECIALSQUARD_OFFSET))(nullptr);
		}

		::System::Boolean get_replaceCharacterCostRegen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECHARACTERCOSTREGEN_OFFSET))(nullptr);
		}

		::System::Boolean get_ReplaceCharacterCostRegen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECHARACTERCOSTREGEN_OFFSET))(nullptr);
		}

		::System::Int32 get_replaceCostRegenValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECOSTREGENVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_ReplaceCostRegenValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_REPLACECOSTREGENVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_useAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_USEAUTOSKILL_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_USEAUTOSKILL_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_overrideStreetAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDESTREETADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_OverrideStreetAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDESTREETADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_overrideOutdoorAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEOUTDOORADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_OverrideOutdoorAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEOUTDOORADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_overrideIndoorAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEINDOORADAPTATION_OFFSET))(nullptr);
		}

		::FlatData::TerrainAdaptationStat* get_OverrideIndoorAdaptation()
		{
			return ((::FlatData::TerrainAdaptationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEINDOORADAPTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_applyOverrideAdaptation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEADAPTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyOverrideAdaptation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEADAPTATION_OFFSET))(nullptr);
		}

		::System::Int32 get_overrideFavorLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_OverrideFavorLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_OVERRIDEFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_applyOverrideFavorLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyOverrideFavorLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_APPLYOVERRIDEFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_groundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 fixedCharacter(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_FIXEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedCharacterLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GET_FIXEDCHARACTERLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 FixedCharacter(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_FIXEDCHARACTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFixedCharacterBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_GETFIXEDCHARACTERBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticDamageSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7, ::System::Boolean arg8, ::System::Int32 arg9, ::System::Boolean arg10, ::FlatData::TerrainAdaptationStat* arg11, ::FlatData::TerrainAdaptationStat* arg12, ::FlatData::TerrainAdaptationStat* arg13, ::System::Boolean arg14, ::System::Int32 arg15, ::System::Boolean arg16, ::System::Int64 arg17, ::FlatBuffers::VectorOffset* arg18)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Boolean, ::FlatData::TerrainAdaptationStat*, ::FlatData::TerrainAdaptationStat*, ::FlatData::TerrainAdaptationStat*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_CREATETACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, nullptr);
		}

		::System::Void StartTacticDamageSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_STARTTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRepeat(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPEAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTestPreset(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDTESTPRESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTestBattleTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDTESTBATTLETIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrikerSquard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDSTRIKERSQUARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpecialSquard(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDSPECIALSQUARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddReplaceCharacterCostRegen(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPLACECHARACTERCOSTREGEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddReplaceCostRegenValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDREPLACECOSTREGENVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUseAutoSkill(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDUSEAUTOSKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOverrideStreetAdaptation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TerrainAdaptationStat* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDESTREETADAPTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOverrideOutdoorAdaptation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TerrainAdaptationStat* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEOUTDOORADAPTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOverrideIndoorAdaptation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TerrainAdaptationStat* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEINDOORADAPTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddApplyOverrideAdaptation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDAPPLYOVERRIDEADAPTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOverrideFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDOVERRIDEFAVORLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddApplyOverrideFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDAPPLYOVERRIDEFAVORLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFixedCharacter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ADDFIXEDCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedCharacterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_CREATEFIXEDCHARACTERVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFixedCharacterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_STARTFIXEDCHARACTERVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticDamageSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICDAMAGESIMULATORSETTINGEXCEL_ENDTACTICDAMAGESIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

