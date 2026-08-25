#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color&; }
namespace UnityEngine { class Texture2D&; }
namespace UnityEngine { class Sprite&; }
namespace UnityEngine::UIElements { class VectorImage&; }

#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ICustomStyle_TypeDefinitionIndex = 30598;

	class ICustomStyle : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(Il2CppObject* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Texture2D&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Texture2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::Sprite&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Sprite&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::UnityEngine::UIElements::VectorImage&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::UIElements::VectorImage&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICUSTOMSTYLE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

