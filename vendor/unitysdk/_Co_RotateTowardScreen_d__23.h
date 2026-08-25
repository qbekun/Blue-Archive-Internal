#pragma once
#include "unitysdk.h"

class UIInteractiveWorldRaidCarrierCore;
namespace UnityEngine { class Quaternion; }

#define <CO_ROTATETOWARDSCREEN>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x2612260)
#define <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26129C0)
#define <CO_ROTATETOWARDSCREEN>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26129D0)
#define <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2612C80)
#define <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2612C90)
#define <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2612CE0)

	inline static constexpr unsigned int <Co_RotateTowardScreen>d__23_TypeDefinitionIndex = 6502;

	class <Co_RotateTowardScreen>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIInteractiveWorldRaidCarrierCore* __4__this; // 0x20
		::UnityEngine::Quaternion* _startRotation_5__2; // 0x28
		::UnityEngine::Quaternion* _goalRotation_5__3; // 0x38
		::System::Single _elapsedTime_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ROTATETOWARDSCREEN>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

