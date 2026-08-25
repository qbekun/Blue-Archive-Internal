#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_FORWARD2D_OFFSET UNITYSDK_OFFSET(0x1D9FE30)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE40)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_VALIDATEDINPUT_OFFSET UNITYSDK_OFFSET(0x1D9FFD0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_INPUT2D_OFFSET UNITYSDK_OFFSET(0x1D9FFF0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_VISUALPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA0000)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x1DA0020)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_LOGICPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA0030)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_RAWINPUT_OFFSET UNITYSDK_OFFSET(0x1DA0050)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_LOGICFORWARD_OFFSET UNITYSDK_OFFSET(0x1DA0060)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuideState_TypeDefinitionIndex = 20394;

	class SkillGuideState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _RawInput_k__BackingField; // 0x10
		::UnityEngine::Vector3* _ValidatedInput_k__BackingField; // 0x1C
		::UnityEngine::Vector3* _LogicPosition_k__BackingField; // 0x28
		::UnityEngine::Vector3* _LogicForward_k__BackingField; // 0x34
		::UnityEngine::Vector3* _VisualPosition_k__BackingField; // 0x40
		::UnityEngine::Vector2* _Input2D_k__BackingField; // 0x4C
		::UnityEngine::Vector2* _Position2D_k__BackingField; // 0x54
		::UnityEngine::Vector2* _Forward2D_k__BackingField; // 0x5C

		::UnityEngine::Vector2* get_Forward2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_FORWARD2D_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_ValidatedInput()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_VALIDATEDINPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Input2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_INPUT2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_VisualPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_VISUALPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_POSITION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_LogicPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_LOGICPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_RawInput()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_RAWINPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_LogicForward()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDESTATE_GET_LOGICFORWARD_OFFSET))(nullptr);
		}

	};
}

