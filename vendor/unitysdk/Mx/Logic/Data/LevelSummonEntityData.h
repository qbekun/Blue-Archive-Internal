#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaSpawnerData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }
namespace MX::Logic::Skills { class MovingAreaOptions; }

#define MX_LOGIC_DATA_LEVELSUMMONENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAF90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelSummonEntityData_TypeDefinitionIndex = 13717;

	class LevelSummonEntityData : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x150
		::System::Single AngleOffset; // 0x158
		::System::Int32 Duration; // 0x15C
		::System::Boolean DestroyAlreadyExist; // 0x160
		::MX::Logic::Data::AreaSpawnerData* InitialAreaSpawnerEntity; // 0x168
		::MX::Logic::Data::SkillEntitySpawnerData* InitialEntitySpawner; // 0x170
		::System::Boolean SpawnSameGridLayerAsInvoker; // 0x178
		::System::Boolean SummonAsEnemy; // 0x179
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x17C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSUMMONENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

