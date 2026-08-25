#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchema; }

#define TYPESCHEMA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x94F18F0)
#define TYPESCHEMA_GET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x94F1900)
#define TYPESCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F1110)

	inline static constexpr unsigned int TypeSchema_TypeDefinitionIndex = 31983;

	class TypeSchema : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::Newtonsoft::Json::Schema::JsonSchema* _Schema_k__BackingField; // 0x18

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPESCHEMA_GET_TYPE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_Schema()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPESCHEMA_GET_SCHEMA_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + TYPESCHEMA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

