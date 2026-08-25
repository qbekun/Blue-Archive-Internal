#pragma once
#include "../../unitysdk.h"

namespace NPA::Auth { class NXPToyAccountState; }

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAccountState_TypeDefinitionIndex = 27484;

	class NXPToyAccountState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Auth::NXPToyAccountState* Unknown; // 0x0
		::NPA::Auth::NXPToyAccountState* Login; // 0x0
		::NPA::Auth::NXPToyAccountState* Linked; // 0x0
		::NPA::Auth::NXPToyAccountState* Changed; // 0x0
		::NPA::Auth::NXPToyAccountState* SignOut; // 0x0
		::NPA::Auth::NXPToyAccountState* Delink; // 0x0
		::NPA::Auth::NXPToyAccountState* PrimaryPlatformChanged; // 0x0

	};
}

