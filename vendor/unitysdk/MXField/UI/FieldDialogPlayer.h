#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldDialogInfo; }
namespace MX::Sequencer { class InputBlocklessSequencer; }

#define MXFIELD_UI_FIELDDIALOGPLAYER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xE89850)
#define MXFIELD_UI_FIELDDIALOGPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE899D0)
#define MXFIELD_UI_FIELDDIALOGPLAYER_GET_DIALOGINFO_OFFSET UNITYSDK_OFFSET(0xE89B00)
#define MXFIELD_UI_FIELDDIALOGPLAYER_GET_DIALOGELEMENTS_OFFSET UNITYSDK_OFFSET(0xE89B10)
#define MXFIELD_UI_FIELDDIALOGPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xE89B20)
#define MXFIELD_UI_FIELDDIALOGPLAYER_SET_DIALOGINFO_OFFSET UNITYSDK_OFFSET(0xE8A3E0)
#define MXFIELD_UI_FIELDDIALOGPLAYER_RELEASEDIALOGELEMENTS_OFFSET UNITYSDK_OFFSET(0xE89860)
#define MXFIELD_UI_FIELDDIALOGPLAYER_REMOVE_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE8A580)
#define MXFIELD_UI_FIELDDIALOGPLAYER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE8A340)
#define MXFIELD_UI_FIELDDIALOGPLAYER_GET_SEQUENCER_OFFSET UNITYSDK_OFFSET(0xE8A5D0)
#define MXFIELD_UI_FIELDDIALOGPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xE8A5E0)
#define MXFIELD_UI_FIELDDIALOGPLAYER_ADD_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE8A630)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldDialogPlayer_TypeDefinitionIndex = 10664;

	class FieldDialogPlayer : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldDialogInfo* _DialogInfo_k__BackingField; // 0x10
		Il2CppObject* _DialogElements_k__BackingField; // 0x18
		::MX::Sequencer::InputBlocklessSequencer* _Sequencer_k__BackingField; // 0x20

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldDialogInfo* get_DialogInfo()
		{
			return ((::MXField::Shared::Data::FieldDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_GET_DIALOGINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_DialogElements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_GET_DIALOGELEMENTS_OFFSET))(nullptr);
		}

		::System::Void Play(Il2CppObject* arg, ::MXField::Shared::Data::FieldDialogInfo* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MXField::Shared::Data::FieldDialogInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_DialogInfo(::MXField::Shared::Data::FieldDialogInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDialogInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_SET_DIALOGINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseDialogElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_RELEASEDIALOGELEMENTS_OFFSET))(nullptr);
		}

		::System::Void remove_OnStopped(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_REMOVE_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_CLEAR_OFFSET))(nullptr);
		}

		::MX::Sequencer::InputBlocklessSequencer* get_Sequencer()
		{
			return ((::MX::Sequencer::InputBlocklessSequencer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_GET_SEQUENCER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void add_OnStopped(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDDIALOGPLAYER_ADD_ONSTOPPED_OFFSET))(arg, nullptr);
		}

	};
}

