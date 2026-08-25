#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D18D0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D18F0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D19C0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D1A00)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D1A50)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x99D1B00)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int KeyHelper_TypeDefinitionIndex = 27867;

	class KeyHelper : public Il2CppObject
	{
	public:
		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddField(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

