#pragma once
#include "unitysdk.h"

#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x211DF40)
#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x211E450)
#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x211E460)
#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x211E500)
#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x211E510)
#define <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x211E560)

	inline static constexpr unsigned int <Wait2FrameAndActionInternal>d__4_TypeDefinitionIndex = 3882;

	class <Wait2FrameAndActionInternal>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action* action; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAIT2FRAMEANDACTIONINTERNAL>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

