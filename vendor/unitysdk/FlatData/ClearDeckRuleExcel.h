#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ClearDeckRuleExcel; }
namespace FlatData { class ContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_CLEARDECKRULEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7DA0)
#define FLATDATA_CLEARDECKRULEEXCEL_GETROOTASCLEARDECKRULEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE7DB0)
#define FLATDATA_CLEARDECKRULEEXCEL_GETROOTASCLEARDECKRULEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE7E10)
#define FLATDATA_CLEARDECKRULEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE7E70)
#define FLATDATA_CLEARDECKRULEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE7AC0)
#define FLATDATA_CLEARDECKRULEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE7E90)
#define FLATDATA_CLEARDECKRULEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE7EE0)
#define FLATDATA_CLEARDECKRULEEXCEL_GET_SIZELIMIT_OFFSET UNITYSDK_OFFSET(0xCE7F60)
#define FLATDATA_CLEARDECKRULEEXCEL_GET_SIZELIMIT_OFFSET UNITYSDK_OFFSET(0xCE7FB0)
#define FLATDATA_CLEARDECKRULEEXCEL_CREATECLEARDECKRULEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE8030)
#define FLATDATA_CLEARDECKRULEEXCEL_STARTCLEARDECKRULEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE8170)
#define FLATDATA_CLEARDECKRULEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE80F0)
#define FLATDATA_CLEARDECKRULEEXCEL_ADDSIZELIMIT_OFFSET UNITYSDK_OFFSET(0xCE80C0)
#define FLATDATA_CLEARDECKRULEEXCEL_ENDCLEARDECKRULEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE8120)

namespace FlatData
{
	inline static constexpr unsigned int ClearDeckRuleExcel_TypeDefinitionIndex = 9205;

	class ClearDeckRuleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ClearDeckRuleExcel* GetRootAsClearDeckRuleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ClearDeckRuleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GETROOTASCLEARDECKRULEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ClearDeckRuleExcel* GetRootAsClearDeckRuleExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ClearDeckRuleExcel* arg2)
		{
			return ((::FlatData::ClearDeckRuleExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ClearDeckRuleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GETROOTASCLEARDECKRULEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ClearDeckRuleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ClearDeckRuleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ContentType* get_contentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_sizeLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GET_SIZELIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_SizeLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_GET_SIZELIMIT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateClearDeckRuleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_CREATECLEARDECKRULEEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartClearDeckRuleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_STARTCLEARDECKRULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSizeLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_ADDSIZELIMIT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndClearDeckRuleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CLEARDECKRULEEXCEL_ENDCLEARDECKRULEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

