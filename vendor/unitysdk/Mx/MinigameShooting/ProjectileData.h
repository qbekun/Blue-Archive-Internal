#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PROJECTILEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1454060)
#define MX_MINIGAMESHOOTING_PROJECTILEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1454120)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectileData_TypeDefinitionIndex = 15014;

	class ProjectileData : public Il2CppObject
	{
	public:
		::System::Single Angle; // 0x10
		::UnityEngine::Vector3* OffsetPos; // 0x14

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

