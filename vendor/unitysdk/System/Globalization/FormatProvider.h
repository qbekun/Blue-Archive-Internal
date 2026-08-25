#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9836440)
#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9833950)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_TypeDefinitionIndex = 37103;

	class FormatProvider : public Il2CppObject
	{
	public:
		::System::Void FormatBigInteger(::System::Text::ValueStringBuilder&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, ::System::Globalization::NumberFormatInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::ValueStringBuilder&*, ::System::Int32, ::System::Int32, ::System::Boolean, Il2CppObject*, ::System::Globalization::NumberFormatInfo*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_FORMATBIGINTEGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryStringToBigInteger(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Text::StringBuilder* arg, int32_t&* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::System::Text::StringBuilder*, int32_t&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_TRYSTRINGTOBIGINTEGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

