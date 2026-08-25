#pragma once
#include "../../unitysdk.h"

namespace MXField::AnimationControl { class FieldEntityAnimationPlayer; }
namespace UnityEngine { class Transform; }

#define MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xECDEC0)
#define MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_ANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_HEIGHTBIAS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogPlayable_TypeDefinitionIndex = 10925;

	class FieldDialogPlayable : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::MXField::AnimationControl::FieldEntityAnimationPlayer* get_AnimationPlayer()
		{
			return ((::MXField::AnimationControl::FieldEntityAnimationPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_ANIMATIONPLAYER_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Anchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_ANCHOR_OFFSET))(nullptr);
		}

		::System::Single get_HeightBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGPLAYABLE_GET_HEIGHTBIAS_OFFSET))(nullptr);
		}

	};
}

