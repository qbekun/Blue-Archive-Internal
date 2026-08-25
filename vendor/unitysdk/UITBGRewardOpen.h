#pragma once
#include "unitysdk.h"

class MXButton;
class UISlider;
namespace UnityEngine { class Animation; }

#define UITBGREWARDOPEN_AWAKE_OFFSET UNITYSDK_OFFSET(0xB5AE30)
#define UITBGREWARDOPEN_ONCLICKPROGRESSSKIPBUTTON_OFFSET UNITYSDK_OFFSET(0xB5AF60)
#define UITBGREWARDOPEN_GET_ANIM_OFFSET UNITYSDK_OFFSET(0xB5B010)
#define UITBGREWARDOPEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xB5B170)
#define UITBGREWARDOPEN_ONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xB5B0B0)
#define UITBGREWARDOPEN_PLAYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB5B180)
#define UITBGREWARDOPEN_COPLAYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB5B210)

	inline static constexpr unsigned int UITBGRewardOpen_TypeDefinitionIndex = 8407;

	class UITBGRewardOpen : public Il2CppObject
	{
	public:
		MXButton* progressSkipButton; // 0xD8
		UISlider* slider; // 0xE0
		::UnityEngine::Animation* _anim; // 0xE8
		::System::Action* progressFinishedCallback; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickProgressSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_ONCLICKPROGRESSSKIPBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_ONPLAYFINISH_OFFSET))(nullptr);
		}

		::System::Void PlayProgress(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_PLAYPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayProgress()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGREWARDOPEN_COPLAYPROGRESS_OFFSET))(nullptr);
		}

	};

