#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }

#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_WAITUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x26A6480)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_GET_UNLOCKELEMENTWAIT_OFFSET UNITYSDK_OFFSET(0x26A6510)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26A6520)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26A6630)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_SET_UNLOCKELEMENTWAIT_OFFSET UNITYSDK_OFFSET(0x26A67B0)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A67C0)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0x26A6860)

	inline static constexpr unsigned int UIMultiFloorRaidSectionScrollViewController_TypeDefinitionIndex = 6859;

	class UIMultiFloorRaidSectionScrollViewController : public ::System::Xml::XmlDeclaration
	{
	public:
		::System::Boolean _UnlockElementWait_k__BackingField; // 0x90
		Il2CppObject* unlockSectionList; // 0x98
		::UnityEngine::Coroutine* waitCoroutine; // 0xA0

		::System::Collections::IEnumerator* WaitUnlockAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_WAITUNLOCKANI_OFFSET))(nullptr);
		}

		::System::Boolean get_UnlockElementWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_GET_UNLOCKELEMENTWAIT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_UnlockElementWait(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_SET_UNLOCKELEMENTWAIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckUnlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWCONTROLLER_CHECKUNLOCK_OFFSET))(nullptr);
		}

	};

