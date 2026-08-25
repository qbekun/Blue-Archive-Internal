#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AdditionalUIActionEffectDAO; }

#define MX_LOGIC_DATA_ADDITIONALUIACTIONEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233750)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AdditionalUIActionEffectValue_TypeDefinitionIndex = 13845;

	class AdditionalUIActionEffectValue : public Il2CppObject
	{
	public:
		::System::String* UIPath; // 0x48
		::Il2CppArray<::System::Object*>* ActionParameters; // 0x50
		::Il2CppArray<::System::Object*>* DecoParameters; // 0x58

		::System::Void .ctor(::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AdditionalUIActionEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDITIONALUIACTIONEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

