#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class NarrowOrWide; }

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int NarrowOrWide_TypeDefinitionIndex = 12404;

	class NarrowOrWide : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Service::NarrowOrWide* None; // 0x0
		::MX::GameLogic::Service::NarrowOrWide* Narrow; // 0x0
		::MX::GameLogic::Service::NarrowOrWide* Wide; // 0x0

	};
}

