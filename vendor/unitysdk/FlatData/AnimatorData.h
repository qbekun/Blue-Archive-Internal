#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AnimatorData; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ANIMATORDATA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDF850)
#define FLATDATA_ANIMATORDATA_GETROOTASANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xCDF860)
#define FLATDATA_ANIMATORDATA_GETROOTASANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xCDF8C0)
#define FLATDATA_ANIMATORDATA___INIT_OFFSET UNITYSDK_OFFSET(0xCDF950)
#define FLATDATA_ANIMATORDATA___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDF920)
#define FLATDATA_ANIMATORDATA_GET_DEFAULTSTATENAME_OFFSET UNITYSDK_OFFSET(0xCDF970)
#define FLATDATA_ANIMATORDATA_GETDEFAULTSTATENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCDF9B0)
#define FLATDATA_ANIMATORDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCDF9D0)
#define FLATDATA_ANIMATORDATA_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCDFA10)
#define FLATDATA_ANIMATORDATA_DATALIST_OFFSET UNITYSDK_OFFSET(0xCDFA30)
#define FLATDATA_ANIMATORDATA_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDFB30)
#define FLATDATA_ANIMATORDATA_CREATEANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xCDFB70)
#define FLATDATA_ANIMATORDATA_STARTANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xCDFD00)
#define FLATDATA_ANIMATORDATA_ADDDEFAULTSTATENAME_OFFSET UNITYSDK_OFFSET(0xCDFC80)
#define FLATDATA_ANIMATORDATA_ADDNAME_OFFSET UNITYSDK_OFFSET(0xCDFC50)
#define FLATDATA_ANIMATORDATA_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCDFC20)
#define FLATDATA_ANIMATORDATA_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDFD20)
#define FLATDATA_ANIMATORDATA_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDFDB0)
#define FLATDATA_ANIMATORDATA_ENDANIMATORDATA_OFFSET UNITYSDK_OFFSET(0xCDFCB0)

namespace FlatData
{
	inline static constexpr unsigned int AnimatorData_TypeDefinitionIndex = 9191;

	class AnimatorData : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AnimatorData* GetRootAsAnimatorData(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AnimatorData*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GETROOTASANIMATORDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::AnimatorData* GetRootAsAnimatorData(::FlatBuffers::ByteBuffer* arg, ::FlatData::AnimatorData* arg2)
		{
			return ((::FlatData::AnimatorData*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AnimatorData*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GETROOTASANIMATORDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AnimatorData* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AnimatorData*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_DefaultStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GET_DEFAULTSTATENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefaultStateNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GETDEFAULTSTATENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GETNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAnimatorData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::VectorOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_CREATEANIMATORDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartAnimatorData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_STARTANIMATORDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddDefaultStateName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_ADDDEFAULTSTATENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAnimatorData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATA_ENDANIMATORDATA_OFFSET))(arg, nullptr);
		}

	};
}

