#pragma once
#include "unitysdk.h"

class Config;
class FxShake;
namespace UnityEngine { class Vector3; }

#define <PLAYCOROUTINE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BE660)
#define <PLAYCOROUTINE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20BEC50)
#define <PLAYCOROUTINE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20BEC60)
#define <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20BF1F0)
#define <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20BF200)
#define <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20BF250)

	inline static constexpr unsigned int <PlayCoroutine>d__8_TypeDefinitionIndex = 3628;

	class <PlayCoroutine>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Config* tempConfig; // 0x20
		FxShake* __4__this; // 0x28
		Config* _config_5__2; // 0x30
		::System::Int32 _durationMs_5__3; // 0x38
		::System::Int32 _periodMs_5__4; // 0x3C
		::UnityEngine::Vector3* _offset_5__5; // 0x40
		::UnityEngine::Vector3* _targetPos_5__6; // 0x4C
		::UnityEngine::Vector3* _startPos_5__7; // 0x58
		::UnityEngine::Vector3* _distance_5__8; // 0x64
		::System::Int32 _startTimeMs_5__9; // 0x70
		::System::Int32 _periodStartTimeMs_5__10; // 0x74

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOROUTINE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

