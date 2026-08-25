#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MXField::Core { class FieldEntityController; }

#define MXFIELD_EVENTS_MOVECONDITION_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xEC7B10)
#define MXFIELD_EVENTS_MOVECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC7E30)
#define MXFIELD_EVENTS_MOVECONDITION_ONARRIVED_OFFSET UNITYSDK_OFFSET(0xEC7EA0)

namespace MXField::Events
{
	inline static constexpr unsigned int MoveCondition_TypeDefinitionIndex = 10887;

	class MoveCondition : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* target; // 0x20
		::System::Single speed; // 0x28
		::System::Boolean teleport; // 0x2C
		::System::Boolean ignoreTargetRotation; // 0x2D
		::System::Single speedCache; // 0x30

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_MOVECONDITION_EXECUTEIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_MOVECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnArrived(::MXField::Core::FieldEntityController* arg)
		{
			((::System::Void(*)(::MXField::Core::FieldEntityController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_MOVECONDITION_ONARRIVED_OFFSET))(arg, nullptr);
		}

	};
}

