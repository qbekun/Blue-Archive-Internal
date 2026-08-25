#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class AccountSettingsLayoutType; }

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int AccountSettingsLayoutType_TypeDefinitionIndex = 27156;

	class AccountSettingsLayoutType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Auth::AccountSettingsLayoutType* Guest; // 0x0
		::NPA::Editor::Auth::AccountSettingsLayoutType* Nexon; // 0x0

	};
}

