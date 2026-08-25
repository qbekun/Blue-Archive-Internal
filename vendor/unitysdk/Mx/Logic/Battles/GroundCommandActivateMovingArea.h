#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
class MovingArea;
namespace FlatData { class PropRootMotionFlat; }
namespace MX::Logic::Data { class PropRootMotionFrame; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Logic::Battles { class ShapeSpecification; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12B2430)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_CREATESHAPE_OFFSET UNITYSDK_OFFSET(0x12B28F0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_GETMOVINGAREASHAPELIST_OFFSET UNITYSDK_OFFSET(0x12B2AD0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_COACTIVATEMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x12B2CF0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA__EXECUTE_B__28_0_OFFSET UNITYSDK_OFFSET(0x12B2DA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_GET_MOVINGAREA_OFFSET UNITYSDK_OFFSET(0x12B2E90)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B2EA0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12B2440)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_CREATEWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x12B2B20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B3540)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B5E00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_SET_MOVINGAREA_OFFSET UNITYSDK_OFFSET(0x12B7670)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B5DB0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandActivateMovingArea_TypeDefinitionIndex = 14132;

	class GroundCommandActivateMovingArea : public Il2CppObject
	{
	public:
		::System::String* propRootMotionName; // 0x30
		::System::String* animationName; // 0x38
		::System::Int32 repeatCount; // 0x40
		::UnityEngine::Vector2* Center; // 0x44
		::UnityEngine::Vector2* Direction; // 0x4C
		::System::Single Height; // 0x54
		Il2CppObject* WalkableMovingAreaSpecList; // 0x58
		Il2CppObject* ConnectedSpawnPointBaseCommandIdList; // 0x60
		::System::Boolean ApplyCumulativeHeight; // 0x68
		::System::Boolean RestoreHeightWhenOutOfArea; // 0x69
		::System::Boolean MoveAirUnit; // 0x6A
		::System::Boolean MoveCameraRail; // 0x6B
		::System::Boolean KeepCameraRailPointDirectionUnchanged; // 0x6C
		Il2CppObject* AddedNodePerFrameXList; // 0x70
		Il2CppObject* AddedNodePerFrameYList; // 0x78
		Il2CppObject* RemovedNodePerFrameXList; // 0x80
		Il2CppObject* RemovedNodePerFrameYList; // 0x88
		Il2CppObject* HeightChangedNodePerFrameXList; // 0x90
		Il2CppObject* HeightChangedNodePerFrameYList; // 0x98
		::System::Boolean DrawBattleGizmo; // 0xA0
		MovingArea* _MovingArea_k__BackingField; // 0xA8
		::FlatData::PropRootMotionFlat* propRootMotionFlat; // 0xB0
		::MX::Logic::Data::PropRootMotionFrame* propRootMotionFrame; // 0xC0
		Il2CppObject* movingAreaShapeList; // 0xC8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* CreateShape(::MX::Logic::Battles::ShapeSpecification* arg)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::MX::Logic::Battles::ShapeSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_CREATESHAPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMovingAreaShapeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_GETMOVINGAREASHAPELIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoActivateMovingArea(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_COACTIVATEMOVINGAREA_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Execute_b__28_0(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA__EXECUTE_B__28_0_OFFSET))(arg, nullptr);
		}

		MovingArea* get_MovingArea()
		{
			return ((MovingArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_GET_MOVINGAREA_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWalkableMovingAreaList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_CREATEWALKABLEMOVINGAREALIST_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandActivateMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandActivateMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandActivateMovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandActivateMovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MovingArea(MovingArea* arg)
		{
			((::System::Void(*)(MovingArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_SET_MOVINGAREA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDACTIVATEMOVINGAREA_.CTOR_OFFSET))(nullptr);
		}

	};
}

