#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define RAYCASTHITDATA_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x9F39350)
#define RAYCASTHITDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F39080)
#define RAYCASTHITDATA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9F39360)
#define RAYCASTHITDATA_GET_SCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x9F39370)
#define RAYCASTHITDATA_GET_WORLDHITPOSITION_OFFSET UNITYSDK_OFFSET(0x9F39380)

	inline static constexpr unsigned int RaycastHitData_TypeDefinitionIndex = 28633;

	class RaycastHitData : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Graphic* _graphic_k__BackingField; // 0x10
		::UnityEngine::Vector3* _worldHitPosition_k__BackingField; // 0x18
		::UnityEngine::Vector2* _screenPosition_k__BackingField; // 0x24
		::System::Single _distance_k__BackingField; // 0x2C

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return (return (::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITDATA_GET_GRAPHIC_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UI::Graphic* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_distance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITDATA_GET_DISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_screenPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITDATA_GET_SCREENPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_worldHitPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYCASTHITDATA_GET_WORLDHITPOSITION_OFFSET))(nullptr);
		}

	};

