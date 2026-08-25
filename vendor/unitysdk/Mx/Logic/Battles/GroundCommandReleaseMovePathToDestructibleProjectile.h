#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12F0BA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F0D70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12F0BB0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F1D50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12F3180)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F3130)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandReleaseMovePathToDestructibleProjectile_TypeDefinitionIndex = 14197;

	class GroundCommandReleaseMovePathToDestructibleProjectile : public Il2CppObject
	{
	public:
		::System::String* TargetEntityName; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

