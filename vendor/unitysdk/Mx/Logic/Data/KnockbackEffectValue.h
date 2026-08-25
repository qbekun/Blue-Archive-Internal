#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class KnockbackDirection; }
namespace MX::GameData::DAO::Battle { class KnockbackEffectDAO; }

#define MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_MOVEDURATION_OFFSET UNITYSDK_OFFSET(0x123CDD0)
#define MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_KNOCKBACKDIRECTION_OFFSET UNITYSDK_OFFSET(0x123CDE0)
#define MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_MOVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x123CDF0)
#define MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123CE00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int KnockbackEffectValue_TypeDefinitionIndex = 13905;

	class KnockbackEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _MoveDuration_k__BackingField; // 0x48
		::System::Int64 _MoveDistance_k__BackingField; // 0x50
		::FlatData::KnockbackDirection* _KnockbackDirection_k__BackingField; // 0x58

		::System::Int64 get_MoveDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_MOVEDURATION_OFFSET))(nullptr);
		}

		::FlatData::KnockbackDirection* get_KnockbackDirection()
		{
			return ((::FlatData::KnockbackDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_KNOCKBACKDIRECTION_OFFSET))(nullptr);
		}

		::System::Int64 get_MoveDistance()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_GET_MOVEDISTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::KnockbackEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::KnockbackEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_KNOCKBACKEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

