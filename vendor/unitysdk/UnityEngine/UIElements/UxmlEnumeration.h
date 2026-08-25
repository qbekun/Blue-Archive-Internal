#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UxmlTypeRestriction; }

#define UNITYENGINE_UIELEMENTS_UXMLENUMERATION_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xA424C00)
#define UNITYENGINE_UIELEMENTS_UXMLENUMERATION_SET_VALUES_OFFSET UNITYSDK_OFFSET(0xA424C10)
#define UNITYENGINE_UIELEMENTS_UXMLENUMERATION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA424C60)
#define UNITYENGINE_UIELEMENTS_UXMLENUMERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA424D90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlEnumeration_TypeDefinitionIndex = 30699;

	class UxmlEnumeration : public Il2CppObject
	{
	public:
		Il2CppObject* m_Values; // 0x10

		Il2CppObject* get_values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMERATION_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMERATION_SET_VALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::UxmlTypeRestriction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UxmlTypeRestriction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMERATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLENUMERATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

