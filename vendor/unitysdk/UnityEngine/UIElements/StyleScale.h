#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleScale; }

#define UNITYENGINE_UIELEMENTS_STYLESCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA417620)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA417650)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417660)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417670)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA417680)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA4176E0)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4176F0)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417750)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417810)
#define UNITYENGINE_UIELEMENTS_STYLESCALE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA417860)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleScale_TypeDefinitionIndex = 30619;

	class StyleScale : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Scale* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x20

		::UnityEngine::UIElements::Scale* get_value()
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Scale* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Scale*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleScale* arg, ::UnityEngine::UIElements::StyleScale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleScale*, ::UnityEngine::UIElements::StyleScale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleScale* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleScale*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleScale* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleScale*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESCALE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

