#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioEffectDepth; }

#define UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27D3640)
#define UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27D3570)
#define UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27DBD20)
#define UISCENARIOEFFECTDEPTHCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27DC140)
#define UISCENARIOEFFECTDEPTHCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DC190)
#define UISCENARIOEFFECTDEPTHCONTROL__SETRENDERQUEUE_G__SETMATERIALRENDERQUEUES|8_0_OFFSET UNITYSDK_OFFSET(0x27DBEE0)

	inline static constexpr unsigned int UIScenarioEffectDepthControl_TypeDefinitionIndex = 7640;

	class UIScenarioEffectDepthControl : public Il2CppObject
	{
	public:
		Il2CppObject* AboveBg; // 0x18
		Il2CppObject* AboveCharacter; // 0x20
		Il2CppObject* AboveAll; // 0x28
		Il2CppObject* renderQueueCache; // 0x30
		::System::Int32 RenderQueueDiff; // 0x0
		::System::Int32 renderQueueOffset; // 0x38

		::System::Void SetRenderQueue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderQueue(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRenderQueue(::FlatData::ScenarioEffectDepth* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioEffectDepth*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL_SETRENDERQUEUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetRenderQueue_g__SetMaterialRenderQueues|8_0(::Il2CppArray<::System::Object*>* arg, <>c__DisplayClass8_0&* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, <>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOEFFECTDEPTHCONTROL__SETRENDERQUEUE_G__SETMATERIALRENDERQUEUES|8_0_OFFSET))(arg, arg2, nullptr);
		}

	};

