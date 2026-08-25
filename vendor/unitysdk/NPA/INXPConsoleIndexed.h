#pragma once
#include "../unitysdk.h"

#define NPA_INXPCONSOLEINDEXED_GETUSERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEINDEXED_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPConsoleIndexed_TypeDefinitionIndex = 25595;

	class INXPConsoleIndexed : public Il2CppObject
	{
	public:
		::System::String* GetUserDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEINDEXED_GETUSERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEINDEXED_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

	};
}

