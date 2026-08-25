#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlFactory; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_GET_FACTORIES_OFFSET UNITYSDK_OFFSET(0xA425420)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERFACTORY_OFFSET UNITYSDK_OFFSET(0xA426600)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA426AC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERENGINEFACTORIES_OFFSET UNITYSDK_OFFSET(0xA4254F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERUSERFACTORIES_OFFSET UNITYSDK_OFFSET(0xA426330)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFactoryRegistry_TypeDefinitionIndex = 30701;

	class VisualElementFactoryRegistry : public Il2CppObject
	{
	public:
		Il2CppObject* s_Factories; // 0x0

		Il2CppObject* get_factories()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_GET_FACTORIES_OFFSET))(nullptr);
		}

		::System::Void RegisterFactory(::UnityEngine::UIElements::IUxmlFactory* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IUxmlFactory*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERFACTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void RegisterEngineFactories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERENGINEFACTORIES_OFFSET))(nullptr);
		}

		::System::Void RegisterUserFactories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFACTORYREGISTRY_REGISTERUSERFACTORIES_OFFSET))(nullptr);
		}

	};
}

