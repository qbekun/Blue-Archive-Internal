#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class ApplicationFocusEvent; }

namespace NPA::Ex
{
	inline static constexpr unsigned int ApplicationFocusEvent_TypeDefinitionIndex = 25973;

	class ApplicationFocusEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::ApplicationFocusEvent* CONSTRAINT; // 0x0
		::NPA::Ex::ApplicationFocusEvent* RESUME; // 0x0

	};
}

