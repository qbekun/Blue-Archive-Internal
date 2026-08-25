#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xEE4340)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_GETRANDOMPOINT_OFFSET UNITYSDK_OFFSET(0xEE4380)
#define MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE45A0)

namespace MXField::Core::ControlMode::RandomMove
{
	inline static constexpr unsigned int FieldMovePointRect_TypeDefinitionIndex = 11012;

	class FieldMovePointRect : public Il2CppObject
	{
	public:
		::System::Single width; // 0x18
		::System::Single height; // 0x1C

		::UnityEngine::Vector3* get_Center()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_GET_CENTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetRandomPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_GETRANDOMPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_CONTROLMODE_RANDOMMOVE_FIELDMOVEPOINTRECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

