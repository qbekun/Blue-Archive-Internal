#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillType; }
namespace MX::GameData::DAO::Battle { class TransferredDamageEffectDAO; }

#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1240860)
#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_TRANSFERHITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1240870)
#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1240880)
#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240890)
#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1240930)
#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1240940)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TransferredDamageEffectValue_TypeDefinitionIndex = 13937;

	class TransferredDamageEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IgnoreShield_k__BackingField; // 0x48
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0x49
		::System::Boolean _TransferHitResultType_k__BackingField; // 0x4A
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0x4C
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0x50

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_TransferHitResultType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_TRANSFERHITRESULTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TransferredDamageEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TransferredDamageEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

	};
}

