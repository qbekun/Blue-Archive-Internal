#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_MODEL_OFFERDATAOBJECTEXTENSION_TOJSONARRAY_OFFSET UNITYSDK_OFFSET(0x9D3C040)
#define NPA_EX_MODEL_OFFERDATAOBJECTEXTENSION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D3C370)

namespace NPA::Ex::Model
{
	inline static constexpr unsigned int OfferDataObjectExtension_TypeDefinitionIndex = 26108;

	class OfferDataObjectExtension : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* JsonBuilder; // 0x0

		::System::String* ToJsonArray(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MODEL_OFFERDATAOBJECTEXTENSION_TOJSONARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MODEL_OFFERDATAOBJECTEXTENSION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

