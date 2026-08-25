#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BlendData; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BLENDDATA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDEBB0)
#define FLATDATA_BLENDDATA_GETROOTASBLENDDATA_OFFSET UNITYSDK_OFFSET(0xCDEBC0)
#define FLATDATA_BLENDDATA_GETROOTASBLENDDATA_OFFSET UNITYSDK_OFFSET(0xCDEC20)
#define FLATDATA_BLENDDATA___INIT_OFFSET UNITYSDK_OFFSET(0xCDEC80)
#define FLATDATA_BLENDDATA___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDE920)
#define FLATDATA_BLENDDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCDECA0)
#define FLATDATA_BLENDDATA_INFOLIST_OFFSET UNITYSDK_OFFSET(0xCDECF0)
#define FLATDATA_BLENDDATA_GET_INFOLISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDEDF0)
#define FLATDATA_BLENDDATA_CREATEBLENDDATA_OFFSET UNITYSDK_OFFSET(0xCDEE30)
#define FLATDATA_BLENDDATA_STARTBLENDDATA_OFFSET UNITYSDK_OFFSET(0xCDEF70)
#define FLATDATA_BLENDDATA_ADDTYPE_OFFSET UNITYSDK_OFFSET(0xCDEEF0)
#define FLATDATA_BLENDDATA_ADDINFOLIST_OFFSET UNITYSDK_OFFSET(0xCDEEC0)
#define FLATDATA_BLENDDATA_CREATEINFOLISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDEF90)
#define FLATDATA_BLENDDATA_STARTINFOLISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDF020)
#define FLATDATA_BLENDDATA_ENDBLENDDATA_OFFSET UNITYSDK_OFFSET(0xCDEF20)

namespace FlatData
{
	inline static constexpr unsigned int BlendData_TypeDefinitionIndex = 9188;

	class BlendData : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BlendData* GetRootAsBlendData(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BlendData*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_GETROOTASBLENDDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::BlendData* GetRootAsBlendData(::FlatBuffers::ByteBuffer* arg, ::FlatData::BlendData* arg2)
		{
			return ((::FlatData::BlendData*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BlendData*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_GETROOTASBLENDDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BlendData* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BlendData*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* InfoList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_INFOLIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InfoListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_GET_INFOLISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBlendData(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::FlatBuffers::VectorOffset* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_CREATEBLENDDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartBlendData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_STARTBLENDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_ADDTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInfoList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_ADDINFOLIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateInfoListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_CREATEINFOLISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartInfoListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_STARTINFOLISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBlendData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDDATA_ENDBLENDDATA_OFFSET))(arg, nullptr);
		}

	};
}

