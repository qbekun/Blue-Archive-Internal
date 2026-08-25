#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_LOCALCOMMANDQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1274740)
#define MX_LOGIC_BATTLES_LOCALCOMMANDQUEUE_DELIVER_OFFSET UNITYSDK_OFFSET(0x1274750)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LocalCommandQueue_TypeDefinitionIndex = 14062;

	class LocalCommandQueue : public SolveTopDownJob
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOCALCOMMANDQUEUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deliver(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOCALCOMMANDQUEUE_DELIVER_OFFSET))(arg, nullptr);
		}

	};
}

