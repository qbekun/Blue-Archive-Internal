#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class VoiceSkillUseExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_VOICESKILLUSEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD628A0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_GETROOTASVOICESKILLUSEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD628B0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_GETROOTASVOICESKILLUSEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD62910)
#define FLATDATA_VOICESKILLUSEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD629A0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD62970)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD629C0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD62AC0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD62B10)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_CREATEVOICESKILLUSEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD62B50)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_STARTVOICESKILLUSEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD62C40)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD62BC0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD62C60)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD62CF0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_ENDVOICESKILLUSEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD62BF0)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_FINISHVOICESKILLUSEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD62D30)
#define FLATDATA_VOICESKILLUSEEXCELTABLE_FINISHSIZEPREFIXEDVOICESKILLUSEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD62D50)

namespace FlatData
{
	inline static constexpr unsigned int VoiceSkillUseExcelTable_TypeDefinitionIndex = 9348;

	class VoiceSkillUseExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::VoiceSkillUseExcelTable* GetRootAsVoiceSkillUseExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::VoiceSkillUseExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_GETROOTASVOICESKILLUSEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::VoiceSkillUseExcelTable* GetRootAsVoiceSkillUseExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::VoiceSkillUseExcelTable* arg2)
		{
			return ((::FlatData::VoiceSkillUseExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::VoiceSkillUseExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_GETROOTASVOICESKILLUSEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::VoiceSkillUseExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::VoiceSkillUseExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceSkillUseExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_CREATEVOICESKILLUSEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartVoiceSkillUseExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_STARTVOICESKILLUSEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndVoiceSkillUseExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_ENDVOICESKILLUSEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceSkillUseExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_FINISHVOICESKILLUSEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceSkillUseExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCELTABLE_FINISHSIZEPREFIXEDVOICESKILLUSEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

