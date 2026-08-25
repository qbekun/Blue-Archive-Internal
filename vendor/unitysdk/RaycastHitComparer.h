#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RaycastHit; }

#define RAYCASTHITCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xA49E960)
#define RAYCASTHITCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA49E9A0)
#define RAYCASTHITCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49EA20)

	inline static constexpr unsigned int RaycastHitComparer_TypeDefinitionIndex = 34936;

	class RaycastHitComparer : public Il2CppObject
	{
	public:
		RaycastHitComparer* instance; // 0x0

		::System::Int32 Compare(::UnityEngine::RaycastHit* arg, ::UnityEngine::RaycastHit* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::RaycastHit*, ::UnityEngine::RaycastHit*, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

