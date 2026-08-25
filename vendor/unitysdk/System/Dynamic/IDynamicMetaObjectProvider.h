#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_IDYNAMICMETAOBJECTPROVIDER_GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int IDynamicMetaObjectProvider_TypeDefinitionIndex = 33564;

	class IDynamicMetaObjectProvider : public Il2CppObject
	{
	public:
		::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_IDYNAMICMETAOBJECTPROVIDER_GETMETAOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

