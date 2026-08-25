#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIGUIDEMISSIONSCENARIOTABSUB_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CA6C0)
#define UIGUIDEMISSIONSCENARIOTABSUB_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C9400)

	inline static constexpr unsigned int UIGuideMissionScenarioTabSub_TypeDefinitionIndex = 6328;

	class UIGuideMissionScenarioTabSub : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* first; // 0x18
		::UnityEngine::GameObject* middle; // 0x20
		::UnityEngine::GameObject* last; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABSUB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTABSUB_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

	};

