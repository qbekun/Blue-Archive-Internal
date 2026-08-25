#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x2121D90)
#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2124260)
#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2124270)
#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2124480)
#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2124490)
#define <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21244E0)

	inline static constexpr unsigned int <Co_PlayAnimationIgnoreTimeScale>d__28_TypeDefinitionIndex = 3894;

	class <Co_PlayAnimationIgnoreTimeScale>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::System::String* clipName; // 0x28
		::System::Single _duration_5__2; // 0x30
		::System::Single _elapsed_5__3; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYANIMATIONIGNORETIMESCALE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

