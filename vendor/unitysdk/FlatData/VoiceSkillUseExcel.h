#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class VoiceSkillUseExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_VOICESKILLUSEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD62D70)
#define FLATDATA_VOICESKILLUSEEXCEL_GETROOTASVOICESKILLUSEEXCEL_OFFSET UNITYSDK_OFFSET(0xD62D80)
#define FLATDATA_VOICESKILLUSEEXCEL_GETROOTASVOICESKILLUSEEXCEL_OFFSET UNITYSDK_OFFSET(0xD62DE0)
#define FLATDATA_VOICESKILLUSEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD62E40)
#define FLATDATA_VOICESKILLUSEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD62A90)
#define FLATDATA_VOICESKILLUSEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD62E60)
#define FLATDATA_VOICESKILLUSEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD62EA0)
#define FLATDATA_VOICESKILLUSEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD62F10)
#define FLATDATA_VOICESKILLUSEEXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0xD62F30)
#define FLATDATA_VOICESKILLUSEEXCEL_GET_VOICEHASHLENGTH_OFFSET UNITYSDK_OFFSET(0xD62F90)
#define FLATDATA_VOICESKILLUSEEXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0xD62FD0)
#define FLATDATA_VOICESKILLUSEEXCEL_GETVOICEHASHBYTES_OFFSET UNITYSDK_OFFSET(0xD63060)
#define FLATDATA_VOICESKILLUSEEXCEL_CREATEVOICESKILLUSEEXCEL_OFFSET UNITYSDK_OFFSET(0xD63080)
#define FLATDATA_VOICESKILLUSEEXCEL_STARTVOICESKILLUSEEXCEL_OFFSET UNITYSDK_OFFSET(0xD631C0)
#define FLATDATA_VOICESKILLUSEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD63140)
#define FLATDATA_VOICESKILLUSEEXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0xD63110)
#define FLATDATA_VOICESKILLUSEEXCEL_CREATEVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0xD631E0)
#define FLATDATA_VOICESKILLUSEEXCEL_STARTVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0xD63270)
#define FLATDATA_VOICESKILLUSEEXCEL_ENDVOICESKILLUSEEXCEL_OFFSET UNITYSDK_OFFSET(0xD63170)

namespace FlatData
{
	inline static constexpr unsigned int VoiceSkillUseExcel_TypeDefinitionIndex = 9349;

	class VoiceSkillUseExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::VoiceSkillUseExcel* GetRootAsVoiceSkillUseExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::VoiceSkillUseExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GETROOTASVOICESKILLUSEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::VoiceSkillUseExcel* GetRootAsVoiceSkillUseExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::VoiceSkillUseExcel* arg2)
		{
			return ((::FlatData::VoiceSkillUseExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::VoiceSkillUseExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GETROOTASVOICESKILLUSEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::VoiceSkillUseExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::VoiceSkillUseExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 voiceHash(::System::Int32 arg)
		{
			return ((::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceHashLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GET_VOICEHASHLENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceHash(::System::Int32 arg)
		{
			return ((::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVoiceHashBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_GETVOICEHASHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceSkillUseExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::VectorOffset* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_CREATEVOICESKILLUSEEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartVoiceSkillUseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_STARTVOICESKILLUSEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_ADDVOICEHASH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_CREATEVOICEHASHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_STARTVOICEHASHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndVoiceSkillUseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_VOICESKILLUSEEXCEL_ENDVOICESKILLUSEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

