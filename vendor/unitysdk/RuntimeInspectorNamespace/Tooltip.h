#pragma once
#include "../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_TOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x958E1D0)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIP_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0x958E1E0)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIP_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x9588BC0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int Tooltip_TypeDefinitionIndex = 35723;

	class Tooltip : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DestroySelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIP_DESTROYSELF_OFFSET))(nullptr);
		}

		::System::Void SetContent(::System::String* str, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIP_SETCONTENT_OFFSET))(str, arg, nullptr);
		}

	};
}

