#pragma once
#include "../../unitysdk.h"

namespace MXField::Events { class CommonEventType; }

namespace MXField::Events
{
	inline static constexpr unsigned int CommonEventType_TypeDefinitionIndex = 10876;

	class CommonEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXField::Events::CommonEventType* None; // 0x0
		::MXField::Events::CommonEventType* Timeline; // 0x0
		::MXField::Events::CommonEventType* ActionTrigger; // 0x0

	};
}

