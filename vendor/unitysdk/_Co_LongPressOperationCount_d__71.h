#pragma once
#include "unitysdk.h"

class UIPopup_Conquest_Operation;
class ButtonActivator;
namespace UnityEngine { class WaitForSeconds; }

#define <CO_LONGPRESSOPERATIONCOUNT>D__71_.CTOR_OFFSET UNITYSDK_OFFSET(0x2379B60)
#define <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x237AFA0)
#define <CO_LONGPRESSOPERATIONCOUNT>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x237AFB0)
#define <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x237B230)
#define <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x237B240)
#define <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x237B290)

	inline static constexpr unsigned int <Co_LongPressOperationCount>d__71_TypeDefinitionIndex = 5103;

	class <Co_LongPressOperationCount>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isPositive; // 0x20
		UIPopup_Conquest_Operation* __4__this; // 0x28
		ButtonActivator* _button_5__2; // 0x30
		::UnityEngine::WaitForSeconds* _waitForSeconds_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSOPERATIONCOUNT>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

