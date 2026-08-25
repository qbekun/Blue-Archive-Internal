#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UICardGame_IntroDialogTalk;

#define UICARDGAME_INTRODIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B400)

	inline static constexpr unsigned int UICardGame_IntroDialog_TypeDefinitionIndex = 445;

	class UICardGame_IntroDialog : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* dialogObj; // 0x18
		UICardGame_IntroDialogTalk* talkPlayer; // 0x20
		UICardGame_IntroDialogTalk* talkEnemy; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_INTRODIALOG_.CTOR_OFFSET))(nullptr);
		}

	};

