#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class TargetingCommand; }

#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_GET_SOURCETARGETTABLE_OFFSET UNITYSDK_OFFSET(0x1274F20)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1274F30)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274F40)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1275000)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12750D0)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1275280)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1275340)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12753C0)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1275450)
#define MX_LOGIC_BATTLES_TARGETINGCOMMAND_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12754D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int TargetingCommand_TypeDefinitionIndex = 14066;

	class TargetingCommand : public ::UnityEngine::AssetBundleRecompressOperation
	{
	public:
		Il2CppObject* targetTable; // 0x20
		::System::Int32 _Duration_k__BackingField; // 0x28

		Il2CppObject* get_SourceTargetTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_GET_SOURCETARGETTABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::GroupTag* arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::TargetingCommand* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::TargetingCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::TargetingCommand* arg, ::MX::Logic::Battles::TargetingCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::TargetingCommand*, ::MX::Logic::Battles::TargetingCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::TargetingCommand* arg, ::MX::Logic::Battles::TargetingCommand* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::TargetingCommand*, ::MX::Logic::Battles::TargetingCommand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_TARGETINGCOMMAND_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

