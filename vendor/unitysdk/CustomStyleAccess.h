#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color&; }
namespace UnityEngine { class Texture2D&; }
namespace UnityEngine { class Sprite&; }
namespace UnityEngine::UIElements { class VectorImage&; }
namespace UnityEngine::UIElements { class StyleValueType; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyValue&; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyValue; }

#define CUSTOMSTYLEACCESS_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0xA339AD0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C3F0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C580)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C690)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C8A0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C9B0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33CAC0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33CBD0)
#define CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA33C4E0)
#define CUSTOMSTYLEACCESS_LOGCUSTOMPROPERTYWARNING_OFFSET UNITYSDK_OFFSET(0xA33C7D0)
#define CUSTOMSTYLEACCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33AB60)

	inline static constexpr unsigned int CustomStyleAccess_TypeDefinitionIndex = 30178;

	class CustomStyleAccess : public Il2CppObject
	{
	public:
		Il2CppObject* m_CustomProperties; // 0x10
		::System::Single m_DpiScaling; // 0x18

		::System::Void SetContext(Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_SETCONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Texture2D&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Texture2D&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Sprite&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Sprite&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::UIElements::VectorImage&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::UIElements::VectorImage&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::UnityEngine::UIElements::StyleValueType* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::UIElements::StyleValueType*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue&*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_TRYGETVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void LogCustomPropertyWarning(::System::String* str, ::UnityEngine::UIElements::StyleValueType* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UIElements::StyleValueType*, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_LOGCUSTOMPROPERTYWARNING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSTYLEACCESS_.CTOR_OFFSET))(nullptr);
		}

	};

