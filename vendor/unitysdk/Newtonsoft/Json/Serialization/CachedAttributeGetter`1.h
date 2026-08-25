#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_CACHEDATTRIBUTEGETTER`1_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_CACHEDATTRIBUTEGETTER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int CachedAttributeGetter`1_TypeDefinitionIndex = 31905;

	class CachedAttributeGetter`1 : public Il2CppObject
	{
	public:
		Il2CppObject* TypeAttributeCache; // 0x0

		Il2CppObject* GetAttribute(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CACHEDATTRIBUTEGETTER`1_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_CACHEDATTRIBUTEGETTER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

