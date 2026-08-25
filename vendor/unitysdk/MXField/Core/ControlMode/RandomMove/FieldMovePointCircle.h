#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_GET_MAXRADIUS_OFFSET UNITYSDK_OFFSET(0xEE4120)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE4130)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_GETRANDOMPOINT_OFFSET UNITYSDK_OFFSET(0xEE4140)

namespace MXField::Core::ControlMode::RandomMove
{
	inline static constexpr unsigned int FieldMovePointCircle_TypeDefinitionIndex = 11011;

	class FieldMovePointCircle : public Il2CppObject
	{
	public:
		::System::Single maxRadius; // 0x18

		::System::Single get_MaxRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_GET_MAXRADIUS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetRandomPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTCIRCLE_GETRANDOMPOINT_OFFSET))(nullptr);
		}

	};
}

