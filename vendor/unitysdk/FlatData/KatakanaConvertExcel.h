#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class KatakanaConvertExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_KATAKANACONVERTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4B1D0)
#define FLATDATA_KATAKANACONVERTEXCEL_GETROOTASKATAKANACONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0xD4B1E0)
#define FLATDATA_KATAKANACONVERTEXCEL_GETROOTASKATAKANACONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0xD4B240)
#define FLATDATA_KATAKANACONVERTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD4B2A0)
#define FLATDATA_KATAKANACONVERTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4AEF0)
#define FLATDATA_KATAKANACONVERTEXCEL_GET_KR_OFFSET UNITYSDK_OFFSET(0xD4B2C0)
#define FLATDATA_KATAKANACONVERTEXCEL_GET_KR_OFFSET UNITYSDK_OFFSET(0xD4B300)
#define FLATDATA_KATAKANACONVERTEXCEL_GETKRBYTES_OFFSET UNITYSDK_OFFSET(0xD4B370)
#define FLATDATA_KATAKANACONVERTEXCEL_GET_JP_OFFSET UNITYSDK_OFFSET(0xD4B390)
#define FLATDATA_KATAKANACONVERTEXCEL_GET_JP_OFFSET UNITYSDK_OFFSET(0xD4B3D0)
#define FLATDATA_KATAKANACONVERTEXCEL_GETJPBYTES_OFFSET UNITYSDK_OFFSET(0xD4B440)
#define FLATDATA_KATAKANACONVERTEXCEL_CREATEKATAKANACONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0xD4B460)
#define FLATDATA_KATAKANACONVERTEXCEL_STARTKATAKANACONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0xD4B5A0)
#define FLATDATA_KATAKANACONVERTEXCEL_ADDKR_OFFSET UNITYSDK_OFFSET(0xD4B520)
#define FLATDATA_KATAKANACONVERTEXCEL_ADDJP_OFFSET UNITYSDK_OFFSET(0xD4B4F0)
#define FLATDATA_KATAKANACONVERTEXCEL_ENDKATAKANACONVERTEXCEL_OFFSET UNITYSDK_OFFSET(0xD4B550)

namespace FlatData
{
	inline static constexpr unsigned int KatakanaConvertExcel_TypeDefinitionIndex = 9297;

	class KatakanaConvertExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::KatakanaConvertExcel* GetRootAsKatakanaConvertExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::KatakanaConvertExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GETROOTASKATAKANACONVERTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::KatakanaConvertExcel* GetRootAsKatakanaConvertExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::KatakanaConvertExcel* arg2)
		{
			return ((::FlatData::KatakanaConvertExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::KatakanaConvertExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GETROOTASKATAKANACONVERTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::KatakanaConvertExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::KatakanaConvertExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_kr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GET_KR_OFFSET))(nullptr);
		}

		::System::String* get_Kr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GET_KR_OFFSET))(nullptr);
		}

		Il2CppObject* GetKrBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GETKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_jp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GET_JP_OFFSET))(nullptr);
		}

		::System::String* get_Jp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GET_JP_OFFSET))(nullptr);
		}

		Il2CppObject* GetJpBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_GETJPBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKatakanaConvertExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::StringOffset* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_CREATEKATAKANACONVERTEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartKatakanaConvertExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_STARTKATAKANACONVERTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_ADDKR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_ADDJP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndKatakanaConvertExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_KATAKANACONVERTEXCEL_ENDKATAKANACONVERTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

