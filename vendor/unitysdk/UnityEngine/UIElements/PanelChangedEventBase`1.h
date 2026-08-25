#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GET_ORIGINPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_SET_ORIGINPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GET_DESTINATIONPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_SET_DESTINATIONPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelChangedEventBase`1_TypeDefinitionIndex = 30518;

	class PanelChangedEventBase`1 : public ::MX::GameLogic::DBModel::EchelonDB
	{
	public:
		::UnityEngine::UIElements::IPanel* _originPanel_k__BackingField; // 0x0
		::UnityEngine::UIElements::IPanel* _destinationPanel_k__BackingField; // 0x0

		::UnityEngine::UIElements::IPanel* get_originPanel()
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GET_ORIGINPANEL_OFFSET))(nullptr);
		}

		::System::Void set_originPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_SET_ORIGINPANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IPanel* get_destinationPanel()
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GET_DESTINATIONPANEL_OFFSET))(nullptr);
		}

		::System::Void set_destinationPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_SET_DESTINATIONPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IPanel* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELCHANGEDEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

