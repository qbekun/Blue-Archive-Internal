#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class PropRootMotionFlat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_PROPROOTMOTIONFLAT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD54540)
#define FLATDATA_PROPROOTMOTIONFLAT_GETROOTASPROPROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD54550)
#define FLATDATA_PROPROOTMOTIONFLAT_GETROOTASPROPROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD545B0)
#define FLATDATA_PROPROOTMOTIONFLAT___INIT_OFFSET UNITYSDK_OFFSET(0xD54640)
#define FLATDATA_PROPROOTMOTIONFLAT___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD54610)
#define FLATDATA_PROPROOTMOTIONFLAT_ROOTMOTIONS_OFFSET UNITYSDK_OFFSET(0xD54660)
#define FLATDATA_PROPROOTMOTIONFLAT_GET_ROOTMOTIONSLENGTH_OFFSET UNITYSDK_OFFSET(0xD54730)
#define FLATDATA_PROPROOTMOTIONFLAT_CREATEPROPROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD54770)
#define FLATDATA_PROPROOTMOTIONFLAT_STARTPROPROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD54860)
#define FLATDATA_PROPROOTMOTIONFLAT_ADDROOTMOTIONS_OFFSET UNITYSDK_OFFSET(0xD547E0)
#define FLATDATA_PROPROOTMOTIONFLAT_CREATEROOTMOTIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD54880)
#define FLATDATA_PROPROOTMOTIONFLAT_STARTROOTMOTIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD54910)
#define FLATDATA_PROPROOTMOTIONFLAT_ENDPROPROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD54810)
#define FLATDATA_PROPROOTMOTIONFLAT_FINISHPROPROOTMOTIONFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD54950)
#define FLATDATA_PROPROOTMOTIONFLAT_FINISHSIZEPREFIXEDPROPROOTMOTIONFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD54970)

namespace FlatData
{
	inline static constexpr unsigned int PropRootMotionFlat_TypeDefinitionIndex = 9316;

	class PropRootMotionFlat : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::PropRootMotionFlat* GetRootAsPropRootMotionFlat(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::PropRootMotionFlat*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_GETROOTASPROPROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::FlatData::PropRootMotionFlat* GetRootAsPropRootMotionFlat(::FlatBuffers::ByteBuffer* arg, ::FlatData::PropRootMotionFlat* arg2)
		{
			return ((::FlatData::PropRootMotionFlat*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::PropRootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_GETROOTASPROPROOTMOTIONFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::PropRootMotionFlat* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::PropRootMotionFlat*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* RootMotions(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_ROOTMOTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RootMotionsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_GET_ROOTMOTIONSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePropRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_CREATEPROPROOTMOTIONFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPropRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_STARTPROPROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddRootMotions(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_ADDROOTMOTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRootMotionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_CREATEROOTMOTIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRootMotionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_STARTROOTMOTIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndPropRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_ENDPROPROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPropRootMotionFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_FINISHPROPROOTMOTIONFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedPropRootMotionFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPROOTMOTIONFLAT_FINISHSIZEPREFIXEDPROPROOTMOTIONFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

