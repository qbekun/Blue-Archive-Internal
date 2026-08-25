#pragma once
#include "../unitysdk.h"

namespace OggVorbis { class NativeErrorCode; }

#define OGGVORBIS_NATIVEERROREXCEPTION_GET_NATIVEERRORCODE_OFFSET UNITYSDK_OFFSET(0xA13EE0)
#define OGGVORBIS_NATIVEERROREXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA13EF0)
#define OGGVORBIS_NATIVEERROREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA13F50)
#define OGGVORBIS_NATIVEERROREXCEPTION_THROWEXCEPTIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0xA13FF0)

namespace OggVorbis
{
	inline static constexpr unsigned int NativeErrorException_TypeDefinitionIndex = 36574;

	class NativeErrorException : public Il2CppObject
	{
	public:
		::OggVorbis::NativeErrorCode* _NativeErrorCode_k__BackingField; // 0x90

		::OggVorbis::NativeErrorCode* get_NativeErrorCode()
		{
			return (return (::OggVorbis::NativeErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEERROREXCEPTION_GET_NATIVEERRORCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEERROREXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::OggVorbis::NativeErrorCode* arg)
		{
			((::System::Void(*)(::OggVorbis::NativeErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEERROREXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowExceptionIfNecessary(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_NATIVEERROREXCEPTION_THROWEXCEPTIONIFNECESSARY_OFFSET))(arg, nullptr);
		}

	};
}

