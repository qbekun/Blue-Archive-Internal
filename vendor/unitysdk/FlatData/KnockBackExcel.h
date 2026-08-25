#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class KnockBackExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_KNOCKBACKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4BA40)
#define FLATDATA_KNOCKBACKEXCEL_GETROOTASKNOCKBACKEXCEL_OFFSET UNITYSDK_OFFSET(0xD4BA50)
#define FLATDATA_KNOCKBACKEXCEL_GETROOTASKNOCKBACKEXCEL_OFFSET UNITYSDK_OFFSET(0xD4BAB0)
#define FLATDATA_KNOCKBACKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD4BB10)
#define FLATDATA_KNOCKBACKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4B7B0)
#define FLATDATA_KNOCKBACKEXCEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD4BB30)
#define FLATDATA_KNOCKBACKEXCEL_GET_DIST_OFFSET UNITYSDK_OFFSET(0xD4BB80)
#define FLATDATA_KNOCKBACKEXCEL_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xD4BBD0)
#define FLATDATA_KNOCKBACKEXCEL_CREATEKNOCKBACKEXCEL_OFFSET UNITYSDK_OFFSET(0xD4BC20)
#define FLATDATA_KNOCKBACKEXCEL_STARTKNOCKBACKEXCEL_OFFSET UNITYSDK_OFFSET(0xD4BDC0)
#define FLATDATA_KNOCKBACKEXCEL_ADDINDEX_OFFSET UNITYSDK_OFFSET(0xD4BCE0)
#define FLATDATA_KNOCKBACKEXCEL_ADDDIST_OFFSET UNITYSDK_OFFSET(0xD4BD40)
#define FLATDATA_KNOCKBACKEXCEL_ADDSPEED_OFFSET UNITYSDK_OFFSET(0xD4BD10)
#define FLATDATA_KNOCKBACKEXCEL_ENDKNOCKBACKEXCEL_OFFSET UNITYSDK_OFFSET(0xD4BD70)

namespace FlatData
{
	inline static constexpr unsigned int KnockBackExcel_TypeDefinitionIndex = 9299;

	class KnockBackExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::KnockBackExcel* GetRootAsKnockBackExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::KnockBackExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GETROOTASKNOCKBACKEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::KnockBackExcel* GetRootAsKnockBackExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::KnockBackExcel* arg2)
		{
			return ((::FlatData::KnockBackExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::KnockBackExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GETROOTASKNOCKBACKEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::KnockBackExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::KnockBackExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Single get_Dist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GET_DIST_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_GET_SPEED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKnockBackExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_CREATEKNOCKBACKEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartKnockBackExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_STARTKNOCKBACKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_ADDINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDist(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_ADDDIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpeed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_ADDSPEED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndKnockBackExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KNOCKBACKEXCEL_ENDKNOCKBACKEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

