#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_SETDELEGATE_OFFSET UNITYSDK_OFFSET(0xA26FAD0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0xA26FB70)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_RESETDELEGATE_OFFSET UNITYSDK_OFFSET(0xA26FBC0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTS_OFFSET UNITYSDK_OFFSET(0xA26FC20)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA26FCF0)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int Lightmapping_TypeDefinitionIndex = 31642;

	class Lightmapping : public Il2CppObject
	{
	public:
		RequestLightsDelegate* s_DefaultDelegate; // 0x0
		RequestLightsDelegate* s_RequestLightsDelegate; // 0x8

		::System::Void SetDelegate(RequestLightsDelegate* arg)
		{
			((::System::Void(*)(RequestLightsDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_SETDELEGATE_OFFSET))(arg, nullptr);
		}

		RequestLightsDelegate* GetDelegate()
		{
			return (return (RequestLightsDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_GETDELEGATE_OFFSET))(nullptr);
		}

		::System::Void ResetDelegate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_RESETDELEGATE_OFFSET))(nullptr);
		}

		::System::Void RequestLights(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_REQUESTLIGHTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

