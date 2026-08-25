#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTRIM_OFFSET UNITYSDK_OFFSET(0x10D1730)
#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOINTARRAY_OFFSET UNITYSDK_OFFSET(0x10D18A0)
#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x10D1A30)
#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOARRAYOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOADDITIONALUIPARAMETERS_OFFSET UNITYSDK_OFFSET(0x10D1BC0)
#define MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOADDITIONALUIPARAMETERS_OFFSET UNITYSDK_OFFSET(0x10D1EB0)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int EffectValueExtension_TypeDefinitionIndex = 12983;

	class EffectValueExtension : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SplitTrim(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTRIM_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SplitToIntArray(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOINTARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SplitToLongArray(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOLONGARRAY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SplitToArrayOf(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOARRAYOF_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* SplitToAdditionalUIParameters(::System::String* str, ::System::String* str2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOADDITIONALUIPARAMETERS_OFFSET))(str, str2, nullptr);
		}

		::Il2CppArray<::System::Object*>* SplitToAdditionalUIParameters(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_EFFECTVALUEEXTENSION_SPLITTOADDITIONALUIPARAMETERS_OFFSET))(str, nullptr);
		}

	};
}

