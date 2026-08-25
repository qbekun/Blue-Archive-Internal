#pragma once
#include "../unitysdk.h"

namespace Spine { class Property; }

namespace Spine
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 34951;

	class Property : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Property* Rotate; // 0x0
		::Spine::Property* X; // 0x0
		::Spine::Property* Y; // 0x0
		::Spine::Property* ScaleX; // 0x0
		::Spine::Property* ScaleY; // 0x0
		::Spine::Property* ShearX; // 0x0
		::Spine::Property* ShearY; // 0x0
		::Spine::Property* Inherit; // 0x0
		::Spine::Property* RGB; // 0x0
		::Spine::Property* Alpha; // 0x0
		::Spine::Property* RGB2; // 0x0
		::Spine::Property* Attachment; // 0x0
		::Spine::Property* Deform; // 0x0
		::Spine::Property* Event; // 0x0
		::Spine::Property* DrawOrder; // 0x0
		::Spine::Property* IkConstraint; // 0x0
		::Spine::Property* TransformConstraint; // 0x0
		::Spine::Property* PathConstraintPosition; // 0x0
		::Spine::Property* PathConstraintSpacing; // 0x0
		::Spine::Property* PathConstraintMix; // 0x0
		::Spine::Property* PhysicsConstraintInertia; // 0x0
		::Spine::Property* PhysicsConstraintStrength; // 0x0
		::Spine::Property* PhysicsConstraintDamping; // 0x0
		::Spine::Property* PhysicsConstraintMass; // 0x0
		::Spine::Property* PhysicsConstraintWind; // 0x0
		::Spine::Property* PhysicsConstraintGravity; // 0x0
		::Spine::Property* PhysicsConstraintMix; // 0x0
		::Spine::Property* PhysicsConstraintReset; // 0x0
		::Spine::Property* Sequence; // 0x0

	};
}

