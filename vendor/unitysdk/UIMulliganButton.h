#pragma once
#include "unitysdk.h"

class FromUI;
class MXButton;
namespace UnityEngine { class GameObject; }
class MulliganOpenConditionButtonController;
class FormationModel;

#define UIMULLIGANBUTTON_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x2560950)
#define UIMULLIGANBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0x2560970)
#define UIMULLIGANBUTTON_ONCLICKMULLIGAN_OFFSET UNITYSDK_OFFSET(0x2560C00)
#define UIMULLIGANBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2560D00)
#define UIMULLIGANBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0x2560DC0)
#define UIMULLIGANBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2560E40)

	inline static constexpr unsigned int UIMulliganButton_TypeDefinitionIndex = 6120;

	class UIMulliganButton : public Il2CppObject
	{
	public:
		FromUI* FromUIType; // 0x18
		MXButton* MulliganButton; // 0x20
		::UnityEngine::GameObject* MulliganEnable; // 0x28
		::UnityEngine::GameObject* MulliganDisable; // 0x30
		MulliganOpenConditionButtonController* MulliganButtonController; // 0x38
		::System::Boolean mulliganNotUsed; // 0x40
		::System::Action* OpenMulliganPopup; // 0x48
		FormationModel* formationModel; // 0x50

		::System::Void CheckOpenCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_CHECKOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMulligan()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_ONCLICKMULLIGAN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULLIGANBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};

