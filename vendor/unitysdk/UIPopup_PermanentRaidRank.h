#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIEmblemParcel;
class UIPermanentRaidRankListScrollViewController;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_PERMANENTRAIDRANK_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FC420)
#define UIPOPUP_PERMANENTRAIDRANK_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FC7E0)

	inline static constexpr unsigned int UIPopup_PermanentRaidRank_TypeDefinitionIndex = 7053;

	class UIPopup_PermanentRaidRank : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0xD8
		UILabel* levelLabel; // 0xE0
		UILabel* nameLabel; // 0xE8
		UIEmblemParcel* emblemParcel; // 0xF0
		UILabel* highestScoreLabel; // 0xF8
		UIPermanentRaidRankListScrollViewController* rankList; // 0x100
		::UnityEngine::GameObject* emptyObject; // 0x108

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDRANK_SETDATA_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PERMANENTRAIDRANK_.CTOR_OFFSET))(nullptr);
		}

	};

