#pragma once
#include "unitysdk.h"

class TweenAlpha;
class UILabel;
class UISprite;

#define UICARDGAME_INTRODIALOGTALK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B410)

	inline static constexpr unsigned int UICardGame_IntroDialogTalk_TypeDefinitionIndex = 446;

	class UICardGame_IntroDialogTalk : public Il2CppObject
	{
	public:
		TweenAlpha* imageTween; // 0x18
		TweenAlpha* textTween; // 0x20
		UILabel* label; // 0x28
		UISprite* bg; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_INTRODIALOGTALK_.CTOR_OFFSET))(nullptr);
		}

	};

