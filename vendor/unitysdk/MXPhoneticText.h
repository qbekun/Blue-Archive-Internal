#pragma once
#include "unitysdk.h"

class UILabel;
class TypeWriterEffect;
class Pivot;
class MXTextChunk;

#define MXPHONETICTEXT_GET_HASTYPEWRITER_OFFSET UNITYSDK_OFFSET(0xC115A0)
#define MXPHONETICTEXT_GET_USETYPEWRITER_OFFSET UNITYSDK_OFFSET(0xC115F0)
#define MXPHONETICTEXT_SET_USETYPEWRITER_OFFSET UNITYSDK_OFFSET(0xC11600)
#define MXPHONETICTEXT_GET_LINECOUNT_OFFSET UNITYSDK_OFFSET(0xC11610)
#define MXPHONETICTEXT_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0xC11750)
#define MXPHONETICTEXT_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0xC11770)
#define MXPHONETICTEXT_GET_LABELPOOL_OFFSET UNITYSDK_OFFSET(0xC11790)
#define MXPHONETICTEXT_GETLASTDISPLAYEDLABEL_OFFSET UNITYSDK_OFFSET(0xC11810)
#define MXPHONETICTEXT_GETFIRSTDISPLAYEDLABEL_OFFSET UNITYSDK_OFFSET(0xC11960)
#define MXPHONETICTEXT_GET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0xC11A10)
#define MXPHONETICTEXT_SET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0xC11A20)
#define MXPHONETICTEXT_GET_ANYPHONETICTEXT_OFFSET UNITYSDK_OFFSET(0xC12230)
#define MXPHONETICTEXT_SETUILABELFONTSIZE_OFFSET UNITYSDK_OFFSET(0xC122B0)
#define MXPHONETICTEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xC122D0)
#define MXPHONETICTEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xC122E0)
#define MXPHONETICTEXT_RESETBEFOREDISPLAY_OFFSET UNITYSDK_OFFSET(0xC122F0)
#define MXPHONETICTEXT_ENABLETYPEWRITERSPEED_OFFSET UNITYSDK_OFFSET(0xC129D0)
#define MXPHONETICTEXT_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC129E0)
#define MXPHONETICTEXT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC12A70)
#define MXPHONETICTEXT_GET_ISNEWLINE_OFFSET UNITYSDK_OFFSET(0xC12C80)
#define MXPHONETICTEXT_SET_ISNEWLINE_OFFSET UNITYSDK_OFFSET(0xC12C90)
#define MXPHONETICTEXT_GET_CURRENTCHUNKINDEX_OFFSET UNITYSDK_OFFSET(0xC12CA0)
#define MXPHONETICTEXT_SET_CURRENTCHUNKINDEX_OFFSET UNITYSDK_OFFSET(0xC12CB0)
#define MXPHONETICTEXT_PARSETEXT_OFFSET UNITYSDK_OFFSET(0xC11A50)
#define MXPHONETICTEXT_ADDCHUNK_OFFSET UNITYSDK_OFFSET(0xC132C0)
#define MXPHONETICTEXT_ADDNEWLINE_OFFSET UNITYSDK_OFFSET(0xC13360)
#define MXPHONETICTEXT_ADDCHUNK_OFFSET UNITYSDK_OFFSET(0xC12D00)
#define MXPHONETICTEXT_RESETLEFTWIDTH_OFFSET UNITYSDK_OFFSET(0xC12CC0)
#define MXPHONETICTEXT_PRINTCHUNKS_OFFSET UNITYSDK_OFFSET(0xC13460)
#define MXPHONETICTEXT_DISPLAYCHUNKSALL_OFFSET UNITYSDK_OFFSET(0xC12AE0)
#define MXPHONETICTEXT_STARTDISPLAY_OFFSET UNITYSDK_OFFSET(0xC11FB0)
#define MXPHONETICTEXT_DISPLAYCHUNK_OFFSET UNITYSDK_OFFSET(0xC136B0)
#define MXPHONETICTEXT_REPOSITIONLABELS_OFFSET UNITYSDK_OFFSET(0xC14000)
#define MXPHONETICTEXT_SHIFTALLLABELS_OFFSET UNITYSDK_OFFSET(0xC14430)
#define MXPHONETICTEXT_UNLOADLABELS_OFFSET UNITYSDK_OFFSET(0xC12330)
#define MXPHONETICTEXT_SETPHONETICLABELDATA_OFFSET UNITYSDK_OFFSET(0xC14880)
#define MXPHONETICTEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0xC14C20)
#define MXPHONETICTEXT_ONTYPECOMPLETE_OFFSET UNITYSDK_OFFSET(0xC142B0)
#define MXPHONETICTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC14CC0)

	inline static constexpr unsigned int MXPhoneticText_TypeDefinitionIndex = 8844;

	class MXPhoneticText : public Il2CppObject
	{
	public:
		UILabel* regionLabel; // 0x18
		TypeWriterEffect* typewriter; // 0x20
		::System::Boolean _UseTypeWriter_k__BackingField; // 0x28
		Il2CppObject* labelPool; // 0x30
		::System::Boolean poolInitialized; // 0x38
		Il2CppObject* displayedLabels; // 0x40
		Il2CppObject* phoneticLabels; // 0x48
		::System::String* originalText; // 0x50
		::System::String* phoneticStart; // 0x0
		::System::String* phoneticEnd; // 0x0
		Il2CppObject* chunks; // 0x58
		::System::Action* onComplete; // 0x60
		::System::Boolean useScenarioSettingTypeWriterSpeed; // 0x68
		::System::Int32 _FontSize_k__BackingField; // 0x6C
		::System::Single LeftWidth; // 0x70
		::System::Boolean _IsNewLine_k__BackingField; // 0x74
		::System::Int32 _CurrentChunkIndex_k__BackingField; // 0x78

		::System::Boolean get_HasTypeWriter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_HASTYPEWRITER_OFFSET))(nullptr);
		}

		::System::Boolean get_UseTypeWriter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_USETYPEWRITER_OFFSET))(nullptr);
		}

		::System::Void set_UseTypeWriter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_USETYPEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_LINECOUNT_OFFSET))(nullptr);
		}

		Pivot* get_Pivot()
		{
			return ((Pivot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Void set_Pivot(Pivot* arg)
		{
			((::System::Void(*)(Pivot*, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_PIVOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LabelPool()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_LABELPOOL_OFFSET))(nullptr);
		}

		UILabel* GetLastDisplayedLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GETLASTDISPLAYEDLABEL_OFFSET))(nullptr);
		}

		UILabel* GetFirstDisplayedLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GETFIRSTDISPLAYEDLABEL_OFFSET))(nullptr);
		}

		::System::String* get_OriginalText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_ORIGINALTEXT_OFFSET))(nullptr);
		}

		::System::Void set_OriginalText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_ORIGINALTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_AnyPhoneticText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_ANYPHONETICTEXT_OFFSET))(nullptr);
		}

		::System::Void SetUILabelFontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SETUILABELFONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_FontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetBeforeDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_RESETBEFOREDISPLAY_OFFSET))(nullptr);
		}

		::System::Void EnableTypeWriterSpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ENABLETYPEWRITERSPEED_OFFSET))(nullptr);
		}

		::System::Boolean IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void SetComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SETCOMPLETE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNewLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_ISNEWLINE_OFFSET))(nullptr);
		}

		::System::Void set_IsNewLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_ISNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentChunkIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_GET_CURRENTCHUNKINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CurrentChunkIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SET_CURRENTCHUNKINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ParseText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_PARSETEXT_OFFSET))(nullptr);
		}

		::System::Void AddChunk(MXTextChunk* arg)
		{
			((::System::Void(*)(MXTextChunk*, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ADDCHUNK_OFFSET))(arg, nullptr);
		}

		::System::Void AddNewLine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ADDNEWLINE_OFFSET))(nullptr);
		}

		::System::Void AddChunk(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ADDCHUNK_OFFSET))(str, arg, nullptr);
		}

		::System::Void ResetLeftWidth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_RESETLEFTWIDTH_OFFSET))(nullptr);
		}

		::System::Void PrintChunks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_PRINTCHUNKS_OFFSET))(nullptr);
		}

		::System::Void DisplayChunksAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_DISPLAYCHUNKSALL_OFFSET))(nullptr);
		}

		::System::Void StartDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_STARTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void DisplayChunk(MXTextChunk* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXTextChunk*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_DISPLAYCHUNK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RepositionLabels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_REPOSITIONLABELS_OFFSET))(arg, nullptr);
		}

		::System::Void ShiftAllLabels(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SHIFTALLLABELS_OFFSET))(arg, nullptr);
		}

		::System::Void UnloadLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_UNLOADLABELS_OFFSET))(nullptr);
		}

		::System::Void SetPhoneticLabelData(MXTextChunk* arg, UILabel* arg2, UILabel* arg3)
		{
			((::System::Void(*)(MXTextChunk*, UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_SETPHONETICLABELDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnTextChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ONTEXTCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnTypeComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_ONTYPECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPHONETICTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

