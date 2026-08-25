#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class CanvasUpdateRegistry; }
namespace UnityEngine::UI { class ICanvasElement; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_OBJECTVALIDFORUPDATE_OFFSET UNITYSDK_OFFSET(0xA2EADF0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2EAEC0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EAF60)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_PARENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA2EB270)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALDISABLECANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EB320)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_DISABLECANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EB570)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2EB470)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_PERFORMUPDATE_OFFSET UNITYSDK_OFFSET(0xA2EB750)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC450)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC580)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC6E0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGGRAPHICS_OFFSET UNITYSDK_OFFSET(0xA2EC830)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_SORTLAYOUTLIST_OFFSET UNITYSDK_OFFSET(0xA2EC8A0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC660)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALDISABLECANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EB600)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC9F0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_CLEANINVALIDITEMS_OFFSET UNITYSDK_OFFSET(0xA2EBFB0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA2ECB40)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA2EC4D0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0xA2ECC20)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGLAYOUT_OFFSET UNITYSDK_OFFSET(0xA2ECCB0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA2ECD20)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasUpdateRegistry_TypeDefinitionIndex = 34747;

	class CanvasUpdateRegistry : public Il2CppObject
	{
	public:
		::UnityEngine::UI::CanvasUpdateRegistry* s_Instance; // 0x0
		::System::Boolean m_PerformingLayoutUpdate; // 0x10
		::System::Boolean m_PerformingGraphicUpdate; // 0x11
		::Il2CppArray<::System::Object*>* m_CanvasUpdateProfilerStrings; // 0x18
		::System::String* m_CullingUpdateProfilerString; // 0x0
		Il2CppObject* m_LayoutRebuildQueue; // 0x20
		Il2CppObject* m_GraphicRebuildQueue; // 0x28
		Il2CppObject* s_SortLayoutFunction; // 0x8

		::System::Boolean ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_OBJECTVALIDFORUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 ParentCount(::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_PARENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void InternalDisableCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALDISABLECANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void DisableCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_DISABLECANVASELEMENTFORREBUILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::CanvasUpdateRegistry* get_instance()
		{
			return (return (::UnityEngine::UI::CanvasUpdateRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void PerformUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_PERFORMUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRebuildingGraphics()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGGRAPHICS_OFFSET))(nullptr);
		}

		::System::Int32 SortLayoutList(::UnityEngine::UI::ICanvasElement* arg, ::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UI::ICanvasElement*, ::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_SORTLAYOUTLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalDisableCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALDISABLECANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void CleanInvalidItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_CLEANINVALIDITEMS_OFFSET))(nullptr);
		}

		::System::Boolean TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRebuildingLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGLAYOUT_OFFSET))(nullptr);
		}

		::System::Boolean TryRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

	};
}

