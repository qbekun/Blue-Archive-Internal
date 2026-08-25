#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_NETWORKCOMMANDQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274930)
#define MX_LOGIC_BATTLES_NETWORKCOMMANDQUEUE_DELIVER_OFFSET UNITYSDK_OFFSET(0x1274990)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int NetworkCommandQueue_TypeDefinitionIndex = 14063;

	class NetworkCommandQueue : public SolveTopDownJob
	{
	public:
		::System::Int32 framePerTurn; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NETWORKCOMMANDQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Deliver(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NETWORKCOMMANDQUEUE_DELIVER_OFFSET))(arg, nullptr);
		}

	};
}

