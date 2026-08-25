#pragma once
#include "unitysdk.h"

#define SPECIFICOBJECTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x26280E0)

	inline static constexpr unsigned int SpecificObjectList_TypeDefinitionIndex = 6539;

	class SpecificObjectList : public Il2CppObject
	{
	public:
		Il2CppObject* objects; // 0x10
		Il2CppObject* animations; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPECIFICOBJECTLIST_.CTOR_OFFSET))(nullptr);
		}

	};

