#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ILight2DCullResult; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_SET_MAXTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA01DD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_CANBATCHLIGHTSINLAYER_OFFSET UNITYSDK_OFFSET(0xA01DD60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_FINDUPPERBOUNDINBATCH_OFFSET UNITYSDK_OFFSET(0xA01E0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_GET_MAXTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0xA01E110)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_INITIALIZEBATCHINFOS_OFFSET UNITYSDK_OFFSET(0xA01E150)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_INITIALIZEBUDGET_OFFSET UNITYSDK_OFFSET(0xA01CD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_CALCULATEBATCHES_OFFSET UNITYSDK_OFFSET(0xA01D430)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LayerUtility_TypeDefinitionIndex = 32485;

	class LayerUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_LayerBatches; // 0x0
		::System::UInt32 _maxTextureCount_k__BackingField; // 0x8

		::System::Void set_maxTextureCount(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_SET_MAXTEXTURECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBatchLightsInLayer(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::Universal::ILight2DCullResult* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::Universal::ILight2DCullResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_CANBATCHLIGHTSINLAYER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindUpperBoundInBatch(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::Universal::ILight2DCullResult* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::Universal::ILight2DCullResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_FINDUPPERBOUNDINBATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 get_maxTextureCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_GET_MAXTEXTURECOUNT_OFFSET))(nullptr);
		}

		::System::Void InitializeBatchInfos(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_INITIALIZEBATCHINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBudget(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_INITIALIZEBUDGET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateBatches(::UnityEngine::Rendering::Universal::ILight2DCullResult* arg, int32_t&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Rendering::Universal::ILight2DCullResult*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERUTILITY_CALCULATEBATCHES_OFFSET))(arg, arg, nullptr);
		}

	};
}

