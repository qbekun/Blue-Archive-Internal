#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardDismissedResult; }

#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D95910)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_START_OFFSET UNITYSDK_OFFSET(0x9D95960)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_DEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x9D959E0)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x9D95A80)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9D95C80)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D95A90)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D95C90)
#define NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER__SHOWVIRTUALKEYBOARD_B__6_0_OFFSET UNITYSDK_OFFSET(0x9D95CA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPVirtualKeyboardHandler_TypeDefinitionIndex = 26318;

	class NXPVirtualKeyboardHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UI::InputField* _inputField; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DeactivateInputField(::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_DEACTIVATEINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISubmitHandler.OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void ShowVirtualKeyboard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_SHOWVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowVirtualKeyboard_b__6_0(::NPA::Editor::Common::NXPVirtualKeyboardDismissedResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPVirtualKeyboardDismissedResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPVIRTUALKEYBOARDHANDLER__SHOWVIRTUALKEYBOARD_B__6_0_OFFSET))(arg, nullptr);
		}

	};
}

