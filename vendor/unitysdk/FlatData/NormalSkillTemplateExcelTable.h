#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class NormalSkillTemplateExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51960)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GETROOTASNORMALSKILLTEMPLATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51970)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GETROOTASNORMALSKILLTEMPLATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD519D0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD51A60)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD51A30)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD51A80)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD51B80)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_CREATENORMALSKILLTEMPLATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51BC0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_STARTNORMALSKILLTEMPLATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51CB0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD51C30)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD51CD0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD51D60)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_ENDNORMALSKILLTEMPLATEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD51C60)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_FINISHNORMALSKILLTEMPLATEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51DA0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_FINISHSIZEPREFIXEDNORMALSKILLTEMPLATEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51DC0)

namespace FlatData
{
	inline static constexpr unsigned int NormalSkillTemplateExcelTable_TypeDefinitionIndex = 9310;

	class NormalSkillTemplateExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::NormalSkillTemplateExcelTable* GetRootAsNormalSkillTemplateExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::NormalSkillTemplateExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GETROOTASNORMALSKILLTEMPLATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::NormalSkillTemplateExcelTable* GetRootAsNormalSkillTemplateExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::NormalSkillTemplateExcelTable* arg2)
		{
			return ((::FlatData::NormalSkillTemplateExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::NormalSkillTemplateExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GETROOTASNORMALSKILLTEMPLATEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::NormalSkillTemplateExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::NormalSkillTemplateExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateNormalSkillTemplateExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_CREATENORMALSKILLTEMPLATEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNormalSkillTemplateExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_STARTNORMALSKILLTEMPLATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndNormalSkillTemplateExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_ENDNORMALSKILLTEMPLATEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishNormalSkillTemplateExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_FINISHNORMALSKILLTEMPLATEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedNormalSkillTemplateExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCELTABLE_FINISHSIZEPREFIXEDNORMALSKILLTEMPLATEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

