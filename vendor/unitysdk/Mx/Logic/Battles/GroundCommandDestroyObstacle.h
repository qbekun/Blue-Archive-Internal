#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D3570)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D4100)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12D4150)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4320)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12D4C10)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12D4160)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandDestroyObstacle_TypeDefinitionIndex = 14160;

	class GroundCommandDestroyObstacle : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandDestroyObstacle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandDestroyObstacle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandDestroyObstacle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandDestroyObstacle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDDESTROYOBSTACLE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

