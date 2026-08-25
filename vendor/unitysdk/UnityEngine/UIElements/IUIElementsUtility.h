#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IUIElementsUtility_TypeDefinitionIndex = 30221;

	class IUIElementsUtility : public Il2CppObject
	{
	public:
		::System::Boolean TakeCapture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_TAKECAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseCapture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_RELEASECAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessEvent(::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_PROCESSEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CleanupRoots()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_CLEANUPROOTS_OFFSET))(nullptr);
		}

		::System::Boolean EndContainerGUIFromException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean MakeCurrentIMGUIContainerDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUIELEMENTSUTILITY_MAKECURRENTIMGUICONTAINERDIRTY_OFFSET))(nullptr);
		}

	};
}

