#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class CharacterGroup; }

#define <GETALLENTITY>D__183_.CTOR_OFFSET UNITYSDK_OFFSET(0x1396DC0)
#define <GETALLENTITY>D__183_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1397800)
#define <GETALLENTITY>D__183_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13978B0)
#define <GETALLENTITY>D__183___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1397BE0)
#define <GETALLENTITY>D__183___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1397C30)
#define <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.LOGIC.BATTLEENTITIES.BATTLEENTITY_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1397C80)
#define <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1397C90)
#define <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1397CE0)
#define <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.LOGIC.BATTLEENTITIES.BATTLEENTITY_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1397CF0)
#define <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1397D90)

	inline static constexpr unsigned int <GetAllEntity>d__183_TypeDefinitionIndex = 14429;

	class <GetAllEntity>d__183 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Logic::Battles::CharacterGroup* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30
		Il2CppObject* __7__wrap2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* System.Collections.Generic.IEnumerator_MX.Logic.BattleEntities.BattleEntity_.get_Current()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.LOGIC.BATTLEENTITIES.BATTLEENTITY_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Logic.BattleEntities.BattleEntity_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.LOGIC.BATTLEENTITIES.BATTLEENTITY_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLENTITY>D__183_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

