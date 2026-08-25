#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }

#define CREATORPROPERTYCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94DB4E0)

	inline static constexpr unsigned int CreatorPropertyContext_TypeDefinitionIndex = 31954;

	class CreatorPropertyContext : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::Newtonsoft::Json::Serialization::JsonProperty* Property; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty; // 0x20
		Il2CppObject* Presence; // 0x28
		::System::Object* Value; // 0x30
		::System::Boolean Used; // 0x38

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CREATORPROPERTYCONTEXT_.CTOR_OFFSET))(str, nullptr);
		}

	};

