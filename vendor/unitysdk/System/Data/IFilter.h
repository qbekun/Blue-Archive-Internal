#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_IFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data
{
	inline static constexpr unsigned int IFilter_TypeDefinitionIndex = 32262;

	class IFilter : public Il2CppObject
	{
	public:
		::System::Boolean Invoke(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IFILTER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

