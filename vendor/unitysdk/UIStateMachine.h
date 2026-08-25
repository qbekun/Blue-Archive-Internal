#pragma once
#include "unitysdk.h"

class UIBase;
class UIStateBase;

#define UISTATEMACHINE_GET_OWNERUI_OFFSET UNITYSDK_OFFSET(0xB30790)
#define UISTATEMACHINE_SET_OWNERUI_OFFSET UNITYSDK_OFFSET(0xB307A0)
#define UISTATEMACHINE_GET_USEUPDATE_OFFSET UNITYSDK_OFFSET(0xB307B0)
#define UISTATEMACHINE_SET_USEUPDATE_OFFSET UNITYSDK_OFFSET(0xB307C0)
#define UISTATEMACHINE_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0xB307D0)
#define UISTATEMACHINE_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0xB307E0)
#define UISTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB307F0)
#define UISTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB30870)
#define UISTATEMACHINE_RESETMACHINE_OFFSET UNITYSDK_OFFSET(0xB30910)
#define UISTATEMACHINE_ADDSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATEMACHINE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATEMACHINE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB30930)

	inline static constexpr unsigned int UIStateMachine_TypeDefinitionIndex = 8287;

	class UIStateMachine : public Il2CppObject
	{
	public:
		UIBase* _OwnerUI_k__BackingField; // 0x10
		::System::Boolean _UseUpdate_k__BackingField; // 0x18
		UIStateBase* _CurState_k__BackingField; // 0x20
		Il2CppObject* StateDic; // 0x28

		UIBase* get_OwnerUI()
		{
			return ((UIBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_GET_OWNERUI_OFFSET))(nullptr);
		}

		::System::Void set_OwnerUI(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_SET_OWNERUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_GET_USEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_UseUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_SET_USEUPDATE_OFFSET))(arg, nullptr);
		}

		UIStateBase* get_CurState()
		{
			return ((UIStateBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_GET_CURSTATE_OFFSET))(nullptr);
		}

		::System::Void set_CurState(UIStateBase* arg)
		{
			((::System::Void(*)(UIStateBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_SET_CURSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetMachine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_RESETMACHINE_OFFSET))(nullptr);
		}

		::System::Void AddState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_ADDSTATE_OFFSET))(nullptr);
		}

		::System::Void ChangeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_CHANGESTATE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEMACHINE_UPDATE_OFFSET))(nullptr);
		}

	};

