#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }

#define UIGUIDEMISSIONDAYTAB_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C82C0)
#define UIGUIDEMISSIONDAYTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C8610)

	inline static constexpr unsigned int UIGuideMissionDayTab_TypeDefinitionIndex = 6320;

	class UIGuideMissionDayTab : public Il2CppObject
	{
	public:
		UIWidget* redDot; // 0x18
		::UnityEngine::GameObject* clearTag; // 0x20
		::UnityEngine::GameObject* disableObject; // 0x28

		::System::Void Refresh(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONDAYTAB_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONDAYTAB_.CTOR_OFFSET))(nullptr);
		}

	};

