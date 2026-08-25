#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleRotate; }

#define UNITYENGINE_UIELEMENTS_STYLEROTATE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA417190)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA4171E0)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4171F0)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417210)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA417230)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA417330)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417350)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417440)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417590)
#define UNITYENGINE_UIELEMENTS_STYLEROTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4175B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleRotate_TypeDefinitionIndex = 30618;

	class StyleRotate : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Rotate* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x28

		::UnityEngine::UIElements::Rotate* get_value()
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Rotate* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Rotate*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleRotate* arg, ::UnityEngine::UIElements::StyleRotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleRotate*, ::UnityEngine::UIElements::StyleRotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleRotate* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleRotate*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleRotate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleRotate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEROTATE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

