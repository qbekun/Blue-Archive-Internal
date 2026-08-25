#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }

#define CHARACTERCOLLECTIONUNITOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE6E80)

	inline static constexpr unsigned int CharacterCollectionUnitObject_TypeDefinitionIndex = 8095;

	class CharacterCollectionUnitObject : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCOLLECTIONUNITOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

