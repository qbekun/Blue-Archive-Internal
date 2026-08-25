#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NXPScrollViewFader; }

#define <STARTFADEACTION>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D935A0)
#define <STARTFADEACTION>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D935D0)
#define <STARTFADEACTION>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D935E0)
#define <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D937A0)
#define <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9D937B0)
#define <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D93800)

	inline static constexpr unsigned int <StartFadeAction>d__12_TypeDefinitionIndex = 26309;

	class <StartFadeAction>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::NPA::Editor::NXPScrollViewFader* __4__this; // 0x20
		::System::Single duration; // 0x28
		::System::Single alphaValue; // 0x2C
		::System::Single _startTime_5__2; // 0x30
		::System::Single _startAlpha_5__3; // 0x34
		::System::Single _progress_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTFADEACTION>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

