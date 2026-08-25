#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UITexture;
class UIWidget;
class UILabel;
namespace UnityEngine { class GameObject; }

#define UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x27F1EE0)
#define UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x27F1F10)
#define UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_2_OFFSET UNITYSDK_OFFSET(0x27F1F40)
#define UISCENARIOMODE_CHAPTERDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F1FA0)
#define UISCENARIOMODE_CHAPTERDETAIL_SETOBJECTS_OFFSET UNITYSDK_OFFSET(0x27F1FC0)
#define UISCENARIOMODE_CHAPTERDETAIL_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x27F2160)
#define UISCENARIOMODE_CHAPTERDETAIL_CLEAR_OFFSET UNITYSDK_OFFSET(0x27F25A0)
#define UISCENARIOMODE_CHAPTERDETAIL_REFRESH_OFFSET UNITYSDK_OFFSET(0x27F2690)
#define UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_3_OFFSET UNITYSDK_OFFSET(0x27F2780)

	inline static constexpr unsigned int UIScenarioMode_ChapterDetail_TypeDefinitionIndex = 7723;

	class UIScenarioMode_ChapterDetail : public Il2CppObject
	{
	public:
		Il2CppObject* defaultObjects; // 0x90
		Il2CppObject* replayObjects; // 0x98
		Il2CppObject* nonFavorObjects; // 0xA0
		Il2CppObject* favorObjects; // 0xA8
		::UnityEngine::Transform* spineParent; // 0xB0
		UITexture* school; // 0xB8
		UIWidget* renderOrder; // 0xC0
		UITexture* characterThumb; // 0xC8
		UILabel* characterName; // 0xD0
		UILabel* schoolName; // 0xD8

		::System::Void _SetObjects_b__12_1(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_1_OFFSET))(arg, nullptr);
		}

		::System::Void _SetObjects_b__12_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetObjects_b__12_2(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_2_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL_SETOBJECTS_OFFSET))(nullptr);
		}

		::System::Void SetCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL_SETCHARACTER_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL_REFRESH_OFFSET))(nullptr);
		}

		::System::Void _SetObjects_b__12_3(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTERDETAIL__SETOBJECTS_B__12_3_OFFSET))(arg, nullptr);
		}

	};

