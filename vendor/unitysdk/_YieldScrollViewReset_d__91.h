#pragma once
#include "unitysdk.h"

class UIBase;

#define <YIELDSCROLLVIEWRESET>D__91_.CTOR_OFFSET UNITYSDK_OFFSET(0x221B2C0)
#define <YIELDSCROLLVIEWRESET>D__91_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x221CCD0)
#define <YIELDSCROLLVIEWRESET>D__91_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x221CCE0)
#define <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x221CEE0)
#define <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x221CEF0)
#define <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x221CF40)

	inline static constexpr unsigned int <YieldScrollViewReset>d__91_TypeDefinitionIndex = 4412;

	class <YieldScrollViewReset>d__91 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBase* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSCROLLVIEWRESET>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

