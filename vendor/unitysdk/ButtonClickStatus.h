#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Vector3; }

#define BUTTONCLICKSTATUS_RESET_OFFSET UNITYSDK_OFFSET(0xA310CD0)
#define BUTTONCLICKSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3109B0)

	inline static constexpr unsigned int ButtonClickStatus_TypeDefinitionIndex = 30071;

	class ButtonClickStatus : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_Target; // 0x10
		::UnityEngine::Vector3* m_PointerDownPosition; // 0x18
		::System::Int64 m_LastPointerDownTime; // 0x28
		::System::Int32 m_ClickCount; // 0x30

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONCLICKSTATUS_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONCLICKSTATUS_.CTOR_OFFSET))(nullptr);
		}

	};

