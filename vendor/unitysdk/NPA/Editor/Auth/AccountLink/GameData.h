#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_AUTH_ACCOUNTLINK_GAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CBF910)

namespace NPA::Editor::Auth::AccountLink
{
	inline static constexpr unsigned int GameData_TypeDefinitionIndex = 27208;

	class GameData : public Il2CppObject
	{
	public:
		::System::String* guid; // 0x10
		::System::String* name; // 0x18
		::System::Int32 level; // 0x20
		::System::DateTime* lastLoginDate; // 0x28
		Il2CppObject* attributes; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_ACCOUNTLINK_GAMEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

