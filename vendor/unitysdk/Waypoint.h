#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

#define WAYPOINT_FROMVECTOR4_OFFSET UNITYSDK_OFFSET(0x2836C70)
#define WAYPOINT_GET_ASVECTOR4_OFFSET UNITYSDK_OFFSET(0x2836C80)

	inline static constexpr unsigned int Waypoint_TypeDefinitionIndex = 34227;

	class Waypoint : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::System::Single roll; // 0x1C

		Waypoint* FromVector4(::UnityEngine::Vector4* arg)
		{
			return (return (Waypoint*(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + WAYPOINT_FROMVECTOR4_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_AsVector4()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAYPOINT_GET_ASVECTOR4_OFFSET))(nullptr);
		}

	};

