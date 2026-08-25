#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class DefaultJsonNameTable; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }

#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B9960)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x94B9B10)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_GETNAMETABLE_OFFSET UNITYSDK_OFFSET(0x94B9ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94B9F20)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CamelCasePropertyNamesContractResolver_TypeDefinitionIndex = 31907;

	class CamelCasePropertyNamesContractResolver : public Il2CppObject
	{
	public:
		::System::Object* TypeContractCacheLock; // 0x0
		::Newtonsoft::Json::DefaultJsonNameTable* NameTable; // 0x8
		Il2CppObject* _contractCache; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DefaultJsonNameTable* GetNameTable()
		{
			return (return (::Newtonsoft::Json::DefaultJsonNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_GETNAMETABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CAMELCASEPROPERTYNAMESCONTRACTRESOLVER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

