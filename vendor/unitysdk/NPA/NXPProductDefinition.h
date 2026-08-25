#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPProductPrice; }

#define NPA_NXPPRODUCTDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6710)

namespace NPA
{
	inline static constexpr unsigned int NXPProductDefinition_TypeDefinitionIndex = 25763;

	class NXPProductDefinition : public Il2CppObject
	{
	public:
		::System::String* ProductId; // 0x10
		::System::Boolean IsOnSale; // 0x18
		::System::String* LocalizedName; // 0x20
		::System::String* LocalizedDescription; // 0x28
		::System::String* LocalizedType; // 0x30
		::System::String* LocalizationLanguage; // 0x38
		::NPA::NXPProductPrice* Price; // 0x40
		::NPA::NXPProductPrice* BasePrice; // 0x48
		::NPA::NXPProductPrice* SpecialPrice; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPRODUCTDEFINITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

