#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }

#define UILEVELUPPOPUP_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xBAE760)
#define UILEVELUPPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBAE820)
#define UILEVELUPPOPUP_ONCLICKCONTINUE_OFFSET UNITYSDK_OFFSET(0xBAE9C0)
#define UILEVELUPPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBAEA00)
#define UILEVELUPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAEA20)
#define UILEVELUPPOPUP_SENDNEXONEVENTFORLEVEL_OFFSET UNITYSDK_OFFSET(0xBAE8E0)
#define UILEVELUPPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0xBAEA30)
#define UILEVELUPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xBAEA50)

	inline static constexpr unsigned int UILevelUpPopup_TypeDefinitionIndex = 8573;

	class UILevelUpPopup : public Il2CppObject
	{
	public:
		UILabel* levelLabel; // 0xD8
		::UnityEngine::GameObject* continueObject; // 0xE0
		::System::Action* callBack; // 0xE8
		::System::Boolean isContinueEnable; // 0xF0

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_ONCLICKCONTINUE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_SENDNEXONEVENTFORLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP___N__0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILEVELUPPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

