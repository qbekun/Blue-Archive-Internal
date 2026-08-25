#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_GROUNDDIRECTION_ISTARGETFURTHERINMAPDIRECTION_OFFSET UNITYSDK_OFFSET(0x12A0440)
#define MX_LOGIC_BATTLES_GROUNDDIRECTION_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x12A0570)
#define MX_LOGIC_BATTLES_GROUNDDIRECTION_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x12A0520)
#define MX_LOGIC_BATTLES_GROUNDDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A05F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundDirection_TypeDefinitionIndex = 14099;

	class GroundDirection : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Direction; // 0x10

		::System::Boolean IsTargetFurtherInMapDirection(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDDIRECTION_ISTARGETFURTHERINMAPDIRECTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2* InverseTransformPoint(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDDIRECTION_INVERSETRANSFORMPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* InverseTransformPoint(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDDIRECTION_INVERSETRANSFORMPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDDIRECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

