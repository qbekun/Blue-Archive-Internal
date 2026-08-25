#pragma once
#include "unitysdk.h"

class UITexture;
class TweenPosition;
namespace UnityEngine { class Vector3; }
namespace MX::Data { class MiniGameRhythmBgmInfo; }

#define UIMINIGAMEBGMALBUM_PLAYLEFTTOCENTER_OFFSET UNITYSDK_OFFSET(0xD17CE0)
#define UIMINIGAMEBGMALBUM_AWAKE_OFFSET UNITYSDK_OFFSET(0xD17D60)
#define UIMINIGAMEBGMALBUM_SETDATA_OFFSET UNITYSDK_OFFSET(0xD17DE0)
#define UIMINIGAMEBGMALBUM_PLAYCENTERTORIGHT_OFFSET UNITYSDK_OFFSET(0xD17E80)
#define UIMINIGAMEBGMALBUM_PLAYRIGHTTOCENTER_OFFSET UNITYSDK_OFFSET(0xD17F00)
#define UIMINIGAMEBGMALBUM_PLAYCENTERTOLEFT_OFFSET UNITYSDK_OFFSET(0xD17F80)
#define UIMINIGAMEBGMALBUM_.CTOR_OFFSET UNITYSDK_OFFSET(0xD18000)

	inline static constexpr unsigned int UIMinigameBgmAlbum_TypeDefinitionIndex = 677;

	class UIMinigameBgmAlbum : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		TweenPosition* Tween; // 0x20
		::UnityEngine::Vector3* leftAlbumPos; // 0x28
		::UnityEngine::Vector3* centerAlbumPos; // 0x34
		::UnityEngine::Vector3* rightAlbumPos; // 0x40

		::System::Void PlayLeftToCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_PLAYLEFTTOCENTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameRhythmBgmInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRhythmBgmInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCenterToRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_PLAYCENTERTORIGHT_OFFSET))(nullptr);
		}

		::System::Void PlayRightToCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_PLAYRIGHTTOCENTER_OFFSET))(nullptr);
		}

		::System::Void PlayCenterToLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_PLAYCENTERTOLEFT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMALBUM_.CTOR_OFFSET))(nullptr);
		}

	};

