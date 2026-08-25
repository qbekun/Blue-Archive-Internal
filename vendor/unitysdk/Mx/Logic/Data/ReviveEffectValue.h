#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ReviveEffectDAO; }

#define MX_LOGIC_DATA_REVIVEEFFECTVALUE_GET_HPRECOVERRATE_OFFSET UNITYSDK_OFFSET(0x123DF60)
#define MX_LOGIC_DATA_REVIVEEFFECTVALUE_GET_RESETCOOLTIME_OFFSET UNITYSDK_OFFSET(0x123DF70)
#define MX_LOGIC_DATA_REVIVEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DF80)
#define MX_LOGIC_DATA_REVIVEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123E010)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ReviveEffectValue_TypeDefinitionIndex = 13918;

	class ReviveEffectValue : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _HPRecoverRate_k__BackingField; // 0x48
		::System::Boolean _ResetCoolTime_k__BackingField; // 0x50

		::MX::Core::Math::BasisPoint* get_HPRecoverRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REVIVEEFFECTVALUE_GET_HPRECOVERRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCoolTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REVIVEEFFECTVALUE_GET_RESETCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ReviveEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ReviveEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REVIVEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REVIVEEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

