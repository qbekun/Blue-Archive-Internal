#pragma once
#include "unitysdk.h"

class SpineClip;
namespace UnityEngine { class Coroutine; }
class ShaderBaseAnimationData;
namespace UnityEngine { class Color; }
namespace Spine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace Spine { class AnimationState; }
namespace FlatData { class ScenarioCharacterShapes; }
class ScenarioCharacterFade;
class UIWidget;

#define PORTRAITSPINECHARACTER_GET_CLIPTOPLAYONIDLE_OFFSET UNITYSDK_OFFSET(0x20DDBC0)
#define PORTRAITSPINECHARACTER_SET_CLIPTOPLAYONIDLE_OFFSET UNITYSDK_OFFSET(0x20DDBD0)
#define PORTRAITSPINECHARACTER_GET_ANITOPLAYONIDLE_OFFSET UNITYSDK_OFFSET(0x20DDCF0)
#define PORTRAITSPINECHARACTER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x20DDD80)
#define PORTRAITSPINECHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20DDD90)
#define PORTRAITSPINECHARACTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20DDF60)
#define PORTRAITSPINECHARACTER_REFRESHCLIPTOPLAYONIDLE_OFFSET UNITYSDK_OFFSET(0x20DDC00)
#define PORTRAITSPINECHARACTER_PLAYUIDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x20DDFF0)
#define PORTRAITSPINECHARACTER_WAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x20DE110)
#define PORTRAITSPINECHARACTER_COWAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x20DE180)
#define PORTRAITSPINECHARACTER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x20DE240)
#define PORTRAITSPINECHARACTER_PLAYTALKANIMATION_OFFSET UNITYSDK_OFFSET(0x20DE2E0)
#define PORTRAITSPINECHARACTER_RETURNTOIDLE_OFFSET UNITYSDK_OFFSET(0x20DEA80)
#define PORTRAITSPINECHARACTER_PLAYANIMATIONASBASICPORTRAIT_OFFSET UNITYSDK_OFFSET(0x20DE420)
#define PORTRAITSPINECHARACTER_GETSYNCCLIP_OFFSET UNITYSDK_OFFSET(0x20DEDF0)
#define PORTRAITSPINECHARACTER_COPLAYRANDOMBLINK_OFFSET UNITYSDK_OFFSET(0x20DF010)
#define PORTRAITSPINECHARACTER_ISIDLE_OFFSET UNITYSDK_OFFSET(0x20DF0F0)
#define PORTRAITSPINECHARACTER_ISIDLE_OFFSET UNITYSDK_OFFSET(0x20DF100)
#define PORTRAITSPINECHARACTER_INITFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x20DF480)
#define PORTRAITSPINECHARACTER_INITFORELIMINATERAID_OFFSET UNITYSDK_OFFSET(0x20DF4D0)
#define PORTRAITSPINECHARACTER_SETFADEFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x20DF580)
#define PORTRAITSPINECHARACTER_APPLYSHAPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x20DF980)
#define PORTRAITSPINECHARACTER_SETSHAPEFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x20DF4C0)
#define PORTRAITSPINECHARACTER_SETSHAPEFORDIALOG_OFFSET UNITYSDK_OFFSET(0x20DFB40)
#define PORTRAITSPINECHARACTER_SETSHAPEFORELIMINATERAID_OFFSET UNITYSDK_OFFSET(0x20DF4E0)
#define PORTRAITSPINECHARACTER_SETDIMMEDFOROTHERCONTROL_OFFSET UNITYSDK_OFFSET(0x20DFB50)
#define PORTRAITSPINECHARACTER_SETEXSKILLSHADER_OFFSET UNITYSDK_OFFSET(0x20DFC50)
#define PORTRAITSPINECHARACTER_SETLAYER_OFFSET UNITYSDK_OFFSET(0x20DFCF0)
#define PORTRAITSPINECHARACTER_SETMESHRENDERERSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x20DFD20)
#define PORTRAITSPINECHARACTER_SETRENDERQUEUEORDER_OFFSET UNITYSDK_OFFSET(0x20DFD80)
#define PORTRAITSPINECHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DFE40)
#define PORTRAITSPINECHARACTER__PLAYUIDEFAULTANIMATION_B__15_0_OFFSET UNITYSDK_OFFSET(0x20DFEA0)
#define PORTRAITSPINECHARACTER__SETFADEFORSCENARIO_B__30_0_OFFSET UNITYSDK_OFFSET(0x20DFEF0)

	inline static constexpr unsigned int PortraitSpineCharacter_TypeDefinitionIndex = 3763;

	class PortraitSpineCharacter : public Il2CppObject
	{
	public:
		::System::String* UIDefaultClipName; // 0x0
		::System::String* clipToPlayOnIdleName; // 0xD0
		SpineClip* scToPlayOnIdle; // 0xD8
		::UnityEngine::Coroutine* sAnimCoroutine; // 0xE0
		ShaderBaseAnimationData* sAnimInstance; // 0xE8
		::UnityEngine::Color* dimmedColor; // 0xF0

		::System::String* get_ClipToPlayOnIdle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_GET_CLIPTOPLAYONIDLE_OFFSET))(nullptr);
		}

		::System::Void set_ClipToPlayOnIdle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SET_CLIPTOPLAYONIDLE_OFFSET))(str, nullptr);
		}

		::Spine::Animation* get_AniToPlayOnIdle()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_GET_ANITOPLAYONIDLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RefreshClipToPlayOnIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_REFRESHCLIPTOPLAYONIDLE_OFFSET))(nullptr);
		}

		::System::Void PlayUIDefaultAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_PLAYUIDEFAULTANIMATION_OFFSET))(nullptr);
		}

		::System::Void WaitForAnimation(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_WAITFORANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_COWAITFORANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsPlayingAnimation(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_ISPLAYINGANIMATION_OFFSET))(str, nullptr);
		}

		::System::Void PlayTalkAnimation(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_PLAYTALKANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReturnToIdle(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_RETURNTOIDLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayAnimationAsBasicPortrait(SpineClip* arg)
		{
			((::System::Void(*)(SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_PLAYANIMATIONASBASICPORTRAIT_OFFSET))(arg, nullptr);
		}

		SpineClip* GetSyncClip(SpineClip* arg)
		{
			return ((SpineClip*(*)(SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_GETSYNCCLIP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRandomBlink(::Spine::AnimationState* arg, SpineClip* arg2, SpineClip* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::Spine::AnimationState*, SpineClip*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_COPLAYRANDOMBLINK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsIdle(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_ISIDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIdle(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_ISIDLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitForScenario(::System::String* str, ::FlatData::ScenarioCharacterShapes* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::FlatData::ScenarioCharacterShapes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_INITFORSCENARIO_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitForEliminateRaid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_INITFORELIMINATERAID_OFFSET))(nullptr);
		}

		::System::Void SetFadeForScenario(ScenarioCharacterFade* arg)
		{
			((::System::Void(*)(ScenarioCharacterFade*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETFADEFORSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyShapeInternal(::FlatData::ScenarioCharacterShapes* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterShapes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_APPLYSHAPEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetShapeForScenario(::FlatData::ScenarioCharacterShapes* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterShapes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETSHAPEFORSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetShapeForDialog(::FlatData::ScenarioCharacterShapes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETSHAPEFORDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void SetShapeForEliminateRaid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETSHAPEFORELIMINATERAID_OFFSET))(nullptr);
		}

		::System::Void SetDimmedForOtherControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETDIMMEDFOROTHERCONTROL_OFFSET))(nullptr);
		}

		::System::Void SetExSkillShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETEXSKILLSHADER_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetMeshRendererSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETMESHRENDERERSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderQueueOrder(UIWidget* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_SETRENDERQUEUEORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _PlayUIDefaultAnimation_b__15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER__PLAYUIDEFAULTANIMATION_B__15_0_OFFSET))(nullptr);
		}

		::System::Void _SetFadeForScenario_b__30_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTER__SETFADEFORSCENARIO_B__30_0_OFFSET))(nullptr);
		}

	};

