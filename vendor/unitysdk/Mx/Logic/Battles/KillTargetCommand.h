#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_KILLTARGETCOMMAND_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1274610)
#define MX_LOGIC_BATTLES_KILLTARGETCOMMAND_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1274620)
#define MX_LOGIC_BATTLES_KILLTARGETCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1274630)
#define MX_LOGIC_BATTLES_KILLTARGETCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274700)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int KillTargetCommand_TypeDefinitionIndex = 14061;

	class KillTargetCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		::MX::Logic::Battles::GroupTag* _TargetGroup_k__BackingField; // 0x20
		::System::Int32 _TargetIndex_k__BackingField; // 0x24

		::MX::Logic::Battles::GroupTag* get_TargetGroup()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLTARGETCOMMAND_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLTARGETCOMMAND_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLTARGETCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, ::MX::Logic::Battles::GroupTag* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_KILLTARGETCOMMAND_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

