#pragma once
#include "unitysdk.h"

class UISprite;
class UITexture;
class UILabel;
namespace UnityEngine { class Texture; }

#define UIMINIGAMESTARTBGMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD24550)
#define UIMINIGAMESTARTBGMINFO__SETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xD24560)
#define UIMINIGAMESTARTBGMINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xD19E30)

	inline static constexpr unsigned int UIMinigameStartBgmInfo_TypeDefinitionIndex = 719;

	class UIMinigameStartBgmInfo : public Il2CppObject
	{
	public:
		UISprite* TitleBg; // 0x118
		UISprite* TitleDeco; // 0x120
		UISprite* DifficultyLabelGeneral; // 0x128
		UITexture* DifficultyLabelSpecial; // 0x130
		UILabel* MusicTitleLabel; // 0x138
		UILabel* MusicLengthLabel; // 0x140
		UITexture* AlbumCoverTexture; // 0x148

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTARTBGMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__7_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTARTBGMINFO__SETDATA_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESTARTBGMINFO_SETDATA_OFFSET))(nullptr);
		}

	};

