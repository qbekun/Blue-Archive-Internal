#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915CE70)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915E100)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x915E240)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x915DF40)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET UNITYSDK_OFFSET(0x915E290)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x915E2A0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x915E380)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x915E3A0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x915E400)

namespace System::Text
{
	inline static constexpr unsigned int EncoderReplacementFallback_TypeDefinitionIndex = 24241;

	class EncoderReplacementFallback : public Il2CppObject
	{
	public:
		::System::String* _strDefault; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_DefaultString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_DEFAULTSTRING_OFFSET))(nullptr);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return (return (::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCharCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

