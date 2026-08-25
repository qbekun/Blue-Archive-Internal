#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Angle; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_UIELEMENTS_ROTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA415C70)
#define UNITYENGINE_UIELEMENTS_ROTATE_INITIAL_OFFSET UNITYSDK_OFFSET(0xA415CC0)
#define UNITYENGINE_UIELEMENTS_ROTATE_NONE_OFFSET UNITYSDK_OFFSET(0xA415D30)
#define UNITYENGINE_UIELEMENTS_ROTATE_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0xA415DA0)
#define UNITYENGINE_UIELEMENTS_ROTATE_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0xA415DB0)
#define UNITYENGINE_UIELEMENTS_ROTATE_GET_AXIS_OFFSET UNITYSDK_OFFSET(0xA415DC0)
#define UNITYENGINE_UIELEMENTS_ROTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA415DE0)
#define UNITYENGINE_UIELEMENTS_ROTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA415E70)
#define UNITYENGINE_UIELEMENTS_ROTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA415F60)
#define UNITYENGINE_UIELEMENTS_ROTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416050)
#define UNITYENGINE_UIELEMENTS_ROTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA416190)
#define UNITYENGINE_UIELEMENTS_ROTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA416240)
#define UNITYENGINE_UIELEMENTS_ROTATE_TOQUATERNION_OFFSET UNITYSDK_OFFSET(0xA4162A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Rotate_TypeDefinitionIndex = 30608;

	class Rotate : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Angle* m_Angle; // 0x10
		::UnityEngine::Vector3* m_Axis; // 0x18
		::System::Boolean m_IsNone; // 0x24

		::System::Void .ctor(::UnityEngine::UIElements::Angle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Angle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Rotate* Initial()
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_INITIAL_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Rotate* None()
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_NONE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Angle* get_angle()
		{
			return (return (::UnityEngine::UIElements::Angle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_GET_ANGLE_OFFSET))(nullptr);
		}

		::System::Void set_angle(::UnityEngine::UIElements::Angle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Angle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_SET_ANGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_axis()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_GET_AXIS_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::Rotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Rotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Rotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* ToQuaternion()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ROTATE_TOQUATERNION_OFFSET))(nullptr);
		}

	};
}

