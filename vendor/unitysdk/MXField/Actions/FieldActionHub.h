#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_FIELDACTIONHUB_TRYGETACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_DEQUEUE_OFFSET UNITYSDK_OFFSET(0xEEC260)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xEEC2C0)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_ENQUEUE_OFFSET UNITYSDK_OFFSET(0xEEC300)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_CLEAR_OFFSET UNITYSDK_OFFSET(0xEEC350)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEC3A0)
#define MXFIELD_ACTIONS_FIELDACTIONHUB_FIRST_OFFSET UNITYSDK_OFFSET(0xEEC420)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldActionHub_TypeDefinitionIndex = 11055;

	class FieldActionHub : public Il2CppObject
	{
	public:
		Il2CppObject* actions; // 0x10

		::System::Boolean TryGetAction(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_TRYGETACTION_OFFSET))(arg, nullptr);
		}

		::MXField::Actions::FieldAction* Dequeue()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_DEQUEUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Enqueue(::MXField::Actions::FieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldAction* First()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONHUB_FIRST_OFFSET))(nullptr);
		}

	};
}

