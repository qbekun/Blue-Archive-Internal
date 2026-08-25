#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TagExcel; }
namespace FlatData { class Tag; }
namespace FlatData { class Club; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_TAGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61630)
#define FLATDATA_TAGEXCEL_GETROOTASTAGEXCEL_OFFSET UNITYSDK_OFFSET(0xD61640)
#define FLATDATA_TAGEXCEL_GETROOTASTAGEXCEL_OFFSET UNITYSDK_OFFSET(0xD616A0)
#define FLATDATA_TAGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD61700)
#define FLATDATA_TAGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD61350)
#define FLATDATA_TAGEXCEL_GET_FURNITURE_OFFSET UNITYSDK_OFFSET(0xD61720)
#define FLATDATA_TAGEXCEL_GET_FURNITURE_OFFSET UNITYSDK_OFFSET(0xD61770)
#define FLATDATA_TAGEXCEL_GET_NONE_OFFSET UNITYSDK_OFFSET(0xD617F0)
#define FLATDATA_TAGEXCEL_GET_NONE_OFFSET UNITYSDK_OFFSET(0xD61840)
#define FLATDATA_TAGEXCEL_CREATETAGEXCEL_OFFSET UNITYSDK_OFFSET(0xD618C0)
#define FLATDATA_TAGEXCEL_STARTTAGEXCEL_OFFSET UNITYSDK_OFFSET(0xD61A00)
#define FLATDATA_TAGEXCEL_ADDFURNITURE_OFFSET UNITYSDK_OFFSET(0xD61980)
#define FLATDATA_TAGEXCEL_ADDNONE_OFFSET UNITYSDK_OFFSET(0xD61950)
#define FLATDATA_TAGEXCEL_ENDTAGEXCEL_OFFSET UNITYSDK_OFFSET(0xD619B0)

namespace FlatData
{
	inline static constexpr unsigned int TagExcel_TypeDefinitionIndex = 9345;

	class TagExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TagExcel* GetRootAsTagExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TagExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GETROOTASTAGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::TagExcel* GetRootAsTagExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::TagExcel* arg2)
		{
			return ((::FlatData::TagExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TagExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GETROOTASTAGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TagExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TagExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::Tag* get_furniture()
		{
			return ((::FlatData::Tag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GET_FURNITURE_OFFSET))(nullptr);
		}

		::FlatData::Tag* get_Furniture()
		{
			return ((::FlatData::Tag*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GET_FURNITURE_OFFSET))(nullptr);
		}

		::FlatData::Club* get_none()
		{
			return ((::FlatData::Club*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GET_NONE_OFFSET))(nullptr);
		}

		::FlatData::Club* get_None()
		{
			return ((::FlatData::Club*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_GET_NONE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTagExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Tag* arg2, ::FlatData::Club* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Tag*, ::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_CREATETAGEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartTagExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_STARTTAGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFurniture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Tag* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_ADDFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNone(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Club* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_ADDNONE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTagExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TAGEXCEL_ENDTAGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

