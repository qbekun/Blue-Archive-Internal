#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class TextShadow; }

#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_EQUALS_OFFSET UNITYSDK_OFFSET(0xA37E7A0)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_EQUALS_OFFSET UNITYSDK_OFFSET(0xA37E890)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA37E910)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA37A7F0)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA37E9C0)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA37EA40)
#define UNITYENGINE_UIELEMENTS_TEXTSHADOW_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA37A900)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextShadow_TypeDefinitionIndex = 30216;

	class TextShadow : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* offset; // 0x10
		::System::Single blurRadius; // 0x18
		::UnityEngine::Color* color; // 0x1C

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextShadow* LerpUnclamped(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::TextShadow* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TextShadow*(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::TextShadow*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTSHADOW_LERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

