#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_UpdateRegistry; }
namespace UnityEngine::UI { class ICanvasElement; }

#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA187F60)
#define TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1880B0)
#define TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0xA1882E0)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0xA1886E0)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA188740)
#define TMPRO_TMP_UPDATEREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA188150)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA188580)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0xA188890)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0xA188940)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA188D00)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0xA188420)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateRegistry_TypeDefinitionIndex = 33761;

	class TMP_UpdateRegistry : public Il2CppObject
	{
	public:
		::TMPro::TMP_UpdateRegistry* s_Instance; // 0x0
		Il2CppObject* m_LayoutRebuildQueue; // 0x10
		Il2CppObject* m_LayoutQueueLookup; // 0x18
		Il2CppObject* m_GraphicRebuildQueue; // 0x20
		Il2CppObject* m_GraphicQueueLookup; // 0x28

		::System::Boolean InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_UpdateRegistry* get_instance()
		{
			return (return (::TMPro::TMP_UpdateRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void PerformUpdateForMeshRendererObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void PerformUpdateForCanvasRendererObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET))(nullptr);
		}

		::System::Void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ICanvasElement*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(arg, nullptr);
		}

	};
}

