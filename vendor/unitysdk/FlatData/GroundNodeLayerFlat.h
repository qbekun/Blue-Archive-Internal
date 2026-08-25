#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class GroundNodeLayerFlat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_GROUNDNODELAYERFLAT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4A900)
#define FLATDATA_GROUNDNODELAYERFLAT_GETROOTASGROUNDNODELAYERFLAT_OFFSET UNITYSDK_OFFSET(0xD4A910)
#define FLATDATA_GROUNDNODELAYERFLAT_GETROOTASGROUNDNODELAYERFLAT_OFFSET UNITYSDK_OFFSET(0xD4A970)
#define FLATDATA_GROUNDNODELAYERFLAT___INIT_OFFSET UNITYSDK_OFFSET(0xD4AA00)
#define FLATDATA_GROUNDNODELAYERFLAT___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4A9D0)
#define FLATDATA_GROUNDNODELAYERFLAT_LAYERS_OFFSET UNITYSDK_OFFSET(0xD4AA20)
#define FLATDATA_GROUNDNODELAYERFLAT_GET_LAYERSLENGTH_OFFSET UNITYSDK_OFFSET(0xD4AA80)
#define FLATDATA_GROUNDNODELAYERFLAT_GETLAYERSBYTES_OFFSET UNITYSDK_OFFSET(0xD4AAC0)
#define FLATDATA_GROUNDNODELAYERFLAT_CREATEGROUNDNODELAYERFLAT_OFFSET UNITYSDK_OFFSET(0xD4AAE0)
#define FLATDATA_GROUNDNODELAYERFLAT_STARTGROUNDNODELAYERFLAT_OFFSET UNITYSDK_OFFSET(0xD4ABD0)
#define FLATDATA_GROUNDNODELAYERFLAT_ADDLAYERS_OFFSET UNITYSDK_OFFSET(0xD4AB50)
#define FLATDATA_GROUNDNODELAYERFLAT_CREATELAYERSVECTOR_OFFSET UNITYSDK_OFFSET(0xD4ABF0)
#define FLATDATA_GROUNDNODELAYERFLAT_STARTLAYERSVECTOR_OFFSET UNITYSDK_OFFSET(0xD4AC80)
#define FLATDATA_GROUNDNODELAYERFLAT_ENDGROUNDNODELAYERFLAT_OFFSET UNITYSDK_OFFSET(0xD4AB80)
#define FLATDATA_GROUNDNODELAYERFLAT_FINISHGROUNDNODELAYERFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD4ACC0)
#define FLATDATA_GROUNDNODELAYERFLAT_FINISHSIZEPREFIXEDGROUNDNODELAYERFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD4ACE0)

namespace FlatData
{
	inline static constexpr unsigned int GroundNodeLayerFlat_TypeDefinitionIndex = 9295;

	class GroundNodeLayerFlat : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::GroundNodeLayerFlat* GetRootAsGroundNodeLayerFlat(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::GroundNodeLayerFlat*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_GETROOTASGROUNDNODELAYERFLAT_OFFSET))(arg, nullptr);
		}

		::FlatData::GroundNodeLayerFlat* GetRootAsGroundNodeLayerFlat(::FlatBuffers::ByteBuffer* arg, ::FlatData::GroundNodeLayerFlat* arg2)
		{
			return ((::FlatData::GroundNodeLayerFlat*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::GroundNodeLayerFlat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_GETROOTASGROUNDNODELAYERFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::GroundNodeLayerFlat* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::GroundNodeLayerFlat*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::SByte Layers(::System::Int32 arg)
		{
			return ((::System::SByte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_LAYERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LayersLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_GET_LAYERSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLayersBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_GETLAYERSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundNodeLayerFlat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_CREATEGROUNDNODELAYERFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartGroundNodeLayerFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_STARTGROUNDNODELAYERFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddLayers(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_ADDLAYERS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLayersVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_CREATELAYERSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartLayersVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_STARTLAYERSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndGroundNodeLayerFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_ENDGROUNDNODELAYERFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGroundNodeLayerFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_FINISHGROUNDNODELAYERFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedGroundNodeLayerFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODELAYERFLAT_FINISHSIZEPREFIXEDGROUNDNODELAYERFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

