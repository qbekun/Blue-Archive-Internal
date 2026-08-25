#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldEntityController; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXFIELD_CORE_FIELDENTITYROTATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xED0F50)
#define MXFIELD_CORE_FIELDENTITYROTATOR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xED1070)
#define MXFIELD_CORE_FIELDENTITYROTATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xED13F0)
#define MXFIELD_CORE_FIELDENTITYROTATOR_LOOKAT_OFFSET UNITYSDK_OFFSET(0xED1410)
#define MXFIELD_CORE_FIELDENTITYROTATOR_START_OFFSET UNITYSDK_OFFSET(0xED1570)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldEntityRotator_TypeDefinitionIndex = 10930;

	class FieldEntityRotator : public Il2CppObject
	{
	public:
		::MXField::Core::FieldEntityController* entityController; // 0x18
		::UnityEngine::Vector3* lookDirection; // 0x20
		::UnityEngine::Quaternion* freeRotation; // 0x2C
		::System::Single angularSpeed; // 0x3C
		::System::Single turnSpeedMultiplier; // 0x40

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYROTATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYROTATOR_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYROTATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LookAt(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYROTATOR_LOOKAT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYROTATOR_START_OFFSET))(nullptr);
		}

	};
}

