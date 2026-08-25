#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIGrid;
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class CampaignChapterInfo; }

#define UIPOPUP_CHAPTERREWARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB18E80)
#define UIPOPUP_CHAPTERREWARD_SETPARCELLIST_OFFSET UNITYSDK_OFFSET(0xB19230)
#define UIPOPUP_CHAPTERREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xB19640)
#define UIPOPUP_CHAPTERREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xB19650)
#define UIPOPUP_CHAPTERREWARD_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB19920)
#define UIPOPUP_CHAPTERREWARD_ONCLICKRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xB19940)

	inline static constexpr unsigned int UIPopup_ChapterReward_TypeDefinitionIndex = 8227;

	class UIPopup_ChapterReward : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* confirmButton; // 0xE0
		MXButton* receiveButton; // 0xE8
		UILabel* chapterNumber; // 0xF0
		UILabel* chapterName; // 0xF8
		UILabel* difficultyLabel; // 0x100
		UILabel* starCountLabel; // 0x108
		UIGrid* grid; // 0x110
		Il2CppObject* cardList; // 0x118
		Il2CppObject* parcelInfoList; // 0x120
		::System::Int64 chapterUniqueId; // 0x128
		::FlatData::StageDifficulty* stageDifficulty; // 0x130

		::System::Void Initialize(::MX::Data::CampaignChapterInfo* arg, ::FlatData::StageDifficulty* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::FlatData::StageDifficulty*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_SETPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERREWARD_ONCLICKRECEIVEREWARD_OFFSET))(nullptr);
		}

	};

