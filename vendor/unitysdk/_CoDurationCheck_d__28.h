#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class TemporaryHpInfo; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <CODURATIONCHECK>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x115A9C0)
#define <CODURATIONCHECK>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x115AE70)
#define <CODURATIONCHECK>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x115AE80)
#define <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115B010)
#define <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x115B020)
#define <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x115B070)

	inline static constexpr unsigned int <CoDurationCheck>d__28_TypeDefinitionIndex = 13140;

	class <CoDurationCheck>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::BattleEntities::TemporaryHpInfo* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

