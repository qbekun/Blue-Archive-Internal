#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TransformOrigin; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleTransformOrigin; }

#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA418080)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA4180C0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4180D0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4180F0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA418110)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA4181F0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_EQUALS_OFFSET UNITYSDK_OFFSET(0xA418210)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4182A0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA418390)
#define UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA418450)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleTransformOrigin_TypeDefinitionIndex = 30622;

	class StyleTransformOrigin : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::TransformOrigin* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x24

		::UnityEngine::UIElements::TransformOrigin* get_value()
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleTransformOrigin* arg, ::UnityEngine::UIElements::StyleTransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTransformOrigin*, ::UnityEngine::UIElements::StyleTransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleTransformOrigin* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleTransformOrigin*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleTransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSFORMORIGIN_TOSTRING_OFFSET))(nullptr);
		}

	};
}

