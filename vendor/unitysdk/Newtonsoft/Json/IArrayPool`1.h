#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_IARRAYPOOL`1_RENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_IARRAYPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int IArrayPool`1_TypeDefinitionIndex = 31679;

	class IArrayPool`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Rent(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_IARRAYPOOL`1_RENT_OFFSET))(arg, nullptr);
		}

		::System::Void Return(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_IARRAYPOOL`1_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

