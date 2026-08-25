#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE4110)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINT_GETRANDOMPOINT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core::ControlMode::RandomMove
{
	inline static constexpr unsigned int FieldMovePoint_TypeDefinitionIndex = 11010;

	class FieldMovePoint : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetRandomPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINT_GETRANDOMPOINT_OFFSET))(nullptr);
		}

	};
}

