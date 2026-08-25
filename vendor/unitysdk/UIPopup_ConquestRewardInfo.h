#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class Transform; }
class UILabel;

#define UIPOPUP_CONQUESTREWARDINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x236B090)
#define UIPOPUP_CONQUESTREWARDINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x236B6B0)
#define UIPOPUP_CONQUESTREWARDINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x236B740)
#define UIPOPUP_CONQUESTREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x236B870)

	inline static constexpr unsigned int UIPopup_ConquestRewardInfo_TypeDefinitionIndex = 5076;

	class UIPopup_ConquestRewardInfo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UITexture* rewardTexture; // 0xE0
		::UnityEngine::Transform* rewardDisplay_Type1; // 0xE8
		::UnityEngine::Transform* rewardDisplay_Type2; // 0xF0
		UILabel* rewardAmount; // 0xF8
		UILabel* rewardTileTitleLabel_Type1; // 0x100
		UILabel* rewardTileTitleLabel_Type2; // 0x108
		UILabel* erodedTileTitleLabel_Type2; // 0x110
		UILabel* rewardTileCountLabel_Type1; // 0x118
		UILabel* rewardTileCountLabel_Type2; // 0x120
		UILabel* erodedTileCountLabel_Type2; // 0x128
		UILabel* tipText; // 0x130

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTREWARDINFO_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTREWARDINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTREWARDINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTREWARDINFO_.CTOR_OFFSET))(nullptr);
		}

	};

