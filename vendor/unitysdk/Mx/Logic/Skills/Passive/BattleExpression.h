#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Core::Services { class Hash64; }
class FunctionType;
namespace MX::Core::Expressions { class FunctionArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_HASLOGICEFFECTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1400780)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x14007B0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMDOUBLE|13_1_OFFSET UNITYSDK_OFFSET(0x14007C0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETBOSSAIPHASE_OFFSET UNITYSDK_OFFSET(0x1400860)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x14008D0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x14008E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETHPINTEGER_OFFSET UNITYSDK_OFFSET(0x1400CA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_REGISTERFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x1400CC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETAMMOCOUNT_OFFSET UNITYSDK_OFFSET(0x1400E30)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_ISRELOADING_OFFSET UNITYSDK_OFFSET(0x1400EA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_REGISTERENUMS_OFFSET UNITYSDK_OFFSET(0x1400EC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETCURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1401430)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETGROGGYGAUGERATE_OFFSET UNITYSDK_OFFSET(0x1401450)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETACTIVEPARTS_OFFSET UNITYSDK_OFFSET(0x14014F0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETFORMINDEX_OFFSET UNITYSDK_OFFSET(0x1401560)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x1401620)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_OPERATORTOLOWER_OFFSET UNITYSDK_OFFSET(0x1400A30)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETMAXHPCAPGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1401660)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_ENTITYASCHARACTER_OFFSET UNITYSDK_OFFSET(0x1401680)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMSTRING|13_4_OFFSET UNITYSDK_OFFSET(0x1401690)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMOBJECT|13_5_OFFSET UNITYSDK_OFFSET(0x1401730)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_EVALUATEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1401780)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETHPRATE_OFFSET UNITYSDK_OFFSET(0x14025E0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETCURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1402650)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETSTATGAUGERATE_OFFSET UNITYSDK_OFFSET(0x14026A0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMSHORT|13_3_OFFSET UNITYSDK_OFFSET(0x14024A0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMBOOL|13_0_OFFSET UNITYSDK_OFFSET(0x1402540)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMDECIMAL|13_2_OFFSET UNITYSDK_OFFSET(0x14023F0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleExpression_TypeDefinitionIndex = 14662;

	class BattleExpression : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* _battleCache_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _entity_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _entityAsCharacter_k__BackingField; // 0x28

		::System::Boolean HasLogicEffectTemplate(::MX::Core::Services::Hash64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_HASLOGICEFFECTTEMPLATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_battleCache()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_BATTLECACHE_OFFSET))(nullptr);
		}

		::System::Double _EvaluateFunction_g__GetParamDouble|13_1(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::Double(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMDOUBLE|13_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetBossAIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETBOSSAIPHASE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Int64 GetHPInteger()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETHPINTEGER_OFFSET))(nullptr);
		}

		::System::Void RegisterFunctions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_REGISTERFUNCTIONS_OFFSET))(nullptr);
		}

		::System::Int64 GetAmmoCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETAMMOCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsReloading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_ISRELOADING_OFFSET))(nullptr);
		}

		::System::Void RegisterEnums()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_REGISTERENUMS_OFFSET))(nullptr);
		}

		::System::Int32 GetCurrentFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETCURRENTFRAME_OFFSET))(nullptr);
		}

		::System::Int64 GetGroggyGaugeRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETGROGGYGAUGERATE_OFFSET))(nullptr);
		}

		::System::Int32 GetActiveParts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETACTIVEPARTS_OFFSET))(nullptr);
		}

		::System::Int64 GetFormIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETFORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean HasCrowdControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_HASCROWDCONTROL_OFFSET))(nullptr);
		}

		::System::String* OperatorToLower(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_OPERATORTOLOWER_OFFSET))(str, nullptr);
		}

		::System::Int64 GetMaxHpCapGaugeValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETMAXHPCAPGAUGEVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_entityAsCharacter()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GET_ENTITYASCHARACTER_OFFSET))(nullptr);
		}

		::System::String* _EvaluateFunction_g__GetParamString|13_4(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::String*(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMSTRING|13_4_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* _EvaluateFunction_g__GetParamObject|13_5(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::Object*(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMOBJECT|13_5_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EvaluateFunction(FunctionType* arg, ::MX::Core::Expressions::FunctionArgs* arg2)
		{
			((::System::Void(*)(FunctionType*, ::MX::Core::Expressions::FunctionArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_EVALUATEFUNCTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetHPRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETHPRATE_OFFSET))(nullptr);
		}

		::System::Int32 GetCurrentBehavior()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETCURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Int32 GetStatGaugeRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION_GETSTATGAUGERATE_OFFSET))(nullptr);
		}

		::System::Int16 _EvaluateFunction_g__GetParamShort|13_3(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::Int16(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMSHORT|13_3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _EvaluateFunction_g__GetParamBool|13_0(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMBOOL|13_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Decimal* _EvaluateFunction_g__GetParamDecimal|13_2(::System::Int32 arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::Decimal*(*)(::System::Int32, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEEXPRESSION__EVALUATEFUNCTION_G__GETPARAMDECIMAL|13_2_OFFSET))(arg, arg2, nullptr);
		}

	};
}

