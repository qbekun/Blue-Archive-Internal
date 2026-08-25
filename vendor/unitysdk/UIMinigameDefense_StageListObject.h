#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace FlatData { class StageDifficulty; }
namespace UnityEngine { class Animation; }
class UIWidget;

#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_STAGEICONUNITS_OFFSET UNITYSDK_OFFSET(0xB89240)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_SET_STAGEICONUNITS_OFFSET UNITYSDK_OFFSET(0xB89250)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_STAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB89260)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB89270)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_SET_STAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB89280)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_PLAYOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xB89290)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB89360)
#define UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_ISANIPLAYING_OFFSET UNITYSDK_OFFSET(0xB89B30)

	inline static constexpr unsigned int UIMinigameDefense_StageListObject_TypeDefinitionIndex = 542;

	class UIMinigameDefense_StageListObject : public Il2CppObject
	{
	public:
		UIScrollView* StageListScrollView; // 0x18
		::Il2CppArray<::System::Object*>* _StageIconUnits_k__BackingField; // 0x20
		::FlatData::StageDifficulty* Difficulty; // 0x28
		Il2CppObject* _StageInfos_k__BackingField; // 0x30
		::UnityEngine::Animation* _animation; // 0x38
		UIWidget* WidgetForAlpha; // 0x40
		::System::Int64 originalEventContentIdForAnimationName; // 0x48

		::Il2CppArray<::System::Object*>* get_StageIconUnits()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_STAGEICONUNITS_OFFSET))(nullptr);
		}

		::System::Void set_StageIconUnits(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_SET_STAGEICONUNITS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_STAGEINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_SET_STAGEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOpenAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_PLAYOPENANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAniPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEDEFENSE_STAGELISTOBJECT_GET_ISANIPLAYING_OFFSET))(nullptr);
		}

	};

