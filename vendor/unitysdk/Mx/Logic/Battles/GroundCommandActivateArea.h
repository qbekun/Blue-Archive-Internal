#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCondition; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A5AE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12A5B30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12A5D60)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A5F30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12A7310)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA__EXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x12A82B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA__EXECUTE_B__1_1_OFFSET UNITYSDK_OFFSET(0x12A8340)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12A5D70)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandActivateArea_TypeDefinitionIndex = 14111;

	class GroundCommandActivateArea : public Il2CppObject
	{
	public:
		::System::String* AreaConditionIdToActivate; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Execute_b__1_0(::MX::Logic::Battles::GroundCondition* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA__EXECUTE_B__1_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Execute_b__1_1(::MX::Logic::Battles::GroundCondition* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA__EXECUTE_B__1_1_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

