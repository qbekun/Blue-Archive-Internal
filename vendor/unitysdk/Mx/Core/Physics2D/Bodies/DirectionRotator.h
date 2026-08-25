#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x10244A0)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1023BB0)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_CURRENTANGLE_OFFSET UNITYSDK_OFFSET(0x1026C10)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_SET_CURRENTANGLE_OFFSET UNITYSDK_OFFSET(0x1026C20)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_DESTANGLE_OFFSET UNITYSDK_OFFSET(0x1026C30)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_SET_DESTANGLE_OFFSET UNITYSDK_OFFSET(0x1026C40)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1026C50)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1025720)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_FORCESET_OFFSET UNITYSDK_OFFSET(0x1024070)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_RESERVESET_OFFSET UNITYSDK_OFFSET(0x1026340)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_STOP_OFFSET UNITYSDK_OFFSET(0x1026620)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1026430)
#define MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1026CB0)

namespace MX::Core::Physics2D::Bodies
{
	inline static constexpr unsigned int DirectionRotator_TypeDefinitionIndex = 12811;

	class DirectionRotator : public Il2CppObject
	{
	public:
		::System::Single _CurrentAngle_k__BackingField; // 0x10
		::System::Single _DestAngle_k__BackingField; // 0x14

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Single get_CurrentAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_CURRENTANGLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_SET_CURRENTANGLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_DestAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_GET_DESTANGLE_OFFSET))(nullptr);
		}

		::System::Void set_DestAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_SET_DESTANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSet(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_FORCESET_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveSet(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_RESERVESET_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_STOP_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_DIRECTIONROTATOR_RESET_OFFSET))(arg, arg2, nullptr);
		}

	};
}

