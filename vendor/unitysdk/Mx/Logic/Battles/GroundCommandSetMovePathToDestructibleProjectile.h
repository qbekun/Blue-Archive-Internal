#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1308CC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1309CA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x130A030)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x130B550)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x130B500)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x130B810)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetMovePathToDestructibleProjectile_TypeDefinitionIndex = 14221;

	class GroundCommandSetMovePathToDestructibleProjectile : public Il2CppObject
	{
	public:
		::System::String* TargetEntityName; // 0x30
		Il2CppObject* MovePointCommandIdList; // 0x38
		::System::Boolean SetRepeatMove; // 0x40

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

