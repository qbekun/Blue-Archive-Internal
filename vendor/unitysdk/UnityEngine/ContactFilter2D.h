#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class ContactFilter2D; }
namespace UnityEngine { class ContactFilter2D&; }

#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0xA29CCA0)
#define UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA29CD20)
#define UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET UNITYSDK_OFFSET(0xA29CD30)
#define UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET UNITYSDK_OFFSET(0xA29AA40)
#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29CCE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactFilter2D_TypeDefinitionIndex = 37706;

	class ContactFilter2D : public Il2CppObject
	{
	public:
		::System::Boolean useTriggers; // 0x10
		::System::Boolean useLayerMask; // 0x11
		::System::Boolean useDepth; // 0x12
		::System::Boolean useOutsideDepth; // 0x13
		::System::Boolean useNormalAngle; // 0x14
		::System::Boolean useOutsideNormalAngle; // 0x15
		::UnityEngine::LayerMask* layerMask; // 0x18
		::System::Single minDepth; // 0x1C
		::System::Single maxDepth; // 0x20
		::System::Single minNormalAngle; // 0x24
		::System::Single maxNormalAngle; // 0x28

		::System::Void CheckConsistency()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET))(nullptr);
		}

		::System::Void SetLayerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDepth(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ContactFilter2D* CreateLegacyFilter(::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::ContactFilter2D*(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckConsistency_Injected(::UnityEngine::ContactFilter2D&* arg)
		{
			((::System::Void(*)(::UnityEngine::ContactFilter2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

