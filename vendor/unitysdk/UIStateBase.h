#pragma once
#include "unitysdk.h"

class UIStateMachine;
class UIBase;

#define UISTATEBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB30700)
#define UISTATEBASE_GET_MACHINE_OFFSET UNITYSDK_OFFSET(0xB30710)
#define UISTATEBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB30720)
#define UISTATEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB30730)
#define UISTATEBASE_SETMACHINE_OFFSET UNITYSDK_OFFSET(0xB30740)
#define UISTATEBASE_GET_OWNERUI_OFFSET UNITYSDK_OFFSET(0xB30750)
#define UISTATEBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB30770)
#define UISTATEBASE_SET_MACHINE_OFFSET UNITYSDK_OFFSET(0xB30780)

	inline static constexpr unsigned int UIStateBase_TypeDefinitionIndex = 8286;

	class UIStateBase : public Il2CppObject
	{
	public:
		UIStateMachine* _Machine_k__BackingField; // 0x10

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_ONEXIT_OFFSET))(nullptr);
		}

		UIStateMachine* get_Machine()
		{
			return ((UIStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_GET_MACHINE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMachine(UIStateMachine* arg)
		{
			((::System::Void(*)(UIStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_SETMACHINE_OFFSET))(arg, nullptr);
		}

		UIBase* get_ownerUI()
		{
			return ((UIBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_GET_OWNERUI_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_Machine(UIStateMachine* arg)
		{
			((::System::Void(*)(UIStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATEBASE_SET_MACHINE_OFFSET))(arg, nullptr);
		}

	};

