#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements { class StyleVariableContext&; }
namespace UnityEngine::UIElements { class StyleVariableContext; }

#define UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA38AB80)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA38AC20)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA38AD10)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA38ADB0)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA38AE50)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA38AEF0)
#define UNITYENGINE_UIELEMENTS_STYLECACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA38AF90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleCache_TypeDefinitionIndex = 30266;

	class StyleCache : public Il2CppObject
	{
	public:
		Il2CppObject* s_ComputedStyleCache; // 0x0
		Il2CppObject* s_StyleVariableContextCache; // 0x8
		Il2CppObject* s_ComputedTransitionsCache; // 0x10

		::System::Boolean TryGetValue(::System::Int64 arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Int64 arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int32 arg, ::UnityEngine::UIElements::StyleVariableContext&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::StyleVariableContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Int32 arg, ::UnityEngine::UIElements::StyleVariableContext* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::StyleVariableContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int32 arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

