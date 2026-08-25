#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIWidget;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class PortraitSpineCharacter;
class UISkillInfo;

#define SKILLLEVELUPEFFECTCONTROLLER_COPLAY_OFFSET UNITYSDK_OFFSET(0x2732A30)
#define SKILLLEVELUPEFFECTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2732AC0)
#define SKILLLEVELUPEFFECTCONTROLLER_FILLWIDGETS_OFFSET UNITYSDK_OFFSET(0x2732C30)
#define SKILLLEVELUPEFFECTCONTROLLER_LOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x2732FC0)
#define SKILLLEVELUPEFFECTCONTROLLER_GET_ISPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x27331D0)
#define SKILLLEVELUPEFFECTCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2733270)
#define SKILLLEVELUPEFFECTCONTROLLER_ONCLICKBACKGROUND_OFFSET UNITYSDK_OFFSET(0x2733400)
#define SKILLLEVELUPEFFECTCONTROLLER_GET_EFFECTANIMATION_OFFSET UNITYSDK_OFFSET(0x2733450)
#define SKILLLEVELUPEFFECTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27334E0)

	inline static constexpr unsigned int SkillLevelUpEffectController_TypeDefinitionIndex = 7200;

	class SkillLevelUpEffectController : public Il2CppObject
	{
	public:
		MXButton* backgroundButton; // 0x18
		UILabel* lastLevelLabel; // 0x20
		UILabel* currentLevelLabel; // 0x28
		UILabel* skillNameLabel; // 0x30
		::Il2CppArray<::System::Object*>* icons; // 0x38
		::Il2CppArray<::System::Object*>* iconBGs; // 0x40
		UIWidget* spineRenderQueueWidget; // 0x48
		::UnityEngine::Transform* spineParent; // 0x50
		::UnityEngine::GameObject* reinforcedIcon; // 0x58
		::UnityEngine::Animation* effectAnimation; // 0x60
		PortraitSpineCharacter* spineCharacter; // 0x68

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_COPLAY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void FillWidgets(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_FILLWIDGETS_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void LoadSpineCharacter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_LOADSPINECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_GET_ISPLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void Initialize(UISkillInfo* arg, ::System::String* str, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UISkillInfo*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_INITIALIZE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void OnClickBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_ONCLICKBACKGROUND_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_EffectAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_GET_EFFECTANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLLEVELUPEFFECTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

