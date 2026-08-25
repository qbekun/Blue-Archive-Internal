#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_GET_BUTTONS_OFFSET UNITYSDK_OFFSET(0xA3A0740)
#define UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0860)
#define UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3A0920)
#define UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_REFRESHBUTTONSSTATE_OFFSET UNITYSDK_OFFSET(0xA3A09A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ButtonStripField_TypeDefinitionIndex = 30315;

	class ButtonStripField : public ::MXUnderCover::UCRuntimeObject
	{
	public:
		Il2CppObject* m_Buttons; // 0x408

		Il2CppObject* get_buttons()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_GET_BUTTONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshButtonsState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTONSTRIPFIELD_REFRESHBUTTONSSTATE_OFFSET))(nullptr);
		}

	};
}

