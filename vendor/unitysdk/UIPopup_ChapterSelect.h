#pragma once
#include "unitysdk.h"

class MXButton;
class UIChapterItem;
class UIScaleScrollItem;
class UIGrid;
class UICenterOnChild;
class UILabel;
namespace MX::Data { class CampaignChapterInfo; }
namespace UnityEngine { class GameObject; }
namespace FlatData { class StageDifficulty; }

#define UIPOPUP_CHAPTERSELECT_ADDSEQUENCE_MOVETONEXTCHAPTER_OFFSET UNITYSDK_OFFSET(0xB19AD0)
#define UIPOPUP_CHAPTERSELECT_COMOVETONEXTCHAPTER_OFFSET UNITYSDK_OFFSET(0xB19B90)
#define UIPOPUP_CHAPTERSELECT_ONBACK_OFFSET UNITYSDK_OFFSET(0xB19C40)
#define UIPOPUP_CHAPTERSELECT_COOPENCHAPTERSELECT_OFFSET UNITYSDK_OFFSET(0xB19EF0)
#define UIPOPUP_CHAPTERSELECT___N__0_OFFSET UNITYSDK_OFFSET(0xB19FA0)
#define UIPOPUP_CHAPTERSELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB19FB0)
#define UIPOPUP_CHAPTERSELECT_CLEARSCROLLLIST_OFFSET UNITYSDK_OFFSET(0xB19D00)
#define UIPOPUP_CHAPTERSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1A040)
#define UIPOPUP_CHAPTERSELECT_ONCENTER_OFFSET UNITYSDK_OFFSET(0xB1A220)
#define UIPOPUP_CHAPTERSELECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB1A600)
#define UIPOPUP_CHAPTERSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1A980)
#define UIPOPUP_CHAPTERSELECT_ADDSEQUENCE_OPENCHAPTERSELECT_OFFSET UNITYSDK_OFFSET(0xB1AA10)
#define UIPOPUP_CHAPTERSELECT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB1AAD0)

	inline static constexpr unsigned int UIPopup_ChapterSelect_TypeDefinitionIndex = 8233;

	class UIPopup_ChapterSelect : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIChapterItem* ChapterItemRes; // 0xE0
		UIScaleScrollItem* ScaleScrollItem; // 0xE8
		UIGrid* ChapterGrid; // 0xF0
		UICenterOnChild* CenterOnChild; // 0xF8
		UILabel* AreaNumber; // 0x100
		UILabel* AreaName; // 0x108
		::System::Single MoveDirectingStartDelay; // 0x110
		::System::Single MoveDirectingUnlockDelay; // 0x114
		::System::Single MoveDirectingCloseDelay; // 0x118
		::System::Single MoveDirectingSpringStrength; // 0x11C
		Il2CppObject* chapterItems; // 0x120

		::System::Void AddSequence_MoveToNextChapter(::MX::Data::CampaignChapterInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_ADDSEQUENCE_MOVETONEXTCHAPTER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToNextChapter(::MX::Data::CampaignChapterInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_COMOVETONEXTCHAPTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenChapterSelect(::MX::Data::CampaignChapterInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_COOPENCHAPTERSELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void ClearScrollList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_CLEARSCROLLLIST_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnCenter(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_ONCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddSequence_OpenChapterSelect(::MX::Data::CampaignChapterInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_ADDSEQUENCE_OPENCHAPTERSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHAPTERSELECT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

