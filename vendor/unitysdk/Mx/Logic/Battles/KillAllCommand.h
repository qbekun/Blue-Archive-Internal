#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_KILLALLCOMMAND_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x12743A0)
#define MX_LOGIC_BATTLES_KILLALLCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x12743B0)
#define MX_LOGIC_BATTLES_KILLALLCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12743E0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int KillAllCommand_TypeDefinitionIndex = 14060;

	class KillAllCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		::MX::Logic::Battles::GroupTag* _TargetGroup_k__BackingField; // 0x20

		::MX::Logic::Battles::GroupTag* get_TargetGroup()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLALLCOMMAND_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLALLCOMMAND_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLALLCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

