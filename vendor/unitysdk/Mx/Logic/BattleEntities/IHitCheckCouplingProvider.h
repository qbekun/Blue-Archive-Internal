#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HitCheckCoupling; }

#define MX_LOGIC_BATTLEENTITIES_IHITCHECKCOUPLINGPROVIDER_GETHITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IHitCheckCouplingProvider_TypeDefinitionIndex = 13334;

	class IHitCheckCouplingProvider : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HitCheckCoupling* GetHitCheckCoupling(::System::Int32 arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IHITCHECKCOUPLINGPROVIDER_GETHITCHECKCOUPLING_OFFSET))(arg, str, nullptr);
		}

	};
}

