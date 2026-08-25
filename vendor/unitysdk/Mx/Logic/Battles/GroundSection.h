#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLES_GROUNDSECTION_ENDSECTION_OFFSET UNITYSDK_OFFSET(0x136F580)
#define MX_LOGIC_BATTLES_GROUNDSECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x136F600)
#define MX_LOGIC_BATTLES_GROUNDSECTION_STARTSECTION_OFFSET UNITYSDK_OFFSET(0x136F610)
#define MX_LOGIC_BATTLES_GROUNDSECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x136F6A0)
#define MX_LOGIC_BATTLES_GROUNDSECTION_FINDOBSTACLEINLINE_OFFSET UNITYSDK_OFFSET(0x136F750)
#define MX_LOGIC_BATTLES_GROUNDSECTION_GETOBSTACLEPOINTS_OFFSET UNITYSDK_OFFSET(0x136F8F0)
#define MX_LOGIC_BATTLES_GROUNDSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x136FA00)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundSection_TypeDefinitionIndex = 14363;

	class GroundSection : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		::System::Int32 SectionID; // 0x1C
		Il2CppObject* EnemySpawnPointGroupList; // 0x20
		Il2CppObject* Obstacles; // 0x28
		Il2CppObject* AllEnemySpawnPoints; // 0x30
		Il2CppObject* EventList; // 0x38
		::System::Boolean Progress; // 0x40
		::MX::Logic::Battles::Battle* battle; // 0x48

		::System::Void EndSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_ENDSECTION_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_RELEASE_OFFSET))(nullptr);
		}

		::System::Void StartSection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_STARTSECTION_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindObstacleInLine(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_FINDOBSTACLEINLINE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetObstaclePoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_GETOBSTACLEPOINTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

