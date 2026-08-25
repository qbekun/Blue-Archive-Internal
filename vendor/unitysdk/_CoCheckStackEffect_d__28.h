#pragma once
#include "unitysdk.h"

class EntityVisual;
class <>c__DisplayClass28_0;
class EffectPlayer;
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class StackDamageInfo; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COCHECKSTACKEFFECT>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x12139B0)
#define <COCHECKSTACKEFFECT>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x121C620)
#define <COCHECKSTACKEFFECT>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x121C630)
#define <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121D220)
#define <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x121D230)
#define <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121D280)

	inline static constexpr unsigned int <CoCheckStackEffect>d__28_TypeDefinitionIndex = 994;

	class <CoCheckStackEffect>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EntityVisual* targetVisual; // 0x20
		::System::String* logicEffectGroupId; // 0x28
		<>c__DisplayClass28_0* __8__1; // 0x30
		Il2CppObject* stackCountEffectList; // 0x38
		EffectPlayer* __4__this; // 0x40
		EntityVisual* casterVisual; // 0x48
		::UnityEngine::Vector3* bulletDestination; // 0x50
		::MX::Logic::BattleEntities::StackDamageInfo* _stackDamageInfo_5__2; // 0x60
		Il2CppObject* _prevInterruptList_5__3; // 0x68
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__4; // 0x70

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKSTACKEFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

