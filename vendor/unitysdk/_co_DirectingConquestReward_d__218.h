#pragma once
#include "unitysdk.h"

class UIConquest;

#define <CO_DIRECTINGCONQUESTREWARD>D__218_.CTOR_OFFSET UNITYSDK_OFFSET(0x235C9C0)
#define <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2362360)
#define <CO_DIRECTINGCONQUESTREWARD>D__218_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2362370)
#define <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2362840)
#define <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2362850)
#define <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23628A0)

	inline static constexpr unsigned int <co_DirectingConquestReward>d__218_TypeDefinitionIndex = 5046;

	class <co_DirectingConquestReward>d__218 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIConquest* __4__this; // 0x20
		Il2CppObject* _anims_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTINGCONQUESTREWARD>D__218_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

