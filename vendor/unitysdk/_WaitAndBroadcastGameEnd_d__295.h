#pragma once
#include "unitysdk.h"

#define <WAITANDBROADCASTGAMEEND>D__295_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6F0)
#define <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB01E0)
#define <WAITANDBROADCASTGAMEEND>D__295_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB01F0)
#define <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB02C0)
#define <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DB02D0)
#define <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB0320)

	inline static constexpr unsigned int <WaitAndBroadcastGameEnd>d__295_TypeDefinitionIndex = 20420;

	class <WaitAndBroadcastGameEnd>d__295 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single waitingTime; // 0x20
		::System::Boolean isGameOver; // 0x24

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDBROADCASTGAMEEND>D__295_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

