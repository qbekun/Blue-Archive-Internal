#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int EmitParams_TypeDefinitionIndex = 36922;

	class EmitParams : public Il2CppObject
	{
	public:
		Particle* m_Particle; // 0x10
		::System::Boolean m_PositionSet; // 0x94
		::System::Boolean m_VelocitySet; // 0x95
		::System::Boolean m_AxisOfRotationSet; // 0x96
		::System::Boolean m_RotationSet; // 0x97
		::System::Boolean m_AngularVelocitySet; // 0x98
		::System::Boolean m_StartSizeSet; // 0x99
		::System::Boolean m_StartColorSet; // 0x9A
		::System::Boolean m_RandomSeedSet; // 0x9B
		::System::Boolean m_StartLifetimeSet; // 0x9C
		::System::Boolean m_MeshIndexSet; // 0x9D
		::System::Boolean m_ApplyShapeToPosition; // 0x9E

	};

