#pragma once
#include "unitysdk.h"

#define LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6CB90)
#define LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CBA0)
#define LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CBF0)
#define LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CC60)
#define LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CD00)
#define LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CD60)

	inline static constexpr unsigned int LayoutNotFoundException_TypeDefinitionIndex = 28862;

	class LayoutNotFoundException : public Il2CppObject
	{
	public:
		::System::String* _layout_k__BackingField; // 0x90

		::System::String* get_layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

