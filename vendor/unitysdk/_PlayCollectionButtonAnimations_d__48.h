#pragma once
#include "unitysdk.h"

class UISpecialOperationLobby;

#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_.CTOR_OFFSET UNITYSDK_OFFSET(0x24637B0)
#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2466BA0)
#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2466BB0)
#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2466E00)
#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2466E10)
#define <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2466E60)

	inline static constexpr unsigned int <PlayCollectionButtonAnimations>d__48_TypeDefinitionIndex = 5603;

	class <PlayCollectionButtonAnimations>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISpecialOperationLobby* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOLLECTIONBUTTONANIMATIONS>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

