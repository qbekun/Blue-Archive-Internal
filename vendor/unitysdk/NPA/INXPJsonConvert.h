#pragma once
#include "../unitysdk.h"

#define NPA_INXPJSONCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPJSONCONVERT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPJsonConvert_TypeDefinitionIndex = 25513;

	class INXPJsonConvert : public Il2CppObject
	{
	public:
		::System::String* Serialize(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPJSONCONVERT_SERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPJSONCONVERT_DESERIALIZE_OFFSET))(str, nullptr);
		}

	};
}

