#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_ORIGINALRENDERQUEUES_OFFSET UNITYSDK_OFFSET(0x1E89500)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_ORIGINALRENDERQUEUES_OFFSET UNITYSDK_OFFSET(0x1E89510)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_TR_OFFSET UNITYSDK_OFFSET(0x1E89520)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_TR_OFFSET UNITYSDK_OFFSET(0x1E89530)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_MESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E89540)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E89550)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_MESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E895D0)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_ORIGNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E895E0)
#define MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_ORIGNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E895F0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CaptureEntityPositionData_TypeDefinitionIndex = 21169;

	class CaptureEntityPositionData : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* _Tr_k__BackingField; // 0x10
		::UnityEngine::Vector3* _OrignPosition_k__BackingField; // 0x18
		Il2CppObject* _MeshRenderers_k__BackingField; // 0x28
		Il2CppObject* _OriginalRenderQueues_k__BackingField; // 0x30

		::System::Void set_OriginalRenderQueues(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_ORIGINALRENDERQUEUES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OriginalRenderQueues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_ORIGINALRENDERQUEUES_OFFSET))(nullptr);
		}

		::System::Void set_Tr(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_TR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Tr()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_TR_OFFSET))(nullptr);
		}

		::System::Void set_MeshRenderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_MESHRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(CCGVisualEntity* arg, ::UnityEngine::Vector3* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(CCGVisualEntity*, ::UnityEngine::Vector3*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_MeshRenderers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_MESHRENDERERS_OFFSET))(nullptr);
		}

		::System::Void set_OrignPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_SET_ORIGNPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_OrignPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CAPTUREENTITYPOSITIONDATA_GET_ORIGNPOSITION_OFFSET))(nullptr);
		}

	};
}

