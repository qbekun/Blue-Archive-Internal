#pragma once
#include "unitysdk.h"

class UIWorldRaidAniPlayer;

#define <COUIANIPLAY>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF3A00)
#define <COUIANIPLAY>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF4EC0)
#define <COUIANIPLAY>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF4ED0)
#define <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF5970)
#define <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBF5980)
#define <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF59D0)

	inline static constexpr unsigned int <CoUIAniPlay>d__19_TypeDefinitionIndex = 8755;

	class <CoUIAniPlay>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidAniPlayer* __4__this; // 0x20
		Il2CppObject* balloons; // 0x28
		Il2CppObject* needHideIds; // 0x30
		::System::Boolean exceptCheck; // 0x38
		::System::Action* endCallback; // 0x40
		Il2CppObject* _waitPlayList_5__2; // 0x48
		Il2CppObject* _needHideBalloons_5__3; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

