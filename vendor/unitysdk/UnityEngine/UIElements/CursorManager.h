#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Cursor; }

#define UNITYENGINE_UIELEMENTS_CURSORMANAGER_GET_ISCURSOROVERRIDEN_OFFSET UNITYSDK_OFFSET(0xA311EE0)
#define UNITYENGINE_UIELEMENTS_CURSORMANAGER_SET_ISCURSOROVERRIDEN_OFFSET UNITYSDK_OFFSET(0xA311EF0)
#define UNITYENGINE_UIELEMENTS_CURSORMANAGER_SETCURSOR_OFFSET UNITYSDK_OFFSET(0xA311F00)
#define UNITYENGINE_UIELEMENTS_CURSORMANAGER_RESETCURSOR_OFFSET UNITYSDK_OFFSET(0xA312000)
#define UNITYENGINE_UIELEMENTS_CURSORMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA312060)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CursorManager_TypeDefinitionIndex = 30076;

	class CursorManager : public Il2CppObject
	{
	public:
		::System::Boolean _isCursorOverriden_k__BackingField; // 0x10

		::System::Boolean get_isCursorOverriden()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORMANAGER_GET_ISCURSOROVERRIDEN_OFFSET))(nullptr);
		}

		::System::Void set_isCursorOverriden(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORMANAGER_SET_ISCURSOROVERRIDEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursor(::UnityEngine::UIElements::Cursor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Cursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORMANAGER_SETCURSOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORMANAGER_RESETCURSOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSORMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

