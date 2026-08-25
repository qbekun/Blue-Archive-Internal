#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }

#define <CO_SWITCHPLAYER>D__139_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB7DF0)
#define <CO_SWITCHPLAYER>D__139_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBC380)
#define <CO_SWITCHPLAYER>D__139_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBC390)
#define <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBC850)
#define <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBC860)
#define <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBC8B0)

	inline static constexpr unsigned int <co_SwitchPlayer>d__139_TypeDefinitionIndex = 9990;

	class <co_SwitchPlayer>d__139 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		::System::Single _maxDuration_5__2; // 0x28
		::System::Boolean _playAni_5__3; // 0x2C
		::System::Single _time_5__4; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SWITCHPLAYER>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

