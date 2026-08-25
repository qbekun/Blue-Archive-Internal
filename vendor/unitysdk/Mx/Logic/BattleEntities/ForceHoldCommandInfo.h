#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x118F2A0)
#define MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x118F2C0)
#define MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_GET_ALLOWBATTLEITEMMOVE_OFFSET UNITYSDK_OFFSET(0x118F2D0)
#define MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x118F2E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ForceHoldCommandInfo_TypeDefinitionIndex = 13288;

	class ForceHoldCommandInfo : public Il2CppObject
	{
	public:
		::System::Boolean _Activated_k__BackingField; // 0x10
		::System::Boolean _AllowBattleItemMove_k__BackingField; // 0x11

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Activated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_SET_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowBattleItemMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_GET_ALLOWBATTLEITEMMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEHOLDCOMMANDINFO_GET_ACTIVATED_OFFSET))(nullptr);
		}

	};
}

