#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class ProhibitWordType; }

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ProhibitWordType_TypeDefinitionIndex = 12403;

	class ProhibitWordType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Service::ProhibitWordType* BlackList; // 0x0
		::MX::GameLogic::Service::ProhibitWordType* WhiteList; // 0x0

	};
}

