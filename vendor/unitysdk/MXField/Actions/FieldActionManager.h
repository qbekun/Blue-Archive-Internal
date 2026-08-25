#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldActionManager; }
namespace MXField::Actions { class FieldActionPlayer; }
namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_TRYGETACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xEEC4D0)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEEC570)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEEC5B0)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEC730)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEEC740)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_CUEACTION_OFFSET UNITYSDK_OFFSET(0xEE8290)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEEC790)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEEC830)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0xEEC900)
#define MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_NEXTACTION_OFFSET UNITYSDK_OFFSET(0xEEC920)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldActionManager_TypeDefinitionIndex = 11058;

	class FieldActionManager : public Il2CppObject
	{
	public:
		::MXField::Actions::FieldActionManager* _Instance_k__BackingField; // 0x0
		::MXField::Actions::FieldActionPlayer* FieldActionPlayer; // 0x18

		::System::Boolean TryGetAction(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_TRYGETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldActionManager* get_Instance()
		{
			return ((::MXField::Actions::FieldActionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Instance(::MXField::Actions::FieldActionManager* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldActionManager*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void CueAction(::MXField::Actions::FieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_CUEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldAction* get_CurrentAction()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldAction* get_NextAction()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONMANAGER_GET_NEXTACTION_OFFSET))(nullptr);
		}

	};
}

