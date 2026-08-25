#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AnimationBlendTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ANIMATIONBLENDTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDE730)
#define FLATDATA_ANIMATIONBLENDTABLE_GETROOTASANIMATIONBLENDTABLE_OFFSET UNITYSDK_OFFSET(0xCDE740)
#define FLATDATA_ANIMATIONBLENDTABLE_GETROOTASANIMATIONBLENDTABLE_OFFSET UNITYSDK_OFFSET(0xCDE7A0)
#define FLATDATA_ANIMATIONBLENDTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCDE830)
#define FLATDATA_ANIMATIONBLENDTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDE800)
#define FLATDATA_ANIMATIONBLENDTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCDE850)
#define FLATDATA_ANIMATIONBLENDTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDE950)
#define FLATDATA_ANIMATIONBLENDTABLE_CREATEANIMATIONBLENDTABLE_OFFSET UNITYSDK_OFFSET(0xCDE990)
#define FLATDATA_ANIMATIONBLENDTABLE_STARTANIMATIONBLENDTABLE_OFFSET UNITYSDK_OFFSET(0xCDEA80)
#define FLATDATA_ANIMATIONBLENDTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCDEA00)
#define FLATDATA_ANIMATIONBLENDTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDEAA0)
#define FLATDATA_ANIMATIONBLENDTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDEB30)
#define FLATDATA_ANIMATIONBLENDTABLE_ENDANIMATIONBLENDTABLE_OFFSET UNITYSDK_OFFSET(0xCDEA30)
#define FLATDATA_ANIMATIONBLENDTABLE_FINISHANIMATIONBLENDTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDEB70)
#define FLATDATA_ANIMATIONBLENDTABLE_FINISHSIZEPREFIXEDANIMATIONBLENDTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDEB90)

namespace FlatData
{
	inline static constexpr unsigned int AnimationBlendTable_TypeDefinitionIndex = 9187;

	class AnimationBlendTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AnimationBlendTable* GetRootAsAnimationBlendTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AnimationBlendTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_GETROOTASANIMATIONBLENDTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::AnimationBlendTable* GetRootAsAnimationBlendTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::AnimationBlendTable* arg2)
		{
			return ((::FlatData::AnimationBlendTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AnimationBlendTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_GETROOTASANIMATIONBLENDTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AnimationBlendTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AnimationBlendTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAnimationBlendTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_CREATEANIMATIONBLENDTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartAnimationBlendTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_STARTANIMATIONBLENDTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAnimationBlendTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_ENDANIMATIONBLENDTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAnimationBlendTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_FINISHANIMATIONBLENDTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedAnimationBlendTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATIONBLENDTABLE_FINISHSIZEPREFIXEDANIMATIONBLENDTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

