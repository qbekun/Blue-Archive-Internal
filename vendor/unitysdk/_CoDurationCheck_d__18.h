#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class DamageTransferEffectInfo; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <CODURATIONCHECK>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x115E340)
#define <CODURATIONCHECK>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x115E360)
#define <CODURATIONCHECK>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x115E370)
#define <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115E4A0)
#define <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x115E4B0)
#define <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115E500)

	inline static constexpr unsigned int <CoDurationCheck>d__18_TypeDefinitionIndex = 13145;

	class <CoDurationCheck>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::BattleEntities::DamageTransferEffectInfo* __4__this; // 0x20
		::System::Int32 _elapsed_5__2; // 0x28
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

