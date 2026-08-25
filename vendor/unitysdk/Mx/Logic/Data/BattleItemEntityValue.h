#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::GameData::DAO::Battle { class BattleItemEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ORDERTOABILITYTABLE_OFFSET UNITYSDK_OFFSET(0x1243940)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_EFFECTRADIUS_OFFSET UNITYSDK_OFFSET(0x1243950)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_INEFFECTRADUSAREASPAWNERENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1243960)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1241AE0)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_LOGICEFFECTVALUES_OFFSET UNITYSDK_OFFSET(0x1243970)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1243980)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x1243990)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ACTIVEDELAYINFRAME_OFFSET UNITYSDK_OFFSET(0x12439A0)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_APPLYMOVINGAREABEFOREACTIVATION_OFFSET UNITYSDK_OFFSET(0x12439B0)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_RECOGNITIONRADIUS_OFFSET UNITYSDK_OFFSET(0x12439C0)
#define MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_INEFFECTRADIUSSKILLENTITYSPAWNERENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x12439D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BattleItemEntityValue_TypeDefinitionIndex = 13946;

	class BattleItemEntityValue : public Il2CppObject
	{
	public:
		::System::Single _RecognitionRadius_k__BackingField; // 0x190
		::System::Single _EffectRadius_k__BackingField; // 0x194
		::System::Int32 _TargetCount_k__BackingField; // 0x198
		::System::Int32 _ActiveDelayInFrame_k__BackingField; // 0x19C
		Il2CppObject* _LogicEffectValues_k__BackingField; // 0x1A0
		Il2CppObject* _Abilities_k__BackingField; // 0x1A8
		Il2CppObject* _OrderToAbilityTable_k__BackingField; // 0x1B0
		::MX::Logic::Data::AreaSpawnerValue* _InEffectRadusAreaSpawnerEntityValue_k__BackingField; // 0x1B8
		::MX::Logic::Data::SkillEntitySpawnerValue* _InEffectRadiusSkillEntitySpawnerEntityValue_k__BackingField; // 0x1C0
		::System::Boolean _ApplyMovingAreaBeforeActivation_k__BackingField; // 0x1C8

		Il2CppObject* get_OrderToAbilityTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ORDERTOABILITYTABLE_OFFSET))(nullptr);
		}

		::System::Single get_EffectRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_EFFECTRADIUS_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AreaSpawnerValue* get_InEffectRadusAreaSpawnerEntityValue()
		{
			return ((::MX::Logic::Data::AreaSpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_INEFFECTRADUSAREASPAWNERENTITYVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BattleItemEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BattleItemEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_LogicEffectValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_LOGICEFFECTVALUES_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_TARGETCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveDelayInFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_ACTIVEDELAYINFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyMovingAreaBeforeActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_APPLYMOVINGAREABEFOREACTIVATION_OFFSET))(nullptr);
		}

		::System::Single get_RecognitionRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_RECOGNITIONRADIUS_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntitySpawnerValue* get_InEffectRadiusSkillEntitySpawnerEntityValue()
		{
			return ((::MX::Logic::Data::SkillEntitySpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BATTLEITEMENTITYVALUE_GET_INEFFECTRADIUSSKILLENTITYSPAWNERENTITYVALUE_OFFSET))(nullptr);
		}

	};
}

