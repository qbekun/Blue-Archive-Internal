#pragma once
#include "../../../unitysdk.h"

class GroundGrid;
namespace MX::Logic::Battles { class GroundStage; }

#define MX_LOGIC_BATTLES_GROUND_GET_GRID_OFFSET UNITYSDK_OFFSET(0x12A0330)
#define MX_LOGIC_BATTLES_GROUND_SET_GRID_OFFSET UNITYSDK_OFFSET(0x12A0340)
#define MX_LOGIC_BATTLES_GROUND_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x12A0350)
#define MX_LOGIC_BATTLES_GROUND_SET_STAGE_OFFSET UNITYSDK_OFFSET(0x12A0360)
#define MX_LOGIC_BATTLES_GROUND_GET_GRIDNODELENGTH_OFFSET UNITYSDK_OFFSET(0x12A0370)
#define MX_LOGIC_BATTLES_GROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A03A0)
#define MX_LOGIC_BATTLES_GROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A03B0)
#define MX_LOGIC_BATTLES_GROUND_CLEAR_OFFSET UNITYSDK_OFFSET(0x12A0400)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int Ground_TypeDefinitionIndex = 14098;

	class Ground : public Il2CppObject
	{
	public:
		GroundGrid* _Grid_k__BackingField; // 0x10
		::MX::Logic::Battles::GroundStage* _Stage_k__BackingField; // 0x18

		GroundGrid* get_Grid()
		{
			return ((GroundGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_GET_GRID_OFFSET))(nullptr);
		}

		::System::Void set_Grid(GroundGrid* arg)
		{
			((::System::Void(*)(GroundGrid*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_SET_GRID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundStage* get_Stage()
		{
			return ((::MX::Logic::Battles::GroundStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MX::Logic::Battles::GroundStage* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GridNodeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_GET_GRIDNODELENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(GroundGrid* arg, ::MX::Logic::Battles::GroundStage* arg2)
		{
			((::System::Void(*)(GroundGrid*, ::MX::Logic::Battles::GroundStage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUND_CLEAR_OFFSET))(nullptr);
		}

	};
}

