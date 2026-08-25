#pragma once
#include "unitysdk.h"

#define READFILEJSON_TOMAPS_OFFSET UNITYSDK_OFFSET(0x9E46840)

	inline static constexpr unsigned int ReadFileJson_TypeDefinitionIndex = 28397;

	class ReadFileJson : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* actions; // 0x10
		::Il2CppArray<::System::Object*>* maps; // 0x18

		::Il2CppArray<::System::Object*>* ToMaps()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + READFILEJSON_TOMAPS_OFFSET))(nullptr);
		}

	};

