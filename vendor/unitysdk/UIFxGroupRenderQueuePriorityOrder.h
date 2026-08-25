#pragma once
#include "unitysdk.h"

#define UIFXGROUPRENDERQUEUEPRIORITYORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1D450)
#define UIFXGROUPRENDERQUEUEPRIORITYORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1D460)
#define UIFXGROUPRENDERQUEUEPRIORITYORDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC1D520)
#define UIFXGROUPRENDERQUEUEPRIORITYORDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1D880)

	inline static constexpr unsigned int UIFxGroupRenderQueuePriorityOrder_TypeDefinitionIndex = 8864;

	class UIFxGroupRenderQueuePriorityOrder : public Il2CppObject
	{
	public:
		Il2CppObject* targets; // 0x18
		::System::Int32 renderQueueAdd; // 0x20
		Il2CppObject* thisRenderers; // 0x28
		::System::Int32 targetRenderQueue; // 0x30
		Il2CppObject* materials; // 0x38
		Il2CppObject* sharedMaterials; // 0x40
		::System::Boolean isInitialized; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXGROUPRENDERQUEUEPRIORITYORDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXGROUPRENDERQUEUEPRIORITYORDER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFXGROUPRENDERQUEUEPRIORITYORDER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXGROUPRENDERQUEUEPRIORITYORDER_LATEUPDATE_OFFSET))(nullptr);
		}

	};

