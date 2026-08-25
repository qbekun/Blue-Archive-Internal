#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET UNITYSDK_OFFSET(0x915FA90)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x915FB80)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x915FC70)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x915FD60)
#define SYSTEM_TEXT_ENCODINGPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x915FE60)

namespace System::Text
{
	inline static constexpr unsigned int EncodingProvider_TypeDefinitionIndex = 24244;

	class EncodingProvider : public Il2CppObject
	{
	public:
		::System::Object* s_InternalSyncObject; // 0x0
		::Il2CppArray<::System::Object*>* s_providers; // 0x8

		::System::Text::Encoding* GetEncoding(::System::String* str)
		{
			return (return (::System::Text::Encoding*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET))(str, nullptr);
		}

		::System::Text::Encoding* GetEncoding(::System::Int32 arg)
		{
			return (return (::System::Text::Encoding*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* GetEncoding(::System::Int32 arg, ::System::Text::EncoderFallback* arg, ::System::Text::DecoderFallback* arg)
		{
			return (return (::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Text::Encoding* GetEncodingFromProvider(::System::Int32 arg)
		{
			return (return (::System::Text::Encoding*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* GetEncodingFromProvider(::System::String* str)
		{
			return (return (::System::Text::Encoding*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(str, nullptr);
		}

		::System::Text::Encoding* GetEncodingFromProvider(::System::Int32 arg, ::System::Text::EncoderFallback* arg, ::System::Text::DecoderFallback* arg)
		{
			return (return (::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

