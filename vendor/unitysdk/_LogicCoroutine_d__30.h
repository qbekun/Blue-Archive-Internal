#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BlackBoardMultiAlarmEffect; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <LOGICCOROUTINE>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x1409A40)
#define <LOGICCOROUTINE>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1409A60)
#define <LOGICCOROUTINE>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1409A70)
#define <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1409F40)
#define <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1409F50)
#define <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1409FA0)

	inline static constexpr unsigned int <LogicCoroutine>d__30_TypeDefinitionIndex = 14696;

	class <LogicCoroutine>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitForLateUpdate_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOGICCOROUTINE>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

