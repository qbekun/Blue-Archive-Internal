#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_DATA_IDEFAULTSTATCHANGEINFO_NEEDAPPLYSTATCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IDEFAULTSTATCHANGEINFO_TOSTATCHANGEEFFECTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IDefaultStatChangeInfo_TypeDefinitionIndex = 15841;

	class IDefaultStatChangeInfo : public Il2CppObject
	{
	public:
		::System::Boolean NeedApplyStatChangeInfo(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IDEFAULTSTATCHANGEINFO_NEEDAPPLYSTATCHANGEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToStatChangeEffects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IDEFAULTSTATCHANGEINFO_TOSTATCHANGEEFFECTS_OFFSET))(nullptr);
		}

	};
}

