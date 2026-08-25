#pragma once
#include "unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
class GroundVector3;
namespace FlatBuffers { class FlatBufferBuilder; }

#define GROUNDVECTOR3_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDCB30)
#define GROUNDVECTOR3_GETROOTASGROUNDVECTOR3_OFFSET UNITYSDK_OFFSET(0xCDCB40)
#define GROUNDVECTOR3_GETROOTASGROUNDVECTOR3_OFFSET UNITYSDK_OFFSET(0xCDCBA0)
#define GROUNDVECTOR3___INIT_OFFSET UNITYSDK_OFFSET(0xCDCC30)
#define GROUNDVECTOR3___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDCC00)
#define GROUNDVECTOR3_GET_X_OFFSET UNITYSDK_OFFSET(0xCDCC50)
#define GROUNDVECTOR3_GET_Y_OFFSET UNITYSDK_OFFSET(0xCDCCA0)
#define GROUNDVECTOR3_GET_Z_OFFSET UNITYSDK_OFFSET(0xCDCCF0)
#define GROUNDVECTOR3_CREATEGROUNDVECTOR3_OFFSET UNITYSDK_OFFSET(0xCDCD40)
#define GROUNDVECTOR3_STARTGROUNDVECTOR3_OFFSET UNITYSDK_OFFSET(0xCDCEF0)
#define GROUNDVECTOR3_ADDX_OFFSET UNITYSDK_OFFSET(0xCDCE70)
#define GROUNDVECTOR3_ADDY_OFFSET UNITYSDK_OFFSET(0xCDCE40)
#define GROUNDVECTOR3_ADDZ_OFFSET UNITYSDK_OFFSET(0xCDCE10)
#define GROUNDVECTOR3_ENDGROUNDVECTOR3_OFFSET UNITYSDK_OFFSET(0xCDCEA0)

	inline static constexpr unsigned int GroundVector3_TypeDefinitionIndex = 9182;

	class GroundVector3 : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		GroundVector3* GetRootAsGroundVector3(::FlatBuffers::ByteBuffer* arg)
		{
			return ((GroundVector3*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GETROOTASGROUNDVECTOR3_OFFSET))(arg, nullptr);
		}

		GroundVector3* GetRootAsGroundVector3(::FlatBuffers::ByteBuffer* arg, GroundVector3* arg2)
		{
			return ((GroundVector3*(*)(::FlatBuffers::ByteBuffer*, GroundVector3*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GETROOTASGROUNDVECTOR3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3___INIT_OFFSET))(arg, arg2, nullptr);
		}

		GroundVector3* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((GroundVector3*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GET_Y_OFFSET))(nullptr);
		}

		::System::Single get_Z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_GET_Z_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundVector3(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_CREATEGROUNDVECTOR3_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartGroundVector3(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_STARTGROUNDVECTOR3_OFFSET))(arg, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_ADDY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_ADDZ_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndGroundVector3(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVECTOR3_ENDGROUNDVECTOR3_OFFSET))(arg, nullptr);
		}

	};

