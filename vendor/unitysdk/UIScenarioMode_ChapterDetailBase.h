#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class OpenConditionButtonController;
class MXButton;
class UISprite;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class Texture; }

#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x27F2870)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_ISFAVOR_OFFSET UNITYSDK_OFFSET(0x27F1F80)
#define UISCENARIOMODE_CHAPTERDETAILBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F1FB0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27F2880)
#define UISCENARIOMODE_CHAPTERDETAILBASE_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x27F2890)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x27F2E00)
#define UISCENARIOMODE_CHAPTERDETAILBASE_ONCLICKSPECIALOPERATION_OFFSET UNITYSDK_OFFSET(0x27F2E10)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27F2FD0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERIMAGE_OFFSET UNITYSDK_OFFSET(0x27F2FE0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x27F3430)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27F34D0)
#define UISCENARIOMODE_CHAPTERDETAILBASE__SETCHAPTERIMAGE_B__39_0_OFFSET UNITYSDK_OFFSET(0x27F34E0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27F3510)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x27F3520)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SETCLEAR_OFFSET UNITYSDK_OFFSET(0x27F3530)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27F3770)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27F3780)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27F3790)
#define UISCENARIOMODE_CHAPTERDETAILBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x27F37A0)
#define UISCENARIOMODE_CHAPTERDETAILBASE__SETEVENTCONTENT_G__SETTITLETEXT|42_1_OFFSET UNITYSDK_OFFSET(0x27F37B0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SETEVENTCONTENT_OFFSET UNITYSDK_OFFSET(0x27F38A0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERLABEL_OFFSET UNITYSDK_OFFSET(0x27F44C0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x27F26C0)
#define UISCENARIOMODE_CHAPTERDETAILBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x27F2660)
#define UISCENARIOMODE_CHAPTERDETAILBASE_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x27F4960)

	inline static constexpr unsigned int UIScenarioMode_ChapterDetailBase_TypeDefinitionIndex = 7732;

	class UIScenarioMode_ChapterDetailBase : public Il2CppObject
	{
	public:
		UILabel* chapterNumberLabel; // 0x18
		Il2CppObject* chapterLabels; // 0x20
		UITexture* chapterImage; // 0x28
		UILabel* chapterDescription; // 0x30
		::UnityEngine::GameObject* clear; // 0x38
		OpenConditionButtonController* openConditionControl; // 0x40
		Il2CppObject* eventContentDisplay; // 0x48
		MXButton* eventContentButton; // 0x50
		UISprite* eventContentReddot; // 0x58
		Il2CppObject* eventBannerTitles; // 0x60
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0x68
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0x6C
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0x70
		::System::Int64 _VolumeId_k__BackingField; // 0x78
		::System::Int64 _ChapterId_k__BackingField; // 0x80
		::MX::Data::EventContentSeasonInfo* _SeasonInfo_k__BackingField; // 0x88

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFavor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_ISFAVOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_ONCLICKEVENT_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickSpecialOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_ONCLICKSPECIALOPERATION_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Void SetChapterImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERIMAGE_OFFSET))(nullptr);
		}

		::System::Void SetChapterDescription()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetChapterImage_b__39_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE__SETCHAPTERIMAGE_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::EventContentSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void SetClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SETCLEAR_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void _SetEventContent_g__SetTitleText|42_1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE__SETEVENTCONTENT_G__SETTITLETEXT|42_1_OFFSET))(str, nullptr);
		}

		::System::Void SetEventContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SETEVENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void SetChapterLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SETCHAPTERLABEL_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAILBASE_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

	};

