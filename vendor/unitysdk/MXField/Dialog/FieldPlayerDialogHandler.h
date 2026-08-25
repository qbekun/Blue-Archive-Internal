#pragma once
#include "../../unitysdk.h"

namespace MXField::AnimationControl { class FieldEntityAnimationPlayer; }
namespace UnityEngine { class Transform; }

#define MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_ANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0xECFCD0)
#define MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xECFD80)
#define MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_HEIGHTBIAS_OFFSET UNITYSDK_OFFSET(0xECFEB0)
#define MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xECFFB0)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldPlayerDialogHandler_TypeDefinitionIndex = 10927;

	class FieldPlayerDialogHandler : public Il2CppObject
	{
	public:
		::MXField::AnimationControl::FieldEntityAnimationPlayer* get_AnimationPlayer()
		{
			return ((::MXField::AnimationControl::FieldEntityAnimationPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_ANIMATIONPLAYER_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Anchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_ANCHOR_OFFSET))(nullptr);
		}

		::System::Single get_HeightBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_GET_HEIGHTBIAS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDPLAYERDIALOGHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

