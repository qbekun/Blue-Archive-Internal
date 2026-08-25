#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_DYNAMICUTILS_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x94A7590)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DynamicUtils_TypeDefinitionIndex = 31847;

	class DynamicUtils : public Il2CppObject
	{
	public:
		Il2CppObject* GetDynamicMemberNames(::System::Dynamic::IDynamicMetaObjectProvider* arg)
		{
			return (return (Il2CppObject*(*)(::System::Dynamic::IDynamicMetaObjectProvider*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DYNAMICUTILS_GETDYNAMICMEMBERNAMES_OFFSET))(arg, nullptr);
		}

	};
}

