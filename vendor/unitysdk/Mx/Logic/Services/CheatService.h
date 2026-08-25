#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_SERVICES_CHEATSERVICE_DOSOMETHING_OFFSET UNITYSDK_OFFSET(0x10D1720)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int CheatService_TypeDefinitionIndex = 12982;

	class CheatService : public Il2CppObject
	{
	public:
		::System::Void DoSomething()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_CHEATSERVICE_DOSOMETHING_OFFSET))(nullptr);
		}

	};
}

