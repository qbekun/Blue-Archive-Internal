#pragma once
#include "unitysdk.h"

class UIWidget;
class SpineCharacter;

#define UIVIEWRENDERQUEUEORDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC22240)
#define UIVIEWRENDERQUEUEORDER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC22250)
#define UIVIEWRENDERQUEUEORDER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC22260)
#define UIVIEWRENDERQUEUEORDER_SETRENDERQUEUES_OFFSET UNITYSDK_OFFSET(0xC22350)
#define UIVIEWRENDERQUEUEORDER_SETTARGETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xC22750)
#define UIVIEWRENDERQUEUEORDER_SETSHADERDEFAULTRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xC1B3E0)
#define UIVIEWRENDERQUEUEORDER_SET_UIWIDGET_OFFSET UNITYSDK_OFFSET(0xC1B360)
#define UIVIEWRENDERQUEUEORDER_SET_RENDERQUEUEOFFSET_OFFSET UNITYSDK_OFFSET(0xC22760)
#define UIVIEWRENDERQUEUEORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC22770)
#define UIVIEWRENDERQUEUEORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC227D0)
#define UIVIEWRENDERQUEUEORDER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC22810)

	inline static constexpr unsigned int UIViewRenderQueueOrder_TypeDefinitionIndex = 8882;

	class UIViewRenderQueueOrder : public Il2CppObject
	{
	public:
		::System::Boolean _IsInitialized_k__BackingField; // 0x18
		UIWidget* target; // 0x20
		SpineCharacter* spineCharacter; // 0x28
		::System::Int32 TargetRenderQueue; // 0x30
		::System::Int32 renderQueueOffset; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetRenderQueues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SETRENDERQUEUES_OFFSET))(nullptr);
		}

		::System::Void SetTargetRenderQueue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SETTARGETRENDERQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetShaderDefaultRenderQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SETSHADERDEFAULTRENDERQUEUE_OFFSET))(nullptr);
		}

		::System::Void set_UIWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SET_UIWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_RenderQueueOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SET_RENDERQUEUEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVIEWRENDERQUEUEORDER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

	};

