#pragma once
#include "unitysdk.h"

class UIToggle;
class UISlider;
namespace UnityEngine { class Material; }
namespace UnityEngine { class GameObject; }

#define UIPOPUP_OPTION_SOUNDTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2718B10)
#define UIPOPUP_OPTION_SOUNDTOGGLE_ONSLIDER_OFFSET UNITYSDK_OFFSET(0x2718B20)
#define UIPOPUP_OPTION_SOUNDTOGGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2718DF0)
#define UIPOPUP_OPTION_SOUNDTOGGLE_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x2719290)
#define UIPOPUP_OPTION_SOUNDTOGGLE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x2718B30)
#define UIPOPUP_OPTION_SOUNDTOGGLE_ONPRESSBACKGROUND_OFFSET UNITYSDK_OFFSET(0x27192A0)

	inline static constexpr unsigned int UIPopup_Option_SoundToggle_TypeDefinitionIndex = 7149;

	class UIPopup_Option_SoundToggle : public Il2CppObject
	{
	public:
		UIToggle* Toggle; // 0x28
		UISlider* Slider; // 0x30
		::Il2CppArray<::System::Object*>* Icons; // 0x38
		::UnityEngine::Material* GrayScale; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_ONSLIDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_ONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnPressBackground(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_SOUNDTOGGLE_ONPRESSBACKGROUND_OFFSET))(arg, arg2, nullptr);
		}

	};

