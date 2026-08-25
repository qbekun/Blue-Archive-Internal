#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class AutoUseCheckCoverTime; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COCHECKCOVERFRAMEREMAINED>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E4C80)
#define <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E52E0)
#define <COCHECKCOVERFRAMEREMAINED>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13E52F0)
#define <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13E55C0)
#define <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13E55D0)
#define <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13E5620)

	inline static constexpr unsigned int <CoCheckCoverFrameRemained>d__7_TypeDefinitionIndex = 14571;

	class <CoCheckCoverFrameRemained>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::AutoUseCheckCoverTime* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKCOVERFRAMEREMAINED>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

