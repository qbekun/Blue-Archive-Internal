#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class DamageTransferEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1414FE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1414FF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERREDDAMAGEEFFECTLEVEL_OFFSET UNITYSDK_OFFSET(0x1415000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERREDDAMAGEEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1415010)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1415020)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1415090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERRATIO_OFFSET UNITYSDK_OFFSET(0x14150A0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DamageTransferEffect_TypeDefinitionIndex = 14733;

	class DamageTransferEffect : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _TransferRatio_k__BackingField; // 0xD0
		::System::Int32 _DurationFrame_k__BackingField; // 0xD8
		::System::Boolean _IsDispellable_k__BackingField; // 0xDC
		::System::String* _TransferredDamageEffectGroupId_k__BackingField; // 0xE0
		::System::Int32 _TransferredDamageEffectLevel_k__BackingField; // 0xE8

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_TransferredDamageEffectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERREDDAMAGEEFFECTLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_TransferredDamageEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERREDDAMAGEEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DamageTransferEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DamageTransferEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TransferRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGETRANSFEREFFECT_GET_TRANSFERRATIO_OFFSET))(nullptr);
		}

	};
}

