#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AniEventData; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_ANIEVENTDATA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE09B0)
#define FLATDATA_ANIEVENTDATA_GETROOTASANIEVENTDATA_OFFSET UNITYSDK_OFFSET(0xCE09C0)
#define FLATDATA_ANIEVENTDATA_GETROOTASANIEVENTDATA_OFFSET UNITYSDK_OFFSET(0xCE0A20)
#define FLATDATA_ANIEVENTDATA___INIT_OFFSET UNITYSDK_OFFSET(0xCE0A80)
#define FLATDATA_ANIEVENTDATA___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE0380)
#define FLATDATA_ANIEVENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE0AA0)
#define FLATDATA_ANIEVENTDATA_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE0AE0)
#define FLATDATA_ANIEVENTDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xCE0B00)
#define FLATDATA_ANIEVENTDATA_GET_INTPARAM_OFFSET UNITYSDK_OFFSET(0xCE0B50)
#define FLATDATA_ANIEVENTDATA_GET_FLOATPARAM_OFFSET UNITYSDK_OFFSET(0xCE0BA0)
#define FLATDATA_ANIEVENTDATA_GET_STRINGPARAM_OFFSET UNITYSDK_OFFSET(0xCE0BF0)
#define FLATDATA_ANIEVENTDATA_GETSTRINGPARAMBYTES_OFFSET UNITYSDK_OFFSET(0xCE0C30)
#define FLATDATA_ANIEVENTDATA_CREATEANIEVENTDATA_OFFSET UNITYSDK_OFFSET(0xCE0C50)
#define FLATDATA_ANIEVENTDATA_STARTANIEVENTDATA_OFFSET UNITYSDK_OFFSET(0xCE0EA0)
#define FLATDATA_ANIEVENTDATA_ADDNAME_OFFSET UNITYSDK_OFFSET(0xCE0E20)
#define FLATDATA_ANIEVENTDATA_ADDTIME_OFFSET UNITYSDK_OFFSET(0xCE0DF0)
#define FLATDATA_ANIEVENTDATA_ADDINTPARAM_OFFSET UNITYSDK_OFFSET(0xCE0DC0)
#define FLATDATA_ANIEVENTDATA_ADDFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xCE0D90)
#define FLATDATA_ANIEVENTDATA_ADDSTRINGPARAM_OFFSET UNITYSDK_OFFSET(0xCE0D60)
#define FLATDATA_ANIEVENTDATA_ENDANIEVENTDATA_OFFSET UNITYSDK_OFFSET(0xCE0E50)

namespace FlatData
{
	inline static constexpr unsigned int AniEventData_TypeDefinitionIndex = 9193;

	class AniEventData : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AniEventData* GetRootAsAniEventData(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AniEventData*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GETROOTASANIEVENTDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::AniEventData* GetRootAsAniEventData(::FlatBuffers::ByteBuffer* arg, ::FlatData::AniEventData* arg2)
		{
			return ((::FlatData::AniEventData*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AniEventData*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GETROOTASANIEVENTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AniEventData* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AniEventData*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_TIME_OFFSET))(nullptr);
		}

		::System::Int32 get_IntParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_INTPARAM_OFFSET))(nullptr);
		}

		::System::Single get_FloatParam()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_FLOATPARAM_OFFSET))(nullptr);
		}

		::System::String* get_StringParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GET_STRINGPARAM_OFFSET))(nullptr);
		}

		Il2CppObject* GetStringParamBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_GETSTRINGPARAMBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAniEventData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Single arg5, ::FlatBuffers::StringOffset* arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Int32, ::System::Single, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_CREATEANIEVENTDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartAniEventData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_STARTANIEVENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ADDTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIntParam(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ADDINTPARAM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFloatParam(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ADDFLOATPARAM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStringParam(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ADDSTRINGPARAM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAniEventData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIEVENTDATA_ENDANIEVENTDATA_OFFSET))(arg, nullptr);
		}

	};
}

