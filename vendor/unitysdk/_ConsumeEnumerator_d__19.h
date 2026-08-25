#pragma once
#include "unitysdk.h"

namespace UnityEngine { class CustomYieldInstruction; }

#define <CONSUMEENUMERATOR>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD1010)
#define <CONSUMEENUMERATOR>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD1350)
#define <CONSUMEENUMERATOR>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD1360)
#define <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1A20)
#define <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9DD1A30)
#define <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1A80)

	inline static constexpr unsigned int <ConsumeEnumerator>d__19_TypeDefinitionIndex = 35843;

	class <ConsumeEnumerator>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::IEnumerator* enumerator; // 0x20
		::UnityEngine::CustomYieldInstruction* _cyi_5__2; // 0x28
		::System::Collections::IEnumerator* _innerCoroutine_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONSUMEENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

