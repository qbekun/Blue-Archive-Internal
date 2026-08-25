#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLES_SHAPESPECIFICATION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B1FA0)
#define MX_LOGIC_BATTLES_SHAPESPECIFICATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12B1FF0)
#define MX_LOGIC_BATTLES_SHAPESPECIFICATION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B2280)
#define MX_LOGIC_BATTLES_SHAPESPECIFICATION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12B2000)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ShapeSpecification_TypeDefinitionIndex = 14128;

	class ShapeSpecification : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::ShapeType* Type; // 0x10
		::UnityEngine::Vector2* PositionOffset; // 0x14
		::System::Int32 AngleOffset; // 0x1C
		::System::Single CircleRadius; // 0x20
		::System::Single DonutOuterRadius; // 0x24
		::System::Single DonutInnerRadius; // 0x28
		::System::Int32 DonutAngle; // 0x2C
		::System::Single FanRadius; // 0x30
		::System::Int32 FanAngle; // 0x34
		::System::Single OBBWidth; // 0x38
		::System::Single OBBHeight; // 0x3C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::ShapeSpecification&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::ShapeSpecification&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SHAPESPECIFICATION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SHAPESPECIFICATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::ShapeSpecification&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::ShapeSpecification&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SHAPESPECIFICATION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SHAPESPECIFICATION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

