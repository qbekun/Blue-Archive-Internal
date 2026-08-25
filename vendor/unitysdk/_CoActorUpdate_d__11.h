#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COACTORUPDATE>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x1328EB0)
#define <COACTORUPDATE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x132AD30)
#define <COACTORUPDATE>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x132AD40)
#define <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x132AE50)
#define <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x132AE60)
#define <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x132AEB0)

	inline static constexpr unsigned int <CoActorUpdate>d__11_TypeDefinitionIndex = 14255;

	class <CoActorUpdate>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::BattleEntities::SkillActor* actor; // 0x20
		::MX::Logic::Battles::Battle* battle; // 0x28
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTORUPDATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

