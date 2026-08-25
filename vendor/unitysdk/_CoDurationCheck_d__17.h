#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class HealConvertDamageEffectInfo; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <CODURATIONCHECK>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x1163360)
#define <CODURATIONCHECK>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x11635A0)
#define <CODURATIONCHECK>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11635B0)
#define <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11636E0)
#define <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x11636F0)
#define <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1163740)

	inline static constexpr unsigned int <CoDurationCheck>d__17_TypeDefinitionIndex = 13168;

	class <CoDurationCheck>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::BattleEntities::HealConvertDamageEffectInfo* __4__this; // 0x20
		::System::Int32 _elapsed_5__2; // 0x28
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODURATIONCHECK>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

