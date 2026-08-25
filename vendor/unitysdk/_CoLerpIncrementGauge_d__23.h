#pragma once
#include "unitysdk.h"

class UIWorldRaidZoneBalloon_HpController;
namespace UnityEngine { class Vector3; }

#define <COLERPINCREMENTGAUGE>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0E480)
#define <COLERPINCREMENTGAUGE>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0E740)
#define <COLERPINCREMENTGAUGE>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC0E750)
#define <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0E9E0)
#define <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC0E9F0)
#define <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0EA40)

	inline static constexpr unsigned int <CoLerpIncrementGauge>d__23_TypeDefinitionIndex = 8818;

	class <CoLerpIncrementGauge>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidZoneBalloon_HpController* __4__this; // 0x20
		::System::Single lerpDuration; // 0x28
		::UnityEngine::Vector3* _vec_Angles_5__2; // 0x2C
		::System::Single _fromHandleAngle_5__3; // 0x38
		::System::Single _toHandleAngle_5__4; // 0x3C
		::System::Single _lerpTime_5__5; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLERPINCREMENTGAUGE>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

