#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ImmediateKillEffectDAO; }

#define MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_GET_IGNOREIMMORTAL_OFFSET UNITYSDK_OFFSET(0x123BBB0)
#define MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123BBC0)
#define MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_GET_IGNOREAPPLIEDCHEAT_OFFSET UNITYSDK_OFFSET(0x123BC50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmediateKillEffectValue_TypeDefinitionIndex = 13901;

	class ImmediateKillEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IgnoreImmortal_k__BackingField; // 0x48
		::System::Boolean _IgnoreAppliedCheat_k__BackingField; // 0x49

		::System::Boolean get_IgnoreImmortal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_GET_IGNOREIMMORTAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ImmediateKillEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ImmediateKillEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreAppliedCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMEDIATEKILLEFFECTVALUE_GET_IGNOREAPPLIEDCHEAT_OFFSET))(nullptr);
		}

	};
}

