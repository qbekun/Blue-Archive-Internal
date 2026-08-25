#pragma once
#include "unitysdk.h"

#define SERIALIZEDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SERIALIZEDICTIONARY`2_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SERIALIZEDICTIONARY`2_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SerializeDictionary`2_TypeDefinitionIndex = 4129;

	class SerializeDictionary`2 : public <>c__DisplayClass54_0
	{
	public:
		Il2CppObject* keys; // 0x0
		Il2CppObject* values; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDICTIONARY`2_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDICTIONARY`2_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

	};

