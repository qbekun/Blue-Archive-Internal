#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaValue; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class Rotate; }
namespace UnityEngine::UIElements { class Scale; }
namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class StyleLength; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_DEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOYOGAVALUE_OFFSET UNITYSDK_OFFSET(0xA4184C0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOLENGTH_OFFSET UNITYSDK_OFFSET(0xA4185C0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOROTATE_OFFSET UNITYSDK_OFFSET(0xA4186A0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSCALE_OFFSET UNITYSDK_OFFSET(0xA4187E0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOTRANSLATE_OFFSET UNITYSDK_OFFSET(0xA418900)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOLENGTH_OFFSET UNITYSDK_OFFSET(0xA418A40)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueExtensions_TypeDefinitionIndex = 30625;

	class StyleValueExtensions : public Il2CppObject
	{
	public:
		::System::String* DebugString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_DEBUGSTRING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Yoga::YogaValue* ToYogaValue(::UnityEngine::UIElements::Length* arg)
		{
			return (return (::UnityEngine::Yoga::YogaValue*(*)(::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOYOGAVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* ToLength(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOLENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Rotate* ToRotate(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::Rotate*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOROTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Scale* ToScale(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::Scale*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSCALE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Translate* ToTranslate(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOTRANSLATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Length* ToLength(::UnityEngine::UIElements::StyleLength* arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_COPYFROM_OFFSET))(arg, arg, nullptr);
		}

	};
}

