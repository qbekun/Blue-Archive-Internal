#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class NormalSkillTemplateExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD51DE0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GETROOTASNORMALSKILLTEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD51DF0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GETROOTASNORMALSKILLTEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD51E50)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD51EB0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD51B50)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD51ED0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_FIRSTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xD51F20)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_COOLTIME_OFFSET UNITYSDK_OFFSET(0xD51F70)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_MULTIANI_OFFSET UNITYSDK_OFFSET(0xD51FC0)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_CREATENORMALSKILLTEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD52010)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_STARTNORMALSKILLTEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD52210)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDINDEX_OFFSET UNITYSDK_OFFSET(0xD52100)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDFIRSTCOOLTIME_OFFSET UNITYSDK_OFFSET(0xD52160)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDCOOLTIME_OFFSET UNITYSDK_OFFSET(0xD52130)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDMULTIANI_OFFSET UNITYSDK_OFFSET(0xD52190)
#define FLATDATA_NORMALSKILLTEMPLATEEXCEL_ENDNORMALSKILLTEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD521C0)

namespace FlatData
{
	inline static constexpr unsigned int NormalSkillTemplateExcel_TypeDefinitionIndex = 9311;

	class NormalSkillTemplateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::NormalSkillTemplateExcel* GetRootAsNormalSkillTemplateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::NormalSkillTemplateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GETROOTASNORMALSKILLTEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::NormalSkillTemplateExcel* GetRootAsNormalSkillTemplateExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::NormalSkillTemplateExcel* arg2)
		{
			return ((::FlatData::NormalSkillTemplateExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::NormalSkillTemplateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GETROOTASNORMALSKILLTEMPLATEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::NormalSkillTemplateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::NormalSkillTemplateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Single get_FirstCoolTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_FIRSTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Single get_CoolTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_COOLTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_MultiAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_GET_MULTIANI_OFFSET))(nullptr);
		}

		Il2CppObject* CreateNormalSkillTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Single arg3, ::System::Single arg4, ::System::Boolean arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_CREATENORMALSKILLTEMPLATEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartNormalSkillTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_STARTNORMALSKILLTEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFirstCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDFIRSTCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDCOOLTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMultiAni(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_ADDMULTIANI_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndNormalSkillTemplateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_NORMALSKILLTEMPLATEEXCEL_ENDNORMALSKILLTEMPLATEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

