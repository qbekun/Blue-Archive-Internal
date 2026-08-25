#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class ShapeDefinition; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }

#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x10232E0)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x10233D0)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1023420)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x10234F0)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x10235B0)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10236A0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int ShapeDefinition_TypeDefinitionIndex = 12806;

	class ShapeDefinition : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::ShapeDefinition* Empty; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* ShapeType; // 0x10
		::System::Int32 Radius; // 0x14
		::System::Int32 ExcludeRadius; // 0x18
		::System::Int32 Width; // 0x1C
		::System::Int32 Height; // 0x20
		::System::Int32 Length; // 0x24
		::System::Int32 DirectionDegree; // 0x28
		::System::Int32 FanSweepDegree; // 0x2C

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::ShapeDefinition* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::ShapeDefinition* arg, ::MX::Core::Physics2D::Shapes::ShapeDefinition* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::ShapeDefinition* arg, ::MX::Core::Physics2D::Shapes::ShapeDefinition* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEDEFINITION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

