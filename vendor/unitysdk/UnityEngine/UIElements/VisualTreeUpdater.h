#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class VisualTreeUpdatePhase; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class IVisualTreeUpdater; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38E720)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38E950)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATEVISUALTREEPHASE_OFFSET UNITYSDK_OFFSET(0xA38EDA0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38F040)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_SETUPDATER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_GETUPDATER_OFFSET UNITYSDK_OFFSET(0xA38F150)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_SETDEFAULTUPDATERS_OFFSET UNITYSDK_OFFSET(0xA38E850)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdater_TypeDefinitionIndex = 30274;

	class VisualTreeUpdater : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel; // 0x10
		UpdaterArray* m_UpdaterArray; // 0x18

		::System::Void .ctor(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATEVISUALTREEPHASE_OFFSET))(arg, nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_SETUPDATER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_GETUPDATER_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultUpdaters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_SETDEFAULTUPDATERS_OFFSET))(nullptr);
		}

	};
}

