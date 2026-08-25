#pragma once
#include "unitysdk.h"

class ScenarioTitleInfo;
class ScenarioTouchZoneInfo;
class ScenarioScreenTextInfo;
class ScenarioEndingInfo;
class ScenarioBgZoomInfo;
class ScenarioPositionEffectInfo;
class ScenarioVideoInfo;
class ScenarioTimelineInfo;
class ScenarioQuestionSelectInfo;
class ScenarioCharacterTarget;
class ScenarioScriptInfo;
namespace MX::Data::Excel { class ScenarioScriptExcel; }

#define SCENARIOSCRIPTINFO_PARSESTRINGTOSELECTION_OFFSET UNITYSDK_OFFSET(0x1EDF500)
#define SCENARIOSCRIPTINFO_SET_VIDEOINFO_OFFSET UNITYSDK_OFFSET(0x1EDF870)
#define SCENARIOSCRIPTINFO_TRYGETCHARACTERBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x1ED4D00)
#define SCENARIOSCRIPTINFO_GET_VIDEOINFO_OFFSET UNITYSDK_OFFSET(0x1EDF890)
#define SCENARIOSCRIPTINFO_GET_BGZOOMINFO_OFFSET UNITYSDK_OFFSET(0x1EDF8A0)
#define SCENARIOSCRIPTINFO_GET_CLEARSCREENTEXTSFADE_OFFSET UNITYSDK_OFFSET(0x1EDF8B0)
#define SCENARIOSCRIPTINFO_GET_ISCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x1EDF8C0)
#define SCENARIOSCRIPTINFO_SET_CLEARSCREENTEXTS_OFFSET UNITYSDK_OFFSET(0x1EDF940)
#define SCENARIOSCRIPTINFO_SET_TIMELINEINFO_OFFSET UNITYSDK_OFFSET(0x1EDF950)
#define SCENARIOSCRIPTINFO_GET_USEDEFAULTBG_OFFSET UNITYSDK_OFFSET(0x1EDF970)
#define SCENARIOSCRIPTINFO_GET_SCREENTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1EDF9A0)
#define SCENARIOSCRIPTINFO_SET_CLEARSCREENTEXTSFADE_OFFSET UNITYSDK_OFFSET(0x1EDF9B0)
#define SCENARIOSCRIPTINFO_GETSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EDF9C0)
#define SCENARIOSCRIPTINFO_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1EDFB90)
#define SCENARIOSCRIPTINFO_SET_POSEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1EDFBA0)
#define SCENARIOSCRIPTINFO_GET_HASSCREENTEXTLOG_OFFSET UNITYSDK_OFFSET(0x1EDE470)
#define SCENARIOSCRIPTINFO_GET_TIMELINEINFO_OFFSET UNITYSDK_OFFSET(0x1EDFBD0)
#define SCENARIOSCRIPTINFO_SET_QUESTIONSELECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1EDFBE0)
#define SCENARIOSCRIPTINFO_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x1EDFC00)
#define SCENARIOSCRIPTINFO_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0x1EDFB40)
#define SCENARIOSCRIPTINFO_GET_ISQUESTIONSELECT_OFFSET UNITYSDK_OFFSET(0x1EDDB00)
#define SCENARIOSCRIPTINFO_GET_POSEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1EDFC10)
#define SCENARIOSCRIPTINFO_TRYPARSEQUESTIONSELECTION_OFFSET UNITYSDK_OFFSET(0x1EDFC20)
#define SCENARIOSCRIPTINFO_GET_DISPLAYLOG_OFFSET UNITYSDK_OFFSET(0x1EDFE40)
#define SCENARIOSCRIPTINFO_TRANSLATETOTARGET_OFFSET UNITYSDK_OFFSET(0x1EDFE90)
#define SCENARIOSCRIPTINFO_GET_ISBOOKMARK_OFFSET UNITYSDK_OFFSET(0x1EE01F0)
#define SCENARIOSCRIPTINFO_GET_QUESTIONSELECTIONINFO_OFFSET UNITYSDK_OFFSET(0x1EE0200)
#define SCENARIOSCRIPTINFO_GET_ISENDING_OFFSET UNITYSDK_OFFSET(0x1EE0210)
#define SCENARIOSCRIPTINFO_GET_HASTOUCHZONE_OFFSET UNITYSDK_OFFSET(0x1EE0220)
#define SCENARIOSCRIPTINFO_TRANSLATESCRIPT_OFFSET UNITYSDK_OFFSET(0x1EE0230)
#define SCENARIOSCRIPTINFO_ISSELECTIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EDF7D0)
#define SCENARIOSCRIPTINFO_SET_BGZOOMINFO_OFFSET UNITYSDK_OFFSET(0x1EE29B0)
#define SCENARIOSCRIPTINFO_GET_CONTROLINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1EE29D0)
#define SCENARIOSCRIPTINFO_GET_CLEARSCREENTEXTS_OFFSET UNITYSDK_OFFSET(0x1EE29E0)
#define SCENARIOSCRIPTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE29F0)
#define SCENARIOSCRIPTINFO_TRYGETCHARACTERACTION_OFFSET UNITYSDK_OFFSET(0x1ED5360)
#define SCENARIOSCRIPTINFO_GET_HASSCREENTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1EDFBC0)
#define SCENARIOSCRIPTINFO_GET_ISTITLE_OFFSET UNITYSDK_OFFSET(0x1EDF990)
#define SCENARIOSCRIPTINFO_FILLSCRIPTINFOSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EE0250)
#define SCENARIOSCRIPTINFO_TRYGETCHARACTERSHAPE_OFFSET UNITYSDK_OFFSET(0x1ED55B0)

	inline static constexpr unsigned int ScenarioScriptInfo_TypeDefinitionIndex = 1856;

	class ScenarioScriptInfo : public Il2CppObject
	{
	public:
		::System::Int64 GroupId; // 0x10
		::System::Int64 Index; // 0x18
		::System::Int64 SelectionGroup; // 0x20
		::System::Int64 BGMId; // 0x28
		::System::String* Sound; // 0x30
		::System::UInt32 Transition; // 0x38
		::System::UInt32 BGName; // 0x3C
		::System::UInt32 BGEffect; // 0x40
		::System::String* PopupFileName; // 0x48
		::System::UInt32 VoiceIdHash; // 0x50
		::System::Single WaitTimeSecond; // 0x54
		::System::Boolean IsSelection; // 0x58
		::System::Boolean ShowScriptOnSelection; // 0x59
		ScenarioTitleInfo* TitleInfo; // 0x60
		::System::Boolean IsPlace; // 0x68
		::System::String* PlaceText; // 0x70
		::System::Boolean WaitNextInput; // 0x78
		ScenarioTouchZoneInfo* TouchZoneInfo; // 0x80
		::System::String* HashCharacterName; // 0x88
		::System::String* Script; // 0x90
		::System::Int32 FontSize; // 0x98
		Il2CppObject* controlTable; // 0xA0
		Il2CppObject* selections; // 0xA8
		::System::Boolean _ClearScreenTexts_k__BackingField; // 0xB0
		::System::Boolean _ClearScreenTextsFade_k__BackingField; // 0xB1
		ScenarioScreenTextInfo* screenTextInfo; // 0xB8
		::System::Boolean BgShake; // 0xC0
		ScenarioEndingInfo* ScenarioEnding; // 0xC8
		::System::String* MenuButtonStateName; // 0xD0
		ScenarioBgZoomInfo* _BgZoomInfo_k__BackingField; // 0xD8
		ScenarioPositionEffectInfo* _PosEffectInfo_k__BackingField; // 0xE0
		ScenarioVideoInfo* _VideoInfo_k__BackingField; // 0xE8
		ScenarioTimelineInfo* _TimelineInfo_k__BackingField; // 0xF0
		ScenarioQuestionSelectInfo* _QuestionSelectionInfo_k__BackingField; // 0xF8
		::System::Int64 BookmarkId; // 0x100
		::System::Int64 LoopToBookmarkId; // 0x108

		Il2CppObject* ParseStringToSelection(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_PARSESTRINGTOSELECTION_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::Void set_VideoInfo(ScenarioVideoInfo* arg)
		{
			((::System::Void(*)(ScenarioVideoInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_VIDEOINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCharacterBehaviors(::System::String* str, Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRYGETCHARACTERBEHAVIORS_OFFSET))(str, arg, nullptr);
		}

		ScenarioVideoInfo* get_VideoInfo()
		{
			return ((ScenarioVideoInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_VIDEOINFO_OFFSET))(nullptr);
		}

		ScenarioBgZoomInfo* get_BgZoomInfo()
		{
			return ((ScenarioBgZoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_BGZOOMINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_ClearScreenTextsFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_CLEARSCREENTEXTSFADE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCheckPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISCHECKPOINT_OFFSET))(nullptr);
		}

		::System::Void set_ClearScreenTexts(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_CLEARSCREENTEXTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimelineInfo(ScenarioTimelineInfo* arg)
		{
			((::System::Void(*)(ScenarioTimelineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_TIMELINEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDefaultBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_USEDEFAULTBG_OFFSET))(nullptr);
		}

		ScenarioScreenTextInfo* get_ScreenTextInfo()
		{
			return ((ScenarioScreenTextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_SCREENTEXTINFO_OFFSET))(nullptr);
		}

		::System::Void set_ClearScreenTextsFade(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_CLEARSCREENTEXTSFADE_OFFSET))(arg, nullptr);
		}

		::System::String* GetScript(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::Il2CppArray<::System::Object*>* arg4, ::System::Int32 arg5, ::System::Boolean arg6)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GETSCRIPT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Void set_PosEffectInfo(ScenarioPositionEffectInfo* arg)
		{
			((::System::Void(*)(ScenarioPositionEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_POSEFFECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasScreenTextLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_HASSCREENTEXTLOG_OFFSET))(nullptr);
		}

		ScenarioTimelineInfo* get_TimelineInfo()
		{
			return ((ScenarioTimelineInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_TIMELINEINFO_OFFSET))(nullptr);
		}

		::System::Void set_QuestionSelectionInfo(ScenarioQuestionSelectInfo* arg)
		{
			((::System::Void(*)(ScenarioQuestionSelectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_QUESTIONSELECTIONINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Selections()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_SELECTIONS_OFFSET))(nullptr);
		}

		::System::String* GetSentence(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GETSENTENCE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsQuestionSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISQUESTIONSELECT_OFFSET))(nullptr);
		}

		ScenarioPositionEffectInfo* get_PosEffectInfo()
		{
			return ((ScenarioPositionEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_POSEFFECTINFO_OFFSET))(nullptr);
		}

		::System::Boolean TryParseQuestionSelection(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRYPARSEQUESTIONSELECTION_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::Boolean get_DisplayLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_DISPLAYLOG_OFFSET))(nullptr);
		}

		ScenarioCharacterTarget* TranslateToTarget(::System::String* str)
		{
			return ((ScenarioCharacterTarget*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRANSLATETOTARGET_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsBookmark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISBOOKMARK_OFFSET))(nullptr);
		}

		ScenarioQuestionSelectInfo* get_QuestionSelectionInfo()
		{
			return ((ScenarioQuestionSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_QUESTIONSELECTIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISENDING_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTouchZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_HASTOUCHZONE_OFFSET))(nullptr);
		}

		ScenarioScriptInfo* TranslateScript(::MX::Data::Excel::ScenarioScriptExcel* arg, ::System::Int32 arg2)
		{
			return ((ScenarioScriptInfo*(*)(::MX::Data::Excel::ScenarioScriptExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRANSLATESCRIPT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSelectionScript(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_ISSELECTIONSCRIPT_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::Void set_BgZoomInfo(ScenarioBgZoomInfo* arg)
		{
			((::System::Void(*)(ScenarioBgZoomInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_SET_BGZOOMINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ControlInfoTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_CONTROLINFOTABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ClearScreenTexts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_CLEARSCREENTEXTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCharacterAction(::System::String* str, ::FlatData::ScenarioCharacterAction&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::FlatData::ScenarioCharacterAction&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRYGETCHARACTERACTION_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_HasScreenTextInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_HASSCREENTEXTINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_GET_ISTITLE_OFFSET))(nullptr);
		}

		ScenarioScriptInfo* FillScriptInfoScript(::MX::Data::Excel::ScenarioScriptExcel* arg, ::System::Int32 arg2)
		{
			return ((ScenarioScriptInfo*(*)(::MX::Data::Excel::ScenarioScriptExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_FILLSCRIPTINFOSCRIPT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetCharacterShape(::System::String* str, ::FlatData::ScenarioCharacterShapes&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::FlatData::ScenarioCharacterShapes&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCRIPTINFO_TRYGETCHARACTERSHAPE_OFFSET))(str, arg, nullptr);
		}

	};

