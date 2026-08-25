#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_IREFLECTABLETYPE_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Reflection
{
	inline static constexpr unsigned int IReflectableType_TypeDefinitionIndex = 24858;

	class IReflectableType : public Il2CppObject
	{
	public:
		::System::Reflection::TypeInfo* GetTypeInfo()
		{
			return (return (::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_IREFLECTABLETYPE_GETTYPEINFO_OFFSET))(nullptr);
		}

	};
}

