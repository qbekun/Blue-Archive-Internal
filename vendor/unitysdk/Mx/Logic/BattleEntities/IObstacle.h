#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ObstacleHeightType; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class ObstacleCoverType; }
namespace FlatData { class EntityMaterialType; }
namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace FlatData { class CoverMotionType; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class StatusProcessor; }

#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_MAXHITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_OBSTACLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISLINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOCCUPIEDBYENEMY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_HITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_LIFETIMERATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_HITPOINTRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_STATPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_DESTROYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_COVERMOTIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_DISPELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GETSUMMONER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IObstacle_TypeDefinitionIndex = 13206;

	class IObstacle : public Il2CppObject
	{
	public:
		::System::Int64 get_MaxHitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_MAXHITPOINT_OFFSET))(nullptr);
		}

		::FlatData::ObstacleHeightType* get_ObstacleHeight()
		{
			return ((::FlatData::ObstacleHeightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_OBSTACLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean IsLineIntersect(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISLINEINTERSECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOccupiedByEnemy(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOCCUPIEDBYENEMY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Int64 get_HitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_HITPOINT_OFFSET))(nullptr);
		}

		::System::Void set_IsDestroyed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_SET_ISDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Single get_LifeTimeRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_LIFETIMERATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_HitPointRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_HITPOINTRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Alive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ALIVE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleCoverType* get_ObstacleCoverType()
		{
			return ((::FlatData::ObstacleCoverType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ISOCCUPIED_OFFSET))(nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_ISDESTROYED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* get_StatProcessor()
		{
			return ((::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_STATPROCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean IsObstacleOccupiedByCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyObstacle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_DESTROYOBSTACLE_OFFSET))(nullptr);
		}

		::FlatData::CoverMotionType* get_CoverMotionType()
		{
			return ((::FlatData::CoverMotionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GET_COVERMOTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsOccupiedByPlayer(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void DispelByGroupId(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::StatusProcessor* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::StatusProcessor*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_DISPELBYGROUPID_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSummoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IOBSTACLE_GETSUMMONER_OFFSET))(nullptr);
		}

	};
}

