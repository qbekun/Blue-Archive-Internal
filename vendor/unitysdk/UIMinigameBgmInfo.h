#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::Data { class MiniGameRhythmBgmInfo; }

#define UIMINIGAMEBGMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD18030)
#define UIMINIGAMEBGMINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xD18040)

	inline static constexpr unsigned int UIMinigameBgmInfo_TypeDefinitionIndex = 678;

	class UIMinigameBgmInfo : public Il2CppObject
	{
	public:
		UILabel* Title; // 0xD8
		::UnityEngine::Transform* ArtistWidget; // 0xE0
		UILabel* ArtistLabel; // 0xE8
		::UnityEngine::Transform* Composer; // 0xF0
		::UnityEngine::Transform* LyricistComposerArranger; // 0xF8
		UILabel* ComposerLabel; // 0x100
		UILabel* LyricistComposerArrangerLabel; // 0x108
		UILabel* Time; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::MiniGameRhythmBgmInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRhythmBgmInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEBGMINFO_SETDATA_OFFSET))(arg, nullptr);
		}

	};

