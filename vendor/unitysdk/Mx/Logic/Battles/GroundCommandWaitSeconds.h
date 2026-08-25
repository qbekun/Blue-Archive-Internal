#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x132AEC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x132BB30)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x132BCC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x132BEC0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_COWAITSECONDS_OFFSET UNITYSDK_OFFSET(0x132BC50)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x132BAE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x132BEF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandWaitSeconds_TypeDefinitionIndex = 14259;

	class GroundCommandWaitSeconds : public Il2CppObject
	{
	public:
		::System::Int32 Milliseconds; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandWaitSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandWaitSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitSeconds()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_COWAITSECONDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandWaitSeconds&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandWaitSeconds&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDWAITSECONDS_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

