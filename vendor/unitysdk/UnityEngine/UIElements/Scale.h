#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class Scale; }

#define UNITYENGINE_UIELEMENTS_SCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4162F0)
#define UNITYENGINE_UIELEMENTS_SCALE_INITIAL_OFFSET UNITYSDK_OFFSET(0xA416310)
#define UNITYENGINE_UIELEMENTS_SCALE_NONE_OFFSET UNITYSDK_OFFSET(0xA416360)
#define UNITYENGINE_UIELEMENTS_SCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4163C0)
#define UNITYENGINE_UIELEMENTS_SCALE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA4163D0)
#define UNITYENGINE_UIELEMENTS_SCALE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA416420)
#define UNITYENGINE_UIELEMENTS_SCALE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416470)
#define UNITYENGINE_UIELEMENTS_SCALE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4164C0)
#define UNITYENGINE_UIELEMENTS_SCALE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA416570)
#define UNITYENGINE_UIELEMENTS_SCALE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4165C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Scale_TypeDefinitionIndex = 30609;

	class Scale : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Scale; // 0x10
		::System::Boolean m_IsNone; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scale* Initial()
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_INITIAL_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Scale* None()
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_NONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_value()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::Scale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Scale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Scale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCALE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

