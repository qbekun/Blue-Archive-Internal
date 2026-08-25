#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Cursor; }

#define UNITYENGINE_UIELEMENTS_ICURSORMANAGER_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ICURSORMANAGER_RESETCURSOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ICursorManager_TypeDefinitionIndex = 30075;

	class ICursorManager : public Il2CppObject
	{
	public:
		::System::Void SetCursor(::UnityEngine::UIElements::Cursor* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Cursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICURSORMANAGER_SETCURSOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ICURSORMANAGER_RESETCURSOR_OFFSET))(nullptr);
		}

	};
}

