#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_MODEL_OFFERDATAOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9D3BBB0)
#define NPA_EX_MODEL_OFFERDATAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3C030)

namespace NPA::Ex::Model
{
	inline static constexpr unsigned int OfferDataObject_TypeDefinitionIndex = 26107;

	class OfferDataObject : public Il2CppObject
	{
	public:
		::System::String* product_id; // 0x10
		::System::String* product_name; // 0x18
		::System::String* currency; // 0x20
		::System::String* price; // 0x28
		::System::String* origin_price; // 0x30
		::System::String* origin_display_price; // 0x38

		::System::Void Serialize(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MODEL_OFFERDATAOBJECT_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MODEL_OFFERDATAOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

