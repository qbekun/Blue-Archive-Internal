#pragma once
#include "unitysdk.h"

namespace UnityEngine { class WaitForSeconds; }

#define <UNWRAPWAITFORSECONDS>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD0F80)
#define <UNWRAPWAITFORSECONDS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD1A90)
#define <UNWRAPWAITFORSECONDS>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD1AA0)
#define <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1BD0)
#define <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9DD1BE0)
#define <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1C30)

	inline static constexpr unsigned int <UnwrapWaitForSeconds>d__21_TypeDefinitionIndex = 35844;

	class <UnwrapWaitForSeconds>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::WaitForSeconds* waitForSeconds; // 0x20
		::System::Single _second_5__2; // 0x28
		::System::Single _elapsed_5__3; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITFORSECONDS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

