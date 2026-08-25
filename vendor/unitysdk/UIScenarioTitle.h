#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Animation; }
class TweenAlpha;
class MXPhoneticText;
class UILabel;
class UITexture;
class ScenarioTitleType;
class ScenarioScriptInfo;
namespace UnityEngine { class Transform; }

#define UISCENARIOTITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E8E10)
#define UISCENARIOTITLE_ONANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x27E8E80)
#define UISCENARIOTITLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E8F20)
#define UISCENARIOTITLE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27E8F50)
#define UISCENARIOTITLE_GET_ANINAME_OFFSET UNITYSDK_OFFSET(0x27E8F60)
#define UISCENARIOTITLE_INITTITLE_OFFSET UNITYSDK_OFFSET(0x27E8F70)
#define UISCENARIOTITLE_GETANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x27E9B30)
#define UISCENARIOTITLE_PLAYANI_OFFSET UNITYSDK_OFFSET(0x27E9AC0)
#define UISCENARIOTITLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x27E9BE0)
#define UISCENARIOTITLE__INITTITLE_G__CHILDLINECOUNT|14_0_OFFSET UNITYSDK_OFFSET(0x27E9710)

	inline static constexpr unsigned int UIScenarioTitle_TypeDefinitionIndex = 7697;

	class UIScenarioTitle : public Il2CppObject
	{
	public:
		UIWidget* widget; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		TweenAlpha* tween; // 0x28
		MXPhoneticText* titleLable; // 0x30
		UILabel* numberLabel; // 0x38
		UITexture* trailerBG; // 0x40
		ScenarioTitleType* _Type_k__BackingField; // 0x48
		::System::String* defaultAniName; // 0x50
		::System::String* trailerAniName; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnAnimationEnd(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_ONANIMATIONEND_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Type(ScenarioTitleType* arg)
		{
			((::System::Void(*)(ScenarioTitleType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_AniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_GET_ANINAME_OFFSET))(nullptr);
		}

		::System::Void InitTitle(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_INITTITLE_OFFSET))(arg, nullptr);
		}

		::System::Single GetAnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_GETANIMATIONLENGTH_OFFSET))(nullptr);
		}

		::System::Void PlayAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_PLAYANI_OFFSET))(nullptr);
		}

		ScenarioTitleType* get_Type()
		{
			return ((ScenarioTitleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 _InitTitle_g__ChildLineCount|14_0(::UnityEngine::Transform* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTITLE__INITTITLE_G__CHILDLINECOUNT|14_0_OFFSET))(arg, nullptr);
		}

	};

