#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class UndefinedSchemaIdHandling; }

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int UndefinedSchemaIdHandling_TypeDefinitionIndex = 31996;

	class UndefinedSchemaIdHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* None; // 0x0
		::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* UseTypeName; // 0x0
		::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* UseAssemblyQualifiedName; // 0x0

	};
}

