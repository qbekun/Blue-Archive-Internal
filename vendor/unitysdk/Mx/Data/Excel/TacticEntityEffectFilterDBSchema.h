#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_GET_TARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C490)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_SET_TARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C4A0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C4B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticEntityEffectFilterDBSchema_TypeDefinitionIndex = 19573;

	class TacticEntityEffectFilterDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _TargetEffectName_k__BackingField; // 0x20

		::System::String* get_TargetEffectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_GET_TARGETEFFECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_TargetEffectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_SET_TARGETEFFECTNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTERDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

