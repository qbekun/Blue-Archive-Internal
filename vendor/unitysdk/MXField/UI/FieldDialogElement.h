#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class FieldDialogText; }
namespace MXField::AnimationControl { class FieldEntityAnimationPlayer; }
class UIPanel;
namespace UnityEngine { class Transform; }
namespace MXField::Dialog { class FieldDialogPlayable; }
namespace MXField::Shared::Data { class FieldDialogNode; }
namespace MX::Audio { class AudioPlayer; }
namespace FlatData { class FieldDialogType; }

#define MXFIELD_UI_FIELDDIALOGELEMENT_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xE87A80)
#define MXFIELD_UI_FIELDDIALOGELEMENT_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE87AF0)
#define MXFIELD_UI_FIELDDIALOGELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE87B70)
#define MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET UNITYSDK_OFFSET(0xE87F80)
#define MXFIELD_UI_FIELDDIALOGELEMENT_CHECKAUDIOPLAYERENABLE_OFFSET UNITYSDK_OFFSET(0xE88030)
#define MXFIELD_UI_FIELDDIALOGELEMENT_PLAYMOTION_OFFSET UNITYSDK_OFFSET(0xE880F0)
#define MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET UNITYSDK_OFFSET(0xE881A0)
#define MXFIELD_UI_FIELDDIALOGELEMENT_COPLAYONPLAYERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xE88260)
#define MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET UNITYSDK_OFFSET(0xE88300)
#define MXFIELD_UI_FIELDDIALOGELEMENT_HIDEALL_OFFSET UNITYSDK_OFFSET(0xE87CE0)
#define MXFIELD_UI_FIELDDIALOGELEMENT_INITFLOATER_OFFSET UNITYSDK_OFFSET(0xE87E90)
#define MXFIELD_UI_FIELDDIALOGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE883B0)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldDialogElement_TypeDefinitionIndex = 10661;

	class FieldDialogElement : public Il2CppObject
	{
	public:
		::MXField::UI::FieldDialogText* dialogText; // 0x18
		Il2CppObject* emojis; // 0x20
		::MXField::AnimationControl::FieldEntityAnimationPlayer* animationPlayer; // 0x28
		UIPanel* panel; // 0x30
		::UnityEngine::Transform* myTransform; // 0x38

		UIPanel* get_Panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_GET_PANEL_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Dialog::FieldDialogPlayable* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::MXField::Dialog::FieldDialogPlayable*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::MXField::Shared::Data::FieldDialogNode* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXField::Shared::Data::FieldDialogNode*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAudioPlayerEnable(::MX::Audio::AudioPlayer* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_CHECKAUDIOPLAYERENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayMotion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_PLAYMOTION_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::String* str, ::FlatData::FieldDialogType* arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::FlatData::FieldDialogType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayOnPlayerController(::FlatData::FieldDialogType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::FieldDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_COPLAYONPLAYERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::FlatData::FieldDialogType* arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::FieldDialogType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_COPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_HIDEALL_OFFSET))(nullptr);
		}

		::System::Void InitFloater(::UnityEngine::Transform* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_INITFLOATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

