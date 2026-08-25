#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class TransformOrigin; }

#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA418CB0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_INITIAL_OFFSET UNITYSDK_OFFSET(0xA418CC0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_X_OFFSET UNITYSDK_OFFSET(0xA418CE0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_SET_X_OFFSET UNITYSDK_OFFSET(0xA418CF0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_Y_OFFSET UNITYSDK_OFFSET(0xA418D00)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_SET_Y_OFFSET UNITYSDK_OFFSET(0xA418D10)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_Z_OFFSET UNITYSDK_OFFSET(0xA418D20)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA418190)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA418D30)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_EQUALS_OFFSET UNITYSDK_OFFSET(0xA418DA0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_EQUALS_OFFSET UNITYSDK_OFFSET(0xA418E10)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4183F0)
#define UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA418EE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransformOrigin_TypeDefinitionIndex = 30628;

	class TransformOrigin : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Length* m_X; // 0x10
		::UnityEngine::UIElements::Length* m_Y; // 0x18
		::System::Single m_Z; // 0x20

		::System::Void .ctor(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::TransformOrigin* Initial()
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_INITIAL_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_x()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::UnityEngine::UIElements::Length* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_SET_X_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* get_y()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::UnityEngine::UIElements::Length* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Single get_z()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GET_Z_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSFORMORIGIN_TOSTRING_OFFSET))(nullptr);
		}

	};
}

