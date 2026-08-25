#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ScenarioExcel; }
namespace FlatData { class ScenarioBGType; }
namespace FlatData { class ScenarioCharacterAction; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogType; }
namespace FlatData { class StoryCondition; }
namespace FlatData { class EmojiEvent; }
namespace FlatData { class ScenarioZoomAnchors; }
namespace FlatData { class ScenarioZoomType; }
namespace FlatData { class ScenarioContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_SCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD58620)
#define FLATDATA_SCENARIOEXCEL_GETROOTASSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0xD58630)
#define FLATDATA_SCENARIOEXCEL_GETROOTASSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0xD58690)
#define FLATDATA_SCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD586F0)
#define FLATDATA_SCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD58340)
#define FLATDATA_SCENARIOEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD58710)
#define FLATDATA_SCENARIOEXCEL_GET_NONELENGTH_OFFSET UNITYSDK_OFFSET(0xD58770)
#define FLATDATA_SCENARIOEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD587B0)
#define FLATDATA_SCENARIOEXCEL_GETNONEBYTES_OFFSET UNITYSDK_OFFSET(0xD58840)
#define FLATDATA_SCENARIOEXCEL_IDLE_OFFSET UNITYSDK_OFFSET(0xD58860)
#define FLATDATA_SCENARIOEXCEL_GET_IDLELENGTH_OFFSET UNITYSDK_OFFSET(0xD588C0)
#define FLATDATA_SCENARIOEXCEL_IDLE_OFFSET UNITYSDK_OFFSET(0xD58900)
#define FLATDATA_SCENARIOEXCEL_GETIDLEBYTES_OFFSET UNITYSDK_OFFSET(0xD58990)
#define FLATDATA_SCENARIOEXCEL_GET_CAFE_OFFSET UNITYSDK_OFFSET(0xD589B0)
#define FLATDATA_SCENARIOEXCEL_GET_CAFE_OFFSET UNITYSDK_OFFSET(0xD58A00)
#define FLATDATA_SCENARIOEXCEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0xD58A80)
#define FLATDATA_SCENARIOEXCEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0xD58AD0)
#define FLATDATA_SCENARIOEXCEL_GET_OPEN_OFFSET UNITYSDK_OFFSET(0xD58B50)
#define FLATDATA_SCENARIOEXCEL_GET_OPEN_OFFSET UNITYSDK_OFFSET(0xD58BA0)
#define FLATDATA_SCENARIOEXCEL_GET_ENTERCONVER_OFFSET UNITYSDK_OFFSET(0xD58C20)
#define FLATDATA_SCENARIOEXCEL_GET_ENTERCONVER_OFFSET UNITYSDK_OFFSET(0xD58C70)
#define FLATDATA_SCENARIOEXCEL_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xD58CF0)
#define FLATDATA_SCENARIOEXCEL_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xD58D40)
#define FLATDATA_SCENARIOEXCEL_GET_INSTANT_OFFSET UNITYSDK_OFFSET(0xD58DC0)
#define FLATDATA_SCENARIOEXCEL_GET_INSTANT_OFFSET UNITYSDK_OFFSET(0xD58E10)
#define FLATDATA_SCENARIOEXCEL_GET_PROLOGUE_OFFSET UNITYSDK_OFFSET(0xD58E90)
#define FLATDATA_SCENARIOEXCEL_GET_PROLOGUE_OFFSET UNITYSDK_OFFSET(0xD58EE0)
#define FLATDATA_SCENARIOEXCEL_CREATESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0xD58F60)
#define FLATDATA_SCENARIOEXCEL_STARTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0xD59300)
#define FLATDATA_SCENARIOEXCEL_ADDNONE_OFFSET UNITYSDK_OFFSET(0xD59280)
#define FLATDATA_SCENARIOEXCEL_CREATENONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD59320)
#define FLATDATA_SCENARIOEXCEL_STARTNONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD593B0)
#define FLATDATA_SCENARIOEXCEL_ADDIDLE_OFFSET UNITYSDK_OFFSET(0xD59250)
#define FLATDATA_SCENARIOEXCEL_CREATEIDLEVECTOR_OFFSET UNITYSDK_OFFSET(0xD593F0)
#define FLATDATA_SCENARIOEXCEL_STARTIDLEVECTOR_OFFSET UNITYSDK_OFFSET(0xD59480)
#define FLATDATA_SCENARIOEXCEL_ADDCAFE_OFFSET UNITYSDK_OFFSET(0xD59220)
#define FLATDATA_SCENARIOEXCEL_ADDTALK_OFFSET UNITYSDK_OFFSET(0xD591F0)
#define FLATDATA_SCENARIOEXCEL_ADDOPEN_OFFSET UNITYSDK_OFFSET(0xD591C0)
#define FLATDATA_SCENARIOEXCEL_ADDENTERCONVER_OFFSET UNITYSDK_OFFSET(0xD59190)
#define FLATDATA_SCENARIOEXCEL_ADDCENTER_OFFSET UNITYSDK_OFFSET(0xD59160)
#define FLATDATA_SCENARIOEXCEL_ADDINSTANT_OFFSET UNITYSDK_OFFSET(0xD59130)
#define FLATDATA_SCENARIOEXCEL_ADDPROLOGUE_OFFSET UNITYSDK_OFFSET(0xD59100)
#define FLATDATA_SCENARIOEXCEL_ENDSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0xD592B0)

namespace FlatData
{
	inline static constexpr unsigned int ScenarioExcel_TypeDefinitionIndex = 9327;

	class ScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioExcel* GetRootAsScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GETROOTASSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioExcel* GetRootAsScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ScenarioExcel* arg2)
		{
			return ((::FlatData::ScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GETROOTASSCENARIOEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ScenarioBGType* none(::System::Int32 arg)
		{
			return ((::FlatData::ScenarioBGType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NoneLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_NONELENGTH_OFFSET))(nullptr);
		}

		::FlatData::ScenarioBGType* None(::System::Int32 arg)
		{
			return ((::FlatData::ScenarioBGType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNoneBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GETNONEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterAction* idle(::System::Int32 arg)
		{
			return ((::FlatData::ScenarioCharacterAction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_IDLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IdleLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_IDLELENGTH_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterAction* Idle(::System::Int32 arg)
		{
			return ((::FlatData::ScenarioCharacterAction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_IDLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetIdleBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GETIDLEBYTES_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_cafe()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_CAFE_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_Cafe()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_CAFE_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_talk()
		{
			return ((::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_TALK_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_Talk()
		{
			return ((::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_TALK_OFFSET))(nullptr);
		}

		::FlatData::StoryCondition* get_open()
		{
			return ((::FlatData::StoryCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_OPEN_OFFSET))(nullptr);
		}

		::FlatData::StoryCondition* get_Open()
		{
			return ((::FlatData::StoryCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_OPEN_OFFSET))(nullptr);
		}

		::FlatData::EmojiEvent* get_enterConver()
		{
			return ((::FlatData::EmojiEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_ENTERCONVER_OFFSET))(nullptr);
		}

		::FlatData::EmojiEvent* get_EnterConver()
		{
			return ((::FlatData::EmojiEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_ENTERCONVER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioZoomAnchors* get_center()
		{
			return ((::FlatData::ScenarioZoomAnchors*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_CENTER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioZoomAnchors* get_Center()
		{
			return ((::FlatData::ScenarioZoomAnchors*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_CENTER_OFFSET))(nullptr);
		}

		::FlatData::ScenarioZoomType* get_instant()
		{
			return ((::FlatData::ScenarioZoomType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_INSTANT_OFFSET))(nullptr);
		}

		::FlatData::ScenarioZoomType* get_Instant()
		{
			return ((::FlatData::ScenarioZoomType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_INSTANT_OFFSET))(nullptr);
		}

		::FlatData::ScenarioContentType* get_prologue()
		{
			return ((::FlatData::ScenarioContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_PROLOGUE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioContentType* get_Prologue()
		{
			return ((::FlatData::ScenarioContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_GET_PROLOGUE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatData::DialogCategory* arg4, ::FlatData::DialogType* arg5, ::FlatData::StoryCondition* arg6, ::FlatData::EmojiEvent* arg7, ::FlatData::ScenarioZoomAnchors* arg8, ::FlatData::ScenarioZoomType* arg9, ::FlatData::ScenarioContentType* arg10)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::DialogCategory*, ::FlatData::DialogType*, ::FlatData::StoryCondition*, ::FlatData::EmojiEvent*, ::FlatData::ScenarioZoomAnchors*, ::FlatData::ScenarioZoomType*, ::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_CREATESCENARIOEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void StartScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_STARTSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNone(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDNONE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_CREATENONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_STARTNONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIdle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDIDLE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIdleVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_CREATEIDLEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartIdleVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_STARTIDLEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCafe(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogCategory* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDCAFE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTalk(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DialogType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DialogType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDTALK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpen(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoryCondition* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoryCondition*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnterConver(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EmojiEvent* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EmojiEvent*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDENTERCONVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCenter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioZoomAnchors* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioZoomAnchors*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDCENTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInstant(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioZoomType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioZoomType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDINSTANT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPrologue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioContentType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ADDPROLOGUE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SCENARIOEXCEL_ENDSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

