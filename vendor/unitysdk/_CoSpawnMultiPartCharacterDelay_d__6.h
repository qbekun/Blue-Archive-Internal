#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundEntitySpawner; }
namespace MX::Logic::BattleEntities { class MultiPartCharacterSpawnPoint; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }

#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A06B0)
#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A1480)
#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12A1490)
#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A18F0)
#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x12A1900)
#define <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12A1950)

	inline static constexpr unsigned int <CoSpawnMultiPartCharacterDelay>d__6_TypeDefinitionIndex = 14103;

	class <CoSpawnMultiPartCharacterDelay>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundEntitySpawner* __4__this; // 0x20
		::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint* multiPartCharacterSpawnPoint; // 0x28
		Il2CppObject* action; // 0x30
		::MX::Logic::Battles::SpawnCharacterSetting* _mainCharacterSetting_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSPAWNMULTIPARTCHARACTERDELAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

