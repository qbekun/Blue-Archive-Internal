#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }

#define UIFXRENDERQUEUEPRIORITYORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1E2D0)
#define UIFXRENDERQUEUEPRIORITYORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1E430)
#define UIFXRENDERQUEUEPRIORITYORDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1E490)
#define UIFXRENDERQUEUEPRIORITYORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1E940)

	inline static constexpr unsigned int UIFxRenderQueuePriorityOrder_TypeDefinitionIndex = 8866;

	class UIFxRenderQueuePriorityOrder : public Il2CppObject
	{
	public:
		Il2CppObject* targets; // 0x18
		::System::Int32 renderQueueAdd; // 0x20
		::UnityEngine::Renderer* thisRenderer; // 0x28
		::System::Int32 targetRenderQueue; // 0x30
		Il2CppObject* materials; // 0x38
		Il2CppObject* sharedMaterials; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEPRIORITYORDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEPRIORITYORDER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEPRIORITYORDER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEPRIORITYORDER_.CTOR_OFFSET))(nullptr);
		}

	};

