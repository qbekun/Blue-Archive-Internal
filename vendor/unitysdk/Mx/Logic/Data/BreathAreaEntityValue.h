#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::GameData::DAO::Battle { class BreathAreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_PARTICLEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x12450C0)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x12450D0)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_EXCLUDERADIUS_OFFSET UNITYSDK_OFFSET(0x12450E0)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12450F0)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1245610)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_APPLYABILITIESTOTARGETS_OFFSET UNITYSDK_OFFSET(0x1245620)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_REMOVEWHENHIT_OFFSET UNITYSDK_OFFSET(0x1245630)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1245640)
#define MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_NUMBEROFTARGETSREQUIRED_OFFSET UNITYSDK_OFFSET(0x1245650)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BreathAreaEntityValue_TypeDefinitionIndex = 13955;

	class BreathAreaEntityValue : public Il2CppObject
	{
	public:
		Il2CppObject* _BarrierTransferAbilities_k__BackingField; // 0x1B8
		::System::Single _ExcludeRadius_k__BackingField; // 0x1C0
		::System::Boolean _RemoveWhenHit_k__BackingField; // 0x1C4
		::MX::Logic::Skills::TargetEntityType* _EntityType_k__BackingField; // 0x1C8
		::System::Int32 _NumberOfTargetsRequired_k__BackingField; // 0x1CC
		::MX::Logic::Data::SkillAbilityValue* _ApplyAbilitiesToTargets_k__BackingField; // 0x1D0
		::System::String* _ParticleEffectName_k__BackingField; // 0x1D8

		::System::String* get_ParticleEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_PARTICLEEFFECTNAME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetEntityType* get_EntityType()
		{
			return ((::MX::Logic::Skills::TargetEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_ENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Single get_ExcludeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_EXCLUDERADIUS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BreathAreaEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BreathAreaEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetBarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillAbilityValue* get_ApplyAbilitiesToTargets()
		{
			return ((::MX::Logic::Data::SkillAbilityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_APPLYABILITIESTOTARGETS_OFFSET))(nullptr);
		}

		::System::Boolean get_RemoveWhenHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_REMOVEWHENHIT_OFFSET))(nullptr);
		}

		Il2CppObject* get_BarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_NumberOfTargetsRequired()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BREATHAREAENTITYVALUE_GET_NUMBEROFTARGETSREQUIRED_OFFSET))(nullptr);
		}

	};
}

