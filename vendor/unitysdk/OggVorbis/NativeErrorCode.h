#pragma once
#include "../unitysdk.h"

namespace OggVorbis { class NativeErrorCode; }

namespace OggVorbis
{
	inline static constexpr unsigned int NativeErrorCode_TypeDefinitionIndex = 36573;

	class NativeErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::OggVorbis::NativeErrorCode* ERROR_INVALID_FILEPATH_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_CANNOT_OPEN_FILE_FOR_WRITE; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_CANNOT_OPEN_FILE_FOR_READ; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_READING_OGG_STREAM; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_SAMPLES_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_SAMPLESLENGTH_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_CHANNELS_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_FREQUENCY_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_BASE_QUALITY_PARAMETER; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_MALLOC_RETURNED_NULL; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_BYTES_MEMORY_ARRAY_NULL; // 0x0
		::OggVorbis::NativeErrorCode* ERROR_INVALID_WRITE_CALLBACK_PARAMETER; // 0x0

	};
}

