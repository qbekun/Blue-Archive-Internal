#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RaycastHit; }

#define COMPARERRAYCASTHITDISTANCEDESCENDING_COMPARE_OFFSET UNITYSDK_OFFSET(0xDBF630)
#define COMPARERRAYCASTHITDISTANCEDESCENDING_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBDA10)

	inline static constexpr unsigned int ComparerRaycastHitDistanceDescending_TypeDefinitionIndex = 10005;

	class ComparerRaycastHitDistanceDescending : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::UnityEngine::RaycastHit* arg, ::UnityEngine::RaycastHit* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::RaycastHit*, ::UnityEngine::RaycastHit*, ::PVOID))((::PBYTE)hIl2Cpp + COMPARERRAYCASTHITDISTANCEDESCENDING_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPARERRAYCASTHITDISTANCEDESCENDING_.CTOR_OFFSET))(nullptr);
		}

	};

