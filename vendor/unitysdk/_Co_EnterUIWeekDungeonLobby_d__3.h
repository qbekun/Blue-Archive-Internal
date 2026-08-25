#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class <>c__DisplayClass3_0;

#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2469440)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24695A0)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24695B0)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2469830)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2469840)
#define <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2469890)

	inline static constexpr unsigned int <Co_EnterUIWeekDungeonLobby>d__3_TypeDefinitionIndex = 5622;

	class <Co_EnterUIWeekDungeonLobby>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::FlatData::ContentType* type; // 0x20
		<>c__DisplayClass3_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ENTERUIWEEKDUNGEONLOBBY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

