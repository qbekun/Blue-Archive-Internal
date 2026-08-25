#pragma once
#include "unitysdk.h"

#define DOBINFOS_.CTOR_OFFSET UNITYSDK_OFFSET(0xC87210)

	inline static constexpr unsigned int DOBInfos_TypeDefinitionIndex = 9078;

	class DOBInfos : public Il2CppObject
	{
	public:
		Il2CppObject* infos; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBINFOS_.CTOR_OFFSET))(nullptr);
		}

	};

