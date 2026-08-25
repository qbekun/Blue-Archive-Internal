#pragma once
#include "unitysdk.h"

class UIAcademyScheduleInfoPopup_event;
class ButtonActivator;
namespace UnityEngine { class WaitForSeconds; }

#define <CO_LONGPRESSBATCHCOUNT>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x219DBF0)
#define <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x219DCF0)
#define <CO_LONGPRESSBATCHCOUNT>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x219DD00)
#define <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x219DF80)
#define <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x219DF90)
#define <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x219DFE0)

	inline static constexpr unsigned int <Co_LongPressBatchCount>d__16_TypeDefinitionIndex = 4141;

	class <Co_LongPressBatchCount>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isPositive; // 0x20
		UIAcademyScheduleInfoPopup_event* __4__this; // 0x28
		ButtonActivator* _button_5__2; // 0x30
		::UnityEngine::WaitForSeconds* _waitForSeconds_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LONGPRESSBATCHCOUNT>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

