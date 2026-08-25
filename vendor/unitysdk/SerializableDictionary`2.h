#pragma once
#include "unitysdk.h"

#define SERIALIZABLEDICTIONARY`2_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SERIALIZABLEDICTIONARY`2_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SerializableDictionary`2_TypeDefinitionIndex = 3566;

	class SerializableDictionary`2 : public <>c__DisplayClass53_0
	{
	public:
		Il2CppObject* keyList; // 0x0
		Il2CppObject* valueList; // 0x0

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLEDICTIONARY`2_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLEDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZABLEDICTIONARY`2_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

	};

