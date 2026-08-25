#pragma once
#include "../../unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }

#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_SETLOCKOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0xE9DDD0)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9DAD0)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_START_OFFSET UNITYSDK_OFFSET(0xEA1060)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_COPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xEA12D0)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_UI_UIFIELDLOCKABLEBUTTON_ONCLICKLOCKED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLockableButton_TypeDefinitionIndex = 10737;

	class UIFieldLockableButton : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		MXButton* lockButton; // 0x20
		::UnityEngine::GameObject* lockObject; // 0x28
		::UnityEngine::Animation* unlockAnimation; // 0x30

		::System::Void SetLockObjectActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_SETLOCKOBJECTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedsToPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_COPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void OnClickLocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOCKABLEBUTTON_ONCLICKLOCKED_OFFSET))(nullptr);
		}

	};
}

