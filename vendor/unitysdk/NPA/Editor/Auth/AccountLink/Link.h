#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Auth::AccountLink { class GameData; }

#define NPA_EDITOR_AUTH_ACCOUNTLINK_LINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CBF900)

namespace NPA::Editor::Auth::AccountLink
{
	inline static constexpr unsigned int Link_TypeDefinitionIndex = 27207;

	class Link : public Il2CppObject
	{
	public:
		::System::Boolean isPrimary; // 0x10
		::System::String* platformType; // 0x18
		::System::String* platformUserId; // 0x20
		::System::String* guid; // 0x28
		::NPA::Editor::Auth::AccountLink::GameData* gameData; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_ACCOUNTLINK_LINK_.CTOR_OFFSET))(nullptr);
		}

	};
}

