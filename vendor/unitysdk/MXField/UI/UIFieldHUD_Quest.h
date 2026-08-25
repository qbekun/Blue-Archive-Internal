#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class MXButton;
class UIScrollView;
class UIGrid;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace MXField::UI { class UIFieldHUD_QuestProgressDisplay; }
namespace MXField::Actions { class FieldActionPlayer; }
namespace UnityEngine { class Coroutine; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_UI_UIFIELDHUD_QUEST_HANDLEQUESTGROUPSKIP_OFFSET UNITYSDK_OFFSET(0xE94980)
#define MXFIELD_UI_UIFIELDHUD_QUEST_GET_ACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xE95080)
#define MXFIELD_UI_UIFIELDHUD_QUEST_REFRESH_OFFSET UNITYSDK_OFFSET(0xE95090)
#define MXFIELD_UI_UIFIELDHUD_QUEST_COFADE_OFFSET UNITYSDK_OFFSET(0xE954E0)
#define MXFIELD_UI_UIFIELDHUD_QUEST_SET_FADECOROUTINE_OFFSET UNITYSDK_OFFSET(0xE95580)
#define MXFIELD_UI_UIFIELDHUD_QUEST_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0xE955A0)
#define MXFIELD_UI_UIFIELDHUD_QUEST_PLAYREFRESHANIMATION_OFFSET UNITYSDK_OFFSET(0xE95660)
#define MXFIELD_UI_UIFIELDHUD_QUEST_COPLAYQUESTCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xE956A0)
#define MXFIELD_UI_UIFIELDHUD_QUEST_SET_ACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xE95730)
#define MXFIELD_UI_UIFIELDHUD_QUEST_GET_FADECOROUTINE_OFFSET UNITYSDK_OFFSET(0xE95750)
#define MXFIELD_UI_UIFIELDHUD_QUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE95760)
#define MXFIELD_UI_UIFIELDHUD_QUEST_REFRESHELEMENTS_OFFSET UNITYSDK_OFFSET(0xE94A10)
#define MXFIELD_UI_UIFIELDHUD_QUEST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE95930)
#define MXFIELD_UI_UIFIELDHUD_QUEST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE95960)
#define MXFIELD_UI_UIFIELDHUD_QUEST_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0xE95BD0)
#define MXFIELD_UI_UIFIELDHUD_QUEST_HANDLECONDITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE95D00)
#define MXFIELD_UI_UIFIELDHUD_QUEST_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xE95E50)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldHUD_Quest_TypeDefinitionIndex = 10702;

	class UIFieldHUD_Quest : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* emptyDisplay; // 0x20
		UITexture* iconWidget; // 0x28
		MXButton* detailButton; // 0x30
		UIScrollView* scrollView; // 0x38
		UIGrid* grid; // 0x40
		::UnityEngine::Animation* anim; // 0x48
		::UnityEngine::AnimationClip* fadeOutClip; // 0x50
		::UnityEngine::AnimationClip* fadeInClip; // 0x58
		::UnityEngine::AnimationClip* refreshClip; // 0x60
		::MXField::UI::UIFieldHUD_QuestProgressDisplay* questProgressDisplay; // 0x68
		MXButton* questSkipButton; // 0x70
		::UnityEngine::GameObject* questSkipButtonRoot; // 0x78
		Il2CppObject* questElements; // 0x80
		::MXField::Actions::FieldActionPlayer* _ActionPlayer_k__BackingField; // 0x88
		::UnityEngine::Coroutine* _FadeCoroutine_k__BackingField; // 0x90

		::System::Boolean HandleQuestGroupSkip(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_HANDLEQUESTGROUPSKIP_OFFSET))(arg, nullptr);
		}

		::MXField::Actions::FieldActionPlayer* get_ActionPlayer()
		{
			return ((::MXField::Actions::FieldActionPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_GET_ACTIONPLAYER_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFade(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_COFADE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FadeCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_SET_FADECOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void PlayRefreshAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_PLAYREFRESHANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayQuestClearAnimation(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_COPLAYQUESTCLEARANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActionPlayer(::MXField::Actions::FieldActionPlayer* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldActionPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_SET_ACTIONPLAYER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_FadeCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_GET_FADECOROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshElements(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_REFRESHELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Boolean HandleConditionChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_HANDLECONDITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUEST_STARTIMPL_OFFSET))(nullptr);
		}

	};
}

