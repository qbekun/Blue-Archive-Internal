#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class PushButtonAction; }

namespace NPA::Push
{
	inline static constexpr unsigned int PushButtonAction_TypeDefinitionIndex = 27342;

	class PushButtonAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Push::PushButtonAction* WEB_LINK; // 0x0
		::NPA::Push::PushButtonAction* DEEP_LINK; // 0x0
		::NPA::Push::PushButtonAction* APP_LINK; // 0x0
		::NPA::Push::PushButtonAction* APP_LAUNCH; // 0x0
		::NPA::Push::PushButtonAction* UPSTREAM; // 0x0

	};
}

