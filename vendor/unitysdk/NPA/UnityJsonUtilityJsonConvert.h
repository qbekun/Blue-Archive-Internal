#pragma once
#include "../unitysdk.h"

#define NPA_UNITYJSONUTILITYJSONCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9BBD340)
#define NPA_UNITYJSONUTILITYJSONCONVERT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_UNITYJSONUTILITYJSONCONVERT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD350)

namespace NPA
{
	inline static constexpr unsigned int UnityJsonUtilityJsonConvert_TypeDefinitionIndex = 25530;

	class UnityJsonUtilityJsonConvert : public Il2CppObject
	{
	public:
		::System::String* Serialize(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYJSONUTILITYJSONCONVERT_SERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYJSONUTILITYJSONCONVERT_DESERIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYJSONUTILITYJSONCONVERT_.CTOR_OFFSET))(nullptr);
		}

	};
}

