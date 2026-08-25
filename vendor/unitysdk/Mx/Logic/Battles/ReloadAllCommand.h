#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_RELOADALLCOMMAND_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1274AF0)
#define MX_LOGIC_BATTLES_RELOADALLCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1274B00)
#define MX_LOGIC_BATTLES_RELOADALLCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274B30)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ReloadAllCommand_TypeDefinitionIndex = 14064;

	class ReloadAllCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		::MX::Logic::Battles::GroupTag* _TargetGroup_k__BackingField; // 0x20

		::MX::Logic::Battles::GroupTag* get_TargetGroup()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RELOADALLCOMMAND_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RELOADALLCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RELOADALLCOMMAND_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

