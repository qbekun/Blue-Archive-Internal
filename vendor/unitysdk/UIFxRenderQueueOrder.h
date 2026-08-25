#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Renderer; }

#define UIFXRENDERQUEUEORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1DC90)
#define UIFXRENDERQUEUEORDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1DCA0)
#define UIFXRENDERQUEUEORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1E090)
#define UIFXRENDERQUEUEORDER_SET_UIWIDGET_OFFSET UNITYSDK_OFFSET(0xC1E1F0)
#define UIFXRENDERQUEUEORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1E270)

	inline static constexpr unsigned int UIFxRenderQueueOrder_TypeDefinitionIndex = 8865;

	class UIFxRenderQueueOrder : public Il2CppObject
	{
	public:
		UIWidget* target; // 0x18
		::System::Int32 renderQueueAdd; // 0x20
		::UnityEngine::Renderer* thisRenderer; // 0x28
		::System::Int32 targetRenderQueue; // 0x30
		Il2CppObject* materials; // 0x38
		Il2CppObject* sharedMaterials; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEORDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEORDER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEORDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_UIWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEORDER_SET_UIWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFXRENDERQUEUEORDER_ONDESTROY_OFFSET))(nullptr);
		}

	};

