#pragma once
#include "../unitysdk.h"

#define OGGVORBIS_NATIVEBRIDGE_OPENREADFILESTREAM_OFFSET UNITYSDK_OFFSET(0xA13880)
#define OGGVORBIS_NATIVEBRIDGE_FREESAMPLESARRAYNATIVEMEMORY_OFFSET UNITYSDK_OFFSET(0xA13930)
#define OGGVORBIS_NATIVEBRIDGE_WRITEALLPCMDATATOFILE_OFFSET UNITYSDK_OFFSET(0xA139B0)
#define OGGVORBIS_NATIVEBRIDGE_READFROMFILESTREAM_OFFSET UNITYSDK_OFFSET(0xA13AB0)
#define OGGVORBIS_NATIVEBRIDGE_FREEMEMORYARRAYFORWRITEALLPCMDATA_OFFSET UNITYSDK_OFFSET(0xA13B50)
#define OGGVORBIS_NATIVEBRIDGE_READALLPCMDATAFROMMEMORY_OFFSET UNITYSDK_OFFSET(0xA13BD0)
#define OGGVORBIS_NATIVEBRIDGE_WRITEALLPCMDATATOMEMORY_OFFSET UNITYSDK_OFFSET(0xA13CA0)
#define OGGVORBIS_NATIVEBRIDGE_READALLPCMDATAFROMFILE_OFFSET UNITYSDK_OFFSET(0xA13D90)
#define OGGVORBIS_NATIVEBRIDGE_CLOSEFILESTREAM_OFFSET UNITYSDK_OFFSET(0xA13E60)

namespace OggVorbis
{
	inline static constexpr unsigned int NativeBridge_TypeDefinitionIndex = 36572;

	class NativeBridge : public Il2CppObject
	{
	public:
		::System::String* PLUGIN_NAME; // 0x0

		::System::Int32 OpenReadFileStream(::System::String* str, int16_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, int16_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_OPENREADFILESTREAM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 FreeSamplesArrayNativeMemory(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_FREESAMPLESARRAYNATIVEMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Int32 WriteAllPcmDataToFile(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int16 arg, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int16, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_WRITEALLPCMDATATOFILE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadFromFileStream(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_READFROMFILESTREAM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FreeMemoryArrayForWriteAllPcmData(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_FREEMEMORYARRAYFORWRITEALLPCMDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadAllPcmDataFromMemory(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg, int16_t&* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, int32_t&*, int16_t&*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_READALLPCMDATAFROMMEMORY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WriteAllPcmDataToMemory(int32_t&* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int16 arg, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int16, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_WRITEALLPCMDATATOMEMORY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadAllPcmDataFromFile(::System::String* str, int32_t&* arg, int32_t&* arg, int16_t&* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, int32_t&*, int32_t&*, int16_t&*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_READALLPCMDATAFROMFILE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CloseFileStream(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEBRIDGE_CLOSEFILESTREAM_OFFSET))(arg, nullptr);
		}

	};
}

