#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class Focusable; }

#define FOCUSRINGRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA388070)

	inline static constexpr unsigned int FocusRingRecord_TypeDefinitionIndex = 30254;

	class FocusRingRecord : public Il2CppObject
	{
	public:
		::System::Int32 m_AutoIndex; // 0x10
		::UnityEngine::UIElements::Focusable* m_Focusable; // 0x18
		::System::Boolean m_IsSlot; // 0x20
		Il2CppObject* m_ScopeNavigationOrder; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSRINGRECORD_.CTOR_OFFSET))(nullptr);
		}

	};

