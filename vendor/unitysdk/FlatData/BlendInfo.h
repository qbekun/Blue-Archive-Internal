#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BlendInfo; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_BLENDINFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDF060)
#define FLATDATA_BLENDINFO_GETROOTASBLENDINFO_OFFSET UNITYSDK_OFFSET(0xCDF070)
#define FLATDATA_BLENDINFO_GETROOTASBLENDINFO_OFFSET UNITYSDK_OFFSET(0xCDF0D0)
#define FLATDATA_BLENDINFO___INIT_OFFSET UNITYSDK_OFFSET(0xCDF130)
#define FLATDATA_BLENDINFO___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDEDC0)
#define FLATDATA_BLENDINFO_GET_FROM_OFFSET UNITYSDK_OFFSET(0xCDF150)
#define FLATDATA_BLENDINFO_GET_TO_OFFSET UNITYSDK_OFFSET(0xCDF1A0)
#define FLATDATA_BLENDINFO_GET_BLEND_OFFSET UNITYSDK_OFFSET(0xCDF1F0)
#define FLATDATA_BLENDINFO_CREATEBLENDINFO_OFFSET UNITYSDK_OFFSET(0xCDF240)
#define FLATDATA_BLENDINFO_STARTBLENDINFO_OFFSET UNITYSDK_OFFSET(0xCDF3E0)
#define FLATDATA_BLENDINFO_ADDFROM_OFFSET UNITYSDK_OFFSET(0xCDF360)
#define FLATDATA_BLENDINFO_ADDTO_OFFSET UNITYSDK_OFFSET(0xCDF330)
#define FLATDATA_BLENDINFO_ADDBLEND_OFFSET UNITYSDK_OFFSET(0xCDF300)
#define FLATDATA_BLENDINFO_ENDBLENDINFO_OFFSET UNITYSDK_OFFSET(0xCDF390)

namespace FlatData
{
	inline static constexpr unsigned int BlendInfo_TypeDefinitionIndex = 9189;

	class BlendInfo : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BlendInfo* GetRootAsBlendInfo(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BlendInfo*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GETROOTASBLENDINFO_OFFSET))(arg, nullptr);
		}

		::FlatData::BlendInfo* GetRootAsBlendInfo(::FlatBuffers::ByteBuffer* arg, ::FlatData::BlendInfo* arg2)
		{
			return ((::FlatData::BlendInfo*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BlendInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GETROOTASBLENDINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BlendInfo* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BlendInfo*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_From()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GET_FROM_OFFSET))(nullptr);
		}

		::System::Int32 get_To()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GET_TO_OFFSET))(nullptr);
		}

		::System::Single get_Blend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_GET_BLEND_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBlendInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Single arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_CREATEBLENDINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartBlendInfo(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_STARTBLENDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void AddFrom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_ADDFROM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_ADDTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBlend(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_ADDBLEND_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBlendInfo(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BLENDINFO_ENDBLENDINFO_OFFSET))(arg, nullptr);
		}

	};
}

