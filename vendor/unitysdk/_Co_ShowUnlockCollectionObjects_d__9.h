#pragma once
#include "unitysdk.h"

class UISpecialOperationCollection;

#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A5EB0)
#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24A7220)
#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24A7230)
#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A7610)
#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24A7620)
#define <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A7670)

	inline static constexpr unsigned int <Co_ShowUnlockCollectionObjects>d__9_TypeDefinitionIndex = 5812;

	class <Co_ShowUnlockCollectionObjects>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISpecialOperationCollection* __4__this; // 0x20
		Il2CppObject* _unlockAnimationPlayedList_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWUNLOCKCOLLECTIONOBJECTS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

