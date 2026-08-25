#pragma once
#include "unitysdk.h"

class CCGVisualCharacter;

#define <PLAYSKILLANIMATIONYIELD>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E8F10)
#define <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26E91B0)
#define <PLAYSKILLANIMATIONYIELD>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26E91C0)
#define <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26E9280)
#define <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26E9290)
#define <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26E92E0)

	inline static constexpr unsigned int <PlaySkillAnimationYield>d__9_TypeDefinitionIndex = 401;

	class <PlaySkillAnimationYield>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CCGVisualCharacter* __4__this; // 0x20
		::System::String* phase; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSKILLANIMATIONYIELD>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

