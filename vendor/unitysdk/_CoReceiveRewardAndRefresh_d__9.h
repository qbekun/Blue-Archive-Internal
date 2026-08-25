#pragma once
#include "unitysdk.h"

class UIPopup_WorldRaidReward;
class <>c__DisplayClass9_0;
class WorldRaidReceiveRewardNetworkTask;
class WorldRaidLobbyNetworkTask;

#define <CORECEIVEREWARDANDREFRESH>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEBDF0)
#define <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC640)
#define <CORECEIVEREWARDANDREFRESH>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBEC650)
#define <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBEC9C0)
#define <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBEC9D0)
#define <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBECA20)

	inline static constexpr unsigned int <CoReceiveRewardAndRefresh>d__9_TypeDefinitionIndex = 8730;

	class <CoReceiveRewardAndRefresh>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_WorldRaidReward* __4__this; // 0x20
		<>c__DisplayClass9_0* __8__1; // 0x28
		WorldRaidReceiveRewardNetworkTask* _receiveRewardTask_5__2; // 0x30
		WorldRaidLobbyNetworkTask* _lobbyTask_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORECEIVEREWARDANDREFRESH>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

