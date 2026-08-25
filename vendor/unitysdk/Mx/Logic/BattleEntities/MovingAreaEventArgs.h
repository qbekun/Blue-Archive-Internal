#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_PREVIOUSCENTER_OFFSET UNITYSDK_OFFSET(0x112DC20)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DC30)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_KEEPCAMERARAILPOINTDIRECTIONUNCHANGED_OFFSET UNITYSDK_OFFSET(0x112DCF0)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_HEIGHTDELTA_OFFSET UNITYSDK_OFFSET(0x112DD00)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_ANGLEDELTAINDEGREE_OFFSET UNITYSDK_OFFSET(0x112DD10)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_NEWCENTER_OFFSET UNITYSDK_OFFSET(0x112DD20)
#define MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET UNITYSDK_OFFSET(0x112DD30)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int MovingAreaEventArgs_TypeDefinitionIndex = 13049;

	class MovingAreaEventArgs : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* _PreviousCenter_k__BackingField; // 0x10
		::UnityEngine::Vector2* _NewCenter_k__BackingField; // 0x18
		::System::Single _AngleDeltaInDegree_k__BackingField; // 0x20
		::System::Single _HeightDelta_k__BackingField; // 0x24
		::System::Boolean _KeepCameraRailPointDirectionUnchanged_k__BackingField; // 0x28
		Il2CppObject* _PreviousWalkableMovingAreaList_k__BackingField; // 0x30

		::UnityEngine::Vector2* get_PreviousCenter()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_PREVIOUSCENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Boolean arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean get_KeepCameraRailPointDirectionUnchanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_KEEPCAMERARAILPOINTDIRECTIONUNCHANGED_OFFSET))(nullptr);
		}

		::System::Single get_HeightDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_HEIGHTDELTA_OFFSET))(nullptr);
		}

		::System::Single get_AngleDeltaInDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_ANGLEDELTAINDEGREE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_NewCenter()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_NEWCENTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreviousWalkableMovingAreaList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_MOVINGAREAEVENTARGS_GET_PREVIOUSWALKABLEMOVINGAREALIST_OFFSET))(nullptr);
		}

	};
}

