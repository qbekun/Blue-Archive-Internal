#pragma once
#include "../../unitysdk.h"

namespace MXField::AnimationControl { class FieldEntityAnimationPlayer; }
namespace UnityEngine { class Transform; }

#define MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_HEIGHTBIAS_OFFSET UNITYSDK_OFFSET(0xECDE50)
#define MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_ANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0xECDE60)
#define MXFIELD_DIALOG_FIELDDIALOGACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xECDEB0)
#define MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xECDED0)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogActor_TypeDefinitionIndex = 10921;

	class FieldDialogActor : public Il2CppObject
	{
	public:
		::System::Single heightBias; // 0x18

		::System::Single get_HeightBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_HEIGHTBIAS_OFFSET))(nullptr);
		}

		::MXField::AnimationControl::FieldEntityAnimationPlayer* get_AnimationPlayer()
		{
			return ((::MXField::AnimationControl::FieldEntityAnimationPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_ANIMATIONPLAYER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGACTOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Anchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGACTOR_GET_ANCHOR_OFFSET))(nullptr);
		}

	};
}

