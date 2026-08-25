#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DBA40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12DBA90)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DBC70)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12DC560)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DC760)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12DD370)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandForceIdle_TypeDefinitionIndex = 14172;

	class GroundCommandForceIdle : public Il2CppObject
	{
	public:
		::System::Boolean IsForceIdleOn; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceIdle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceIdle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceIdle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceIdle&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDFORCEIDLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

