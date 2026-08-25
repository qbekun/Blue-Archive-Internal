#pragma once
#include "unitysdk.h"

class UCPersonalityType;

#define UCPLAYERDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8ABB0)

	inline static constexpr unsigned int UCPlayerDescription_TypeDefinitionIndex = 9695;

	class UCPlayerDescription : public Il2CppObject
	{
	public:
		UCPersonalityType* PersonalityType; // 0x10
		::System::Int64 CharacterID; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCPLAYERDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};

