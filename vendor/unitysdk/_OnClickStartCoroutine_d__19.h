#pragma once
#include "unitysdk.h"

class UILobby;
class UIAcademyMessangerFavorScheduleInfo;

#define <ONCLICKSTARTCOROUTINE>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A3720)
#define <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21A3D40)
#define <ONCLICKSTARTCOROUTINE>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21A3D50)
#define <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21A3E30)
#define <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21A3E40)
#define <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21A3E90)

	inline static constexpr unsigned int <OnClickStartCoroutine>d__19_TypeDefinitionIndex = 4154;

	class <OnClickStartCoroutine>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UILobby* uilobby; // 0x20
		UIAcademyMessangerFavorScheduleInfo* __4__this; // 0x28
		::System::Single _timer_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKSTARTCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

