#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AdditionalUISetEffectDAO; }

#define MX_LOGIC_DATA_ADDITIONALUISETEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12337D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AdditionalUISetEffectValue_TypeDefinitionIndex = 13846;

	class AdditionalUISetEffectValue : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x48
		::Il2CppArray<::System::Object*>* DataParameters; // 0x50
		::Il2CppArray<::System::Object*>* DecoParameters; // 0x58

		::System::Void .ctor(::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AdditionalUISetEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDITIONALUISETEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

