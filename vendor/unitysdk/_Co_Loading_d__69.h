#pragma once
#include "unitysdk.h"

class UIEventLobby;
class <>c__DisplayClass69_0;
class EventContentAdventureListNetworkTask;
class EventContentBoxGachaShopListNetworkTask;
class ConquestMainstoryCheckNetworkTask;
class ConquestCheckNetworkTask;
class WorldRaidLobbyNetworkTask;

#define <CO_LOADING>D__69_.CTOR_OFFSET UNITYSDK_OFFSET(0x2427E00)
#define <CO_LOADING>D__69_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x242B680)
#define <CO_LOADING>D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x242B750)
#define <CO_LOADING>D__69___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x242D590)
#define <CO_LOADING>D__69_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x242D640)
#define <CO_LOADING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x242D650)
#define <CO_LOADING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x242D6A0)

	inline static constexpr unsigned int <Co_Loading>d__69_TypeDefinitionIndex = 5514;

	class <Co_Loading>d__69 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventLobby* __4__this; // 0x20
		<>c__DisplayClass69_0* __8__1; // 0x28
		EventContentAdventureListNetworkTask* _task_5__2; // 0x30
		Il2CppObject* __7__wrap2; // 0x38
		EventContentBoxGachaShopListNetworkTask* _boxGachaListTask_5__4; // 0x40
		ConquestMainstoryCheckNetworkTask* _conquestMainstoryCheckTask_5__5; // 0x48
		ConquestCheckNetworkTask* _conquestCheckTask_5__6; // 0x50
		WorldRaidLobbyNetworkTask* _worldRaidLobbyNetworkTask_5__7; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

