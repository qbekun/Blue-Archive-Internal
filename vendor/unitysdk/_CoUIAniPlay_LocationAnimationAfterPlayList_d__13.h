#pragma once
#include "unitysdk.h"

class UIWorldRaidAniPlayer_821;

#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF6360)
#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8220)
#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF8230)
#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF86C0)
#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBF86D0)
#define <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF8720)

	inline static constexpr unsigned int <CoUIAniPlay_LocationAnimationAfterPlayList>d__13_TypeDefinitionIndex = 8765;

	class <CoUIAniPlay_LocationAnimationAfterPlayList>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidAniPlayer_821* __4__this; // 0x20
		::System::DateTime* _startTime_5__2; // 0x28
		::System::Int32 _aniIndex_5__3; // 0x30
		::System::Int32 _balloonIndex_5__4; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

