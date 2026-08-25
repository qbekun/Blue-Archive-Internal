#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace FlatData { class ObstacleHeightType; }
namespace FlatData { class ObstacleDestroyType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class ObstacleCoverType; }
namespace FlatData { class CoverMotionType; }
namespace FlatData { class EntityMaterialType; }
namespace MX::Data { class GroundObstacleData; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Data { class GroundObstacleData&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_DATA_GROUNDOBSTACLEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1849C40)
#define MX_DATA_GROUNDOBSTACLEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1849CC0)
#define MX_DATA_GROUNDOBSTACLEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1849EB0)
#define MX_DATA_GROUNDOBSTACLEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x184A120)
#define MX_DATA_GROUNDOBSTACLEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x184A190)
#define MX_DATA_GROUNDOBSTACLEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x184A250)
#define MX_DATA_GROUNDOBSTACLEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x184A260)
#define MX_DATA_GROUNDOBSTACLEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x184A980)
#define MX_DATA_GROUNDOBSTACLEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x184B420)
#define MX_DATA_GROUNDOBSTACLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x184CE40)

namespace MX::Data
{
	inline static constexpr unsigned int GroundObstacleData_TypeDefinitionIndex = 15836;

	class GroundObstacleData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Scale; // 0x10
		::UnityEngine::Vector2* Offset; // 0x18
		::UnityEngine::Vector2* Size; // 0x20
		::System::Single PreDuration; // 0x28
		::System::Single DestroyDuration; // 0x2C
		::System::Single RetreatDuration; // 0x30
		::System::Single RemainTime; // 0x34
		::System::Boolean JumpAble; // 0x38
		::System::Boolean Indestructible; // 0x39
		::System::Boolean CrashByTSS; // 0x3A
		::FlatData::ObstacleHeightType* ObstacleHeightType; // 0x3C
		::FlatData::ObstacleDestroyType* DestroyType; // 0x40
		::FlatData::ObstacleDestroyType* RetreatType; // 0x44
		::FlatData::ArmorType* ArmorType; // 0x48
		::FlatData::ObstacleCoverType* ObstacleCoverType; // 0x4C
		::FlatData::CoverMotionType* CoverMotionType; // 0x50
		::FlatData::EntityMaterialType* MaterialType; // 0x54
		::System::String* UniqueName; // 0x58
		::System::UInt32 NameHash; // 0x60
		::UnityEngine::Vector2* Direction; // 0x64
		Il2CppObject* EnemyPoints; // 0x70
		Il2CppObject* PlayerPoints; // 0x78

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Data::GroundObstacleData* arg, ::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::GroundObstacleData*, ::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Data::GroundObstacleData* arg, ::MX::Data::GroundObstacleData* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::GroundObstacleData*, ::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Data::GroundObstacleData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Data::GroundObstacleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Data::GroundObstacleData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Data::GroundObstacleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDOBSTACLEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

