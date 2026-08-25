#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class SyncUseSkillGroup; }
namespace MX::Logic::Coroutine { class WaitForSeconds; }

#define <COTRYTOSKILLUSE>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x1389220)
#define <COTRYTOSKILLUSE>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13892B0)
#define <COTRYTOSKILLUSE>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13892C0)
#define <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x138A0B0)
#define <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x138A0C0)
#define <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x138A110)

	inline static constexpr unsigned int <CoTryToSkillUse>d__21_TypeDefinitionIndex = 14408;

	class <CoTryToSkillUse>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::SyncUseSkillGroup* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForSeconds* _waitForSecond_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTRYTOSKILLUSE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

