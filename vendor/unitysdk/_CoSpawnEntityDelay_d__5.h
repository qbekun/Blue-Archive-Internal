#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnPointBase; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::Battles { class GroundEntitySpawner; }

#define <COSPAWNENTITYDELAY>D__5_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A1110)
#define <COSPAWNENTITYDELAY>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A11C0)
#define <COSPAWNENTITYDELAY>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12A11D0)
#define <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A1410)
#define <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x12A1420)
#define <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A1470)

	inline static constexpr unsigned int <CoSpawnEntityDelay>d__5_TypeDefinitionIndex = 14102;

	class <CoSpawnEntityDelay>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::MX::Logic::BattleEntities::SpawnPointBase* spawnPoint; // 0x28
		::MX::Logic::Battles::SpawnCharacterSetting* setting; // 0x30
		::MX::Logic::Battles::GroundEntitySpawner* __4__this; // 0x38
		Il2CppObject* action; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNENTITYDELAY>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

