#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioCharacterSituationSetExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5B670)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETROOTASSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5B680)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETROOTASSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5B6E0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C5B770)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C5B740)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5B790)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_FACE_OFFSET UNITYSDK_OFFSET(0x1C5B7E0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETFACEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5B820)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C5B840)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETBEHAVIORBYTES_OFFSET UNITYSDK_OFFSET(0x1C5B880)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C5B8A0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETACTIONBYTES_OFFSET UNITYSDK_OFFSET(0x1C5B8E0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C5B900)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETSHAPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5B940)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x1C5B960)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_EMOTION_OFFSET UNITYSDK_OFFSET(0x1C5B9B0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_CREATESCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5BA00)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_STARTSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5BCF0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C5BC70)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDFACE_OFFSET UNITYSDK_OFFSET(0x1C5BC40)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C5BC10)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1C5BBE0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDSHAPE_OFFSET UNITYSDK_OFFSET(0x1C5BBB0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x1C5BB80)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDEMOTION_OFFSET UNITYSDK_OFFSET(0x1C5BB50)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ENDSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5BCA0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_FINISHSCENARIOCHARACTERSITUATIONSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5BD10)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTERSITUATIONSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5BD30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterSituationSetExcel_TypeDefinitionIndex = 19269;

	class ScenarioCharacterSituationSetExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterSituationSetExcel* GetRootAsScenarioCharacterSituationSetExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterSituationSetExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETROOTASSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterSituationSetExcel* GetRootAsScenarioCharacterSituationSetExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioCharacterSituationSetExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterSituationSetExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioCharacterSituationSetExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETROOTASSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterSituationSetExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterSituationSetExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Face()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_FACE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFaceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETFACEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Behavior()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetBehaviorBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETBEHAVIORBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Action()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_ACTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetActionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETACTIONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Shape()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_SHAPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetShapeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GETSHAPEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Effect()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_EFFECT_OFFSET))(nullptr);
		}

		::System::UInt32 get_Emotion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_GET_EMOTION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioCharacterSituationSetExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_CREATESCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioCharacterSituationSetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_STARTSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFace(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDFACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBehavior(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDBEHAVIOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAction(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShape(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDSHAPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEffect(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDEFFECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ADDEMOTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioCharacterSituationSetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_ENDSCENARIOCHARACTERSITUATIONSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioCharacterSituationSetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_FINISHSCENARIOCHARACTERSITUATIONSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioCharacterSituationSetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTERSITUATIONSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

