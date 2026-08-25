#pragma once
#include "unitysdk.h"

class UIEventLobby;
class <>c__DisplayClass70_0;
class EventContentSubEventLobbyNetworkTask;

#define <CO_EVENTCHANGECHECKREQUEST>D__70_.CTOR_OFFSET UNITYSDK_OFFSET(0x2443650)
#define <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2443670)
#define <CO_EVENTCHANGECHECKREQUEST>D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2443680)
#define <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2443E30)
#define <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2443E40)
#define <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2443E90)

	inline static constexpr unsigned int <Co_EventChangeCheckRequest>d__70_TypeDefinitionIndex = 5516;

	class <Co_EventChangeCheckRequest>d__70 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventLobby* __4__this; // 0x20
		<>c__DisplayClass70_0* __8__1; // 0x28
		::Il2CppArray<::System::Object*>* _eventIds_5__2; // 0x30
		::System::Int32 _eventIdIndex_5__3; // 0x38
		EventContentSubEventLobbyNetworkTask* _task_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EVENTCHANGECHECKREQUEST>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

