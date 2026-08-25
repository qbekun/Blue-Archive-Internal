#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionCharactersDead; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define <COCHECKDEAD>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x13513C0)
#define <COCHECKDEAD>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13516A0)
#define <COCHECKDEAD>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13516B0)
#define <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1351CE0)
#define <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1351CF0)
#define <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1351D40)

	inline static constexpr unsigned int <CoCheckDead>d__6_TypeDefinitionIndex = 14325;

	class <CoCheckDead>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundConditionCharactersDead* __4__this; // 0x20
		::MX::Logic::Battles::KillEventArgs* e; // 0x28
		::System::Boolean _retry_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKDEAD>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

