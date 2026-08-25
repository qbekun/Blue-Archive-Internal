#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class Translate; }

#define UNITYENGINE_UIELEMENTS_TRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA419130)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_NONE_OFFSET UNITYSDK_OFFSET(0xA418A20)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_GET_X_OFFSET UNITYSDK_OFFSET(0xA419150)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_SET_X_OFFSET UNITYSDK_OFFSET(0xA419160)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_GET_Y_OFFSET UNITYSDK_OFFSET(0xA419170)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_SET_Y_OFFSET UNITYSDK_OFFSET(0xA419180)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_GET_Z_OFFSET UNITYSDK_OFFSET(0xA419190)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA417A30)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA4191A0)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA419220)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4192A0)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417CF0)
#define UNITYENGINE_UIELEMENTS_TRANSLATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA419380)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Translate_TypeDefinitionIndex = 30629;

	class Translate : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Length* m_X; // 0x10
		::UnityEngine::UIElements::Length* m_Y; // 0x18
		::System::Single m_Z; // 0x20
		::System::Boolean m_isNone; // 0x24

		::System::Void .ctor(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Translate* None()
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_NONE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Length* get_x()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::UnityEngine::UIElements::Length* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_SET_X_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* get_y()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::UnityEngine::UIElements::Length* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Single get_z()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_GET_Z_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Translate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSLATE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

