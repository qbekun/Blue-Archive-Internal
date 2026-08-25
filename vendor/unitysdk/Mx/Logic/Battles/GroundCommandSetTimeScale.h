#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x131B590)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x131B5E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131B7B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_COWAITSECONDS_OFFSET UNITYSDK_OFFSET(0x131C0B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x131B5F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x131C190)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x131CDF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetTimeScale_TypeDefinitionIndex = 14240;

	class GroundCommandSetTimeScale : public Il2CppObject
	{
	public:
		::System::Single TimeScale; // 0x30
		::System::Int32 DurationInMilliseconds; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetTimeScale&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetTimeScale&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitSeconds(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_COWAITSECONDS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetTimeScale&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetTimeScale&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETTIMESCALE_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

