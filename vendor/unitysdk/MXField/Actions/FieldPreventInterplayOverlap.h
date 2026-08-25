#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshObstacle; }
namespace MXField::Actions { class MoveEntityAction; }

#define MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_PROCESSAFTERINTERPLAY_OFFSET UNITYSDK_OFFSET(0xEED9D0)
#define MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_PROCESSBEFOREINTERPLAY_OFFSET UNITYSDK_OFFSET(0xEEDA60)
#define MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_GET_MAXINTERPLAYMOVETIME_OFFSET UNITYSDK_OFFSET(0xEEDB60)
#define MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEDB70)
#define MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_SETENABLEOBSTACLE_OFFSET UNITYSDK_OFFSET(0xEEDAE0)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldPreventInterplayOverlap_TypeDefinitionIndex = 11069;

	class FieldPreventInterplayOverlap : public Il2CppObject
	{
	public:
		::UnityEngine::AI::NavMeshObstacle* _obstacle; // 0x18
		::MXField::Actions::MoveEntityAction* _moveEntityAction; // 0x20
		::System::Single _maxInterplayMoveTime; // 0x28

		::System::Collections::IEnumerator* ProcessAfterInterplay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_PROCESSAFTERINTERPLAY_OFFSET))(nullptr);
		}

		::System::Void ProcessBeforeInterplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_PROCESSBEFOREINTERPLAY_OFFSET))(nullptr);
		}

		::System::Single get_MaxInterplayMoveTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_GET_MAXINTERPLAYMOVETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEnableObstacle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDPREVENTINTERPLAYOVERLAP_SETENABLEOBSTACLE_OFFSET))(arg, nullptr);
		}

	};
}

