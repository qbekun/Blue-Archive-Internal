#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameCCG::Visual { class Pivot; }

#define MX_MINIGAMECCG_VISUAL_CCGGRID_REPOSITIONASYNC_OFFSET UNITYSDK_OFFSET(0x1E9ADE0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E9AF80)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AFD0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GET_ENDPOSX_OFFSET UNITYSDK_OFFSET(0x1E9AFF0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITIONFROMCENTER_OFFSET UNITYSDK_OFFSET(0x1E9B020)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_UPDATECHILDRENPOSITIONBYOFFSET_OFFSET UNITYSDK_OFFSET(0x1E9B3D0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GETCENTEREDCARDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9B1E0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITIONFROMLEFT_OFFSET UNITYSDK_OFFSET(0x1E9B7C0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GET_STARTPOSX_OFFSET UNITYSDK_OFFSET(0x1E9B1B0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9B8F0)
#define MX_MINIGAMECCG_VISUAL_CCGGRID_GETCHILDLIST_OFFSET UNITYSDK_OFFSET(0x1E9B600)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGGrid_TypeDefinitionIndex = 21216;

	class CCGGrid : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* startPos; // 0x18
		::UnityEngine::Transform* endPos; // 0x20
		::System::Boolean hideInactive; // 0x28
		::System::Single repositionDuration; // 0x2C
		::System::Single minSpacing; // 0x30
		::System::Int32 threshold; // 0x34
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x38

		::Cysharp::Threading::Tasks::UniTask* RepositionAsync(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_REPOSITIONASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_EndPosX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GET_ENDPOSX_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetPositionFromCenter(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITIONFROMCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateChildrenPositionByOffset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_UPDATECHILDRENPOSITIONBYOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetCenteredCardPosition(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GETCENTEREDCARDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPositionFromLeft(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITIONFROMLEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_StartPosX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GET_STARTPOSX_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::MX::MinigameCCG::Visual::Pivot* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::MX::MinigameCCG::Visual::Pivot*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GETPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetChildList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGRID_GETCHILDLIST_OFFSET))(nullptr);
		}

	};
}

