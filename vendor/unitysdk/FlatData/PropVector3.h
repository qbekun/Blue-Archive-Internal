#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class PropVector3; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_PROPVECTOR3_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD53A70)
#define FLATDATA_PROPVECTOR3_GETROOTASPROPVECTOR3_OFFSET UNITYSDK_OFFSET(0xD53A80)
#define FLATDATA_PROPVECTOR3_GETROOTASPROPVECTOR3_OFFSET UNITYSDK_OFFSET(0xD53AE0)
#define FLATDATA_PROPVECTOR3___INIT_OFFSET UNITYSDK_OFFSET(0xD53B70)
#define FLATDATA_PROPVECTOR3___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD53B40)
#define FLATDATA_PROPVECTOR3_GET_X_OFFSET UNITYSDK_OFFSET(0xD53B90)
#define FLATDATA_PROPVECTOR3_GET_Y_OFFSET UNITYSDK_OFFSET(0xD53BE0)
#define FLATDATA_PROPVECTOR3_GET_Z_OFFSET UNITYSDK_OFFSET(0xD53C30)
#define FLATDATA_PROPVECTOR3_CREATEPROPVECTOR3_OFFSET UNITYSDK_OFFSET(0xD53C80)
#define FLATDATA_PROPVECTOR3_STARTPROPVECTOR3_OFFSET UNITYSDK_OFFSET(0xD53E30)
#define FLATDATA_PROPVECTOR3_ADDX_OFFSET UNITYSDK_OFFSET(0xD53DB0)
#define FLATDATA_PROPVECTOR3_ADDY_OFFSET UNITYSDK_OFFSET(0xD53D80)
#define FLATDATA_PROPVECTOR3_ADDZ_OFFSET UNITYSDK_OFFSET(0xD53D50)
#define FLATDATA_PROPVECTOR3_ENDPROPVECTOR3_OFFSET UNITYSDK_OFFSET(0xD53DE0)

namespace FlatData
{
	inline static constexpr unsigned int PropVector3_TypeDefinitionIndex = 9314;

	class PropVector3 : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::PropVector3* GetRootAsPropVector3(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::PropVector3*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GETROOTASPROPVECTOR3_OFFSET))(arg, nullptr);
		}

		::FlatData::PropVector3* GetRootAsPropVector3(::FlatBuffers::ByteBuffer* arg, ::FlatData::PropVector3* arg2)
		{
			return ((::FlatData::PropVector3*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::PropVector3*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GETROOTASPROPVECTOR3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::PropVector3* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::PropVector3*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GET_Y_OFFSET))(nullptr);
		}

		::System::Single get_Z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_GET_Z_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePropVector3(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_CREATEPROPVECTOR3_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartPropVector3(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_STARTPROPVECTOR3_OFFSET))(arg, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_ADDY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_ADDZ_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndPropVector3(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPVECTOR3_ENDPROPVECTOR3_OFFSET))(arg, nullptr);
		}

	};
}

