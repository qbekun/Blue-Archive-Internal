#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9159A30)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915B080)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x915B1C0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915AEC0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET UNITYSDK_OFFSET(0x915B210)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915B220)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915B2E0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x915B300)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x915B360)

namespace System::Text
{
	inline static constexpr unsigned int DecoderReplacementFallback_TypeDefinitionIndex = 24230;

	class DecoderReplacementFallback : public Il2CppObject
	{
	public:
		::System::String* _strDefault; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_DefaultString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET))(nullptr);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

