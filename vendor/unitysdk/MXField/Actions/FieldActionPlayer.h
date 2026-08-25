#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldActionHub; }
namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_PLAYACTION_OFFSET UNITYSDK_OFFSET(0xEECA00)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEE9920)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_TRYGETACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_CLEAR_OFFSET UNITYSDK_OFFSET(0xEE8FB0)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_CUEACTION_OFFSET UNITYSDK_OFFSET(0xEE9300)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE9290)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_SET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0xEECB40)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0xEECB50)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_TRYNEXT_OFFSET UNITYSDK_OFFSET(0xEECB60)
#define MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_NEXTACTION_OFFSET UNITYSDK_OFFSET(0xEEC990)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldActionPlayer_TypeDefinitionIndex = 11059;

	class FieldActionPlayer : public Il2CppObject
	{
	public:
		::MXField::Actions::FieldActionHub* actionHub; // 0x10
		::MXField::Actions::FieldAction* _CurrentAction_k__BackingField; // 0x18

		::System::Void PlayAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_PLAYACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAction(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_TRYGETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CueAction(::MXField::Actions::FieldAction* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_CUEACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAction(::MXField::Actions::FieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_SET_CURRENTACTION_OFFSET))(arg, nullptr);
		}

		::MXField::Actions::FieldAction* get_CurrentAction()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void TryNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_TRYNEXT_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldAction* get_NextAction()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTIONPLAYER_GET_NEXTACTION_OFFSET))(nullptr);
		}

	};
}

